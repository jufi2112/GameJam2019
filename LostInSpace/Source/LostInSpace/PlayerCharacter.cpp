// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "Engine/World.h"
#include "Camera/CameraComponent.h"
#include "InteractionInterface.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/PlayerController.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	if (GetWorld())
	{
		World = GetWorld();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Could not get World in %s"), *GetName())
	}
	//GetWorld()->DebugDrawTraceTag = FName("Interaction_Trace");

	if (!CameraComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("No camera component registered in %s"), *GetName())
	}

	PC = Cast<APlayerController>(GetController());
	if (!PC)
	{
		UE_LOG(LogTemp, Error, TEXT("Could not get player controller in %s"), *GetName())
	}
	if (!InteractionWidgetClass)
	{
		UE_LOG(LogTemp, Error, TEXT("No Interaction widget class defined in %s"), *GetName())
	}
	else
	{
		if (PC)
		{
			InteractWidget = CreateWidget<UUserWidget>(PC, InteractionWidgetClass);
		}
	}

}

void APlayerCharacter::Interact()
{
	if (InteractableActor)
	{
		IInteractionInterface::Execute_Interact(InteractableActor, this);
	}
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CameraComponent && World && InteractWidget)
	{
		// cast a ray to see if we can interact with objects
		FVector StartPoint = CameraComponent->GetComponentLocation();
		FVector EndPoint = StartPoint + CameraComponent->GetForwardVector() * InteractionRange;
		FHitResult HitResult;
		ECollisionChannel Channel = ECC_Visibility;
		FCollisionQueryParams CollisionQueryParams = FCollisionQueryParams::DefaultQueryParam;
		CollisionQueryParams.AddIgnoredActor(this);
		CollisionQueryParams.TraceTag = FName("Interaction_Trace");
		FCollisionResponseParams CollisionResponseParams;
		FCollisionShape CollisionShape = FCollisionShape::MakeSphere(15);

		//UE_LOG(LogTemp, Warning, TEXT("TraceStart: %s"), *StartPoint.ToString())

		bool bFoundInteractableActor = false;
		if (World->SweepSingleByChannel(HitResult, StartPoint, EndPoint, CameraComponent->GetComponentRotation().Quaternion(), Channel, CollisionShape, CollisionQueryParams, CollisionResponseParams))
		{
			// check if other actor does implement interaction interface
			AActor* OtherActor = HitResult.Actor.Get();
			bool OtherActorImplementsInterface = OtherActor->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass());
			if (OtherActorImplementsInterface)
			{
				bool bCanBeInteractedWith = IInteractionInterface::Execute_CanBeInteractedWith(OtherActor);
				if (bCanBeInteractedWith)
				{
					bFoundInteractableActor = true;
					InteractableActor = OtherActor;
					if (!InteractWidget->IsInViewport())
					{
						InteractWidget->AddToViewport();
					}
				}
			}
		}
		if (!bFoundInteractableActor)
		{
			InteractableActor = nullptr;
			if (InteractWidget->IsInViewport())
			{
				InteractWidget->RemoveFromViewport();
			}
		}

	}

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &APlayerCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &APlayerCharacter::LookUpAtRate);

	PlayerInputComponent->BindAction("Interact", EInputEvent::IE_Pressed, this, &APlayerCharacter::Interact);
}

void APlayerCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void APlayerCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void APlayerCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void APlayerCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void APlayerCharacter::SetCameraReference(UCameraComponent* CameraReference)
{
	if (!CameraReference)
	{
		UE_LOG(LogTemp, Warning, TEXT("Provided camera refernece is nullpointer in %s"), *GetName())
		return;
	}
	CameraComponent = CameraReference;
}


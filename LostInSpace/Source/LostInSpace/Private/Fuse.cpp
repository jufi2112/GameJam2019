// Fill out your copyright notice in the Description page of Project Settings.


#include "Fuse.h"

// Sets default values
AFuse::AFuse()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFuse::BeginPlay()
{
	Super::BeginPlay();

	if (!Light)
	{
		UE_LOG(LogTemp, Warning, TEXT("No light component specified in %s"), *GetName())
	}
	
}

// Called every frame
void AFuse::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFuse::SetIsActive(bool IsActive)
{
	bIsActive = IsActive;
}

bool AFuse::Interact_Implementation(UObject* Caller)
{
	return false;
}

void AFuse::SetLightReference(UPointLightComponent* LightReference)
{
	if (!LightReference)
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid Reference for Light specified in %s"), *GetName())
		return;
	}
	Light = LightReference;
}


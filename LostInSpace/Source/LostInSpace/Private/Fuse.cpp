// Fill out your copyright notice in the Description page of Project Settings.


#include "Fuse.h"
#include "Components/MeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"

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

	//if (!Light)
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("No light component specified in %s"), *GetName())
	//}
	if (!MeshComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("Mesh component not set in %s"), *GetName())
	}
	else
	{
		DynamicMaterial = MeshComponent->CreateDynamicMaterialInstance(0, FuseMaterial);
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
	if (DynamicMaterial)
	{
		if (bIsActive)
		{
			DynamicMaterial->SetVectorParameterValue(FName("EmissionColor"), FVector(0, 255, 0));
		}
		else
		{
			DynamicMaterial->SetVectorParameterValue(FName("EmissionColor"), FVector(0, 0, 255));
		}
	}
}

bool AFuse::Interact_Implementation(UObject* Caller)
{
	return false;
}

bool AFuse::CanBeInteractedWith_Implementation()
{
	return bCanBeInteractedWith;
}

void AFuse::SetMeshReference(UMeshComponent * MeshReference)
{
	if (!MeshReference)
	{
		UE_LOG(LogTemp, Error, TEXT("Provied Mesh Reference is nullptr in %s"), *GetName())
	}
	else
	{
		MeshComponent = MeshReference;
	}
}

void AFuse::SetTextureIndex(int32 IndexToUse, float Intensity)
{
	Intensity = FMath::Clamp<float>(Intensity, 0, 1);
	if (!FuseTextures.IsValidIndex(IndexToUse))
	{
		UE_LOG(LogTemp, Error, TEXT("Specified TextureIndex in %s is not in range!"), *GetName())
		return;
	}
	if (MeshComponent && DynamicMaterial)
	{
		DynamicMaterial->SetTextureParameterValue(FName("BaseTexture"), FuseTextures[IndexToUse]);
		DynamicMaterial->SetScalarParameterValue(FName("EmissionStrength"), Intensity);
	}
}

//void AFuse::SetLightReference(UPointLightComponent* LightReference)
//{
//	if (!LightReference)
//	{
//		UE_LOG(LogTemp, Error, TEXT("Invalid Reference for Light specified in %s"), *GetName())
//		return;
//	}
//	Light = LightReference;
//}


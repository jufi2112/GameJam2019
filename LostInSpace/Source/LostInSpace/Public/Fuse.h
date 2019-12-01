// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractionInterface.h"
#include "Fuse.generated.h"

class UPointLightComponent;
class UTexture2D;
class UMaterialInterface;
class UMaterialInstanceDynamic;
class UMeshComponent;

UCLASS()
class LOSTINSPACE_API AFuse : public AActor, public IInteractionInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFuse();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials")
	TArray<UTexture2D*> FuseTextures;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials")
	UMaterialInterface* FuseMaterial = nullptr;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "State")
	bool bIsActive = true;

	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Light")
	//UPointLightComponent* Light = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	bool bCanBeInteractedWith = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	UMaterialInstanceDynamic* DynamicMaterial = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh")
	UMeshComponent* MeshComponent = nullptr;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	FORCEINLINE bool GetIsActive() const { return bIsActive; }

	UFUNCTION(BlueprintCallable)
	void SetIsActive(bool IsActive);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interaction")
	bool Interact(UObject* Caller);
	virtual bool Interact_Implementation(UObject* Caller) override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interaction")
	bool CanBeInteractedWith();
	virtual bool CanBeInteractedWith_Implementation() override;

	UFUNCTION(BlueprintCallable, Category = "Setup")
	void SetMeshReference(UMeshComponent* MeshReference);

	UFUNCTION(BlueprintCallable, Category = "Setup")
	void SetTextureIndex(int32 IndexToUse, float Intensity);


	//UFUNCTION(BlueprintCallable)
	//FORCEINLINE UPointLightComponent* GetLight() const { return Light; }

	//UFUNCTION(BlueprintCallable, Category = "Setup")
	//void SetLightReference(UPointLightComponent* LightReference);

};

// Fill out your copyright notice in the Description page of Project Settings.


#include "FuseObserver.h"
#include "Fuse.h"

// Sets default values
AFuseObserver::AFuseObserver()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFuseObserver::BeginPlay()
{
	Super::BeginPlay();

	if (Fuses.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("No fuses given in %s"), *GetName())
	}
	else
	{
		for (auto* Fuse : Fuses)
		{
			Fuse->SetTextureIndex(0, 0.5f);
		}
	}
	
}

// Called every frame
void AFuseObserver::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


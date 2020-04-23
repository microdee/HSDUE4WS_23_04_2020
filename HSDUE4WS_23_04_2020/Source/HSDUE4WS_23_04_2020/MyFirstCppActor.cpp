// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFirstCppActor.h"

#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Engine/StaticMesh.h"

// Sets default values
AMyFirstCppActor::AMyFirstCppActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>("DefaultScene");
	SphereCollision = CreateDefaultSubobject<USphereComponent>("SphereCollision");
	SphereCollision->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	SphereCollision->SetSphereRadius(100.0);
	SphereCollision->SetCollisionProfileName("PhysicsActor");
	SphereCollision->SetSimulatePhysics(true);
}

void AMyFirstCppActor::ChangeRandomColor()
{
	if (!Cube) return;
	Cube->SetVectorParameterValueOnMaterials(
		"Color",
		FVector(
			FMath::FRand(),
			FMath::FRand(),
			FMath::FRand()
		)
	);
}

// Called when the game starts or when spawned
void AMyFirstCppActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyFirstCppActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyFirstCppActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	ChangeRandomColor();
}


// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyFirstCppActor.generated.h"

UCLASS()
class HSDUE4WS_23_04_2020_API AMyFirstCppActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyFirstCppActor();

	UPROPERTY(BlueprintReadWrite, Category="Components")
		class UStaticMeshComponent* Cube;

	UPROPERTY(BlueprintReadOnly, Category = "Components")
		class USphereComponent* SphereCollision;

	UFUNCTION(BlueprintCallable, CallInEditor)
		void ChangeRandomColor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void NotifyActorBeginOverlap(AActor* OtherActor) override;

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"	
#include "opencv2/imgproc.hpp"
#include "opencv2/videoio.hpp"
#include "MyTestOpenCV.generated.h"

UCLASS(Blueprintable, BlueprintType)
class VVVVV_RELOADED_API AMyTestOpenCV : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyTestOpenCV();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION(BlueprintCallable, Category = "MyTestOpenCV,SubMyTestOpenCV")
	void MyFunction();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	float health;
};

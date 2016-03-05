// Fill out your copyright notice in the Description page of Project Settings.

#include "VvVvV_Reloaded.h"
#include "MyTestOpenCV.h"

// Sets default values
AMyTestOpenCV::AMyTestOpenCV()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyTestOpenCV::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyTestOpenCV::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void AMyTestOpenCV::MyFunction()
{
	cv::Mat image1 = cv::imread("D:/test.jpg", CV_LOAD_IMAGE_GRAYSCALE);
}


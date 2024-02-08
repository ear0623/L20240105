// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"
#include "L20240104/L20240104.h"

// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	MakeMessage(this, __FUNCTION__, __LINE__, "BeforeBeingplay"); 
	Super::BeginPlay();
	MakeMessage(this, __FUNCTION__, __LINE__, "AfterBeingplay");
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void AMyPawn::PostInitializeComponents()
{
	MakeMessage(this, __FUNCTION__, __LINE__, "PostInitializeComponents");
	Super::PostInitializeComponents();
	MakeMessage(this, __FUNCTION__, __LINE__, "AfterPostInitializeComponents");
}

void AMyPawn::PostNetInit()
{
	MakeMessage(this, __FUNCTION__, __LINE__, "BeforePostNetInit");

	Super::PostNetInit();//시작전에 통신관련초기화 하는 곳

	MakeMessage(this, __FUNCTION__, __LINE__, "AfterPostNetInit");
}
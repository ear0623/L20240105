// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "L20240104/L20240104.h"
#include "Kismet/GameplayStatics.h"

void AMyPlayerController::BeginPlay()
{
	MakeMessage(this, __FUNCTION__, __LINE__, "BeforBeginPlay");
	Super::BeginPlay();
	MakeMessage(this, __FUNCTION__, __LINE__, "AfterBeginPlay");


}

void AMyPlayerController::PostInitializeComponents()
{
	MakeMessage(this, __FUNCTION__, __LINE__, "PostInitializeComponents");
	Super::PostInitializeComponents();
	MakeMessage(this, __FUNCTION__, __LINE__, "AfterPostInitializeComponents");
}

void AMyPlayerController::PostNetInit()
{
	MakeMessage(this, __FUNCTION__, __LINE__, "BeforePostNetInit");

	Super::PostNetInit();//�������� ��Ű����ʱ�ȭ �ϴ� ��

	MakeMessage(this, __FUNCTION__, __LINE__, "AfterPostNetInit");
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "MY_GM.h"
#include "MyplayerController.h"
#include "L20240104/L20240104.h"



AMY_GM::AMY_GM()
{
	PlayerControllerClass = AMyPlayerController::StaticClass();//cdo 바뀌면 귀여운 에러 발생할 수 있음
}

void AMY_GM::PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	MakeMessage(this, __FUNCTION__, __LINE__, "PrePreLogin");

	Super::PreLogin(Options, Address, UniqueId, ErrorMessage);

	MakeMessage(this, __FUNCTION__, __LINE__, "PreAfterLogin");

	//ErrorMessage = TEXT("ProccessPreLogin");
}

APlayerController* AMY_GM::Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal, const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	MakeMessage(this, __FUNCTION__, __LINE__, "Login");

	APlayerController* PC = Super::Login(NewPlayer, InRemoteRole, Portal, Options, UniqueId, ErrorMessage);

	MakeMessage(this, __FUNCTION__, __LINE__, "AfterLogin");

	return PC;
}

void AMY_GM::PostLogin(APlayerController* NewPlayer)
{
	MakeMessage(this, __FUNCTION__, __LINE__, "PostLogin");

	Super::PostLogin(NewPlayer);

	MakeMessage(this, __FUNCTION__, __LINE__, "AfterPostLogin");
}

void AMY_GM::StartPlay()
{
	MakeMessage(this, __FUNCTION__, __LINE__, "StartLogin");

	Super::StartPlay();

	MakeMessage(this, __FUNCTION__, __LINE__, "AfterStartLogin");
}

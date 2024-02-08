// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MY_GM.generated.h"

/**
 * 
 */
UCLASS()
class L20240104_API AMY_GM : public AGameModeBase
{
	GENERATED_BODY()
public:
	AMY_GM();

	virtual void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)override;
	virtual APlayerController* Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal, const FString& Options,
		const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)override;//server에 playercontroller 생성,
	virtual void PostLogin(APlayerController* NewPlayer)override;//로그인 했으니까 컨트롤러 셋팅해줄꺼야 .  아직까지 begin play는 안됨.

	virtual void StartPlay()override;//gamestate가 관리 복제되니까.

	void callParentStartPlay();
	//게임모드는 게임스테이트에 자료를 저장하고 게임모드를 통해 동기화해주는 역활
	
};

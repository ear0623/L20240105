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
		const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)override;//server�� playercontroller ����,
	virtual void PostLogin(APlayerController* NewPlayer)override;//�α��� �����ϱ� ��Ʈ�ѷ� �������ٲ��� .  �������� begin play�� �ȵ�.

	virtual void StartPlay()override;//gamestate�� ���� �����Ǵϱ�.

	void callParentStartPlay();
	//���Ӹ��� ���ӽ�����Ʈ�� �ڷḦ �����ϰ� ���Ӹ�带 ���� ����ȭ���ִ� ��Ȱ
	
};

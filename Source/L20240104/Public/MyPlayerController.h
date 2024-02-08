// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class L20240104_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	virtual void BeginPlay() override;

	virtual void PostInitializeComponents() override;
	void PostNetInit();
	// 셋팅 초기화영역/ 넷트워크는 준비됬고 실행전
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "LoginHUD.generated.h"

class UUI_LoginMain;
/**
 * 
 */
UCLASS()
class DEMOFIRST_API ALoginHUD : public AHUD
{
	GENERATED_BODY()

		UPROPERTY()
		TSubclassOf<UUI_LoginMain> LoginMainClass;
	
public:
	ALoginHUD();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
	UUI_LoginMain* LoginMain;
};

// Fill out your copyright notice in the Description page of Project Settings.


#include "LoginGameModeBase.h"
#include "LoginHUD.h"
#include "LoginPlayerController.h"
#include "LoginPawn.h"

ALoginGameModeBase::ALoginGameModeBase()
{
	HUDClass = ALoginHUD::StaticClass();
	DefaultPawnClass = ALoginPawn::StaticClass();
	PlayerControllerClass = ALoginPlayerController::StaticClass();
}

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DemoUI_Base.generated.h"

/**
 * 
 */
UCLASS()
class DEMOFIRST_API UUI_Base : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UWidgetAnimation* GetNameWidgetAnimation(const FString& InWidgetAnimName);
	
	template<class T>
	T* GetGameInstance()
	{
		if (GetWorld()->GetGameInstance<T>()!=nullptr)
		{
			printf("World");
		}
		return GetWorld() != nullptr ? GetWorld()->GetGameInstance<T>() : nullptr;
	}

	template<class T>
	T* GetGameControl()
	{
		return GetWorld() != nullptr ? GetWorld()->GetFirstPlayerController<T>() : nullptr;
	}

	template<class T>
	T* GetPlayerState()
	{
		return GetWorld() != nullptr ?
			(GetWorld()->GetFirstPlayerController() != nullptr ? GetWorld()->GetFirstPlayerController()->GetPlayerState<T>()
				: nullptr) : nullptr;
	}

	template<class T>
	T* GetPawn()
	{
		return GetWorld() != nullptr ?
			(GetWorld()->GetFirstPlayerController() != nullptr ? GetWorld()->GetFirstPlayerController()->GetPawn<T>()
				: nullptr) : nullptr;
	}


public:
	void PlayWidgetAnim(const FString& InWidgetAnimName);
	void SetParents(UWidget* InWidget) { ParentWidget = InWidget; }
	//访问父类
	template<class T>
	T* GetParents()
	{
		return Cast<T>(ParentWidget);
	}
protected:
	UPROPERTY()
		UWidget* ParentWidget;//方便Login访问父类
};

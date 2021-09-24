// Fill out your copyright notice in the Description page of Project Settings.


#include "DemoUI_Base.h"
#include "Blueprint/WidgetBlueprintGeneratedClass.h"

UWidgetAnimation* UUI_Base::GetNameWidgetAnimation(const FString& InWidgetAnimName)
{
	if (UWidgetBlueprintGeneratedClass* WidgetBPGeneratedClass  =Cast<UWidgetBlueprintGeneratedClass>(GetClass()) )
	{
		TArray<UWidgetAnimation*> TArrayAnimations = WidgetBPGeneratedClass->Animations;
		UWidgetAnimation** MyTempAnimations = TArrayAnimations.FindByPredicate(
			[&](const UWidgetAnimation* OurAnimation)
			{
				return OurAnimation->GetFName().ToString() == (InWidgetAnimName + FString("_INST"));
			});
		return *MyTempAnimations;
	}
	return NULL;
}

void UUI_Base::PlayWidgetAnim(const FString& InWidgetAnimName)
{
	if (UWidgetAnimation* TempAnimation = GetNameWidgetAnimation(InWidgetAnimName))
	{
		PlayAnimation(TempAnimation);
	}
}

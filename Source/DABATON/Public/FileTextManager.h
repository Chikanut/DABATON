// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileTextManager.generated.h"

/**
 * 
 */
UCLASS()
class DABATON_API UFileTextManager : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category="Custom",meta = (Keywords = "Save"))
	static bool SaveArrayText(FString FileName, TArray<FString> SaveText, bool AllowOverwrite);

	UFUNCTION(BlueprintCallable, Category="Custom",meta = (Keywords = "Load"))
    static bool LoadArrayText(FString FileName, FString& Text);
};

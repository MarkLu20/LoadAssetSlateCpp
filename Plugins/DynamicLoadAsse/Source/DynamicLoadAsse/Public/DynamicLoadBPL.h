// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SlateExtras.h"
#include <iostream>
#include <windows.h>  
#include <commdlg.h>  
#include "DynamicLoadBPL.generated.h"

/**
 *
 */

UCLASS()
class DYNAMICLOADASSE_API UDynamicLoadBPL : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "OpenFile")
		static void ShowOpenFileDialog();
	
	
	/*UFUNCTION(BlueprintCallable,BlueprintNativeEvent, Category = "OpenFile")
		static void GetFilePathString(FString path);*/
};



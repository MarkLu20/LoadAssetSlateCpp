// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include <iostream>
#include <windows.h>  
#include <commdlg.h>  
#include "Paths.h"
#include "OpenFileComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetFilePath, FString, filePath);
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class DYNAMICLOADASSE_API UOpenFileComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UOpenFileComponent();
	bool flag = true;
	//const char defalutPath="";

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintCallable, Category = "OpenFile")
		void OpenFileDilog();
	FString GetGamePath();
public:
	UPROPERTY(BlueprintAssignable, Category = "OpenFile")
		FGetFilePath getFilePath;



};

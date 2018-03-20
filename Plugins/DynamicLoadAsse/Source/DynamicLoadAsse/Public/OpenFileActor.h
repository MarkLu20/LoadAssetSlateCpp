// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "SlateExtras.h"
#include <iostream>
#include <windows.h>  
#include <commdlg.h>  
#include "GameFramework/Actor.h"
#include "OpenFileActor.generated.h"

UCLASS(Blueprintable)
class DYNAMICLOADASSE_API AOpenFileActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AOpenFileActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	UFUNCTION(BlueprintCallable, Category = "OpenFile")
		void ShowOpenFileDialog();
	//UFUNCTION(BlueprintImplementableEvent,BlueprintCallable, Category = "OpenFile")
	//	void GetFilePath(const FString path);



};

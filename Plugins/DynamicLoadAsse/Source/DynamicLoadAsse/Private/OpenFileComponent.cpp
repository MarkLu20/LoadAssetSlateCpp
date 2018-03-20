// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenFileComponent.h"


// Sets default values for this component's properties
UOpenFileComponent::UOpenFileComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenFileComponent::BeginPlay()
{
	Super::BeginPlay();
	
	//FString pathTemp;
	//pathTemp = GetGamePath();
	//defalutPath=CharCast<CHAR,FString>(GetGamePath());
	//TCHAR_TO_ANSI()
	// ...
	//defalutPath = TCHAR_TO_ANSI(pathTemp);
	
}


// Called every frame
void UOpenFileComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UOpenFileComponent::OpenFileDilog()
{
	if (flag)
	{
		OPENFILENAME ofn;      // �����Ի���ṹ��     
		TCHAR szFile[MAX_PATH]; // �����ȡ�ļ����ƵĻ�������               
								// ��ʼ��ѡ���ļ��Ի���     
		ZeroMemory(&ofn, sizeof(OPENFILENAME));
		ofn.lStructSize = sizeof(OPENFILENAME);
		ofn.hwndOwner = NULL;
		ofn.lpstrFile = szFile;
		ofn.lpstrFile[0] = '\0';
		//ofn.lpstrInitialDir = (LPCWSTR)(defalutPath);//Ĭ�ϵ��ļ�·��  
		ofn.nMaxFile = sizeof(szFile);
		//ofn.lpstrFilter = (LPCWSTR)"All(*.*)\0*.*\0Text(*.txt)\0*.TXT\0\0";
		ofn.nFilterIndex = 1;
		ofn.lpstrFileTitle = NULL;
		ofn.nMaxFileTitle = 0;
		ofn.lpstrInitialDir = NULL;
		ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;
		//ofn.lpTemplateName =  MAKEINTRESOURCE(ID_TEMP_DIALOG);    
		// ��ʾ��ѡ���ļ��Ի���
		flag = false;
		if (GetOpenFileName(&ofn))
		{    
			//UDynamicLoadBPL::GetFilePathString(szFile);
			/*this->GetFilePathString(szFile);*/
			getFilePath.Broadcast(szFile);
			flag = true;

		}
		flag = true;
		UE_LOG(LogTemp,Warning,TEXT("gsdagdasgas"));
	}

}

FString UOpenFileComponent::GetGamePath()
{
	FString path = FPaths::GameDir();
	return path;
}


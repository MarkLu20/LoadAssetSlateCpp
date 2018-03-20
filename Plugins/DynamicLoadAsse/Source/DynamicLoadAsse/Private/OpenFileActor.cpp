// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenFileActor.h"


// Sets default values
AOpenFileActor::AOpenFileActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOpenFileActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOpenFileActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AOpenFileActor::ShowOpenFileDialog()
{

	//void *ParentWindowPtr = FSlateApplication::Get().GetActiveTopLevelWindow()->GetNativeWindow()->GetOSWindowHandle();
	//FDesktopPlatformModule& DesktopPlatformModule = FModuleManager::Get().LoadModuleChecked<FDesktopPlatformModule>("DesktopPlatform");
	//FDesktopPlatformModule  &ddd=FModuleManager::Get().LoadModuleChecked<>
	//IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	OPENFILENAME ofn;      // 公共对话框结构。     
	TCHAR szFile[MAX_PATH]; // 保存获取文件名称的缓冲区。               
							// 初始化选择文件对话框。     
	ZeroMemory(&ofn, sizeof(OPENFILENAME));
	ofn.lStructSize = sizeof(OPENFILENAME);
	ofn.hwndOwner = NULL;
	ofn.lpstrFile = szFile;
	ofn.lpstrFile[0] = '\0';
	ofn.nMaxFile = sizeof(szFile);
	//ofn.lpstrFilter = (LPCWSTR)"All(*.*)\0*.*\0Text(*.txt)\0*.TXT\0\0";
	ofn.nFilterIndex = 1;
	ofn.lpstrFileTitle = NULL;
	ofn.nMaxFileTitle = 0;
	ofn.lpstrInitialDir = NULL;
	ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;
	//ofn.lpTemplateName =  MAKEINTRESOURCE(ID_TEMP_DIALOG);    
	// 显示打开选择文件对话框。
	if (GetOpenFileName(&ofn))
	{
		//UDynamicLoadBPL::GetFilePathString(szFile);
		/*this->GetFilePathString(szFile);*/

	}


	//system("pause");

}





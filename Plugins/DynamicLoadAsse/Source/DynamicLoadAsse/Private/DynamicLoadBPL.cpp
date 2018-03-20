// Fill out your copyright notice in the Description page of Project Settings.

#include "DynamicLoadBPL.h"

void UDynamicLoadBPL::ShowOpenFileDialog()
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
		//getFilePath.Broadcast(szFile);
		
	}
	
	
	//system("pause");
	

}

//void UDynamicLoadBPL::GetFilePathString_Implementation(FString path)
//{
//}



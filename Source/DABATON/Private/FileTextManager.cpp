// Fill out your copyright notice in the Description page of Project Settings.


#include "FileTextManager.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"

bool UFileTextManager::SaveArrayText(FString FileName, TArray<FString> SaveText, bool AllowOverwrite = true)
{
    if(!AllowOverwrite)
    {
        if(FPlatformFileManager::Get().GetPlatformFile().FileExists(*(FPaths::GameSourceDir()+"\\"+FileName+".txt")))
        {
            return false;
        }
    }

    FString FinalString = "";

    for(FString& Each : SaveText)
    {
        FinalString += Each + LINE_TERMINATOR;
    }

    return FFileHelper::SaveStringToFile(FinalString, *(FPaths::GameSourceDir()+"\\"+FileName+".txt"));
}

bool UFileTextManager::LoadArrayText(FString FileName, FString& Text)
{   
    return FFileHelper::LoadFileToString(Text,  *(FPaths::GameSourceDir()+"\\"+FileName+".txt"));
}

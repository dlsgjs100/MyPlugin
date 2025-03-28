// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyIDPluginBPLibrary.h"
#include "MyIDPlugin.h"

UMyIDPluginBPLibrary::UMyIDPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

FString UMyIDPluginBPLibrary::UserName = TEXT("");

void UMyIDPluginBPLibrary::SetUserName(const FString& NewName)
{
	UserName = NewName;
	UE_LOG(LogTemp, Warning, TEXT("UserName set to : %s"), *NewName);
}

FString UMyIDPluginBPLibrary::GetUserName()
{
	UE_LOG(LogTemp, Warning, TEXT("UserName is : %s"), *UserName);
	return UserName;
}
//float UMyIDPluginBPLibrary::MyIDPluginSampleFunction(float Param)
//{
//	return -1;
//}


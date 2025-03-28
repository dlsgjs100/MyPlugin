// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyIDPluginSubsystem.h"

void UMyIDPluginSubsystem::SetUserScore(const int32& NewScore)
{
	UserScore = NewScore;
}

int32 UMyIDPluginSubsystem::GetUserScore() const
{
	return UserScore;
}
// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MyIDPluginSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class MYIDPLUGIN_API UMyIDPluginSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
    // ����� ���� ���� �Լ�
    // User score setting functions
    UFUNCTION(BlueprintCallable, meta = (Keywords = "MyIDPlugin sample test dlsgjs"), Category = "UMyIDPluginSubsystem")
    void SetUserScore(const int32& NewScore);

    // ����� ���� �������� �Լ�
    UFUNCTION(BlueprintCallable, meta = (Keywords = "MyIDPlugin sample test dlsgjs"), Category = "UMyIDPluginSubsystem")
    int32 GetUserScore() const;
	
private:
    int32 UserScore;  // ����� �̸� ����
};

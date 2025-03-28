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
    // 사용자 점수 설정 함수
    // User score setting functions
    UFUNCTION(BlueprintCallable, meta = (Keywords = "MyIDPlugin sample test dlsgjs"), Category = "UMyIDPluginSubsystem")
    void SetUserScore(const int32& NewScore);

    // 사용자 점수 가져오기 함수
    UFUNCTION(BlueprintCallable, meta = (Keywords = "MyIDPlugin sample test dlsgjs"), Category = "UMyIDPluginSubsystem")
    int32 GetUserScore() const;
	
private:
    int32 UserScore;  // 사용자 이름 저장
};

**MyIDPlugin**

**개요**

MyIDPlugin은 언리얼 엔진에서 사용자 ID 및 점수를 관리하는 기능을 제공하는 플러그인입니다.
Blueprint에서 쉽게 접근할 수 있도록 BlueprintFunctionLibrary 및 GameInstanceSubsystem을 활용하여 구현되었습니다.

**기능**

1. UMyIDPluginBPLibrary (Blueprint Function Library)

SetUserName(const FString& NewName): 사용자 이름을 설정합니다.

GetUserName(): 설정된 사용자 이름을 반환합니다.

2. UMyIDPluginSubsystem (Game Instance Subsystem)

GameInstanceSubsystem을 활용해서 다른 레벨(맵)에서도 사용할 수 있도록 하였습니다. 

SetUserScore(const int32& NewScore): 사용자 점수를 설정합니다.

GetUserScore() const: 설정된 사용자 점수를 반환합니다.

**설치 및 사용 방법**

Plugins 폴더에 MyIDPlugin을 추가합니다.

언리얼 엔진에서 플러그인을 활성화합니다.

Blueprint에서 "MyIDPlugin" 카테고리에서 제공하는 노드를 사용하여 사용자 정보를 관리합니다.

#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BattleTaskBase.BP_BattleTaskBase_C
// 0x0082 (0x03AA - 0x0328)
class ABP_BattleTaskBase_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnBattleEnd;                                              // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FName                                       BattleId;                                                 // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LoadLevel;                                                // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       WinEventID;                                               // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LoseEventID;                                              // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_BattleMediatorBase_C*                    MediatorBase;                                             // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               FadeBetweenModes;                                         // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	struct FLinearColor                                FadeColor;                                                // 0x036C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              FadeTime;                                                 // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnBattleLoaded;                                           // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               LockStart;                                                // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBattleResultDecided;                                    // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               LockEnd;                                                  // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPersistLevelList;                                        // 0x03A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleTaskBase.BP_BattleTaskBase_C");
		return ptr;
	}


	class UObject* GetAssetReferenceHolder();
	void StartBattle();
	void EndBattle(TEnumAsByte<EBattleWinLoseResult> Result, bool* newParam);
	void UserConstructionScript();
	void OnBattleResultDecided__DelegateSignature(TEnumAsByte<EBattleWinLoseResult> Result);
	void OnBattleLoaded__DelegateSignature();
	void OnBattleEnd__DelegateSignature(TEnumAsByte<EBattleWinLoseResult> Result);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

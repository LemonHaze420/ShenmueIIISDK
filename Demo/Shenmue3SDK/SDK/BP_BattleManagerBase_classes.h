#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BattleManagerBase.BP_BattleManagerBase_C
// 0x0030 (0x0358 - 0x0328)
class ABP_BattleManagerBase_C : public ABTL_BattleManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnBattleEnd;                                              // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBattleClose;                                            // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UBattleAdviceData_C*                         PlayerEventData;                                          // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleManagerBase.BP_BattleManagerBase_C");
		return ptr;
	}


	void EnableHUD(bool Visible);
	bool IsResultDecided();
	void TryPlayerQuit(bool* dummy);
	void StartBattle();
	void ExecuteDebugCommand(const struct FString& Argument);
	void StartEndingBattle(TEnumAsByte<EBattleWinLoseResult> Result, bool* dummy);
	void CloseBattle(bool* dummy);
	void LaunchBattle(class UBTL_LaunchParameters_C* LaunchParams, bool* dummy);
	void UserConstructionScript();
	void OnBattleClose__DelegateSignature();
	void OnBattleEnd__DelegateSignature(TEnumAsByte<EBattleWinLoseResult> Result);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

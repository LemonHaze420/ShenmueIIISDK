#pragma once

// Name: Shenmue3, Version: 1.0.2

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


	void STATIC_EnableHUD(bool Visible);
	bool STATIC_IsResultDecided();
	void STATIC_TryPlayerQuit(bool* dummy);
	void STATIC_StartBattle();
	void STATIC_ExecuteDebugCommand(const struct FString& Argument);
	void STATIC_StartEndingBattle(TEnumAsByte<EBattleWinLoseResult> Result, bool* dummy);
	void STATIC_CloseBattle(bool* dummy);
	void STATIC_LaunchBattle(class UBTL_LaunchParameters_C* LaunchParams, bool* dummy);
	void UserConstructionScript();
	void OnBattleClose__DelegateSignature();
	void OnBattleEnd__DelegateSignature(TEnumAsByte<EBattleWinLoseResult> Result);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

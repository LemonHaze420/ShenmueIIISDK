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

// BlueprintGeneratedClass BP_CCBattleEvents.BP_CCBattleEvents_C
// 0x0040 (0x0068 - 0x0028)
class UBP_CCBattleEvents_C : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnRoundStart;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSetStart;                                               // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGameEnd;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRoundEnd;                                               // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CCBattleEvents.BP_CCBattleEvents_C");
		return ptr;
	}


	void OnRoundEnd__DelegateSignature(TEnumAsByte<EBattleWinLoseResult> Result);
	void OnGameEnd__DelegateSignature(TEnumAsByte<EBattleWinLoseResult> Result);
	void OnSetStart__DelegateSignature();
	void OnRoundStart__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

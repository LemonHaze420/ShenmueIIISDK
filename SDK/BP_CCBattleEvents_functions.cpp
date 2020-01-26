
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_CCBattleEvents.BP_CCBattleEvents_C.OnRoundEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBattleWinLoseResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CCBattleEvents_C::OnRoundEnd__DelegateSignature(TEnumAsByte<EBattleWinLoseResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CCBattleEvents.BP_CCBattleEvents_C.OnRoundEnd__DelegateSignature");

	UBP_CCBattleEvents_C_OnRoundEnd__DelegateSignature_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CCBattleEvents.BP_CCBattleEvents_C.OnGameEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBattleWinLoseResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CCBattleEvents_C::OnGameEnd__DelegateSignature(TEnumAsByte<EBattleWinLoseResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CCBattleEvents.BP_CCBattleEvents_C.OnGameEnd__DelegateSignature");

	UBP_CCBattleEvents_C_OnGameEnd__DelegateSignature_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CCBattleEvents.BP_CCBattleEvents_C.OnSetStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_CCBattleEvents_C::OnSetStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CCBattleEvents.BP_CCBattleEvents_C.OnSetStart__DelegateSignature");

	UBP_CCBattleEvents_C_OnSetStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CCBattleEvents.BP_CCBattleEvents_C.OnRoundStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_CCBattleEvents_C::OnRoundStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CCBattleEvents.BP_CCBattleEvents_C.OnRoundStart__DelegateSignature");

	UBP_CCBattleEvents_C_OnRoundStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function BP_BattleTaskBase.BP_BattleTaskBase_C.GetAssetReferenceHolder
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* ABP_BattleTaskBase_C::GetAssetReferenceHolder()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTaskBase.BP_BattleTaskBase_C.GetAssetReferenceHolder");

	ABP_BattleTaskBase_C_GetAssetReferenceHolder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BattleTaskBase.BP_BattleTaskBase_C.StartBattle
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleTaskBase_C::StartBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTaskBase.BP_BattleTaskBase_C.StartBattle");

	ABP_BattleTaskBase_C_StartBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleTaskBase.BP_BattleTaskBase_C.EndBattle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBattleWinLoseResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleTaskBase_C::EndBattle(TEnumAsByte<EBattleWinLoseResult> Result, bool* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTaskBase.BP_BattleTaskBase_C.EndBattle");

	ABP_BattleTaskBase_C_EndBattle_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function BP_BattleTaskBase.BP_BattleTaskBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleTaskBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTaskBase.BP_BattleTaskBase_C.UserConstructionScript");

	ABP_BattleTaskBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleTaskBase.BP_BattleTaskBase_C.OnBattleResultDecided__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBattleWinLoseResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleTaskBase_C::OnBattleResultDecided__DelegateSignature(TEnumAsByte<EBattleWinLoseResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTaskBase.BP_BattleTaskBase_C.OnBattleResultDecided__DelegateSignature");

	ABP_BattleTaskBase_C_OnBattleResultDecided__DelegateSignature_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleTaskBase.BP_BattleTaskBase_C.OnBattleLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_BattleTaskBase_C::OnBattleLoaded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTaskBase.BP_BattleTaskBase_C.OnBattleLoaded__DelegateSignature");

	ABP_BattleTaskBase_C_OnBattleLoaded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleTaskBase.BP_BattleTaskBase_C.OnBattleEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBattleWinLoseResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleTaskBase_C::OnBattleEnd__DelegateSignature(TEnumAsByte<EBattleWinLoseResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleTaskBase.BP_BattleTaskBase_C.OnBattleEnd__DelegateSignature");

	ABP_BattleTaskBase_C_OnBattleEnd__DelegateSignature_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

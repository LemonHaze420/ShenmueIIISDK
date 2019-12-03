
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_TalkProcess_Battle.BP_TalkProcess_Battle_C.EnableGameTime
// (Static, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_Battle_C::STATIC_EnableGameTime(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Battle.BP_TalkProcess_Battle_C.EnableGameTime");

	UBP_TalkProcess_Battle_C_EnableGameTime_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Battle.BP_TalkProcess_Battle_C.ResettingLookAtTargetActors
// (NetReliable, Exec, Event, NetMulticast, Delegate, NetServer, NetClient, Const)

void UBP_TalkProcess_Battle_C::ResettingLookAtTargetActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Battle.BP_TalkProcess_Battle_C.ResettingLookAtTargetActors");

	UBP_TalkProcess_Battle_C_ResettingLookAtTargetActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Battle.BP_TalkProcess_Battle_C.CachedLookAtTargetActors
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBP_TalkProcess_Battle_C::CachedLookAtTargetActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Battle.BP_TalkProcess_Battle_C.CachedLookAtTargetActors");

	UBP_TalkProcess_Battle_C_CachedLookAtTargetActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Battle.BP_TalkProcess_Battle_C.OnLoaded_F2C0EA96403370D7C0981B823EF8717B
// (Net, NetRequest, Exec, NetResponse, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_Battle_C::OnLoaded_F2C0EA96403370D7C0981B823EF8717B(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Battle.BP_TalkProcess_Battle_C.OnLoaded_F2C0EA96403370D7C0981B823EF8717B");

	UBP_TalkProcess_Battle_C_OnLoaded_F2C0EA96403370D7C0981B823EF8717B_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Battle.BP_TalkProcess_Battle_C.Activate
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBP_TalkProcess_Battle_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Battle.BP_TalkProcess_Battle_C.Activate");

	UBP_TalkProcess_Battle_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Battle.BP_TalkProcess_Battle_C.OnEndBattle
// (Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// TEnumAsByte<EBattleWinLoseResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_Battle_C::STATIC_OnEndBattle(TEnumAsByte<EBattleWinLoseResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Battle.BP_TalkProcess_Battle_C.OnEndBattle");

	UBP_TalkProcess_Battle_C_OnEndBattle_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Battle.BP_TalkProcess_Battle_C.ExecuteUbergraph_BP_TalkProcess_Battle
// (Net, NetReliable, Event, Static, NetMulticast, Delegate, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_Battle_C::STATIC_ExecuteUbergraph_BP_TalkProcess_Battle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Battle.BP_TalkProcess_Battle_C.ExecuteUbergraph_BP_TalkProcess_Battle");

	UBP_TalkProcess_Battle_C_ExecuteUbergraph_BP_TalkProcess_Battle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

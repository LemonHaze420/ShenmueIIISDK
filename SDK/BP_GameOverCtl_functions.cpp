
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

// Function BP_GameOverCtl.BP_GameOverCtl_C.CheckLimitDay
// (NetRequest, Exec, Event, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GameOverCtl_C::CheckLimitDay(struct FName* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameOverCtl.BP_GameOverCtl_C.CheckLimitDay");

	ABP_GameOverCtl_C_CheckLimitDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_GameOverCtl.BP_GameOverCtl_C.InitSet
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Make_Actor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GameOverCtl_C::STATIC_InitSet(bool* Make_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameOverCtl.BP_GameOverCtl_C.InitSet");

	ABP_GameOverCtl_C_InitSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Make_Actor != nullptr)
		*Make_Actor = params.Make_Actor;
}


// Function BP_GameOverCtl.BP_GameOverCtl_C.UserConstructionScript
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Public, Protected, Delegate, NetClient, BlueprintCallable)

void ABP_GameOverCtl_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameOverCtl.BP_GameOverCtl_C.UserConstructionScript");

	ABP_GameOverCtl_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameOverCtl.BP_GameOverCtl_C.ReceiveTick
// (Net, NetRequest, Native, Static, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameOverCtl_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameOverCtl.BP_GameOverCtl_C.ReceiveTick");

	ABP_GameOverCtl_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameOverCtl.BP_GameOverCtl_C.OnCutsceneEnd_M06_S9001
// (Native, Static, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_GameOverCtl_C::STATIC_OnCutsceneEnd_M06_S9001()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameOverCtl.BP_GameOverCtl_C.OnCutsceneEnd_M06_S9001");

	ABP_GameOverCtl_C_OnCutsceneEnd_M06_S9001_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameOverCtl.BP_GameOverCtl_C.OnStartCutscenePlayer_M06_S9001
// (Net, NetReliable, NetRequest, Exec, Static, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_GameOverCtl_C::STATIC_OnStartCutscenePlayer_M06_S9001()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameOverCtl.BP_GameOverCtl_C.OnStartCutscenePlayer_M06_S9001");

	ABP_GameOverCtl_C_OnStartCutscenePlayer_M06_S9001_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameOverCtl.BP_GameOverCtl_C.OnCutsceneEnd_M06_S9002
// (Net, NetReliable, NetRequest, Exec, Static, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_GameOverCtl_C::STATIC_OnCutsceneEnd_M06_S9002()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameOverCtl.BP_GameOverCtl_C.OnCutsceneEnd_M06_S9002");

	ABP_GameOverCtl_C_OnCutsceneEnd_M06_S9002_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameOverCtl.BP_GameOverCtl_C.OnStartCutscenePlayer_M06_S9002
// (NetReliable, NetRequest, Exec, Static, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_GameOverCtl_C::STATIC_OnStartCutscenePlayer_M06_S9002()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameOverCtl.BP_GameOverCtl_C.OnStartCutscenePlayer_M06_S9002");

	ABP_GameOverCtl_C_OnStartCutscenePlayer_M06_S9002_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameOverCtl.BP_GameOverCtl_C.ExecuteUbergraph_BP_GameOverCtl
// (Net, Static, MulticastDelegate, Private, Delegate, NetServer, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameOverCtl_C::STATIC_ExecuteUbergraph_BP_GameOverCtl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameOverCtl.BP_GameOverCtl_C.ExecuteUbergraph_BP_GameOverCtl");

	ABP_GameOverCtl_C_ExecuteUbergraph_BP_GameOverCtl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

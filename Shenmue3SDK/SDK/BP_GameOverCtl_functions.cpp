
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_GameOverCtl.BP_GameOverCtl_C.CheckLimitDay
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Make_Actor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GameOverCtl_C::InitSet(bool* Make_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameOverCtl.BP_GameOverCtl_C.InitSet");

	ABP_GameOverCtl_C_InitSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Make_Actor != nullptr)
		*Make_Actor = params.Make_Actor;
}


// Function BP_GameOverCtl.BP_GameOverCtl_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GameOverCtl_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameOverCtl.BP_GameOverCtl_C.UserConstructionScript");

	ABP_GameOverCtl_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameOverCtl.BP_GameOverCtl_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameOverCtl_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameOverCtl.BP_GameOverCtl_C.ReceiveTick");

	ABP_GameOverCtl_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameOverCtl.BP_GameOverCtl_C.OnCutsceneEnd_M06_S9001
// (BlueprintCallable, BlueprintEvent)

void ABP_GameOverCtl_C::OnCutsceneEnd_M06_S9001()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameOverCtl.BP_GameOverCtl_C.OnCutsceneEnd_M06_S9001");

	ABP_GameOverCtl_C_OnCutsceneEnd_M06_S9001_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameOverCtl.BP_GameOverCtl_C.OnStartCutscenePlayer_M06_S9001
// (BlueprintCallable, BlueprintEvent)

void ABP_GameOverCtl_C::OnStartCutscenePlayer_M06_S9001()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameOverCtl.BP_GameOverCtl_C.OnStartCutscenePlayer_M06_S9001");

	ABP_GameOverCtl_C_OnStartCutscenePlayer_M06_S9001_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameOverCtl.BP_GameOverCtl_C.OnCutsceneEnd_M06_S9002
// (BlueprintCallable, BlueprintEvent)

void ABP_GameOverCtl_C::OnCutsceneEnd_M06_S9002()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameOverCtl.BP_GameOverCtl_C.OnCutsceneEnd_M06_S9002");

	ABP_GameOverCtl_C_OnCutsceneEnd_M06_S9002_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameOverCtl.BP_GameOverCtl_C.OnStartCutscenePlayer_M06_S9002
// (BlueprintCallable, BlueprintEvent)

void ABP_GameOverCtl_C::OnStartCutscenePlayer_M06_S9002()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameOverCtl.BP_GameOverCtl_C.OnStartCutscenePlayer_M06_S9002");

	ABP_GameOverCtl_C_OnStartCutscenePlayer_M06_S9002_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameOverCtl.BP_GameOverCtl_C.ExecuteUbergraph_BP_GameOverCtl
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameOverCtl_C::ExecuteUbergraph_BP_GameOverCtl(int EntryPoint)
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

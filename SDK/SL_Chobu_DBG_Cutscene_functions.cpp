
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

// Function SL_Chobu_DBG_Cutscene.SL_Chobu_DBG_Cutscene_C.DebugOnStartCutscenePlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Chobu_DBG_Cutscene_C::DebugOnStartCutscenePlayer(const struct FName& CutsceneId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Chobu_DBG_Cutscene.SL_Chobu_DBG_Cutscene_C.DebugOnStartCutscenePlayer");

	ASL_Chobu_DBG_Cutscene_C_DebugOnStartCutscenePlayer_Params params;
	params.CutsceneId = CutsceneId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Chobu_DBG_Cutscene.SL_Chobu_DBG_Cutscene_C.DebugOnCutsceneEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Chobu_DBG_Cutscene_C::DebugOnCutsceneEnd(const struct FName& CutsceneId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Chobu_DBG_Cutscene.SL_Chobu_DBG_Cutscene_C.DebugOnCutsceneEnd");

	ASL_Chobu_DBG_Cutscene_C_DebugOnCutsceneEnd_Params params;
	params.CutsceneId = CutsceneId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Chobu_DBG_Cutscene.SL_Chobu_DBG_Cutscene_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASL_Chobu_DBG_Cutscene_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Chobu_DBG_Cutscene.SL_Chobu_DBG_Cutscene_C.ReceiveBeginPlay");

	ASL_Chobu_DBG_Cutscene_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Chobu_DBG_Cutscene.SL_Chobu_DBG_Cutscene_C.InitDebugCutscene
// (BlueprintCallable, BlueprintEvent)

void ASL_Chobu_DBG_Cutscene_C::InitDebugCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Chobu_DBG_Cutscene.SL_Chobu_DBG_Cutscene_C.InitDebugCutscene");

	ASL_Chobu_DBG_Cutscene_C_InitDebugCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Chobu_DBG_Cutscene.SL_Chobu_DBG_Cutscene_C.ExecuteUbergraph_SL_Chobu_DBG_Cutscene
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Chobu_DBG_Cutscene_C::ExecuteUbergraph_SL_Chobu_DBG_Cutscene(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Chobu_DBG_Cutscene.SL_Chobu_DBG_Cutscene_C.ExecuteUbergraph_SL_Chobu_DBG_Cutscene");

	ASL_Chobu_DBG_Cutscene_C_ExecuteUbergraph_SL_Chobu_DBG_Cutscene_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function BP_SkillDisplayScene_Battle_MatchPlayer.BP_SkillDisplayScene_Battle_MatchPlayer_C.UserConstructionScript
// (NetReliable, Exec, Native, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_SkillDisplayScene_Battle_MatchPlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Battle_MatchPlayer.BP_SkillDisplayScene_Battle_MatchPlayer_C.UserConstructionScript");

	ABP_SkillDisplayScene_Battle_MatchPlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillDisplayScene_Battle_MatchPlayer.BP_SkillDisplayScene_Battle_MatchPlayer_C.OnLoaded_9E4864764EFCA0265AE1019EAE208EFC
// (Net, NetReliable, Event, NetResponse, Private, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkillDisplayScene_Battle_MatchPlayer_C::OnLoaded_9E4864764EFCA0265AE1019EAE208EFC(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Battle_MatchPlayer.BP_SkillDisplayScene_Battle_MatchPlayer_C.OnLoaded_9E4864764EFCA0265AE1019EAE208EFC");

	ABP_SkillDisplayScene_Battle_MatchPlayer_C_OnLoaded_9E4864764EFCA0265AE1019EAE208EFC_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillDisplayScene_Battle_MatchPlayer.BP_SkillDisplayScene_Battle_MatchPlayer_C.ReceiveBeginPlay
// (NetReliable, Static, NetMulticast, Public, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)

void ABP_SkillDisplayScene_Battle_MatchPlayer_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Battle_MatchPlayer.BP_SkillDisplayScene_Battle_MatchPlayer_C.ReceiveBeginPlay");

	ABP_SkillDisplayScene_Battle_MatchPlayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkillDisplayScene_Battle_MatchPlayer.BP_SkillDisplayScene_Battle_MatchPlayer_C.ExecuteUbergraph_BP_SkillDisplayScene_Battle_MatchPlayer
// (NetReliable, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkillDisplayScene_Battle_MatchPlayer_C::STATIC_ExecuteUbergraph_BP_SkillDisplayScene_Battle_MatchPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Battle_MatchPlayer.BP_SkillDisplayScene_Battle_MatchPlayer_C.ExecuteUbergraph_BP_SkillDisplayScene_Battle_MatchPlayer");

	ABP_SkillDisplayScene_Battle_MatchPlayer_C_ExecuteUbergraph_BP_SkillDisplayScene_Battle_MatchPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

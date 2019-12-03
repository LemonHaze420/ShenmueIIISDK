
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

// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.GetVoiceDuration
// (Net, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_Talk_C::GetVoiceDuration(bool* Result, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.GetVoiceDuration");

	ABP_SubtitlePlayer_Talk_C_GetVoiceDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.Play_HintTalk
// (Net, NetReliable, NetRequest, NetResponse, MulticastDelegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           IsAutoStop                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_Talk_C::Play_HintTalk(bool IsAutoStop, struct FName* Label, struct FName* CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.Play_HintTalk");

	ABP_SubtitlePlayer_Talk_C_Play_HintTalk_Params params;
	params.IsAutoStop = IsAutoStop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
	if (CharaName != nullptr)
		*CharaName = params.CharaName;
}


// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.UserConstructionScript
// (NetRequest, Native, Event, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_SubtitlePlayer_Talk_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.UserConstructionScript");

	ABP_SubtitlePlayer_Talk_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.PlayVoice
// (Net, Native, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 VoiceData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_Talk_C::STATIC_PlayVoice(class UObject* VoiceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.PlayVoice");

	ABP_SubtitlePlayer_Talk_C_PlayVoice_Params params;
	params.VoiceData = VoiceData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.OnPlaySound
// (NetReliable, NetResponse, Static, NetMulticast, NetServer)

void ABP_SubtitlePlayer_Talk_C::STATIC_OnPlaySound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.OnPlaySound");

	ABP_SubtitlePlayer_Talk_C_OnPlaySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.Stop
// (Net, NetResponse, Static, NetMulticast, NetServer)

void ABP_SubtitlePlayer_Talk_C::STATIC_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.Stop");

	ABP_SubtitlePlayer_Talk_C_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.ClearSubtitle
// (NetReliable, Exec, Event, NetResponse, NetMulticast, NetServer)

void ABP_SubtitlePlayer_Talk_C::ClearSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.ClearSubtitle");

	ABP_SubtitlePlayer_Talk_C_ClearSubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.Skip
// (NetReliable, Exec, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTalkTask*               SkippedTask                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_Talk_C::STATIC_Skip(class UTalkTask* SkippedTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.Skip");

	ABP_SubtitlePlayer_Talk_C_Skip_Params params;
	params.SkippedTask = SkippedTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.ExecuteUbergraph_BP_SubtitlePlayer_Talk
// (NetMulticast, Public, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitlePlayer_Talk_C::ExecuteUbergraph_BP_SubtitlePlayer_Talk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.ExecuteUbergraph_BP_SubtitlePlayer_Talk");

	ABP_SubtitlePlayer_Talk_C_ExecuteUbergraph_BP_SubtitlePlayer_Talk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

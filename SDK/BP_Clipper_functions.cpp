
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

// Function BP_Clipper.BP_Clipper_C.SetCharaName
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Clipper_C::SetCharaName(const struct FName& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.SetCharaName");

	ABP_Clipper_C_SetCharaName_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Clipper.BP_Clipper_C.SetTalkClipperInternal
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TalkClipperString              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bVoice                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AS3SoundPlayer*          VoicePlayer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Clipper_C::SetTalkClipperInternal(const struct FString& TalkClipperString, const struct FName& CharaName, bool bVoice, class AS3SoundPlayer* VoicePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.SetTalkClipperInternal");

	ABP_Clipper_C_SetTalkClipperInternal_Params params;
	params.TalkClipperString = TalkClipperString;
	params.CharaName = CharaName;
	params.bVoice = bVoice;
	params.VoicePlayer = VoicePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Clipper.BP_Clipper_C.UpdateElapsedTime
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Clipper_C::UpdateElapsedTime(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.UpdateElapsedTime");

	ABP_Clipper_C_UpdateElapsedTime_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Clipper.BP_Clipper_C.DebugLogMultiSample
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Clipper_C::DebugLogMultiSample()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.DebugLogMultiSample");

	ABP_Clipper_C_DebugLogMultiSample_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Clipper.BP_Clipper_C.CalcDeltaTime
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Clipper_C::CalcDeltaTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.CalcDeltaTime");

	ABP_Clipper_C_CalcDeltaTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Clipper.BP_Clipper_C.TalkClipperStop
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Clipper_C::TalkClipperStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.TalkClipperStop");

	ABP_Clipper_C_TalkClipperStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Clipper.BP_Clipper_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Clipper_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.Init");

	ABP_Clipper_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Clipper.BP_Clipper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Clipper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.UserConstructionScript");

	ABP_Clipper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Clipper.BP_Clipper_C.ClearFaceId
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Clipper_C::ClearFaceId()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.ClearFaceId");

	ABP_Clipper_C_ClearFaceId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Clipper.BP_Clipper_C.SetPlayRate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewRate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Clipper_C::SetPlayRate(float NewRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.SetPlayRate");

	ABP_Clipper_C_SetPlayRate_Params params;
	params.NewRate = NewRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Clipper.BP_Clipper_C.EndPause
// (BlueprintCallable, BlueprintEvent)

void ABP_Clipper_C::EndPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.EndPause");

	ABP_Clipper_C_EndPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Clipper.BP_Clipper_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Clipper_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.ReceiveTick");

	ABP_Clipper_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Clipper.BP_Clipper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Clipper_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.ReceiveBeginPlay");

	ABP_Clipper_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Clipper.BP_Clipper_C.ExecuteUbergraph_BP_Clipper
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Clipper_C::ExecuteUbergraph_BP_Clipper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.ExecuteUbergraph_BP_Clipper");

	ABP_Clipper_C_ExecuteUbergraph_BP_Clipper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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
// (NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   NewName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Clipper_C::SetCharaName(const struct FName& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.SetCharaName");

	ABP_Clipper_C_SetCharaName_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Clipper.BP_Clipper_C.SetTalkClipperInternal
// (Net, NetRequest, Exec, Native, Event, Static, Private, Delegate, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 TalkClipperString              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bVoice                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AS3SoundPlayer*          VoicePlayer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Clipper_C::STATIC_SetTalkClipperInternal(const struct FString& TalkClipperString, const struct FName& CharaName, bool bVoice, class AS3SoundPlayer* VoicePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.SetTalkClipperInternal");

	ABP_Clipper_C_SetTalkClipperInternal_Params params;
	params.TalkClipperString = TalkClipperString;
	params.CharaName = CharaName;
	params.bVoice = bVoice;
	params.VoicePlayer = VoicePlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Clipper.BP_Clipper_C.UpdateElapsedTime
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Clipper_C::STATIC_UpdateElapsedTime(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.UpdateElapsedTime");

	ABP_Clipper_C_UpdateElapsedTime_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Clipper.BP_Clipper_C.DebugLogMultiSample
// (Net, Event, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_Clipper_C::DebugLogMultiSample()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.DebugLogMultiSample");

	ABP_Clipper_C_DebugLogMultiSample_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Clipper.BP_Clipper_C.CalcDeltaTime
// (Event, Static, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_Clipper_C::STATIC_CalcDeltaTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.CalcDeltaTime");

	ABP_Clipper_C_CalcDeltaTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Clipper.BP_Clipper_C.TalkClipperStop
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_Clipper_C::STATIC_TalkClipperStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.TalkClipperStop");

	ABP_Clipper_C_TalkClipperStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Clipper.BP_Clipper_C.Init
// (Net, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_Clipper_C::STATIC_Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.Init");

	ABP_Clipper_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Clipper.BP_Clipper_C.UserConstructionScript
// (Net, NetReliable, NetRequest, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_Clipper_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.UserConstructionScript");

	ABP_Clipper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Clipper.BP_Clipper_C.ClearFaceId
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_Clipper_C::STATIC_ClearFaceId()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.ClearFaceId");

	ABP_Clipper_C_ClearFaceId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Clipper.BP_Clipper_C.SetPlayRate
// (Exec, NetMulticast, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_Clipper_C::STATIC_EndPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.EndPause");

	ABP_Clipper_C_EndPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Clipper.BP_Clipper_C.ReceiveTick
// (Net, Exec, NetMulticast, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_Clipper_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.ReceiveBeginPlay");

	ABP_Clipper_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Clipper.BP_Clipper_C.ExecuteUbergraph_BP_Clipper
// (Exec, Native, Event, MulticastDelegate, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Clipper_C::ExecuteUbergraph_BP_Clipper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clipper.BP_Clipper_C.ExecuteUbergraph_BP_Clipper");

	ABP_Clipper_C_ExecuteUbergraph_BP_Clipper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

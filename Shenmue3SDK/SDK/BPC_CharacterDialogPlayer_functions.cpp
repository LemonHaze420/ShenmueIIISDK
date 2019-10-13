
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

// Function BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C.LimitToBehaviorState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3PlayerBehavior              State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_CharacterDialogPlayer_C::LimitToBehaviorState(ES3PlayerBehavior State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C.LimitToBehaviorState");

	UBPC_CharacterDialogPlayer_C_LimitToBehaviorState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C.StopSubtitleDialog
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_CharacterDialogPlayer_C::StopSubtitleDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C.StopSubtitleDialog");

	UBPC_CharacterDialogPlayer_C_StopSubtitleDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C.IsSpeaking
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_CharacterDialogPlayer_C::IsSpeaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C.IsSpeaking");

	UBPC_CharacterDialogPlayer_C_IsSpeaking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C.RandomLabelNoRepeat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Labels                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            LastIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   Selection                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_CharacterDialogPlayer_C::RandomLabelNoRepeat(TArray<struct FName>* Labels, int* LastIndex, struct FName* Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C.RandomLabelNoRepeat");

	UBPC_CharacterDialogPlayer_C_RandomLabelNoRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Labels != nullptr)
		*Labels = params.Labels;
	if (LastIndex != nullptr)
		*LastIndex = params.LastIndex;
	if (Selection != nullptr)
		*Selection = params.Selection;
}


// Function BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C.CallOnEnd
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLast                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_CharacterDialogPlayer_C::CallOnEnd(bool IsLast)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C.CallOnEnd");

	UBPC_CharacterDialogPlayer_C_CallOnEnd_Params params;
	params.IsLast = IsLast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C.PlaySubtitleDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3TextPathType                Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MinTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_CharacterDialogPlayer_C::PlaySubtitleDialog(const struct FName& Label, ES3TextPathType Type, float MinTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C.PlaySubtitleDialog");

	UBPC_CharacterDialogPlayer_C_PlaySubtitleDialog_Params params;
	params.Label = Label;
	params.Type = Type;
	params.MinTime = MinTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_CharacterDialogPlayer_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C.ReceiveTick");

	UBPC_CharacterDialogPlayer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C.ExecuteUbergraph_BPC_CharacterDialogPlayer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_CharacterDialogPlayer_C::ExecuteUbergraph_BPC_CharacterDialogPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C.ExecuteUbergraph_BPC_CharacterDialogPlayer");

	UBPC_CharacterDialogPlayer_C_ExecuteUbergraph_BPC_CharacterDialogPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

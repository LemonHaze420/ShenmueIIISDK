#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C.LimitToBehaviorState
struct UBPC_CharacterDialogPlayer_C_LimitToBehaviorState_Params
{
	ES3PlayerBehavior                                  State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C.StopSubtitleDialog
struct UBPC_CharacterDialogPlayer_C_StopSubtitleDialog_Params
{
};

// Function BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C.IsSpeaking
struct UBPC_CharacterDialogPlayer_C_IsSpeaking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C.RandomLabelNoRepeat
struct UBPC_CharacterDialogPlayer_C_RandomLabelNoRepeat_Params
{
	TArray<struct FName>                               Labels;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                LastIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       Selection;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C.CallOnEnd
struct UBPC_CharacterDialogPlayer_C_CallOnEnd_Params
{
	bool                                               IsLast;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C.PlaySubtitleDialog
struct UBPC_CharacterDialogPlayer_C_PlaySubtitleDialog_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3TextPathType                                    Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C.ReceiveTick
struct UBPC_CharacterDialogPlayer_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_CharacterDialogPlayer.BPC_CharacterDialogPlayer_C.ExecuteUbergraph_BPC_CharacterDialogPlayer
struct UBPC_CharacterDialogPlayer_C_ExecuteUbergraph_BPC_CharacterDialogPlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

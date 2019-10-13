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

// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.ConvertDisplayTextArray
struct ABP_SecondarySubtitlePlayer_C_ConvertDisplayTextArray_Params
{
	TArray<struct FString>                             BaseTextArray;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.GetSubtitleCharaNameString
struct ABP_SecondarySubtitlePlayer_C_GetSubtitleCharaNameString_Params
{
	struct FName                                       InCharaName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.Stop
struct ABP_SecondarySubtitlePlayer_C_Stop_Params
{
};

// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.Play
struct ABP_SecondarySubtitlePlayer_C_Play_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3TextPathType                                    Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.SetSubtitlesWidgetVisible
struct ABP_SecondarySubtitlePlayer_C_SetSubtitlesWidgetVisible_Params
{
	bool                                               IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.FinalizeSubtitlesWidget
struct ABP_SecondarySubtitlePlayer_C_FinalizeSubtitlesWidget_Params
{
};

// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.CreateSubtitlesWidget
struct ABP_SecondarySubtitlePlayer_C_CreateSubtitlesWidget_Params
{
};

// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.UserConstructionScript
struct ABP_SecondarySubtitlePlayer_C_UserConstructionScript_Params
{
};

// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.ReceiveBeginPlay
struct ABP_SecondarySubtitlePlayer_C_ReceiveBeginPlay_Params
{
};

// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.ReceiveEndPlay
struct ABP_SecondarySubtitlePlayer_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SecondarySubtitlePlayer.BP_SecondarySubtitlePlayer_C.ExecuteUbergraph_BP_SecondarySubtitlePlayer
struct ABP_SecondarySubtitlePlayer_C_ExecuteUbergraph_BP_SecondarySubtitlePlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.CreateFittingInfo
struct UWBP_DebugChangeClothes_C_CreateFittingInfo_Params
{
	struct FST_ClothesFittingInfo                      OverrideInfo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               RYO;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FST_ClothesFittingInfo>              Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.SetFocus
struct UWBP_DebugChangeClothes_C_SetFocus_Params
{
};

// Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.GetCurrentStatus
struct UWBP_DebugChangeClothes_C_GetCurrentStatus_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.IncrementLoop
struct UWBP_DebugChangeClothes_C_IncrementLoop_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.ChangePlayerModel
struct UWBP_DebugChangeClothes_C_ChangePlayerModel_Params
{
};

// Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.ChangeCloth
struct UWBP_DebugChangeClothes_C_ChangeCloth_Params
{
	struct FString                                     InTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.ChangeTarget
struct UWBP_DebugChangeClothes_C_ChangeTarget_Params
{
};

// Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.OnKeyDown
struct UWBP_DebugChangeClothes_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.OnPreviewKeyDown
struct UWBP_DebugChangeClothes_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.Construct
struct UWBP_DebugChangeClothes_C_Construct_Params
{
};

// Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.Destruct
struct UWBP_DebugChangeClothes_C_Destruct_Params
{
};

// Function WBP_DebugChangeClothes.WBP_DebugChangeClothes_C.ExecuteUbergraph_WBP_DebugChangeClothes
struct UWBP_DebugChangeClothes_C_ExecuteUbergraph_WBP_DebugChangeClothes_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

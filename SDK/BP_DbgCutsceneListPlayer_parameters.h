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

// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.TmpGetManualUnloadLevelList
struct ABP_DbgCutsceneListPlayer_C_TmpGetManualUnloadLevelList_Params
{
};

// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.SetPlayInfoListFromDataTable
struct ABP_DbgCutsceneListPlayer_C_SetPlayInfoListFromDataTable_Params
{
	class UDataTable*                                  InfoDataTable;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.ExecuteCutsceneEndCommon
struct ABP_DbgCutsceneListPlayer_C_ExecuteCutsceneEndCommon_Params
{
};

// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.StartCutscene
struct ABP_DbgCutsceneListPlayer_C_StartCutscene_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.GetPlayInfoNum
struct ABP_DbgCutsceneListPlayer_C_GetPlayInfoNum_Params
{
	int                                                Num;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.GetPlayInfo
struct ABP_DbgCutsceneListPlayer_C_GetPlayInfo_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFound;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FST_DbgCutscenePlayInfo                     ResultInfo;                                               // (Parm, OutParm)
};

// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.HasPlayInfo
struct ABP_DbgCutsceneListPlayer_C_HasPlayInfo_Params
{
	struct FString                                     CutsceneId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	int                                                FoundIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.SetPlayInfoList
struct ABP_DbgCutsceneListPlayer_C_SetPlayInfoList_Params
{
	TArray<struct FST_DbgCutscenePlayInfo>             InfoList;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.SetPlayInfo
struct ABP_DbgCutsceneListPlayer_C_SetPlayInfo_Params
{
	struct FST_DbgCutscenePlayInfo                     Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.UserConstructionScript
struct ABP_DbgCutsceneListPlayer_C_UserConstructionScript_Params
{
};

// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.TmpManualUnloadCutsceneLevel
struct ABP_DbgCutsceneListPlayer_C_TmpManualUnloadCutsceneLevel_Params
{
};

// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.DebugOnStartCutscenePlayer
struct ABP_DbgCutsceneListPlayer_C_DebugOnStartCutscenePlayer_Params
{
};

// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.DebugOnCutsceneEnd
struct ABP_DbgCutsceneListPlayer_C_DebugOnCutsceneEnd_Params
{
};

// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C._BindDebugOnStartCutscenePlayer
struct ABP_DbgCutsceneListPlayer_C__BindDebugOnStartCutscenePlayer_Params
{
};

// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C._BindDebugOnCutsceneEnd
struct ABP_DbgCutsceneListPlayer_C__BindDebugOnCutsceneEnd_Params
{
};

// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.ExecuteUbergraph_BP_DbgCutsceneListPlayer
struct ABP_DbgCutsceneListPlayer_C_ExecuteUbergraph_BP_DbgCutsceneListPlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.OnCutsceneEnd__DelegateSignature
struct ABP_DbgCutsceneListPlayer_C_OnCutsceneEnd__DelegateSignature_Params
{
	struct FName                                       CutsceneId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.OnStartCutscenePlayer__DelegateSignature
struct ABP_DbgCutsceneListPlayer_C_OnStartCutscenePlayer__DelegateSignature_Params
{
	struct FName                                       CutsceneId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

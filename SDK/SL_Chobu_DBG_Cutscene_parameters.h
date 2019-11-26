#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function SL_Chobu_DBG_Cutscene.SL_Chobu_DBG_Cutscene_C.DebugOnStartCutscenePlayer
struct ASL_Chobu_DBG_Cutscene_C_DebugOnStartCutscenePlayer_Params
{
	struct FName                                       CutsceneId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_DBG_Cutscene.SL_Chobu_DBG_Cutscene_C.DebugOnCutsceneEnd
struct ASL_Chobu_DBG_Cutscene_C_DebugOnCutsceneEnd_Params
{
	struct FName                                       CutsceneId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_DBG_Cutscene.SL_Chobu_DBG_Cutscene_C.ReceiveBeginPlay
struct ASL_Chobu_DBG_Cutscene_C_ReceiveBeginPlay_Params
{
};

// Function SL_Chobu_DBG_Cutscene.SL_Chobu_DBG_Cutscene_C.InitDebugCutscene
struct ASL_Chobu_DBG_Cutscene_C_InitDebugCutscene_Params
{
};

// Function SL_Chobu_DBG_Cutscene.SL_Chobu_DBG_Cutscene_C.ExecuteUbergraph_SL_Chobu_DBG_Cutscene
struct ASL_Chobu_DBG_Cutscene_C_ExecuteUbergraph_SL_Chobu_DBG_Cutscene_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

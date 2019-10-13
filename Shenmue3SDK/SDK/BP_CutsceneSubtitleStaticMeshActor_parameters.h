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

// Function BP_CutsceneSubtitleStaticMeshActor.BP_CutsceneSubtitleStaticMeshActor_C.GetSubtitleCharaName
struct ABP_CutsceneSubtitleStaticMeshActor_C_GetSubtitleCharaName_Params
{
	struct FName                                       newParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneSubtitleStaticMeshActor.BP_CutsceneSubtitleStaticMeshActor_C.UpdateSubtitleWidget
struct ABP_CutsceneSubtitleStaticMeshActor_C_UpdateSubtitleWidget_Params
{
	TArray<struct FName>                               Labels;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_CutsceneSubtitleStaticMeshActor.BP_CutsceneSubtitleStaticMeshActor_C.UserConstructionScript
struct ABP_CutsceneSubtitleStaticMeshActor_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_MiniGameSceneCapture.BP_MiniGameSceneCapture_C.GetMaterial
struct ABP_MiniGameSceneCapture_C_GetMaterial_Params
{
	class UMaterialInstanceDynamic*                    UseMaterial;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameSceneCapture.BP_MiniGameSceneCapture_C.UserConstructionScript
struct ABP_MiniGameSceneCapture_C_UserConstructionScript_Params
{
};

// Function BP_MiniGameSceneCapture.BP_MiniGameSceneCapture_C.ReceiveBeginPlay
struct ABP_MiniGameSceneCapture_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGameSceneCapture.BP_MiniGameSceneCapture_C.ReceiveEndPlay
struct ABP_MiniGameSceneCapture_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameSceneCapture.BP_MiniGameSceneCapture_C.ExecuteUbergraph_BP_MiniGameSceneCapture
struct ABP_MiniGameSceneCapture_C_ExecuteUbergraph_BP_MiniGameSceneCapture_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

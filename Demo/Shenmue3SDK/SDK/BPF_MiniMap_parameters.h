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

// Function BPF_MiniMap.BPF_MiniMap_C.GetS3MinimapManager
struct UBPF_MiniMap_C_GetS3MinimapManager_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_MiniMap2DManager_C*                      MinimapManager;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_MiniMap.BPF_MiniMap_C.GetS3MinimapWidget
struct UBPF_MiniMap_C_GetS3MinimapWidget_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWBP_MiniMap2D_C*                            MiniMap;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

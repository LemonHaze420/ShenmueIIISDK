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

// Function BPF_Area.BPF_Area_C.getS3AreaLightManager
struct UBPF_Area_C_getS3AreaLightManager_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3AreaLightManagerComponent*                AreaLightManager;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPF_Area.BPF_Area_C.getS3AreaManager
struct UBPF_Area_C_getS3AreaManager_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_S3AreaManager_C*                         BP_S3AreaManager;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

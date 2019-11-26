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

// Function BPF_PlayerCameraBase.BPF_PlayerCameraBase_C.getS3PlayerCameraManagerBase
struct UBPF_PlayerCameraBase_C_getS3PlayerCameraManagerBase_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_S3PlayerCameraManagerBase_C*             BP_S3PlayerCameraManagerBase;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

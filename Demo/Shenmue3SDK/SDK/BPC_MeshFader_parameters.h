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

// Function BPC_MeshFader.BPC_MeshFader_C.RegisterSiblingMeshes
struct UBPC_MeshFader_C_RegisterSiblingMeshes_Params
{
};

// Function BPC_MeshFader.BPC_MeshFader_C.RegisterSiblingSkeletalMeshes
struct UBPC_MeshFader_C_RegisterSiblingSkeletalMeshes_Params
{
};

// Function BPC_MeshFader.BPC_MeshFader_C.CreateFadeMaterial
struct UBPC_MeshFader_C_CreateFadeMaterial_Params
{
	class UMaterialInterface**                         SourceMaterial;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.GetRodTopPos
struct ABP_Fishing_Ryo_C_GetRodTopPos_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.UpdateAnim
struct ABP_Fishing_Ryo_C_UpdateAnim_Params
{
};

// Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.SetResultCamera
struct ABP_Fishing_Ryo_C_SetResultCamera_Params
{
};

// Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.ResetCamera
struct ABP_Fishing_Ryo_C_ResetCamera_Params
{
};

// Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.DeleteRodMeshData
struct ABP_Fishing_Ryo_C_DeleteRodMeshData_Params
{
};

// Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.SetRodMeshData
struct ABP_Fishing_Ryo_C_SetRodMeshData_Params
{
	class USkeletalMesh*                               MeshData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.UserConstructionScript
struct ABP_Fishing_Ryo_C_UserConstructionScript_Params
{
};

// Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.Set Active
struct ABP_Fishing_Ryo_C_Set_Active_Params
{
	bool                                               is_active;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.ReceiveTick
struct ABP_Fishing_Ryo_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.ReceiveBeginPlay
struct ABP_Fishing_Ryo_C_ReceiveBeginPlay_Params
{
};

// Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.ExecuteUbergraph_BP_Fishing_Ryo
struct ABP_Fishing_Ryo_C_ExecuteUbergraph_BP_Fishing_Ryo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

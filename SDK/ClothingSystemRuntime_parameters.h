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

// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveSpringStiffness
struct UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness_Params
{
	float                                              InStiffness;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
struct UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Params
{
	float                                              InStiffness;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.EnableGravityOverride
struct UClothingSimulationInteractorNv_EnableGravityOverride_Params
{
	struct FVector                                     InVector;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.DisableGravityOverride
struct UClothingSimulationInteractorNv_DisableGravityOverride_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

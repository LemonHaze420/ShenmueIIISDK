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

// Function S3CableComponent.S3CableComponent.SetAttachEndTo
struct US3CableComponent_SetAttachEndTo_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ComponentProperty;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function S3CableComponent.S3CableComponent.GetTransformAlongCable
struct US3CableComponent_GetTransformAlongCable_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3CableComponent.S3CableComponent.GetPointLocation
struct US3CableComponent_GetPointLocation_Params
{
	int                                                Point;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3CableComponent.S3CableComponent.GetAttachedComponent
struct US3CableComponent_GetAttachedComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function S3CableComponent.S3CableComponent.GetAttachedActor
struct US3CableComponent_GetAttachedActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

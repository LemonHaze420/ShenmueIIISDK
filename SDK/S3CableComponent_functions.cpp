
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function S3CableComponent.S3CableComponent.SetAttachEndTo
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ComponentProperty              (Parm, ZeroConstructor, IsPlainOldData)

void US3CableComponent::SetAttachEndTo(class AActor* Actor, const struct FName& ComponentProperty)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3CableComponent.S3CableComponent.SetAttachEndTo");

	US3CableComponent_SetAttachEndTo_Params params;
	params.Actor = Actor;
	params.ComponentProperty = ComponentProperty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function S3CableComponent.S3CableComponent.GetTransformAlongCable
// ()
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool US3CableComponent::GetTransformAlongCable(float Distance, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3CableComponent.S3CableComponent.GetTransformAlongCable");

	US3CableComponent_GetTransformAlongCable_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;

	return params.ReturnValue;
}


// Function S3CableComponent.S3CableComponent.GetPointLocation
// ()
// Parameters:
// int                            Point                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool US3CableComponent::GetPointLocation(int Point, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3CableComponent.S3CableComponent.GetPointLocation");

	US3CableComponent_GetPointLocation_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

	return params.ReturnValue;
}


// Function S3CableComponent.S3CableComponent.GetAttachedComponent
// ()
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* US3CableComponent::GetAttachedComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function S3CableComponent.S3CableComponent.GetAttachedComponent");

	US3CableComponent_GetAttachedComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3CableComponent.S3CableComponent.GetAttachedActor
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* US3CableComponent::GetAttachedActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function S3CableComponent.S3CableComponent.GetAttachedActor");

	US3CableComponent_GetAttachedActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

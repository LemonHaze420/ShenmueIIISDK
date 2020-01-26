
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_AnimNotify_DoorOpen.BP_AnimNotify_DoorOpen_C.SetDoorFlag
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AS3GimmickOpenDoor*      Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AnimNotify_DoorOpen_C::SetDoorFlag(class AS3GimmickOpenDoor* Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_DoorOpen.BP_AnimNotify_DoorOpen_C.SetDoorFlag");

	UBP_AnimNotify_DoorOpen_C_SetDoorFlag_Params params;
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimNotify_DoorOpen.BP_AnimNotify_DoorOpen_C.GetDoorActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*  Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AS3GimmickOpenDoor*      DoorActor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AnimNotify_DoorOpen_C::GetDoorActor(class USkeletalMeshComponent* Mesh, class AS3GimmickOpenDoor** DoorActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_DoorOpen.BP_AnimNotify_DoorOpen_C.GetDoorActor");

	UBP_AnimNotify_DoorOpen_C_GetDoorActor_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DoorActor != nullptr)
		*DoorActor = params.DoorActor;
}


// Function BP_AnimNotify_DoorOpen.BP_AnimNotify_DoorOpen_C.GetSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AS3GimmickOpenDoor*      Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundAtomCue*           Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AnimNotify_DoorOpen_C::GetSound(class AS3GimmickOpenDoor* Door, class USoundAtomCue** Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_DoorOpen.BP_AnimNotify_DoorOpen_C.GetSound");

	UBP_AnimNotify_DoorOpen_C_GetSound_Params params;
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sound != nullptr)
		*Sound = params.Sound;
}


// Function BP_AnimNotify_DoorOpen.BP_AnimNotify_DoorOpen_C.GetNotifyName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_AnimNotify_DoorOpen_C::GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_DoorOpen.BP_AnimNotify_DoorOpen_C.GetNotifyName");

	UBP_AnimNotify_DoorOpen_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AnimNotify_DoorOpen.BP_AnimNotify_DoorOpen_C.Received_Notify
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AnimNotify_DoorOpen_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_DoorOpen.BP_AnimNotify_DoorOpen_C.Received_Notify");

	UBP_AnimNotify_DoorOpen_C_Received_Notify_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

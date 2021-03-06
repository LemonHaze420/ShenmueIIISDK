
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

// Function BP_AnimNotify_DoorKnock.BP_AnimNotify_DoorKnock_C.GetDoorActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*  Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AS3GimmickOpenDoor*      DoorActor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AnimNotify_DoorKnock_C::GetDoorActor(class USkeletalMeshComponent* Mesh, class AS3GimmickOpenDoor** DoorActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_DoorKnock.BP_AnimNotify_DoorKnock_C.GetDoorActor");

	UBP_AnimNotify_DoorKnock_C_GetDoorActor_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DoorActor != nullptr)
		*DoorActor = params.DoorActor;
}


// Function BP_AnimNotify_DoorKnock.BP_AnimNotify_DoorKnock_C.GetSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AS3GimmickOpenDoor*      Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundAtomCue*           Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AnimNotify_DoorKnock_C::GetSound(class AS3GimmickOpenDoor* Door, class USoundAtomCue** Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_DoorKnock.BP_AnimNotify_DoorKnock_C.GetSound");

	UBP_AnimNotify_DoorKnock_C_GetSound_Params params;
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sound != nullptr)
		*Sound = params.Sound;
}


// Function BP_AnimNotify_DoorKnock.BP_AnimNotify_DoorKnock_C.GetNotifyName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_AnimNotify_DoorKnock_C::GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_DoorKnock.BP_AnimNotify_DoorKnock_C.GetNotifyName");

	UBP_AnimNotify_DoorKnock_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_AnimNotify_DoorClose.BP_AnimNotify_DoorClose_C.SetDoorFlag
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AS3GimmickOpenDoor**     Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AnimNotify_DoorClose_C::SetDoorFlag(class AS3GimmickOpenDoor** Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_DoorClose.BP_AnimNotify_DoorClose_C.SetDoorFlag");

	UBP_AnimNotify_DoorClose_C_SetDoorFlag_Params params;
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimNotify_DoorClose.BP_AnimNotify_DoorClose_C.GetNotifyName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_AnimNotify_DoorClose_C::GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_DoorClose.BP_AnimNotify_DoorClose_C.GetNotifyName");

	UBP_AnimNotify_DoorClose_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AnimNotify_DoorClose.BP_AnimNotify_DoorClose_C.GetSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AS3GimmickOpenDoor**     Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundAtomCue*           Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AnimNotify_DoorClose_C::GetSound(class AS3GimmickOpenDoor** Door, class USoundAtomCue** Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_DoorClose.BP_AnimNotify_DoorClose_C.GetSound");

	UBP_AnimNotify_DoorClose_C_GetSound_Params params;
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sound != nullptr)
		*Sound = params.Sound;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

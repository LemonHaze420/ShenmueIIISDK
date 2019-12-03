
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

// Function BP_AnimNotify_DoorClose.BP_AnimNotify_DoorClose_C.SetDoorFlag
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// class AS3GimmickOpenDoor*      Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AnimNotify_DoorClose_C::STATIC_SetDoorFlag(class AS3GimmickOpenDoor* Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_DoorClose.BP_AnimNotify_DoorClose_C.SetDoorFlag");

	UBP_AnimNotify_DoorClose_C_SetDoorFlag_Params params;
	params.Door = Door;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimNotify_DoorClose.BP_AnimNotify_DoorClose_C.GetNotifyName
// (NetRequest, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_AnimNotify_DoorClose_C::STATIC_GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_DoorClose.BP_AnimNotify_DoorClose_C.GetNotifyName");

	UBP_AnimNotify_DoorClose_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AnimNotify_DoorClose.BP_AnimNotify_DoorClose_C.GetSound
// (Net, NetReliable, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// class AS3GimmickOpenDoor*      Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundAtomCue*           Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AnimNotify_DoorClose_C::STATIC_GetSound(class AS3GimmickOpenDoor* Door, class USoundAtomCue** Sound)
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

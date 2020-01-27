
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

// Function BP_DoorMascot.BP_DoorMascot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DoorMascot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoorMascot.BP_DoorMascot_C.UserConstructionScript");

	ABP_DoorMascot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DoorMascot.BP_DoorMascot_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_DoorMascot_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoorMascot.BP_DoorMascot_C.Timeline_0__FinishedFunc");

	ABP_DoorMascot_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DoorMascot.BP_DoorMascot_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_DoorMascot_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoorMascot.BP_DoorMascot_C.Timeline_0__UpdateFunc");

	ABP_DoorMascot_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DoorMascot.BP_DoorMascot_C.򠪦􆖐񍳔_
// (BlueprintEvent)

void ABP_DoorMascot_C::UnknownFunc01()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoorMascot.BP_DoorMascot_C.򠪦􆖐񍳔_");

	ABP_DoorMascot_C_UnknownFunc01__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DoorMascot.BP_DoorMascot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DoorMascot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoorMascot.BP_DoorMascot_C.ReceiveBeginPlay");

	ABP_DoorMascot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

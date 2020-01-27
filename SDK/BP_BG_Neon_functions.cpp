
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

// Function BP_BG_Neon.BP_BG_Neon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BG_Neon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_Neon.BP_BG_Neon_C.UserConstructionScript");

	ABP_BG_Neon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BG_Neon.BP_BG_Neon_C.򠪦􆖐񍳔_
// (BlueprintEvent)

void ABP_BG_Neon_C::UnknownFunc01()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_Neon.BP_BG_Neon_C.򠪦􆖐񍳔_");

	ABP_BG_Neon_C_UnknownFunc01__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BG_Neon.BP_BG_Neon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BG_Neon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_Neon.BP_BG_Neon_C.ReceiveBeginPlay");

	ABP_BG_Neon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BG_Neon.BP_BG_Neon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BG_Neon_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BG_Neon.BP_BG_Neon_C.ReceiveTick");

	ABP_BG_Neon_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

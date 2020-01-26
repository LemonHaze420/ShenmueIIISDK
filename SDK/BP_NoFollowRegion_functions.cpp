
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

// Function BP_NoFollowRegion.BP_NoFollowRegion_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_NoFollowRegion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NoFollowRegion.BP_NoFollowRegion_C.UserConstructionScript");

	ABP_NoFollowRegion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NoFollowRegion.BP_NoFollowRegion_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NoFollowRegion_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NoFollowRegion.BP_NoFollowRegion_C.ReceiveActorBeginOverlap");

	ABP_NoFollowRegion_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NoFollowRegion.BP_NoFollowRegion_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NoFollowRegion_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NoFollowRegion.BP_NoFollowRegion_C.ReceiveActorEndOverlap");

	ABP_NoFollowRegion_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NoFollowRegion.BP_NoFollowRegion_C.ExecuteUbergraph_BP_NoFollowRegion
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NoFollowRegion_C::ExecuteUbergraph_BP_NoFollowRegion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NoFollowRegion.BP_NoFollowRegion_C.ExecuteUbergraph_BP_NoFollowRegion");

	ABP_NoFollowRegion_C_ExecuteUbergraph_BP_NoFollowRegion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

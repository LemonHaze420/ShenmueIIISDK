
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

// Function BP_S3PuddleActor.BP_S3PuddleActor_C.UserConstructionScript
// (Net, Exec, Native, Static, NetMulticast, Protected, Delegate, NetServer, HasDefaults, BlueprintEvent, NetValidate)

void ABP_S3PuddleActor_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PuddleActor.BP_S3PuddleActor_C.UserConstructionScript");

	ABP_S3PuddleActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PuddleActor.BP_S3PuddleActor_C.ReceiveBeginPlay
// (NetReliable, NetRequest, NetResponse, Private, DLLImport, BlueprintEvent, NetValidate)

void ABP_S3PuddleActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PuddleActor.BP_S3PuddleActor_C.ReceiveBeginPlay");

	ABP_S3PuddleActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3PuddleActor.BP_S3PuddleActor_C.ExecuteUbergraph_BP_S3PuddleActor
// (NetReliable, Exec, Native, Static, NetMulticast, Protected, Delegate, NetServer, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3PuddleActor_C::STATIC_ExecuteUbergraph_BP_S3PuddleActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3PuddleActor.BP_S3PuddleActor_C.ExecuteUbergraph_BP_S3PuddleActor");

	ABP_S3PuddleActor_C_ExecuteUbergraph_BP_S3PuddleActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

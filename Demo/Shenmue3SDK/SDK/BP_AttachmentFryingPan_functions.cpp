
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

// Function BP_AttachmentFryingPan.BP_AttachmentFryingPan_C.CreateSmoke
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AttachmentFryingPan_C::CreateSmoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttachmentFryingPan.BP_AttachmentFryingPan_C.CreateSmoke");

	ABP_AttachmentFryingPan_C_CreateSmoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttachmentFryingPan.BP_AttachmentFryingPan_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AttachmentFryingPan_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttachmentFryingPan.BP_AttachmentFryingPan_C.UserConstructionScript");

	ABP_AttachmentFryingPan_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttachmentFryingPan.BP_AttachmentFryingPan_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AttachmentFryingPan_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttachmentFryingPan.BP_AttachmentFryingPan_C.ReceiveBeginPlay");

	ABP_AttachmentFryingPan_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttachmentFryingPan.BP_AttachmentFryingPan_C.ExecuteUbergraph_BP_AttachmentFryingPan
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AttachmentFryingPan_C::ExecuteUbergraph_BP_AttachmentFryingPan(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttachmentFryingPan.BP_AttachmentFryingPan_C.ExecuteUbergraph_BP_AttachmentFryingPan");

	ABP_AttachmentFryingPan_C_ExecuteUbergraph_BP_AttachmentFryingPan_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

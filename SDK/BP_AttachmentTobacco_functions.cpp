
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

// Function BP_AttachmentTobacco.BP_AttachmentTobacco_C.CreateSmoke
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AttachmentTobacco_C::CreateSmoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttachmentTobacco.BP_AttachmentTobacco_C.CreateSmoke");

	ABP_AttachmentTobacco_C_CreateSmoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttachmentTobacco.BP_AttachmentTobacco_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AttachmentTobacco_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttachmentTobacco.BP_AttachmentTobacco_C.UserConstructionScript");

	ABP_AttachmentTobacco_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttachmentTobacco.BP_AttachmentTobacco_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AttachmentTobacco_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttachmentTobacco.BP_AttachmentTobacco_C.ReceiveBeginPlay");

	ABP_AttachmentTobacco_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttachmentTobacco.BP_AttachmentTobacco_C.ExecuteUbergraph_BP_AttachmentTobacco
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AttachmentTobacco_C::ExecuteUbergraph_BP_AttachmentTobacco(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttachmentTobacco.BP_AttachmentTobacco_C.ExecuteUbergraph_BP_AttachmentTobacco");

	ABP_AttachmentTobacco_C_ExecuteUbergraph_BP_AttachmentTobacco_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

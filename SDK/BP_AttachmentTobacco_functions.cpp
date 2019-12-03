
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
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, Private, Protected, NetServer, HasDefaults, NetValidate)

void ABP_AttachmentTobacco_C::STATIC_CreateSmoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttachmentTobacco.BP_AttachmentTobacco_C.CreateSmoke");

	ABP_AttachmentTobacco_C_CreateSmoke_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttachmentTobacco.BP_AttachmentTobacco_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Native, Event, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)

void ABP_AttachmentTobacco_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttachmentTobacco.BP_AttachmentTobacco_C.UserConstructionScript");

	ABP_AttachmentTobacco_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttachmentTobacco.BP_AttachmentTobacco_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, NetValidate)

void ABP_AttachmentTobacco_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttachmentTobacco.BP_AttachmentTobacco_C.ReceiveBeginPlay");

	ABP_AttachmentTobacco_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttachmentTobacco.BP_AttachmentTobacco_C.ExecuteUbergraph_BP_AttachmentTobacco
// (NetReliable, Exec, Native, NetResponse, Private, Protected, NetServer, HasDefaults, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AttachmentTobacco_C::ExecuteUbergraph_BP_AttachmentTobacco(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttachmentTobacco.BP_AttachmentTobacco_C.ExecuteUbergraph_BP_AttachmentTobacco");

	ABP_AttachmentTobacco_C_ExecuteUbergraph_BP_AttachmentTobacco_Params params;
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

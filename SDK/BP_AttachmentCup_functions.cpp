
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

// Function BP_AttachmentCup.BP_AttachmentCup_C.CreateSmoke
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AttachmentCup_C::CreateSmoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttachmentCup.BP_AttachmentCup_C.CreateSmoke");

	ABP_AttachmentCup_C_CreateSmoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttachmentCup.BP_AttachmentCup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AttachmentCup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttachmentCup.BP_AttachmentCup_C.UserConstructionScript");

	ABP_AttachmentCup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttachmentCup.BP_AttachmentCup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AttachmentCup_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttachmentCup.BP_AttachmentCup_C.ReceiveBeginPlay");

	ABP_AttachmentCup_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttachmentCup.BP_AttachmentCup_C.ExecuteUbergraph_BP_AttachmentCup
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AttachmentCup_C::ExecuteUbergraph_BP_AttachmentCup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttachmentCup.BP_AttachmentCup_C.ExecuteUbergraph_BP_AttachmentCup");

	ABP_AttachmentCup_C_ExecuteUbergraph_BP_AttachmentCup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

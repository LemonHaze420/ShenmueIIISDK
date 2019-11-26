
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

// Function BP_AttachmentHaveItem.BP_AttachmentHaveItem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AttachmentHaveItem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttachmentHaveItem.BP_AttachmentHaveItem_C.UserConstructionScript");

	ABP_AttachmentHaveItem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttachmentHaveItem.BP_AttachmentHaveItem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AttachmentHaveItem_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttachmentHaveItem.BP_AttachmentHaveItem_C.ReceiveBeginPlay");

	ABP_AttachmentHaveItem_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttachmentHaveItem.BP_AttachmentHaveItem_C.ExecuteUbergraph_BP_AttachmentHaveItem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AttachmentHaveItem_C::ExecuteUbergraph_BP_AttachmentHaveItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttachmentHaveItem.BP_AttachmentHaveItem_C.ExecuteUbergraph_BP_AttachmentHaveItem");

	ABP_AttachmentHaveItem_C_ExecuteUbergraph_BP_AttachmentHaveItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function BP_AttentionPoint.BP_AttentionPoint_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AttentionPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionPoint.BP_AttentionPoint_C.UserConstructionScript");

	ABP_AttentionPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionPoint.BP_AttentionPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AttentionPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionPoint.BP_AttentionPoint_C.ReceiveBeginPlay");

	ABP_AttentionPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionPoint.BP_AttentionPoint_C.ExecuteUbergraph_BP_AttentionPoint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AttentionPoint_C::ExecuteUbergraph_BP_AttentionPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionPoint.BP_AttentionPoint_C.ExecuteUbergraph_BP_AttentionPoint");

	ABP_AttentionPoint_C_ExecuteUbergraph_BP_AttentionPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

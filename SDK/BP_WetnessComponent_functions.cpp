
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

// Function BP_WetnessComponent.BP_WetnessComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_WetnessComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WetnessComponent.BP_WetnessComponent_C.ReceiveBeginPlay");

	UBP_WetnessComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WetnessComponent.BP_WetnessComponent_C.ExecuteUbergraph_BP_WetnessComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WetnessComponent_C::ExecuteUbergraph_BP_WetnessComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WetnessComponent.BP_WetnessComponent_C.ExecuteUbergraph_BP_WetnessComponent");

	UBP_WetnessComponent_C_ExecuteUbergraph_BP_WetnessComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

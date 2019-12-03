
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

// Function BP_WetnessComponent.BP_WetnessComponent_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBP_WetnessComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WetnessComponent.BP_WetnessComponent_C.ReceiveBeginPlay");

	UBP_WetnessComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WetnessComponent.BP_WetnessComponent_C.ExecuteUbergraph_BP_WetnessComponent
// (Exec, Native, NetResponse, NetMulticast, Public, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WetnessComponent_C::ExecuteUbergraph_BP_WetnessComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WetnessComponent.BP_WetnessComponent_C.ExecuteUbergraph_BP_WetnessComponent");

	UBP_WetnessComponent_C_ExecuteUbergraph_BP_WetnessComponent_Params params;
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

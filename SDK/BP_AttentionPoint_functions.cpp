
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

// Function BP_AttentionPoint.BP_AttentionPoint_C.UserConstructionScript
// (NetReliable, Native, Event, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)

void ABP_AttentionPoint_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionPoint.BP_AttentionPoint_C.UserConstructionScript");

	ABP_AttentionPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionPoint.BP_AttentionPoint_C.ReceiveBeginPlay
// (Net, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)

void ABP_AttentionPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionPoint.BP_AttentionPoint_C.ReceiveBeginPlay");

	ABP_AttentionPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AttentionPoint.BP_AttentionPoint_C.ExecuteUbergraph_BP_AttentionPoint
// (Net, NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AttentionPoint_C::STATIC_ExecuteUbergraph_BP_AttentionPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AttentionPoint.BP_AttentionPoint_C.ExecuteUbergraph_BP_AttentionPoint");

	ABP_AttentionPoint_C_ExecuteUbergraph_BP_AttentionPoint_Params params;
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

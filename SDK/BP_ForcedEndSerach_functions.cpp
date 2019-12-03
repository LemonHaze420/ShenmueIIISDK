
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

// Function BP_ForcedEndSerach.BP_ForcedEndSerach_C.UserConstructionScript
// (Net, NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_ForcedEndSerach_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForcedEndSerach.BP_ForcedEndSerach_C.UserConstructionScript");

	ABP_ForcedEndSerach_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ForcedEndSerach.BP_ForcedEndSerach_C.EvtFreeState
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetClient, BlueprintEvent, BlueprintPure)

void ABP_ForcedEndSerach_C::EvtFreeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForcedEndSerach.BP_ForcedEndSerach_C.EvtFreeState");

	ABP_ForcedEndSerach_C_EvtFreeState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ForcedEndSerach.BP_ForcedEndSerach_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetClient, BlueprintEvent, BlueprintPure)

void ABP_ForcedEndSerach_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForcedEndSerach.BP_ForcedEndSerach_C.ReceiveBeginPlay");

	ABP_ForcedEndSerach_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ForcedEndSerach.BP_ForcedEndSerach_C.ExecuteUbergraph_BP_ForcedEndSerach
// (NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ForcedEndSerach_C::STATIC_ExecuteUbergraph_BP_ForcedEndSerach(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForcedEndSerach.BP_ForcedEndSerach_C.ExecuteUbergraph_BP_ForcedEndSerach");

	ABP_ForcedEndSerach_C_ExecuteUbergraph_BP_ForcedEndSerach_Params params;
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

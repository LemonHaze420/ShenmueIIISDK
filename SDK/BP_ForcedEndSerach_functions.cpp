
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
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ForcedEndSerach_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForcedEndSerach.BP_ForcedEndSerach_C.UserConstructionScript");

	ABP_ForcedEndSerach_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ForcedEndSerach.BP_ForcedEndSerach_C.EvtFreeState
// (BlueprintCallable, BlueprintEvent)

void ABP_ForcedEndSerach_C::EvtFreeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForcedEndSerach.BP_ForcedEndSerach_C.EvtFreeState");

	ABP_ForcedEndSerach_C_EvtFreeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ForcedEndSerach.BP_ForcedEndSerach_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ForcedEndSerach_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForcedEndSerach.BP_ForcedEndSerach_C.ReceiveBeginPlay");

	ABP_ForcedEndSerach_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ForcedEndSerach.BP_ForcedEndSerach_C.ExecuteUbergraph_BP_ForcedEndSerach
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ForcedEndSerach_C::ExecuteUbergraph_BP_ForcedEndSerach(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForcedEndSerach.BP_ForcedEndSerach_C.ExecuteUbergraph_BP_ForcedEndSerach");

	ABP_ForcedEndSerach_C_ExecuteUbergraph_BP_ForcedEndSerach_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

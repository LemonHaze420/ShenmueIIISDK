
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

// Function BP_State_LookAtLead.BP_State_LookAtLead_C.IsInitializeState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtLead_C::IsInitializeState(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtLead.BP_State_LookAtLead_C.IsInitializeState");

	UBP_State_LookAtLead_C_IsInitializeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_State_LookAtLead.BP_State_LookAtLead_C.StateOnInitialize
// (Event, Public, BlueprintEvent)

void UBP_State_LookAtLead_C::StateOnInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtLead.BP_State_LookAtLead_C.StateOnInitialize");

	UBP_State_LookAtLead_C_StateOnInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_LookAtLead.BP_State_LookAtLead_C.ExecuteUbergraph_BP_State_LookAtLead
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtLead_C::ExecuteUbergraph_BP_State_LookAtLead(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtLead.BP_State_LookAtLead_C.ExecuteUbergraph_BP_State_LookAtLead");

	UBP_State_LookAtLead_C_ExecuteUbergraph_BP_State_LookAtLead_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

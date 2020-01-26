
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

// Function BP_State_Follow_UsePOI.BP_State_Follow_UsePOI_C.StateEnter
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProcessing                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_UsePOI_C::StateEnter(float Delta, bool* bProcessing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_UsePOI.BP_State_Follow_UsePOI_C.StateEnter");

	UBP_State_Follow_UsePOI_C_StateEnter_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bProcessing != nullptr)
		*bProcessing = params.bProcessing;
}


// Function BP_State_Follow_UsePOI.BP_State_Follow_UsePOI_C.StateUpdate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDummy                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_UsePOI_C::StateUpdate(float Delta, bool* bDummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_UsePOI.BP_State_Follow_UsePOI_C.StateUpdate");

	UBP_State_Follow_UsePOI_C_StateUpdate_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDummy != nullptr)
		*bDummy = params.bDummy;
}


// Function BP_State_Follow_UsePOI.BP_State_Follow_UsePOI_C.UpdateTransitions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_UsePOI_C::UpdateTransitions(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_UsePOI.BP_State_Follow_UsePOI_C.UpdateTransitions");

	UBP_State_Follow_UsePOI_C_UpdateTransitions_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_Follow_UsePOI.BP_State_Follow_UsePOI_C.ExecuteUbergraph_BP_State_Follow_UsePOI
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_UsePOI_C::ExecuteUbergraph_BP_State_Follow_UsePOI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_UsePOI.BP_State_Follow_UsePOI_C.ExecuteUbergraph_BP_State_Follow_UsePOI");

	UBP_State_Follow_UsePOI_C_ExecuteUbergraph_BP_State_Follow_UsePOI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

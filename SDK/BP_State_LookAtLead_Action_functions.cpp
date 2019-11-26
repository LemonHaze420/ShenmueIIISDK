
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

// Function BP_State_LookAtLead_Action.BP_State_LookAtLead_Action_C.SetSpline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*        spline                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_State_LookAtLead_Action_C::SetSpline(class USplineComponent* spline)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtLead_Action.BP_State_LookAtLead_Action_C.SetSpline");

	UBP_State_LookAtLead_Action_C_SetSpline_Params params;
	params.spline = spline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_LookAtLead_Action.BP_State_LookAtLead_Action_C.LookAtSpline
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bLookAt                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtLead_Action_C::LookAtSpline(bool bLookAt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtLead_Action.BP_State_LookAtLead_Action_C.LookAtSpline");

	UBP_State_LookAtLead_Action_C_LookAtSpline_Params params;
	params.bLookAt = bLookAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_LookAtLead_Action.BP_State_LookAtLead_Action_C.StateExit
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProcessing                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtLead_Action_C::StateExit(float Delta, bool* bProcessing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtLead_Action.BP_State_LookAtLead_Action_C.StateExit");

	UBP_State_LookAtLead_Action_C_StateExit_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bProcessing != nullptr)
		*bProcessing = params.bProcessing;
}


// Function BP_State_LookAtLead_Action.BP_State_LookAtLead_Action_C.StateEnter
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProcessing                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtLead_Action_C::StateEnter(float Delta, bool* bProcessing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtLead_Action.BP_State_LookAtLead_Action_C.StateEnter");

	UBP_State_LookAtLead_Action_C_StateEnter_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bProcessing != nullptr)
		*bProcessing = params.bProcessing;
}


// Function BP_State_LookAtLead_Action.BP_State_LookAtLead_Action_C.StateUpdate
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDummy                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtLead_Action_C::StateUpdate(float Delta, bool* bDummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtLead_Action.BP_State_LookAtLead_Action_C.StateUpdate");

	UBP_State_LookAtLead_Action_C_StateUpdate_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDummy != nullptr)
		*bDummy = params.bDummy;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

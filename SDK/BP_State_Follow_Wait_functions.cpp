
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

// Function BP_State_Follow_Wait.BP_State_Follow_Wait_C.FindNearbyRoadLocation
// (Net, Exec, Static, Public, Protected, Delegate, NetServer, NetClient, DLLImport)
// Parameters:
// struct FVector                 ProjectedLocation              (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_State_Follow_Wait_C::STATIC_FindNearbyRoadLocation(struct FVector* ProjectedLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_Wait.BP_State_Follow_Wait_C.FindNearbyRoadLocation");

	UBP_State_Follow_Wait_C_FindNearbyRoadLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProjectedLocation != nullptr)
		*ProjectedLocation = params.ProjectedLocation;

	return params.ReturnValue;
}


// Function BP_State_Follow_Wait.BP_State_Follow_Wait_C.StateEnter
// (Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProcessing                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_Wait_C::STATIC_StateEnter(float Delta, bool* bProcessing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_Wait.BP_State_Follow_Wait_C.StateEnter");

	UBP_State_Follow_Wait_C_StateEnter_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bProcessing != nullptr)
		*bProcessing = params.bProcessing;
}


// Function BP_State_Follow_Wait.BP_State_Follow_Wait_C.StateExit
// (NetRequest, NetResponse, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProcessing                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_Wait_C::StateExit(float Delta, bool* bProcessing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_Wait.BP_State_Follow_Wait_C.StateExit");

	UBP_State_Follow_Wait_C_StateExit_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bProcessing != nullptr)
		*bProcessing = params.bProcessing;
}


// Function BP_State_Follow_Wait.BP_State_Follow_Wait_C.StateUpdate
// (NetReliable, NetRequest, Exec, Native, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDummy                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_Wait_C::StateUpdate(float Delta, bool* bDummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_Wait.BP_State_Follow_Wait_C.StateUpdate");

	UBP_State_Follow_Wait_C_StateUpdate_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDummy != nullptr)
		*bDummy = params.bDummy;
}


// Function BP_State_Follow_Wait.BP_State_Follow_Wait_C.UpdateTransitions
// (NetReliable, NetRequest, Native, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_Wait_C::UpdateTransitions(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_Wait.BP_State_Follow_Wait_C.UpdateTransitions");

	UBP_State_Follow_Wait_C_UpdateTransitions_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_Follow_Wait.BP_State_Follow_Wait_C.ExecuteUbergraph_BP_State_Follow_Wait
// (Net, NetRequest, Native, Event, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_Wait_C::ExecuteUbergraph_BP_State_Follow_Wait(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_Wait.BP_State_Follow_Wait_C.ExecuteUbergraph_BP_State_Follow_Wait");

	UBP_State_Follow_Wait_C_ExecuteUbergraph_BP_State_Follow_Wait_Params params;
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

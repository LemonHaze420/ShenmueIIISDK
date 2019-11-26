
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

// Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.StateExit
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProcessing                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_GotoPOI_C::StateExit(float Delta, bool* bProcessing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.StateExit");

	UBP_State_Follow_GotoPOI_C_StateExit_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bProcessing != nullptr)
		*bProcessing = params.bProcessing;
}


// Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.MoveStateEnter
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDummy                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_GotoPOI_C::MoveStateEnter(bool* bDummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.MoveStateEnter");

	UBP_State_Follow_GotoPOI_C_MoveStateEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDummy != nullptr)
		*bDummy = params.bDummy;
}


// Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.GetPathfindTarget
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)
// class AActor*                  OutActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_GotoPOI_C::GetPathfindTarget(struct FVector* OutLocation, class AActor** OutActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.GetPathfindTarget");

	UBP_State_Follow_GotoPOI_C_GetPathfindTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutActor != nullptr)
		*OutActor = params.OutActor;
}


// Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.StateEnter
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProcessing                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_GotoPOI_C::StateEnter(float Delta, bool* bProcessing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.StateEnter");

	UBP_State_Follow_GotoPOI_C_StateEnter_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bProcessing != nullptr)
		*bProcessing = params.bProcessing;
}


// Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.StateUpdate
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDummy                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_GotoPOI_C::StateUpdate(float Delta, bool* bDummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.StateUpdate");

	UBP_State_Follow_GotoPOI_C_StateUpdate_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDummy != nullptr)
		*bDummy = params.bDummy;
}


// Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.CancelPath
// (BlueprintCallable, BlueprintEvent)

void UBP_State_Follow_GotoPOI_C::CancelPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.CancelPath");

	UBP_State_Follow_GotoPOI_C_CancelPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.UpdateTransitions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_GotoPOI_C::UpdateTransitions(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.UpdateTransitions");

	UBP_State_Follow_GotoPOI_C_UpdateTransitions_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.FinishPath
// (BlueprintCallable, BlueprintEvent)

void UBP_State_Follow_GotoPOI_C::FinishPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.FinishPath");

	UBP_State_Follow_GotoPOI_C_FinishPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.ExecuteUbergraph_BP_State_Follow_GotoPOI
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_GotoPOI_C::ExecuteUbergraph_BP_State_Follow_GotoPOI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.ExecuteUbergraph_BP_State_Follow_GotoPOI");

	UBP_State_Follow_GotoPOI_C_ExecuteUbergraph_BP_State_Follow_GotoPOI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

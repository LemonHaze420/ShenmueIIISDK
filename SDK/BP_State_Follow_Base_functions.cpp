
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

// Function BP_State_Follow_Base.BP_State_Follow_Base_C.GetPawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_NPC_Lead_C*          Pawn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_Base_C::GetPawn(class ABP_NPC_Lead_C** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_Base.BP_State_Follow_Base_C.GetPawn");

	UBP_State_Follow_Base_C_GetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pawn != nullptr)
		*Pawn = params.Pawn;
}


// Function BP_State_Follow_Base.BP_State_Follow_Base_C.IsDebugDrawingEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           DrawDebug                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_Base_C::IsDebugDrawingEnabled(bool* DrawDebug)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_Base.BP_State_Follow_Base_C.IsDebugDrawingEnabled");

	UBP_State_Follow_Base_C_IsDebugDrawingEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DrawDebug != nullptr)
		*DrawDebug = params.DrawDebug;
}


// Function BP_State_Follow_Base.BP_State_Follow_Base_C.UpdateTransitions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_Base_C::UpdateTransitions(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_Base.BP_State_Follow_Base_C.UpdateTransitions");

	UBP_State_Follow_Base_C_UpdateTransitions_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_Follow_Base.BP_State_Follow_Base_C.IsCurrentState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsCurrent                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_Base_C::IsCurrentState(bool* bIsCurrent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_Base.BP_State_Follow_Base_C.IsCurrentState");

	UBP_State_Follow_Base_C_IsCurrentState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsCurrent != nullptr)
		*bIsCurrent = params.bIsCurrent;
}


// Function BP_State_Follow_Base.BP_State_Follow_Base_C.StateOnInitialize
// (Event, Public, BlueprintEvent)

void UBP_State_Follow_Base_C::StateOnInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_Base.BP_State_Follow_Base_C.StateOnInitialize");

	UBP_State_Follow_Base_C_StateOnInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_Follow_Base.BP_State_Follow_Base_C.ExecuteUbergraph_BP_State_Follow_Base
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_Base_C::ExecuteUbergraph_BP_State_Follow_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_Base.BP_State_Follow_Base_C.ExecuteUbergraph_BP_State_Follow_Base");

	UBP_State_Follow_Base_C_ExecuteUbergraph_BP_State_Follow_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

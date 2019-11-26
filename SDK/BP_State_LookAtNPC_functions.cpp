
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

// Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.IsNPCLocomotionAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bReturnValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtNPC_C::IsNPCLocomotionAnimation(bool* bReturnValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.IsNPCLocomotionAnimation");

	UBP_State_LookAtNPC_C_IsNPCLocomotionAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bReturnValue != nullptr)
		*bReturnValue = params.bReturnValue;
}


// Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.IsNPCLocomotionSit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bReturnValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtNPC_C::IsNPCLocomotionSit(bool* bReturnValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.IsNPCLocomotionSit");

	UBP_State_LookAtNPC_C_IsNPCLocomotionSit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bReturnValue != nullptr)
		*bReturnValue = params.bReturnValue;
}


// Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.IsNPCLocomotionWalk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bReturnValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtNPC_C::IsNPCLocomotionWalk(bool* bReturnValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.IsNPCLocomotionWalk");

	UBP_State_LookAtNPC_C_IsNPCLocomotionWalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bReturnValue != nullptr)
		*bReturnValue = params.bReturnValue;
}


// Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.IsNPCLocomotionIdle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bReturnValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtNPC_C::IsNPCLocomotionIdle(bool* bReturnValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.IsNPCLocomotionIdle");

	UBP_State_LookAtNPC_C_IsNPCLocomotionIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bReturnValue != nullptr)
		*bReturnValue = params.bReturnValue;
}


// Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.IsInitializeState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtNPC_C::IsInitializeState(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.IsInitializeState");

	UBP_State_LookAtNPC_C_IsInitializeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.StateOnInitialize
// (Event, Public, BlueprintEvent)

void UBP_State_LookAtNPC_C::StateOnInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.StateOnInitialize");

	UBP_State_LookAtNPC_C_StateOnInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.Setup
// (BlueprintCallable, BlueprintEvent)

void UBP_State_LookAtNPC_C::Setup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.Setup");

	UBP_State_LookAtNPC_C_Setup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.ExecuteUbergraph_BP_State_LookAtNPC
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtNPC_C::ExecuteUbergraph_BP_State_LookAtNPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.ExecuteUbergraph_BP_State_LookAtNPC");

	UBP_State_LookAtNPC_C_ExecuteUbergraph_BP_State_LookAtNPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

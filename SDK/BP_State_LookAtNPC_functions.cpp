
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
// (Net, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bReturnValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtNPC_C::STATIC_IsNPCLocomotionAnimation(bool* bReturnValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.IsNPCLocomotionAnimation");

	UBP_State_LookAtNPC_C_IsNPCLocomotionAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bReturnValue != nullptr)
		*bReturnValue = params.bReturnValue;
}


// Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.IsNPCLocomotionSit
// (NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bReturnValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtNPC_C::STATIC_IsNPCLocomotionSit(bool* bReturnValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.IsNPCLocomotionSit");

	UBP_State_LookAtNPC_C_IsNPCLocomotionSit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bReturnValue != nullptr)
		*bReturnValue = params.bReturnValue;
}


// Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.IsNPCLocomotionWalk
// (Exec, Event, NetResponse, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
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
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bReturnValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtNPC_C::STATIC_IsNPCLocomotionIdle(bool* bReturnValue)
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
// (NetReliable, NetRequest, Exec, Native, Event, Public, Private, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtNPC_C::IsInitializeState(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.IsInitializeState");

	UBP_State_LookAtNPC_C_IsInitializeState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.StateOnInitialize
// (NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void UBP_State_LookAtNPC_C::StateOnInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.StateOnInitialize");

	UBP_State_LookAtNPC_C_StateOnInitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.Setup
// (Net, Exec, Event, NetResponse, Static, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void UBP_State_LookAtNPC_C::STATIC_Setup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.Setup");

	UBP_State_LookAtNPC_C_Setup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.ExecuteUbergraph_BP_State_LookAtNPC
// (Exec, Native, Event, Static, Public, Private, Delegate, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtNPC_C::STATIC_ExecuteUbergraph_BP_State_LookAtNPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtNPC.BP_State_LookAtNPC_C.ExecuteUbergraph_BP_State_LookAtNPC");

	UBP_State_LookAtNPC_C_ExecuteUbergraph_BP_State_LookAtNPC_Params params;
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


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

// Function BP_State_LookAtPlayer_NPC.BP_State_LookAtPlayer_NPC_C.GetInteractActor
// (Net, NetRequest, Exec, Event, Static, NetMulticast, Public, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtPlayer_NPC_C::STATIC_GetInteractActor(int InIndex, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtPlayer_NPC.BP_State_LookAtPlayer_NPC_C.GetInteractActor");

	UBP_State_LookAtPlayer_NPC_C_GetInteractActor_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_State_LookAtPlayer_NPC.BP_State_LookAtPlayer_NPC_C.StateExit
// (Net, Exec, Native, NetResponse, Static, NetMulticast, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProcessing                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtPlayer_NPC_C::STATIC_StateExit(float Delta, bool* bProcessing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtPlayer_NPC.BP_State_LookAtPlayer_NPC_C.StateExit");

	UBP_State_LookAtPlayer_NPC_C_StateExit_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bProcessing != nullptr)
		*bProcessing = params.bProcessing;
}


// Function BP_State_LookAtPlayer_NPC.BP_State_LookAtPlayer_NPC_C.StateEnter
// (Net, NetRequest, Native, NetResponse, Private, Delegate, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProcessing                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtPlayer_NPC_C::StateEnter(float Delta, bool* bProcessing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtPlayer_NPC.BP_State_LookAtPlayer_NPC_C.StateEnter");

	UBP_State_LookAtPlayer_NPC_C_StateEnter_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bProcessing != nullptr)
		*bProcessing = params.bProcessing;
}


// Function BP_State_LookAtPlayer_NPC.BP_State_LookAtPlayer_NPC_C.StateUpdate
// (NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDummy                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtPlayer_NPC_C::StateUpdate(float Delta, bool* bDummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtPlayer_NPC.BP_State_LookAtPlayer_NPC_C.StateUpdate");

	UBP_State_LookAtPlayer_NPC_C_StateUpdate_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDummy != nullptr)
		*bDummy = params.bDummy;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

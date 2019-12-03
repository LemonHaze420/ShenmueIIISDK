
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

// Function BP_State_LookAtNPC_Talk.BP_State_LookAtNPC_Talk_C.CheckBody
// (Net, NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, BlueprintPure)

void UBP_State_LookAtNPC_Talk_C::CheckBody()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtNPC_Talk.BP_State_LookAtNPC_Talk_C.CheckBody");

	UBP_State_LookAtNPC_Talk_C_CheckBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_LookAtNPC_Talk.BP_State_LookAtNPC_Talk_C.StateEnter
// (NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProcessing                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtNPC_Talk_C::STATIC_StateEnter(float Delta, bool* bProcessing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtNPC_Talk.BP_State_LookAtNPC_Talk_C.StateEnter");

	UBP_State_LookAtNPC_Talk_C_StateEnter_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bProcessing != nullptr)
		*bProcessing = params.bProcessing;
}


// Function BP_State_LookAtNPC_Talk.BP_State_LookAtNPC_Talk_C.StateExit
// (Net, Event, NetMulticast, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProcessing                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtNPC_Talk_C::StateExit(float Delta, bool* bProcessing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtNPC_Talk.BP_State_LookAtNPC_Talk_C.StateExit");

	UBP_State_LookAtNPC_Talk_C_StateExit_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bProcessing != nullptr)
		*bProcessing = params.bProcessing;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

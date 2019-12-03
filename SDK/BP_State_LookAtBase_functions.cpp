
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

// Function BP_State_LookAtBase.BP_State_LookAtBase_C.ResetLookAtParamater
// (NetReliable, NetRequest, Exec, Static, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bResetTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtBase_C::STATIC_ResetLookAtParamater(bool bResetTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtBase.BP_State_LookAtBase_C.ResetLookAtParamater");

	UBP_State_LookAtBase_C_ResetLookAtParamater_Params params;
	params.bResetTarget = bResetTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_LookAtBase.BP_State_LookAtBase_C.GetStateOwner
// (Net, Event, NetResponse, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtBase_C::GetStateOwner(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtBase.BP_State_LookAtBase_C.GetStateOwner");

	UBP_State_LookAtBase_C_GetStateOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OwnerActor != nullptr)
		*OwnerActor = params.OwnerActor;
}


// Function BP_State_LookAtBase.BP_State_LookAtBase_C.StateOnInitialize
// (Net, Exec, Event, NetResponse, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBP_State_LookAtBase_C::STATIC_StateOnInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtBase.BP_State_LookAtBase_C.StateOnInitialize");

	UBP_State_LookAtBase_C_StateOnInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_LookAtBase.BP_State_LookAtBase_C.ExecuteUbergraph_BP_State_LookAtBase
// (Net, NetReliable, NetRequest, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_State_LookAtBase_C::ExecuteUbergraph_BP_State_LookAtBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_LookAtBase.BP_State_LookAtBase_C.ExecuteUbergraph_BP_State_LookAtBase");

	UBP_State_LookAtBase_C_ExecuteUbergraph_BP_State_LookAtBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

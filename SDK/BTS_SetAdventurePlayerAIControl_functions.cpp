
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

// Function BTS_SetAdventurePlayerAIControl.BTS_SetAdventurePlayerAIControl_C.ReceiveDeactivationAI
// (Native, Static, NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTS_SetAdventurePlayerAIControl_C::STATIC_ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_SetAdventurePlayerAIControl.BTS_SetAdventurePlayerAIControl_C.ReceiveDeactivationAI");

	UBTS_SetAdventurePlayerAIControl_C_ReceiveDeactivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTS_SetAdventurePlayerAIControl.BTS_SetAdventurePlayerAIControl_C.ReceiveActivationAI
// (Net, Exec, Native, Static, NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTS_SetAdventurePlayerAIControl_C::STATIC_ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_SetAdventurePlayerAIControl.BTS_SetAdventurePlayerAIControl_C.ReceiveActivationAI");

	UBTS_SetAdventurePlayerAIControl_C_ReceiveActivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTS_SetAdventurePlayerAIControl.BTS_SetAdventurePlayerAIControl_C.ExecuteUbergraph_BTS_SetAdventurePlayerAIControl
// (NetReliable, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTS_SetAdventurePlayerAIControl_C::ExecuteUbergraph_BTS_SetAdventurePlayerAIControl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_SetAdventurePlayerAIControl.BTS_SetAdventurePlayerAIControl_C.ExecuteUbergraph_BTS_SetAdventurePlayerAIControl");

	UBTS_SetAdventurePlayerAIControl_C_ExecuteUbergraph_BTS_SetAdventurePlayerAIControl_Params params;
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


#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BTS_SetAdventurePlayerAIControl.BTS_SetAdventurePlayerAIControl_C.ReceiveDeactivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTS_SetAdventurePlayerAIControl_C::ReceiveDeactivationAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_SetAdventurePlayerAIControl.BTS_SetAdventurePlayerAIControl_C.ReceiveDeactivationAI");

	UBTS_SetAdventurePlayerAIControl_C_ReceiveDeactivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTS_SetAdventurePlayerAIControl.BTS_SetAdventurePlayerAIControl_C.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTS_SetAdventurePlayerAIControl_C::ReceiveActivationAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_SetAdventurePlayerAIControl.BTS_SetAdventurePlayerAIControl_C.ReceiveActivationAI");

	UBTS_SetAdventurePlayerAIControl_C_ReceiveActivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTS_SetAdventurePlayerAIControl.BTS_SetAdventurePlayerAIControl_C.ExecuteUbergraph_BTS_SetAdventurePlayerAIControl
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTS_SetAdventurePlayerAIControl_C::ExecuteUbergraph_BTS_SetAdventurePlayerAIControl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_SetAdventurePlayerAIControl.BTS_SetAdventurePlayerAIControl_C.ExecuteUbergraph_BTS_SetAdventurePlayerAIControl");

	UBTS_SetAdventurePlayerAIControl_C_ExecuteUbergraph_BTS_SetAdventurePlayerAIControl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

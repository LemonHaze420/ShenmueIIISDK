
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

// Function BTT_InterpSpeed.BTT_InterpSpeed_C.ReceiveTickAI
// (Net, NetRequest, Private, HasOutParms, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_InterpSpeed_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_InterpSpeed.BTT_InterpSpeed_C.ReceiveTickAI");

	UBTT_InterpSpeed_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_InterpSpeed.BTT_InterpSpeed_C.ReceiveExecuteAI
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_InterpSpeed_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_InterpSpeed.BTT_InterpSpeed_C.ReceiveExecuteAI");

	UBTT_InterpSpeed_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_InterpSpeed.BTT_InterpSpeed_C.ExecuteUbergraph_BTT_InterpSpeed
// (Net, NetReliable, Native, Static, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_InterpSpeed_C::STATIC_ExecuteUbergraph_BTT_InterpSpeed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_InterpSpeed.BTT_InterpSpeed_C.ExecuteUbergraph_BTT_InterpSpeed");

	UBTT_InterpSpeed_C_ExecuteUbergraph_BTT_InterpSpeed_Params params;
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

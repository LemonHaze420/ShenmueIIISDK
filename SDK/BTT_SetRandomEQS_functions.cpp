
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

// Function BTT_SetRandomEQS.BTT_SetRandomEQS_C.ReceiveExecuteAI
// (Net, Exec, Native, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_SetRandomEQS_C::STATIC_ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_SetRandomEQS.BTT_SetRandomEQS_C.ReceiveExecuteAI");

	UBTT_SetRandomEQS_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_SetRandomEQS.BTT_SetRandomEQS_C.ExecuteUbergraph_BTT_SetRandomEQS
// (NetReliable, Static, NetMulticast, Public, Delegate, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_SetRandomEQS_C::STATIC_ExecuteUbergraph_BTT_SetRandomEQS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_SetRandomEQS.BTT_SetRandomEQS_C.ExecuteUbergraph_BTT_SetRandomEQS");

	UBTT_SetRandomEQS_C_ExecuteUbergraph_BTT_SetRandomEQS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

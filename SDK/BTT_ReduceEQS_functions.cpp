
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

// Function BTT_ReduceEQS.BTT_ReduceEQS_C.ReceiveExecuteAI
// (Exec, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_ReduceEQS_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_ReduceEQS.BTT_ReduceEQS_C.ReceiveExecuteAI");

	UBTT_ReduceEQS_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_ReduceEQS.BTT_ReduceEQS_C.ExecuteUbergraph_BTT_ReduceEQS
// (NetReliable, Exec, MulticastDelegate, Protected, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_ReduceEQS_C::ExecuteUbergraph_BTT_ReduceEQS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_ReduceEQS.BTT_ReduceEQS_C.ExecuteUbergraph_BTT_ReduceEQS");

	UBTT_ReduceEQS_C_ExecuteUbergraph_BTT_ReduceEQS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

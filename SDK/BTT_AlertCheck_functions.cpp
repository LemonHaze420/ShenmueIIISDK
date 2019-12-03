
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

// Function BTT_AlertCheck.BTT_AlertCheck_C.ReceiveExecuteAI
// (Net, NetReliable, NetRequest, Event, Static, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_AlertCheck_C::STATIC_ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_AlertCheck.BTT_AlertCheck_C.ReceiveExecuteAI");

	UBTT_AlertCheck_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_AlertCheck.BTT_AlertCheck_C.ExecuteUbergraph_BTT_AlertCheck
// (NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_AlertCheck_C::STATIC_ExecuteUbergraph_BTT_AlertCheck(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_AlertCheck.BTT_AlertCheck_C.ExecuteUbergraph_BTT_AlertCheck");

	UBTT_AlertCheck_C_ExecuteUbergraph_BTT_AlertCheck_Params params;
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


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

// Function BTT_SetUsualSpeed.BTT_SetUsualSpeed_C.ReceiveExecuteAI
// (Net, NetReliable, NetRequest, Event, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_SetUsualSpeed_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_SetUsualSpeed.BTT_SetUsualSpeed_C.ReceiveExecuteAI");

	UBTT_SetUsualSpeed_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_SetUsualSpeed.BTT_SetUsualSpeed_C.ExecuteUbergraph_BTT_SetUsualSpeed
// (Net, Exec, Native, Event, NetResponse, NetMulticast, Public, Delegate, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_SetUsualSpeed_C::ExecuteUbergraph_BTT_SetUsualSpeed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_SetUsualSpeed.BTT_SetUsualSpeed_C.ExecuteUbergraph_BTT_SetUsualSpeed");

	UBTT_SetUsualSpeed_C_ExecuteUbergraph_BTT_SetUsualSpeed_Params params;
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

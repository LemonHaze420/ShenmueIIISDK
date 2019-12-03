
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

// Function BTT_SetNeedGenerate.BTT_SetNeedGenerate_C.ReceiveExecuteAI
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_SetNeedGenerate_C::STATIC_ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_SetNeedGenerate.BTT_SetNeedGenerate_C.ReceiveExecuteAI");

	UBTT_SetNeedGenerate_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_SetNeedGenerate.BTT_SetNeedGenerate_C.ExecuteUbergraph_BTT_SetNeedGenerate
// (Net, NetReliable, NetRequest, Exec, NetResponse, Private, HasDefaults, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_SetNeedGenerate_C::ExecuteUbergraph_BTT_SetNeedGenerate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_SetNeedGenerate.BTT_SetNeedGenerate_C.ExecuteUbergraph_BTT_SetNeedGenerate");

	UBTT_SetNeedGenerate_C_ExecuteUbergraph_BTT_SetNeedGenerate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

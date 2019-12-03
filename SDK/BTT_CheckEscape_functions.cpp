
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

// Function BTT_CheckEscape.BTT_CheckEscape_C.ReceiveTickAI
// (Exec, Private, HasOutParms, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_CheckEscape_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_CheckEscape.BTT_CheckEscape_C.ReceiveTickAI");

	UBTT_CheckEscape_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_CheckEscape.BTT_CheckEscape_C.ReceiveExecuteAI
// (Net, NetRequest, Exec, Static, Public, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_CheckEscape_C::STATIC_ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_CheckEscape.BTT_CheckEscape_C.ReceiveExecuteAI");

	UBTT_CheckEscape_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_CheckEscape.BTT_CheckEscape_C.ExecuteUbergraph_BTT_CheckEscape
// (Net, NetReliable, NetRequest, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_CheckEscape_C::ExecuteUbergraph_BTT_CheckEscape(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_CheckEscape.BTT_CheckEscape_C.ExecuteUbergraph_BTT_CheckEscape");

	UBTT_CheckEscape_C_ExecuteUbergraph_BTT_CheckEscape_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

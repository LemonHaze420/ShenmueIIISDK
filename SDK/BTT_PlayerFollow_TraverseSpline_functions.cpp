
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

// Function BTT_PlayerFollow_TraverseSpline.BTT_PlayerFollow_TraverseSpline_C.Finish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayerFollow_TraverseSpline_C::Finish(bool Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_TraverseSpline.BTT_PlayerFollow_TraverseSpline_C.Finish");

	UBTT_PlayerFollow_TraverseSpline_C_Finish_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayerFollow_TraverseSpline.BTT_PlayerFollow_TraverseSpline_C.IsPlayerInsideSpline
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Buffer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTT_PlayerFollow_TraverseSpline_C::IsPlayerInsideSpline(float Buffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_TraverseSpline.BTT_PlayerFollow_TraverseSpline_C.IsPlayerInsideSpline");

	UBTT_PlayerFollow_TraverseSpline_C_IsPlayerInsideSpline_Params params;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BTT_PlayerFollow_TraverseSpline.BTT_PlayerFollow_TraverseSpline_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayerFollow_TraverseSpline_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_TraverseSpline.BTT_PlayerFollow_TraverseSpline_C.ReceiveExecuteAI");

	UBTT_PlayerFollow_TraverseSpline_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayerFollow_TraverseSpline.BTT_PlayerFollow_TraverseSpline_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayerFollow_TraverseSpline_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_TraverseSpline.BTT_PlayerFollow_TraverseSpline_C.ReceiveAbortAI");

	UBTT_PlayerFollow_TraverseSpline_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayerFollow_TraverseSpline.BTT_PlayerFollow_TraverseSpline_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayerFollow_TraverseSpline_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_TraverseSpline.BTT_PlayerFollow_TraverseSpline_C.ReceiveTickAI");

	UBTT_PlayerFollow_TraverseSpline_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayerFollow_TraverseSpline.BTT_PlayerFollow_TraverseSpline_C.ExecuteUbergraph_BTT_PlayerFollow_TraverseSpline
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayerFollow_TraverseSpline_C::ExecuteUbergraph_BTT_PlayerFollow_TraverseSpline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_TraverseSpline.BTT_PlayerFollow_TraverseSpline_C.ExecuteUbergraph_BTT_PlayerFollow_TraverseSpline");

	UBTT_PlayerFollow_TraverseSpline_C_ExecuteUbergraph_BTT_PlayerFollow_TraverseSpline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

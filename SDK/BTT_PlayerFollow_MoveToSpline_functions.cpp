
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

// Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.UpdateClosestSplinePoint
// (NetRequest, Exec, Event, Static, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)

void UBTT_PlayerFollow_MoveToSpline_C::STATIC_UpdateClosestSplinePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.UpdateClosestSplinePoint");

	UBTT_PlayerFollow_MoveToSpline_C_UpdateClosestSplinePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.UpdateClosestSplineDistance
// (Net, Event, NetMulticast, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UBTT_PlayerFollow_MoveToSpline_C::UpdateClosestSplineDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.UpdateClosestSplineDistance");

	UBTT_PlayerFollow_MoveToSpline_C_UpdateClosestSplineDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.StopPathing
// (NetRequest, Exec, Native, Event, Static, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBTT_PlayerFollow_MoveToSpline_C::STATIC_StopPathing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.StopPathing");

	UBTT_PlayerFollow_MoveToSpline_C_StopPathing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.Finish
// (NetReliable, Exec, Event, NetResponse, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, Const)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayerFollow_MoveToSpline_C::Finish(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.Finish");

	UBTT_PlayerFollow_MoveToSpline_C_Finish_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.IsPlayerInSpline
// (Net, NetResponse, Static, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Buffer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTT_PlayerFollow_MoveToSpline_C::STATIC_IsPlayerInSpline(float Buffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.IsPlayerInSpline");

	UBTT_PlayerFollow_MoveToSpline_C_IsPlayerInSpline_Params params;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.OnFail_227D29014046C8BB113903BF06DFD651
// (Exec, Event, NetResponse, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, Const)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayerFollow_MoveToSpline_C::OnFail_227D29014046C8BB113903BF06DFD651(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.OnFail_227D29014046C8BB113903BF06DFD651");

	UBTT_PlayerFollow_MoveToSpline_C_OnFail_227D29014046C8BB113903BF06DFD651_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.OnSuccess_227D29014046C8BB113903BF06DFD651
// (NetReliable, Exec, Event, NetResponse, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, Const)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayerFollow_MoveToSpline_C::OnSuccess_227D29014046C8BB113903BF06DFD651(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.OnSuccess_227D29014046C8BB113903BF06DFD651");

	UBTT_PlayerFollow_MoveToSpline_C_OnSuccess_227D29014046C8BB113903BF06DFD651_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.ReceiveAbortAI
// (Net, NetReliable, NetRequest, Exec, Static, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayerFollow_MoveToSpline_C::STATIC_ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.ReceiveAbortAI");

	UBTT_PlayerFollow_MoveToSpline_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.ReceiveTickAI
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayerFollow_MoveToSpline_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.ReceiveTickAI");

	UBTT_PlayerFollow_MoveToSpline_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.WaitAndRepath
// (Net, NetReliable, Exec, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UBTT_PlayerFollow_MoveToSpline_C::WaitAndRepath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.WaitAndRepath");

	UBTT_PlayerFollow_MoveToSpline_C_WaitAndRepath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.ReceiveExecuteAI
// (Net, NetReliable, Exec, NetResponse, MulticastDelegate, Protected, HasOutParms, NetClient, DLLImport)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayerFollow_MoveToSpline_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.ReceiveExecuteAI");

	UBTT_PlayerFollow_MoveToSpline_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.ExecuteUbergraph_BTT_PlayerFollow_MoveToSpline
// (Net, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayerFollow_MoveToSpline_C::ExecuteUbergraph_BTT_PlayerFollow_MoveToSpline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.ExecuteUbergraph_BTT_PlayerFollow_MoveToSpline");

	UBTT_PlayerFollow_MoveToSpline_C_ExecuteUbergraph_BTT_PlayerFollow_MoveToSpline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

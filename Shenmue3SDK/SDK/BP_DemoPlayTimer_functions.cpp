
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

// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.IsNeedTimer
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Need                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DemoPlayTimer_C::IsNeedTimer(bool* Need)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.IsNeedTimer");

	ABP_DemoPlayTimer_C_IsNeedTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Need != nullptr)
		*Need = params.Need;
}


// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.CanShowDialog
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CAN                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DemoPlayTimer_C::CanShowDialog(bool Start, bool* CAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.CanShowDialog");

	ABP_DemoPlayTimer_C_CanShowDialog_Params params;
	params.Start = Start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CAN != nullptr)
		*CAN = params.CAN;
}


// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.MakeDialogParam
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_GeneralWindowParam  Param                          (Parm, OutParm)

void ABP_DemoPlayTimer_C::MakeDialogParam(const struct FName& ID, struct FST_GeneralWindowParam* Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.MakeDialogParam");

	ABP_DemoPlayTimer_C_MakeDialogParam_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Param != nullptr)
		*Param = params.Param;
}


// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DemoPlayTimer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.UserConstructionScript");

	ABP_DemoPlayTimer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DemoPlayTimer_C::InpActEvt_BackSpace_K2Node_InputKeyEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_10");

	ABP_DemoPlayTimer_C_InpActEvt_BackSpace_K2Node_InputKeyEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DemoPlayTimer_C::InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_9");

	ABP_DemoPlayTimer_C_InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DemoPlayTimer_C::InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_8");

	ABP_DemoPlayTimer_C_InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DemoPlayTimer_C::InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_7");

	ABP_DemoPlayTimer_C_InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DemoPlayTimer_C::InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_6");

	ABP_DemoPlayTimer_C_InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DemoPlayTimer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.ReceiveBeginPlay");

	ABP_DemoPlayTimer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DemoPlayTimer_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.ReceiveTick");

	ABP_DemoPlayTimer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.CloseDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DemoPlayTimer_C::CloseDialog(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.CloseDialog");

	ABP_DemoPlayTimer_C_CloseDialog_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.ResultDemoPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DemoPlayTimer_C::ResultDemoPlay(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.ResultDemoPlay");

	ABP_DemoPlayTimer_C_ResultDemoPlay_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.WaitStartDialog
// (BlueprintCallable, BlueprintEvent)

void ABP_DemoPlayTimer_C::WaitStartDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.WaitStartDialog");

	ABP_DemoPlayTimer_C_WaitStartDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.StartDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DemoPlayTimer_C::StartDialog(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.StartDialog");

	ABP_DemoPlayTimer_C_StartDialog_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.WaitEndDialog
// (BlueprintCallable, BlueprintEvent)

void ABP_DemoPlayTimer_C::WaitEndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.WaitEndDialog");

	ABP_DemoPlayTimer_C_WaitEndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.DialogDecede
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DemoPlayTimer_C::DialogDecede(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.DialogDecede");

	ABP_DemoPlayTimer_C_DialogDecede_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.DialogCancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DemoPlayTimer_C::DialogCancel(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.DialogCancel");

	ABP_DemoPlayTimer_C_DialogCancel_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DemoPlayTimer_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.ReceiveEndPlay");

	ABP_DemoPlayTimer_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.ChangePlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DemoPlayTimer_C::ChangePlayer(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.ChangePlayer");

	ABP_DemoPlayTimer_C_ChangePlayer_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.ChangeStep
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SetSteps                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DemoPlayTimer_C::ChangeStep(int SetSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.ChangeStep");

	ABP_DemoPlayTimer_C_ChangeStep_Params params;
	params.SetSteps = SetSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.ExecuteUbergraph_BP_DemoPlayTimer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DemoPlayTimer_C::ExecuteUbergraph_BP_DemoPlayTimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DemoPlayTimer.BP_DemoPlayTimer_C.ExecuteUbergraph_BP_DemoPlayTimer");

	ABP_DemoPlayTimer_C_ExecuteUbergraph_BP_DemoPlayTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

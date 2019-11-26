
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

// Function BP_S3MemopadManager.BP_S3MemopadManager_C.GetPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_S3MemopadManager_C::GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.GetPriority");

	ABP_S3MemopadManager_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_S3MemopadManager_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.GetDetectAction");

	ABP_S3MemopadManager_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.CheckOpenMainEventPage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOpenMainEventPage            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3MemopadManager_C::CheckOpenMainEventPage(bool* IsOpenMainEventPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.CheckOpenMainEventPage");

	ABP_S3MemopadManager_C_CheckOpenMainEventPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOpenMainEventPage != nullptr)
		*IsOpenMainEventPage = params.IsOpenMainEventPage;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.GetIsUnreadMainEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUnreadMainEvent              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3MemopadManager_C::GetIsUnreadMainEvent(bool* IsUnreadMainEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.GetIsUnreadMainEvent");

	ABP_S3MemopadManager_C_GetIsUnreadMainEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUnreadMainEvent != nullptr)
		*IsUnreadMainEvent = params.IsUnreadMainEvent;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.GetIsNowSubEventPage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsNowSubEventPage              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3MemopadManager_C::GetIsNowSubEventPage(bool* IsNowSubEventPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.GetIsNowSubEventPage");

	ABP_S3MemopadManager_C_GetIsNowSubEventPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsNowSubEventPage != nullptr)
		*IsNowSubEventPage = params.IsNowSubEventPage;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.GetIsSubEventOngoing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSubEventOngoing              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3MemopadManager_C::GetIsSubEventOngoing(bool* IsSubEventOngoing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.GetIsSubEventOngoing");

	ABP_S3MemopadManager_C_GetIsSubEventOngoing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSubEventOngoing != nullptr)
		*IsSubEventOngoing = params.IsSubEventOngoing;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.CursoFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeIn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3MemopadManager_C::CursoFade(bool FadeIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.CursoFade");

	ABP_S3MemopadManager_C_CursoFade_Params params;
	params.FadeIn = FadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.InitMemoPage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3MemopadManager_C::InitMemoPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.InitMemoPage");

	ABP_S3MemopadManager_C_InitMemoPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.CheckCanUSeMemopad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanUse                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3MemopadManager_C::CheckCanUSeMemopad(bool* CanUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.CheckCanUSeMemopad");

	ABP_S3MemopadManager_C_CheckCanUSeMemopad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanUse != nullptr)
		*CanUse = params.CanUse;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.SetBlink
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3MemopadManager_C::SetBlink()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.SetBlink");

	ABP_S3MemopadManager_C_SetBlink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.IsDetected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsDetected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3MemopadManager_C::IsDetected(bool* IsDetected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.IsDetected");

	ABP_S3MemopadManager_C_IsDetected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDetected != nullptr)
		*IsDetected = params.IsDetected;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C._dbg_print(memoFlags)
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Already                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3MemopadManager_C::_dbg_print_memoFlags_(bool Already)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C._dbg_print(memoFlags)");

	ABP_S3MemopadManager_C__dbg_print_memoFlags__Params params;
	params.Already = Already;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C._dbg_check(memoFlags)
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Already                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         Flags                          (Parm, OutParm, ZeroConstructor)

void ABP_S3MemopadManager_C::_dbg_check_memoFlags_(bool Already, TArray<struct FString>* Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C._dbg_check(memoFlags)");

	ABP_S3MemopadManager_C__dbg_check_memoFlags__Params params;
	params.Already = Already;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Flags != nullptr)
		*Flags = params.Flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.checkEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           nowDisableMemopadEvent         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3MemopadManager_C::checkEvent(bool* nowDisableMemopadEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.checkEvent");

	ABP_S3MemopadManager_C_checkEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (nowDisableMemopadEvent != nullptr)
		*nowDisableMemopadEvent = params.nowDisableMemopadEvent;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.SetDenyFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Deny                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           succes                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3MemopadManager_C::SetDenyFlag(bool Deny, bool* succes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.SetDenyFlag");

	ABP_S3MemopadManager_C_SetDenyFlag_Params params;
	params.Deny = Deny;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (succes != nullptr)
		*succes = params.succes;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.firstAttach
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3MemopadManager_C::firstAttach(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.firstAttach");

	ABP_S3MemopadManager_C_firstAttach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C._dbgPrint(location)
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3MemopadManager_C::_dbgPrint_location_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C._dbgPrint(location)");

	ABP_S3MemopadManager_C__dbgPrint_location__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3MemopadManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.UserConstructionScript");

	ABP_S3MemopadManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3MemopadManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.ReceiveTick");

	ABP_S3MemopadManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3MemopadManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.ReceiveBeginPlay");

	ABP_S3MemopadManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.delayedFirstAttach
// (BlueprintCallable, BlueprintEvent)

void ABP_S3MemopadManager_C::delayedFirstAttach()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.delayedFirstAttach");

	ABP_S3MemopadManager_C_delayedFirstAttach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.doCmd_FirstDetectRetain(memopadManager)
// (BlueprintCallable, BlueprintEvent)

void ABP_S3MemopadManager_C::doCmd_FirstDetectRetain_memopadManager_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.doCmd_FirstDetectRetain(memopadManager)");

	ABP_S3MemopadManager_C_doCmd_FirstDetectRetain_memopadManager__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.delayedRegistCheck(detector)
// (BlueprintCallable, BlueprintEvent)

void ABP_S3MemopadManager_C::delayedRegistCheck_detector_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.delayedRegistCheck(detector)");

	ABP_S3MemopadManager_C_delayedRegistCheck_detector__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.catch_onEndScreenIn
// (BlueprintCallable, BlueprintEvent)

void ABP_S3MemopadManager_C::catch_onEndScreenIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.catch_onEndScreenIn");

	ABP_S3MemopadManager_C_catch_onEndScreenIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.Finalize
// (BlueprintCallable, BlueprintEvent)

void ABP_S3MemopadManager_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.Finalize");

	ABP_S3MemopadManager_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_15
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3MemopadManager_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_15(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_15");

	ABP_S3MemopadManager_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_15_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_19
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3MemopadManager_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_19(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_19");

	ABP_S3MemopadManager_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_19_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.ForceDestroy
// (BlueprintCallable, BlueprintEvent)

void ABP_S3MemopadManager_C::ForceDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.ForceDestroy");

	ABP_S3MemopadManager_C_ForceDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3MemopadManager_C::InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_1");

	ABP_S3MemopadManager_C_InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_3
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3MemopadManager_C::InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_3(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_3");

	ABP_S3MemopadManager_C_InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_3_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.StartMemopad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OpenPageIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3MemopadManager_C::StartMemopad(int OpenPageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.StartMemopad");

	ABP_S3MemopadManager_C_StartMemopad_Params params;
	params.OpenPageIndex = OpenPageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.SetEnable_CancelButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUse                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3MemopadManager_C::SetEnable_CancelButton(bool bUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.SetEnable_CancelButton");

	ABP_S3MemopadManager_C_SetEnable_CancelButton_Params params;
	params.bUse = bUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.SetEnable_NewPageButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Use                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3MemopadManager_C::SetEnable_NewPageButton(bool Use)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.SetEnable_NewPageButton");

	ABP_S3MemopadManager_C_SetEnable_NewPageButton_Params params;
	params.Use = Use;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_5
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3MemopadManager_C::InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_5(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_5");

	ABP_S3MemopadManager_C_InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_5_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.SetEnable_StartEndButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active_StartPage               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Active_EndPage                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3MemopadManager_C::SetEnable_StartEndButton(bool Active_StartPage, bool Active_EndPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.SetEnable_StartEndButton");

	ABP_S3MemopadManager_C_SetEnable_StartEndButton_Params params;
	params.Active_StartPage = Active_StartPage;
	params.Active_EndPage = Active_EndPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.DecideDetectAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3MemopadManager_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.DecideDetectAction");

	ABP_S3MemopadManager_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3MemopadManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.ReceiveEndPlay");

	ABP_S3MemopadManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.ExecuteUbergraph_BP_S3MemopadManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3MemopadManager_C::ExecuteUbergraph_BP_S3MemopadManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.ExecuteUbergraph_BP_S3MemopadManager");

	ABP_S3MemopadManager_C_ExecuteUbergraph_BP_S3MemopadManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3MemopadManager.BP_S3MemopadManager_C.ED_MemoFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_S3MemopadManager_C::ED_MemoFinish__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3MemopadManager.BP_S3MemopadManager_C.ED_MemoFinish__DelegateSignature");

	ABP_S3MemopadManager_C_ED_MemoFinish__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.CommandStartShowHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::CommandStartShowHP(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.CommandStartShowHP");

	UBPC_S3_TalkComponent_C_CommandStartShowHP_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.CommandCancelKS
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_S3_TalkComponent_C::CommandCancelKS()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.CommandCancelKS");

	UBPC_S3_TalkComponent_C_CommandCancelKS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.CommandStartKS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNoCancel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::CommandStartKS(bool bNoCancel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.CommandStartKS");

	UBPC_S3_TalkComponent_C_CommandStartKS_Params params;
	params.bNoCancel = bNoCancel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.CommandCancelMessagewaiting
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_S3_TalkComponent_C::CommandCancelMessagewaiting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.CommandCancelMessagewaiting");

	UBPC_S3_TalkComponent_C_CommandCancelMessagewaiting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.CommandStartMessagewaiting
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_S3_TalkComponent_C::CommandStartMessagewaiting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.CommandStartMessagewaiting");

	UBPC_S3_TalkComponent_C_CommandStartMessagewaiting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.ShouldDelayAction
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_S3_TalkComponent_C::ShouldDelayAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.ShouldDelayAction");

	UBPC_S3_TalkComponent_C_ShouldDelayAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.CheckItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TMap<struct FName, int>        ItemMap                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Possess                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::CheckItem(TMap<struct FName, int> ItemMap, bool* Possess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.CheckItem");

	UBPC_S3_TalkComponent_C_CheckItem_Params params;
	params.ItemMap = ItemMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Possess != nullptr)
		*Possess = params.Possess;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.GetEventIconType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           AnimIcon                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::GetEventIconType(ES3ActionIconType* Type, bool* AnimIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.GetEventIconType");

	UBPC_S3_TalkComponent_C_GetEventIconType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
	if (AnimIcon != nullptr)
		*AnimIcon = params.AnimIcon;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.IsShowDLCIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           AnimIcon                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::IsShowDLCIcon(bool* Show, bool* AnimIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.IsShowDLCIcon");

	UBPC_S3_TalkComponent_C_IsShowDLCIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Show != nullptr)
		*Show = params.Show;
	if (AnimIcon != nullptr)
		*AnimIcon = params.AnimIcon;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.DoCancelButton_Impl
// (Private, BlueprintCallable, BlueprintEvent)

void UBPC_S3_TalkComponent_C::DoCancelButton_Impl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.DoCancelButton_Impl");

	UBPC_S3_TalkComponent_C_DoCancelButton_Impl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.CheckSubQuest
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*              DataTable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NeedCheck                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           InProgress                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           AnimIcon                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::CheckSubQuest(class UDataTable* DataTable, bool* NeedCheck, bool* InProgress, bool* AnimIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.CheckSubQuest");

	UBPC_S3_TalkComponent_C_CheckSubQuest_Params params;
	params.DataTable = DataTable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NeedCheck != nullptr)
		*NeedCheck = params.NeedCheck;
	if (InProgress != nullptr)
		*InProgress = params.InProgress;
	if (AnimIcon != nullptr)
		*AnimIcon = params.AnimIcon;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.DoStepButton_Impl
// (Private, BlueprintCallable, BlueprintEvent)

void UBPC_S3_TalkComponent_C::DoStepButton_Impl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.DoStepButton_Impl");

	UBPC_S3_TalkComponent_C_DoStepButton_Impl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.IsShowSubQuestIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           AnimIcon                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::IsShowSubQuestIcon(bool* Show, bool* AnimIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.IsShowSubQuestIcon");

	UBPC_S3_TalkComponent_C_IsShowSubQuestIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Show != nullptr)
		*Show = params.Show;
	if (AnimIcon != nullptr)
		*AnimIcon = params.AnimIcon;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.IntToGameTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            InVal                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::IntToGameTime(int InVal, float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.IntToGameTime");

	UBPC_S3_TalkComponent_C_IntToGameTime_Params params;
	params.InVal = InVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.ParseCurrentStepSchedule
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPC_S3_TalkComponent_C::ParseCurrentStepSchedule()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.ParseCurrentStepSchedule");

	UBPC_S3_TalkComponent_C_ParseCurrentStepSchedule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.GetIsActionButtonExec
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_S3_TalkComponent_C::GetIsActionButtonExec()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.GetIsActionButtonExec");

	UBPC_S3_TalkComponent_C_GetIsActionButtonExec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.GetStartTalkActionType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCanTalk                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FS3DetectActionParam    Params                         (Parm, OutParm)

void UBPC_S3_TalkComponent_C::GetStartTalkActionType(bool bCanTalk, struct FS3DetectActionParam* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.GetStartTalkActionType");

	UBPC_S3_TalkComponent_C_GetStartTalkActionType_Params params;
	params.bCanTalk = bCanTalk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Params != nullptr)
		*Params = params.Params;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.CanSit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOutputLog                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::CanSit(class AActor* SitActor, bool bOutputLog, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.CanSit");

	UBPC_S3_TalkComponent_C_CanSit_Params params;
	params.SitActor = SitActor;
	params.bOutputLog = bOutputLog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.DebugPrintCurrentDetecttingActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3DetectAction_C*    DetectActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::DebugPrintCurrentDetecttingActor(class ABP_S3DetectAction_C* DetectActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.DebugPrintCurrentDetecttingActor");

	UBPC_S3_TalkComponent_C_DebugPrintCurrentDetecttingActor_Params params;
	params.DetectActor = DetectActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.SetActionButtonExec
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::SetActionButtonExec(bool flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.SetActionButtonExec");

	UBPC_S3_TalkComponent_C_SetActionButtonExec_Params params;
	params.flag = flag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.GetJawPointingParameter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bFingerPointing                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AnimBlendTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::GetJawPointingParameter(bool* bFingerPointing, float* Yaw, float* Pitch, float* AnimBlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.GetJawPointingParameter");

	UBPC_S3_TalkComponent_C_GetJawPointingParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFingerPointing != nullptr)
		*bFingerPointing = params.bFingerPointing;
	if (Yaw != nullptr)
		*Yaw = params.Yaw;
	if (Pitch != nullptr)
		*Pitch = params.Pitch;
	if (AnimBlendTime != nullptr)
		*AnimBlendTime = params.AnimBlendTime;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.SetJawPointingParamater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AnimBlendTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::SetJawPointingParamater(float Yaw, float Pitch, float AnimBlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.SetJawPointingParamater");

	UBPC_S3_TalkComponent_C_SetJawPointingParamater_Params params;
	params.Yaw = Yaw;
	params.Pitch = Pitch;
	params.AnimBlendTime = AnimBlendTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.JawPointingMotionFlagOFF
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_S3_TalkComponent_C::JawPointingMotionFlagOFF()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.JawPointingMotionFlagOFF");

	UBPC_S3_TalkComponent_C_JawPointingMotionFlagOFF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.JawPointingMotionFlagON
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_S3_TalkComponent_C::JawPointingMotionFlagON()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.JawPointingMotionFlagON");

	UBPC_S3_TalkComponent_C_JawPointingMotionFlagON_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.GetFingerPointingMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ES3FingerPointingMode          CurrentMode                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::GetFingerPointingMode(ES3FingerPointingMode* CurrentMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.GetFingerPointingMode");

	UBPC_S3_TalkComponent_C_GetFingerPointingMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentMode != nullptr)
		*CurrentMode = params.CurrentMode;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.SetFingerPointingMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3FingerPointingMode          NewMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::SetFingerPointingMode(ES3FingerPointingMode NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.SetFingerPointingMode");

	UBPC_S3_TalkComponent_C_SetFingerPointingMode_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.SetFingerPointingParamater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AnimBlendTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::SetFingerPointingParamater(float Yaw, float Pitch, float AnimBlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.SetFingerPointingParamater");

	UBPC_S3_TalkComponent_C_SetFingerPointingParamater_Params params;
	params.Yaw = Yaw;
	params.Pitch = Pitch;
	params.AnimBlendTime = AnimBlendTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.FingerPointingMotionFlagOFF
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_S3_TalkComponent_C::FingerPointingMotionFlagOFF()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.FingerPointingMotionFlagOFF");

	UBPC_S3_TalkComponent_C_FingerPointingMotionFlagOFF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.FingerPointingMotionFlagON
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_S3_TalkComponent_C::FingerPointingMotionFlagON()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.FingerPointingMotionFlagON");

	UBPC_S3_TalkComponent_C_FingerPointingMotionFlagON_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.GetFingerPointingParameter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bFingerPointing                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AnimBlendTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::GetFingerPointingParameter(bool* bFingerPointing, float* Yaw, float* Pitch, float* AnimBlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.GetFingerPointingParameter");

	UBPC_S3_TalkComponent_C_GetFingerPointingParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFingerPointing != nullptr)
		*bFingerPointing = params.bFingerPointing;
	if (Yaw != nullptr)
		*Yaw = params.Yaw;
	if (Pitch != nullptr)
		*Pitch = params.Pitch;
	if (AnimBlendTime != nullptr)
		*AnimBlendTime = params.AnimBlendTime;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.getActionType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Sight                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FS3DetectActionParam> Params                         (Parm, OutParm, ZeroConstructor)

void UBPC_S3_TalkComponent_C::getActionType(bool Sight, TArray<struct FS3DetectActionParam>* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.getActionType");

	UBPC_S3_TalkComponent_C_getActionType_Params params;
	params.Sight = Sight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Params != nullptr)
		*Params = params.Params;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.SetEventIdName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   newParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::SetEventIdName(const struct FName& newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.SetEventIdName");

	UBPC_S3_TalkComponent_C_SetEventIdName_Params params;
	params.newParam = newParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_S3_TalkComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.ReceiveBeginPlay");

	UBPC_S3_TalkComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.doActionButton
// (BlueprintCallable, BlueprintEvent)

void UBPC_S3_TalkComponent_C::doActionButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.doActionButton");

	UBPC_S3_TalkComponent_C_doActionButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.doStepButton
// (BlueprintCallable, BlueprintEvent)

void UBPC_S3_TalkComponent_C::doStepButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.doStepButton");

	UBPC_S3_TalkComponent_C_doStepButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.doSkipButton
// (BlueprintCallable, BlueprintEvent)

void UBPC_S3_TalkComponent_C::doSkipButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.doSkipButton");

	UBPC_S3_TalkComponent_C_doSkipButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.doCancelButton
// (BlueprintCallable, BlueprintEvent)

void UBPC_S3_TalkComponent_C::doCancelButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.doCancelButton");

	UBPC_S3_TalkComponent_C_doCancelButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.OnBSEventStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NpcActors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTalkScript*             TalkScript                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::OnBSEventStart(class AActor* NpcActors, class UTalkScript* TalkScript)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.OnBSEventStart");

	UBPC_S3_TalkComponent_C_OnBSEventStart_Params params;
	params.NpcActors = NpcActors;
	params.TalkScript = TalkScript;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.BindsTalkComponent
// (BlueprintCallable, BlueprintEvent)

void UBPC_S3_TalkComponent_C::BindsTalkComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.BindsTalkComponent");

	UBPC_S3_TalkComponent_C_BindsTalkComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.InitializeTalk
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3TalkDataListBase*     TalkDataList                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FNPCTalkEventInfo       TalkEventInfo                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_S3_TalkComponent_C::InitializeTalk(class US3TalkDataListBase* TalkDataList, const struct FNPCTalkEventInfo& TalkEventInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.InitializeTalk");

	UBPC_S3_TalkComponent_C_InitializeTalk_Params params;
	params.TalkDataList = TalkDataList;
	params.TalkEventInfo = TalkEventInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.DecideDetectAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              ActionType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::DecideDetectAction(ES3ActionIconType ActionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.DecideDetectAction");

	UBPC_S3_TalkComponent_C_DecideDetectAction_Params params;
	params.ActionType = ActionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.OnStepChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SetSteps                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::OnStepChanged(int SetSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.OnStepChanged");

	UBPC_S3_TalkComponent_C_OnStepChanged_Params params;
	params.SetSteps = SetSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.OnPcEnableScheduleEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          receiveTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::OnPcEnableScheduleEvent(float receiveTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.OnPcEnableScheduleEvent");

	UBPC_S3_TalkComponent_C_OnPcEnableScheduleEvent_Params params;
	params.receiveTime = receiveTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.OnReceiveTimeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EventIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::OnReceiveTimeEvent(int EventIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.OnReceiveTimeEvent");

	UBPC_S3_TalkComponent_C_OnReceiveTimeEvent_Params params;
	params.EventIndex = EventIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.ReceiveEndPlay");

	UBPC_S3_TalkComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.ChangeStep
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SetSteps                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::ChangeStep(int SetSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.ChangeStep");

	UBPC_S3_TalkComponent_C_ChangeStep_Params params;
	params.SetSteps = SetSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.ChangeFlag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::ChangeFlag(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.ChangeFlag");

	UBPC_S3_TalkComponent_C_ChangeFlag_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.ExecuteUbergraph_BPC_S3_TalkComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3_TalkComponent_C::ExecuteUbergraph_BPC_S3_TalkComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.ExecuteUbergraph_BPC_S3_TalkComponent");

	UBPC_S3_TalkComponent_C_ExecuteUbergraph_BPC_S3_TalkComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

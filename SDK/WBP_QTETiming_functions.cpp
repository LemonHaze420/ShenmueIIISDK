
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function WBP_QTETiming.WBP_QTETiming_C.AdvanceActionTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InTargetTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETiming_C::AdvanceActionTo(float InTargetTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.AdvanceActionTo");

	UWBP_QTETiming_C_AdvanceActionTo_Params params;
	params.InTargetTime = InTargetTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.GetActionJustTimingTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_QTETiming_C::GetActionJustTimingTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.GetActionJustTimingTime");

	UWBP_QTETiming_C_GetActionJustTimingTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTETiming.WBP_QTETiming_C.GetActionAnimationLength
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_QTETiming_C::GetActionAnimationLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.GetActionAnimationLength");

	UWBP_QTETiming_C_GetActionAnimationLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTETiming.WBP_QTETiming_C.PlayAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTETiming_C::PlayAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.PlayAction");

	UWBP_QTETiming_C_PlayAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.SetupActionPlaySpeed
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_QTETiming_C::SetupActionPlaySpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.SetupActionPlaySpeed");

	UWBP_QTETiming_C_SetupActionPlaySpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.SetActionPlayTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InTime                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETiming_C::SetActionPlayTime(float InTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.SetActionPlayTime");

	UWBP_QTETiming_C_SetActionPlayTime_Params params;
	params.InTime = InTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.SetTimeGaugeBgMaterialParameter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  InImage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          InAngle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InRate                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETiming_C::SetTimeGaugeBgMaterialParameter(class UImage* InImage, float InAngle, float InRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.SetTimeGaugeBgMaterialParameter");

	UWBP_QTETiming_C_SetTimeGaugeBgMaterialParameter_Params params;
	params.InImage = InImage;
	params.InAngle = InAngle;
	params.InRate = InRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.SetJustTimingRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InStartRate                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InEndRate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETiming_C::SetJustTimingRate(float InStartRate, float InEndRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.SetJustTimingRate");

	UWBP_QTETiming_C_SetJustTimingRate_Params params;
	params.InStartRate = InStartRate;
	params.InEndRate = InEndRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.UpdateAnimationState
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTETiming_C::UpdateAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.UpdateAnimationState");

	UWBP_QTETiming_C_UpdateAnimationState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.GetInAnimationLength
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_QTETiming_C::GetInAnimationLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.GetInAnimationLength");

	UWBP_QTETiming_C_GetInAnimationLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTETiming.WBP_QTETiming_C.SetButtonImageFromInputName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETiming_C::SetButtonImageFromInputName(const struct FName& InputName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.SetButtonImageFromInputName");

	UWBP_QTETiming_C_SetButtonImageFromInputName_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.SetAutoOutOkAfterInputSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAutoOut                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETiming_C::SetAutoOutOkAfterInputSuccess(bool IsAutoOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.SetAutoOutOkAfterInputSuccess");

	UWBP_QTETiming_C_SetAutoOutOkAfterInputSuccess_Params params;
	params.IsAutoOut = IsAutoOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.SetTimeGaugeRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETiming_C::SetTimeGaugeRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.SetTimeGaugeRate");

	UWBP_QTETiming_C_SetTimeGaugeRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.IsPlayingOut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTETiming_C::IsPlayingOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.IsPlayingOut");

	UWBP_QTETiming_C_IsPlayingOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTETiming.WBP_QTETiming_C.IsPlayingIn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTETiming_C::IsPlayingIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.IsPlayingIn");

	UWBP_QTETiming_C_IsPlayingIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTETiming.WBP_QTETiming_C.PlayOutNg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WhetherStopAction              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETiming_C::PlayOutNg(bool WhetherStopAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.PlayOutNg");

	UWBP_QTETiming_C_PlayOutNg_Params params;
	params.WhetherStopAction = WhetherStopAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.PlayOutOk
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTETiming_C::PlayOutOk()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.PlayOutOk");

	UWBP_QTETiming_C_PlayOutOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.StartAnimationPlayList
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_QTETiming_C::StartAnimationPlayList()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.StartAnimationPlayList");

	UWBP_QTETiming_C_StartAnimationPlayList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.PlayAnimationPlayList
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isPlay                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETiming_C::PlayAnimationPlayList(bool* isPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.PlayAnimationPlayList");

	UWBP_QTETiming_C_PlayAnimationPlayList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isPlay != nullptr)
		*isPlay = params.isPlay;
}


// Function WBP_QTETiming.WBP_QTETiming_C.InitializeAnimationSet
// (Protected, BlueprintCallable, BlueprintEvent)

void UWBP_QTETiming_C::InitializeAnimationSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.InitializeAnimationSet");

	UWBP_QTETiming_C_InitializeAnimationSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.PlayIn
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTETiming_C::PlayIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.PlayIn");

	UWBP_QTETiming_C_PlayIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.IsPlayingInputSuccess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTETiming_C::IsPlayingInputSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.IsPlayingInputSuccess");

	UWBP_QTETiming_C_IsPlayingInputSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTETiming.WBP_QTETiming_C.ResetAllButtonZOrder
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_QTETiming_C::ResetAllButtonZOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.ResetAllButtonZOrder");

	UWBP_QTETiming_C_ResetAllButtonZOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.ResetButtonZOrder
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_QTEFreeCommandButton_C* TargetButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QTETiming_C::ResetButtonZOrder(class UWBP_QTEFreeCommandButton_C* TargetButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.ResetButtonZOrder");

	UWBP_QTETiming_C_ResetButtonZOrder_Params params;
	params.TargetButton = TargetButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.SetButtonZOrderToFront
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_QTEFreeCommandButton_C* TargetButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QTETiming_C::SetButtonZOrderToFront(class UWBP_QTEFreeCommandButton_C* TargetButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.SetButtonZOrderToFront");

	UWBP_QTETiming_C_SetButtonZOrderToFront_Params params;
	params.TargetButton = TargetButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.GetButtonImage
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Image                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETiming_C::GetButtonImage(const struct FName& InputName, class UTexture2D** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.GetButtonImage");

	UWBP_QTETiming_C_GetButtonImage_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Image != nullptr)
		*Image = params.Image;
}


// Function WBP_QTETiming.WBP_QTETiming_C.PlayInputSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAutoHide                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETiming_C::PlayInputSuccess(bool IsAutoHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.PlayInputSuccess");

	UWBP_QTETiming_C_PlayInputSuccess_Params params;
	params.IsAutoHide = IsAutoHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.Reset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_QTETiming_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.Reset");

	UWBP_QTETiming_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_QTETiming_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.Construct");

	UWBP_QTETiming_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.OnButtonInputAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTETiming_C::OnButtonInputAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.OnButtonInputAnimationFinished");

	UWBP_QTETiming_C_OnButtonInputAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.OnFinishedCurrentAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTETiming_C::OnFinishedCurrentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.OnFinishedCurrentAnimation");

	UWBP_QTETiming_C_OnFinishedCurrentAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.BindOnFinishedCurrentAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTETiming_C::BindOnFinishedCurrentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.BindOnFinishedCurrentAnimation");

	UWBP_QTETiming_C_BindOnFinishedCurrentAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.UnbindOnFinishedCurrentAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTETiming_C::UnbindOnFinishedCurrentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.UnbindOnFinishedCurrentAnimation");

	UWBP_QTETiming_C_UnbindOnFinishedCurrentAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.BindOnInAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTETiming_C::BindOnInAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.BindOnInAnimationFinished");

	UWBP_QTETiming_C_BindOnInAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.OnInAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTETiming_C::OnInAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.OnInAnimationFinished");

	UWBP_QTETiming_C_OnInAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.UnbindOnInAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTETiming_C::UnbindOnInAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.UnbindOnInAnimationFinished");

	UWBP_QTETiming_C_UnbindOnInAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.BindOnOutAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTETiming_C::BindOnOutAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.BindOnOutAnimationFinished");

	UWBP_QTETiming_C_BindOnOutAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.OnOutAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTETiming_C::OnOutAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.OnOutAnimationFinished");

	UWBP_QTETiming_C_OnOutAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.UnbindOnOutAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTETiming_C::UnbindOnOutAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.UnbindOnOutAnimationFinished");

	UWBP_QTETiming_C_UnbindOnOutAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.ExecuteUbergraph_WBP_QTETiming
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETiming_C::ExecuteUbergraph_WBP_QTETiming(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.ExecuteUbergraph_WBP_QTETiming");

	UWBP_QTETiming_C_ExecuteUbergraph_WBP_QTETiming_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.OnOutAnimationFinishedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_QTETiming_C::OnOutAnimationFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.OnOutAnimationFinishedDispatcher__DelegateSignature");

	UWBP_QTETiming_C_OnOutAnimationFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.OnInAnimationFinishedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_QTETiming_C::OnInAnimationFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.OnInAnimationFinishedDispatcher__DelegateSignature");

	UWBP_QTETiming_C_OnInAnimationFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_QTETiming_C::OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature");

	UWBP_QTETiming_C_OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

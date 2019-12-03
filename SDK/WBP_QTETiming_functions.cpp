
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

// Function WBP_QTETiming.WBP_QTETiming_C.AdvanceActionTo
// (Net, NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          InTargetTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETiming_C::STATIC_AdvanceActionTo(float InTargetTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.AdvanceActionTo");

	UWBP_QTETiming_C_AdvanceActionTo_Params params;
	params.InTargetTime = InTargetTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.GetActionJustTimingTime
// (NetReliable, NetRequest, Native, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_QTETiming_C::GetActionJustTimingTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.GetActionJustTimingTime");

	UWBP_QTETiming_C_GetActionJustTimingTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTETiming.WBP_QTETiming_C.GetActionAnimationLength
// (NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_QTETiming_C::GetActionAnimationLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.GetActionAnimationLength");

	UWBP_QTETiming_C_GetActionAnimationLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTETiming.WBP_QTETiming_C.PlayAction
// (NetReliable, Event, Static, MulticastDelegate, Public, Protected, HasOutParms, NetClient, DLLImport)

void UWBP_QTETiming_C::STATIC_PlayAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.PlayAction");

	UWBP_QTETiming_C_PlayAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.SetupActionPlaySpeed
// (NetReliable, NetRequest, Native, Static, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_QTETiming_C::STATIC_SetupActionPlaySpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.SetupActionPlaySpeed");

	UWBP_QTETiming_C_SetupActionPlaySpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.SetActionPlayTime
// (Net, NetRequest, Native, Event, Static, NetMulticast, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          InTime                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETiming_C::STATIC_SetActionPlayTime(float InTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.SetActionPlayTime");

	UWBP_QTETiming_C_SetActionPlayTime_Params params;
	params.InTime = InTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.SetTimeGaugeBgMaterialParameter
// (Net, NetReliable, Exec, Event, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
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
// (Net, NetRequest, Exec, NetResponse, Static, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          InStartRate                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InEndRate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETiming_C::STATIC_SetJustTimingRate(float InStartRate, float InEndRate)
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
// (Exec, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_QTETiming_C::STATIC_UpdateAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.UpdateAnimationState");

	UWBP_QTETiming_C_UpdateAnimationState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.GetInAnimationLength
// (NetRequest, Exec, Native, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_QTETiming_C::STATIC_GetInAnimationLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.GetInAnimationLength");

	UWBP_QTETiming_C_GetInAnimationLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTETiming.WBP_QTETiming_C.SetButtonImageFromInputName
// (NetRequest, Native, Event, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETiming_C::SetButtonImageFromInputName(const struct FName& InputName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.SetButtonImageFromInputName");

	UWBP_QTETiming_C_SetButtonImageFromInputName_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.SetAutoOutOkAfterInputSuccess
// (Net, NetReliable, Exec, Native, Static, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsAutoOut                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETiming_C::STATIC_SetAutoOutOkAfterInputSuccess(bool IsAutoOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.SetAutoOutOkAfterInputSuccess");

	UWBP_QTETiming_C_SetAutoOutOkAfterInputSuccess_Params params;
	params.IsAutoOut = IsAutoOut;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.SetTimeGaugeRate
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETiming_C::SetTimeGaugeRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.SetTimeGaugeRate");

	UWBP_QTETiming_C_SetTimeGaugeRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.IsPlayingOut
// (NetReliable, Exec, Native, Static, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTETiming_C::STATIC_IsPlayingOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.IsPlayingOut");

	UWBP_QTETiming_C_IsPlayingOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTETiming.WBP_QTETiming_C.IsPlayingIn
// (Net, Exec, Native, Static, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTETiming_C::STATIC_IsPlayingIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.IsPlayingIn");

	UWBP_QTETiming_C_IsPlayingIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTETiming.WBP_QTETiming_C.PlayOutNg
// (Native, Static, NetMulticast, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           WhetherStopAction              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETiming_C::STATIC_PlayOutNg(bool WhetherStopAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.PlayOutNg");

	UWBP_QTETiming_C_PlayOutNg_Params params;
	params.WhetherStopAction = WhetherStopAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.PlayOutOk
// (NetReliable, NetRequest, Event, Static, NetMulticast, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UWBP_QTETiming_C::STATIC_PlayOutOk()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.PlayOutOk");

	UWBP_QTETiming_C_PlayOutOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.StartAnimationPlayList
// (NetReliable, Native, Static, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, NetClient, DLLImport)

void UWBP_QTETiming_C::STATIC_StartAnimationPlayList()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.StartAnimationPlayList");

	UWBP_QTETiming_C_StartAnimationPlayList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.PlayAnimationPlayList
// (Exec, Native, Event, NetResponse, Static, Public, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           isPlay                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETiming_C::STATIC_PlayAnimationPlayList(bool* isPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.PlayAnimationPlayList");

	UWBP_QTETiming_C_PlayAnimationPlayList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isPlay != nullptr)
		*isPlay = params.isPlay;
}


// Function WBP_QTETiming.WBP_QTETiming_C.InitializeAnimationSet
// (NetReliable, Exec, Static, NetMulticast, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UWBP_QTETiming_C::STATIC_InitializeAnimationSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.InitializeAnimationSet");

	UWBP_QTETiming_C_InitializeAnimationSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.PlayIn
// (NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, NetClient, BlueprintPure)

void UWBP_QTETiming_C::STATIC_PlayIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.PlayIn");

	UWBP_QTETiming_C_PlayIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.IsPlayingInputSuccess
// (NetRequest, Exec, Native, Static, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTETiming_C::STATIC_IsPlayingInputSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.IsPlayingInputSuccess");

	UWBP_QTETiming_C_IsPlayingInputSuccess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTETiming.WBP_QTETiming_C.ResetAllButtonZOrder
// (NetReliable, Event, NetResponse, Static, NetMulticast, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UWBP_QTETiming_C::STATIC_ResetAllButtonZOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.ResetAllButtonZOrder");

	UWBP_QTETiming_C_ResetAllButtonZOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.ResetButtonZOrder
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_QTEFreeCommandButton_C* TargetButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QTETiming_C::ResetButtonZOrder(class UWBP_QTEFreeCommandButton_C* TargetButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.ResetButtonZOrder");

	UWBP_QTETiming_C_ResetButtonZOrder_Params params;
	params.TargetButton = TargetButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.SetButtonZOrderToFront
// (Native, Event, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_QTEFreeCommandButton_C* TargetButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QTETiming_C::SetButtonZOrderToFront(class UWBP_QTEFreeCommandButton_C* TargetButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.SetButtonZOrderToFront");

	UWBP_QTETiming_C_SetButtonZOrderToFront_Params params;
	params.TargetButton = TargetButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.GetButtonImage
// (Native, Static, NetMulticast, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Image                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETiming_C::STATIC_GetButtonImage(const struct FName& InputName, class UTexture2D** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.GetButtonImage");

	UWBP_QTETiming_C_GetButtonImage_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Image != nullptr)
		*Image = params.Image;
}


// Function WBP_QTETiming.WBP_QTETiming_C.PlayInputSuccess
// (NetReliable, Native, Event, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsAutoHide                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETiming_C::PlayInputSuccess(bool IsAutoHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.PlayInputSuccess");

	UWBP_QTETiming_C_PlayInputSuccess_Params params;
	params.IsAutoHide = IsAutoHide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.Reset
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UWBP_QTETiming_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.Reset");

	UWBP_QTETiming_C_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.Construct
// (NetReliable, Event, Static, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_QTETiming_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.Construct");

	UWBP_QTETiming_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.OnButtonInputAnimationFinished
// (NetReliable, Event, Static, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_QTETiming_C::STATIC_OnButtonInputAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.OnButtonInputAnimationFinished");

	UWBP_QTETiming_C_OnButtonInputAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.OnFinishedCurrentAnimation
// (Net, Event, Static, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_QTETiming_C::STATIC_OnFinishedCurrentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.OnFinishedCurrentAnimation");

	UWBP_QTETiming_C_OnFinishedCurrentAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.BindOnFinishedCurrentAnimation
// (Net, Event, Static, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_QTETiming_C::STATIC_BindOnFinishedCurrentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.BindOnFinishedCurrentAnimation");

	UWBP_QTETiming_C_BindOnFinishedCurrentAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.UnbindOnFinishedCurrentAnimation
// (Event, Static, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_QTETiming_C::STATIC_UnbindOnFinishedCurrentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.UnbindOnFinishedCurrentAnimation");

	UWBP_QTETiming_C_UnbindOnFinishedCurrentAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.BindOnInAnimationFinished
// (Event, Static, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_QTETiming_C::STATIC_BindOnInAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.BindOnInAnimationFinished");

	UWBP_QTETiming_C_BindOnInAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.OnInAnimationFinished
// (Net, NetReliable, NetRequest, Exec, Native, Static, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_QTETiming_C::STATIC_OnInAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.OnInAnimationFinished");

	UWBP_QTETiming_C_OnInAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.UnbindOnInAnimationFinished
// (Net, NetReliable, NetRequest, Exec, Native, Static, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_QTETiming_C::STATIC_UnbindOnInAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.UnbindOnInAnimationFinished");

	UWBP_QTETiming_C_UnbindOnInAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.BindOnOutAnimationFinished
// (NetReliable, NetRequest, Exec, Native, Static, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_QTETiming_C::STATIC_BindOnOutAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.BindOnOutAnimationFinished");

	UWBP_QTETiming_C_BindOnOutAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.OnOutAnimationFinished
// (NetReliable, NetRequest, Exec, Native, Static, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_QTETiming_C::STATIC_OnOutAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.OnOutAnimationFinished");

	UWBP_QTETiming_C_OnOutAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.UnbindOnOutAnimationFinished
// (Net, NetRequest, Exec, Native, Static, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_QTETiming_C::STATIC_UnbindOnOutAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.UnbindOnOutAnimationFinished");

	UWBP_QTETiming_C_UnbindOnOutAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.ExecuteUbergraph_WBP_QTETiming
// (NetReliable, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
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
// (Net, NetReliable, Native, Event, MulticastDelegate, Public, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_QTETiming_C::OnOutAnimationFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.OnOutAnimationFinishedDispatcher__DelegateSignature");

	UWBP_QTETiming_C_OnOutAnimationFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.OnInAnimationFinishedDispatcher__DelegateSignature
// (NetReliable, Native, Event, MulticastDelegate, Public, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_QTETiming_C::OnInAnimationFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.OnInAnimationFinishedDispatcher__DelegateSignature");

	UWBP_QTETiming_C_OnInAnimationFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETiming.WBP_QTETiming_C.OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature
// (Net, NetReliable, Native, Event, MulticastDelegate, Public, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_QTETiming_C::OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETiming.WBP_QTETiming_C.OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature");

	UWBP_QTETiming_C_OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

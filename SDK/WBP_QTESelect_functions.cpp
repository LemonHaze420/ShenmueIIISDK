
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

// Function WBP_QTESelect.WBP_QTESelect_C.StopLoopAnimation
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_QTESelect_C::StopLoopAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.StopLoopAnimation");

	UWBP_QTESelect_C_StopLoopAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.IsPlayingLoopAnimation
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTESelect_C::IsPlayingLoopAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.IsPlayingLoopAnimation");

	UWBP_QTESelect_C_IsPlayingLoopAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTESelect.WBP_QTESelect_C.PlayLoopAnimation
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_QTESelect_C::PlayLoopAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.PlayLoopAnimation");

	UWBP_QTESelect_C_PlayLoopAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.UpdateAnimationState
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTESelect_C::UpdateAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.UpdateAnimationState");

	UWBP_QTESelect_C_UpdateAnimationState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.GetInAnimationLength
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_QTESelect_C::GetInAnimationLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.GetInAnimationLength");

	UWBP_QTESelect_C_GetInAnimationLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTESelect.WBP_QTESelect_C.SetButtonImageFromInputName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESelect_C::SetButtonImageFromInputName(const struct FName& InputName, bool bRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.SetButtonImageFromInputName");

	UWBP_QTESelect_C_SetButtonImageFromInputName_Params params;
	params.InputName = InputName;
	params.bRight = bRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.SetAutoOutOkAfterInputSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAutoOut                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESelect_C::SetAutoOutOkAfterInputSuccess(bool IsAutoOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.SetAutoOutOkAfterInputSuccess");

	UWBP_QTESelect_C_SetAutoOutOkAfterInputSuccess_Params params;
	params.IsAutoOut = IsAutoOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.SetTimeGaugeRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESelect_C::SetTimeGaugeRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.SetTimeGaugeRate");

	UWBP_QTESelect_C_SetTimeGaugeRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.InitializeAnimationSet
// (Protected, BlueprintCallable, BlueprintEvent)

void UWBP_QTESelect_C::InitializeAnimationSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.InitializeAnimationSet");

	UWBP_QTESelect_C_InitializeAnimationSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.IsPlayingOut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTESelect_C::IsPlayingOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.IsPlayingOut");

	UWBP_QTESelect_C_IsPlayingOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTESelect.WBP_QTESelect_C.PlayOutNg
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTESelect_C::PlayOutNg()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.PlayOutNg");

	UWBP_QTESelect_C_PlayOutNg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.PlayOutOk
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTESelect_C::PlayOutOk()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.PlayOutOk");

	UWBP_QTESelect_C_PlayOutOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.IsPlayingIn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTESelect_C::IsPlayingIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.IsPlayingIn");

	UWBP_QTESelect_C_IsPlayingIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTESelect.WBP_QTESelect_C.PlayIn
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTESelect_C::PlayIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.PlayIn");

	UWBP_QTESelect_C_PlayIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.IsPlayingInputSuccess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTESelect_C::IsPlayingInputSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.IsPlayingInputSuccess");

	UWBP_QTESelect_C_IsPlayingInputSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTESelect.WBP_QTESelect_C.PlayInputSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAutoHide                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESelect_C::PlayInputSuccess(bool IsAutoHide, bool bRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.PlayInputSuccess");

	UWBP_QTESelect_C_PlayInputSuccess_Params params;
	params.IsAutoHide = IsAutoHide;
	params.bRight = bRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.Reset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_QTESelect_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.Reset");

	UWBP_QTESelect_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.StartAnimationPlayList
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_QTESelect_C::StartAnimationPlayList()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.StartAnimationPlayList");

	UWBP_QTESelect_C_StartAnimationPlayList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.PlayAnimationPlayList
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isPlay                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESelect_C::PlayAnimationPlayList(bool* isPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.PlayAnimationPlayList");

	UWBP_QTESelect_C_PlayAnimationPlayList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isPlay != nullptr)
		*isPlay = params.isPlay;
}


// Function WBP_QTESelect.WBP_QTESelect_C.ResetAllButtonZOrder
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_QTESelect_C::ResetAllButtonZOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.ResetAllButtonZOrder");

	UWBP_QTESelect_C_ResetAllButtonZOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.ResetButtonZOrder
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_QTEFreeCommandButton_C* TargetButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QTESelect_C::ResetButtonZOrder(class UWBP_QTEFreeCommandButton_C* TargetButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.ResetButtonZOrder");

	UWBP_QTESelect_C_ResetButtonZOrder_Params params;
	params.TargetButton = TargetButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.SetButtonZOrderToFront
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_QTEFreeCommandButton_C* TargetButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QTESelect_C::SetButtonZOrderToFront(class UWBP_QTEFreeCommandButton_C* TargetButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.SetButtonZOrderToFront");

	UWBP_QTESelect_C_SetButtonZOrderToFront_Params params;
	params.TargetButton = TargetButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.GetButtonImage
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Image                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESelect_C::GetButtonImage(const struct FName& InputName, class UTexture2D** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.GetButtonImage");

	UWBP_QTESelect_C_GetButtonImage_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Image != nullptr)
		*Image = params.Image;
}


// Function WBP_QTESelect.WBP_QTESelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_QTESelect_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.Construct");

	UWBP_QTESelect_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.OnButtonInputAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESelect_C::OnButtonInputAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.OnButtonInputAnimationFinished");

	UWBP_QTESelect_C_OnButtonInputAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.BindOnFinishedCurrentAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESelect_C::BindOnFinishedCurrentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.BindOnFinishedCurrentAnimation");

	UWBP_QTESelect_C_BindOnFinishedCurrentAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.OnFinishedCurrentAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESelect_C::OnFinishedCurrentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.OnFinishedCurrentAnimation");

	UWBP_QTESelect_C_OnFinishedCurrentAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.UnbindOnFinishedCurrentAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESelect_C::UnbindOnFinishedCurrentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.UnbindOnFinishedCurrentAnimation");

	UWBP_QTESelect_C_UnbindOnFinishedCurrentAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.BindOnInAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESelect_C::BindOnInAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.BindOnInAnimationFinished");

	UWBP_QTESelect_C_BindOnInAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.OnInAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESelect_C::OnInAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.OnInAnimationFinished");

	UWBP_QTESelect_C_OnInAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.UnbindOnInAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESelect_C::UnbindOnInAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.UnbindOnInAnimationFinished");

	UWBP_QTESelect_C_UnbindOnInAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.BindOnOutAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESelect_C::BindOnOutAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.BindOnOutAnimationFinished");

	UWBP_QTESelect_C_BindOnOutAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.OnOutAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESelect_C::OnOutAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.OnOutAnimationFinished");

	UWBP_QTESelect_C_OnOutAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.UnbindOnOutAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESelect_C::UnbindOnOutAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.UnbindOnOutAnimationFinished");

	UWBP_QTESelect_C_UnbindOnOutAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.ExecuteUbergraph_WBP_QTESelect
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESelect_C::ExecuteUbergraph_WBP_QTESelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.ExecuteUbergraph_WBP_QTESelect");

	UWBP_QTESelect_C_ExecuteUbergraph_WBP_QTESelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.OnOutAnimationFinishedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_QTESelect_C::OnOutAnimationFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.OnOutAnimationFinishedDispatcher__DelegateSignature");

	UWBP_QTESelect_C_OnOutAnimationFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.OnInAnimationFinishedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_QTESelect_C::OnInAnimationFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.OnInAnimationFinishedDispatcher__DelegateSignature");

	UWBP_QTESelect_C_OnInAnimationFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESelect.WBP_QTESelect_C.OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_QTESelect_C::OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESelect.WBP_QTESelect_C.OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature");

	UWBP_QTESelect_C_OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

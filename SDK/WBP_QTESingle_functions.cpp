
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

// Function WBP_QTESingle.WBP_QTESingle_C.UpdateAnimationState
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTESingle_C::UpdateAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.UpdateAnimationState");

	UWBP_QTESingle_C_UpdateAnimationState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.GetInAnimationLength
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_QTESingle_C::GetInAnimationLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.GetInAnimationLength");

	UWBP_QTESingle_C_GetInAnimationLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTESingle.WBP_QTESingle_C.SetButtonImageFromInputName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESingle_C::SetButtonImageFromInputName(const struct FName& InputName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.SetButtonImageFromInputName");

	UWBP_QTESingle_C_SetButtonImageFromInputName_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.SetAutoOutOkAfterInputSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAutoOut                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESingle_C::SetAutoOutOkAfterInputSuccess(bool IsAutoOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.SetAutoOutOkAfterInputSuccess");

	UWBP_QTESingle_C_SetAutoOutOkAfterInputSuccess_Params params;
	params.IsAutoOut = IsAutoOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.SetTimeGaugeRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESingle_C::SetTimeGaugeRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.SetTimeGaugeRate");

	UWBP_QTESingle_C_SetTimeGaugeRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.IsPlayingOut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTESingle_C::IsPlayingOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.IsPlayingOut");

	UWBP_QTESingle_C_IsPlayingOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTESingle.WBP_QTESingle_C.IsPlayingIn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTESingle_C::IsPlayingIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.IsPlayingIn");

	UWBP_QTESingle_C_IsPlayingIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTESingle.WBP_QTESingle_C.PlayOutNg
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTESingle_C::PlayOutNg()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.PlayOutNg");

	UWBP_QTESingle_C_PlayOutNg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.PlayOutOk
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTESingle_C::PlayOutOk()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.PlayOutOk");

	UWBP_QTESingle_C_PlayOutOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.StartAnimationPlayList
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_QTESingle_C::StartAnimationPlayList()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.StartAnimationPlayList");

	UWBP_QTESingle_C_StartAnimationPlayList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.PlayAnimationPlayList
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isPlay                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESingle_C::PlayAnimationPlayList(bool* isPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.PlayAnimationPlayList");

	UWBP_QTESingle_C_PlayAnimationPlayList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isPlay != nullptr)
		*isPlay = params.isPlay;
}


// Function WBP_QTESingle.WBP_QTESingle_C.InitializeAnimationSet
// (Protected, BlueprintCallable, BlueprintEvent)

void UWBP_QTESingle_C::InitializeAnimationSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.InitializeAnimationSet");

	UWBP_QTESingle_C_InitializeAnimationSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.PlayIn
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTESingle_C::PlayIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.PlayIn");

	UWBP_QTESingle_C_PlayIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.IsPlayingInputSuccess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTESingle_C::IsPlayingInputSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.IsPlayingInputSuccess");

	UWBP_QTESingle_C_IsPlayingInputSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTESingle.WBP_QTESingle_C.ResetAllButtonZOrder
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_QTESingle_C::ResetAllButtonZOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.ResetAllButtonZOrder");

	UWBP_QTESingle_C_ResetAllButtonZOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.ResetButtonZOrder
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_QTEFreeCommandButton_C* TargetButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QTESingle_C::ResetButtonZOrder(class UWBP_QTEFreeCommandButton_C* TargetButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.ResetButtonZOrder");

	UWBP_QTESingle_C_ResetButtonZOrder_Params params;
	params.TargetButton = TargetButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.SetButtonZOrderToFront
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_QTEFreeCommandButton_C* TargetButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QTESingle_C::SetButtonZOrderToFront(class UWBP_QTEFreeCommandButton_C* TargetButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.SetButtonZOrderToFront");

	UWBP_QTESingle_C_SetButtonZOrderToFront_Params params;
	params.TargetButton = TargetButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.GetButtonImage
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Image                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESingle_C::GetButtonImage(const struct FName& InputName, class UTexture2D** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.GetButtonImage");

	UWBP_QTESingle_C_GetButtonImage_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Image != nullptr)
		*Image = params.Image;
}


// Function WBP_QTESingle.WBP_QTESingle_C.PlayInputSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAutoHide                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESingle_C::PlayInputSuccess(bool IsAutoHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.PlayInputSuccess");

	UWBP_QTESingle_C_PlayInputSuccess_Params params;
	params.IsAutoHide = IsAutoHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.Reset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_QTESingle_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.Reset");

	UWBP_QTESingle_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_QTESingle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.Construct");

	UWBP_QTESingle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.OnButtonInputAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESingle_C::OnButtonInputAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.OnButtonInputAnimationFinished");

	UWBP_QTESingle_C_OnButtonInputAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.OnFinishedCurrentAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESingle_C::OnFinishedCurrentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.OnFinishedCurrentAnimation");

	UWBP_QTESingle_C_OnFinishedCurrentAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.BindOnFinishedCurrentAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESingle_C::BindOnFinishedCurrentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.BindOnFinishedCurrentAnimation");

	UWBP_QTESingle_C_BindOnFinishedCurrentAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.UnbindOnFinishedCurrentAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESingle_C::UnbindOnFinishedCurrentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.UnbindOnFinishedCurrentAnimation");

	UWBP_QTESingle_C_UnbindOnFinishedCurrentAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.BindOnInAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESingle_C::BindOnInAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.BindOnInAnimationFinished");

	UWBP_QTESingle_C_BindOnInAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.OnInAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESingle_C::OnInAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.OnInAnimationFinished");

	UWBP_QTESingle_C_OnInAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.UnbindOnInAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESingle_C::UnbindOnInAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.UnbindOnInAnimationFinished");

	UWBP_QTESingle_C_UnbindOnInAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.BindOnOutAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESingle_C::BindOnOutAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.BindOnOutAnimationFinished");

	UWBP_QTESingle_C_BindOnOutAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.OnOutAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESingle_C::OnOutAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.OnOutAnimationFinished");

	UWBP_QTESingle_C_OnOutAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.UnbindOnOutAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESingle_C::UnbindOnOutAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.UnbindOnOutAnimationFinished");

	UWBP_QTESingle_C_UnbindOnOutAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.ExecuteUbergraph_WBP_QTESingle
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESingle_C::ExecuteUbergraph_WBP_QTESingle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.ExecuteUbergraph_WBP_QTESingle");

	UWBP_QTESingle_C_ExecuteUbergraph_WBP_QTESingle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.OnOutAnimationFinishedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_QTESingle_C::OnOutAnimationFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.OnOutAnimationFinishedDispatcher__DelegateSignature");

	UWBP_QTESingle_C_OnOutAnimationFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.OnInAnimationFinishedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_QTESingle_C::OnInAnimationFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.OnInAnimationFinishedDispatcher__DelegateSignature");

	UWBP_QTESingle_C_OnInAnimationFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESingle.WBP_QTESingle_C.OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_QTESingle_C::OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESingle.WBP_QTESingle_C.OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature");

	UWBP_QTESingle_C_OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

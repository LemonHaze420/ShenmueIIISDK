
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

// Function WBP_QTESimon.WBP_QTESimon_C.GetCurrentInstructionButtonEffect
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_QTESimonButtonEffect_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWBP_QTESimonButtonEffect_C* UWBP_QTESimon_C::GetCurrentInstructionButtonEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.GetCurrentInstructionButtonEffect");

	UWBP_QTESimon_C_GetCurrentInstructionButtonEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTESimon.WBP_QTESimon_C.GetButtonEffectFromInputName
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InInputName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWBP_QTESimonButtonEffect_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWBP_QTESimonButtonEffect_C* UWBP_QTESimon_C::GetButtonEffectFromInputName(const struct FName& InInputName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.GetButtonEffectFromInputName");

	UWBP_QTESimon_C_GetButtonEffectFromInputName_Params params;
	params.InInputName = InInputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTESimon.WBP_QTESimon_C.ResetAllButtonEffectZOrder
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::ResetAllButtonEffectZOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.ResetAllButtonEffectZOrder");

	UWBP_QTESimon_C_ResetAllButtonEffectZOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.ResetButtonEffectZOrder
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_QTESimonButtonEffect_C* TargetButtonEffect             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QTESimon_C::ResetButtonEffectZOrder(class UWBP_QTESimonButtonEffect_C* TargetButtonEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.ResetButtonEffectZOrder");

	UWBP_QTESimon_C_ResetButtonEffectZOrder_Params params;
	params.TargetButtonEffect = TargetButtonEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.SetButtonEffectZOrderToFront
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_QTESimonButtonEffect_C* TargetButtonEffect             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QTESimon_C::SetButtonEffectZOrderToFront(class UWBP_QTESimonButtonEffect_C* TargetButtonEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.SetButtonEffectZOrderToFront");

	UWBP_QTESimon_C_SetButtonEffectZOrderToFront_Params params;
	params.TargetButtonEffect = TargetButtonEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.IsPlayingInstruction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTESimon_C::IsPlayingInstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.IsPlayingInstruction");

	UWBP_QTESimon_C_IsPlayingInstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTESimon.WBP_QTESimon_C.StopInstructions
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::StopInstructions()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.StopInstructions");

	UWBP_QTESimon_C_StopInstructions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.PlayOutBack
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::PlayOutBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.PlayOutBack");

	UWBP_QTESimon_C_PlayOutBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.StartWaitTime
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InWaitTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESimon_C::StartWaitTime(float InWaitTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.StartWaitTime");

	UWBP_QTESimon_C_StartWaitTime_Params params;
	params.InWaitTime = InWaitTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.Update");

	UWBP_QTESimon_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.SetupButton
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::SetupButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.SetupButton");

	UWBP_QTESimon_C_SetupButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.GetCurrentInstructionButton
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_QTESimonButton_C*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWBP_QTESimonButton_C* UWBP_QTESimon_C::GetCurrentInstructionButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.GetCurrentInstructionButton");

	UWBP_QTESimon_C_GetCurrentInstructionButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTESimon.WBP_QTESimon_C.GetButtonFromInputName
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InInputName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWBP_QTESimonButton_C*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWBP_QTESimonButton_C* UWBP_QTESimon_C::GetButtonFromInputName(const struct FName& InInputName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.GetButtonFromInputName");

	UWBP_QTESimon_C_GetButtonFromInputName_Params params;
	params.InInputName = InInputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTESimon.WBP_QTESimon_C.SetInstructions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           InInstructions                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_QTESimon_C::SetInstructions(TArray<struct FName>* InInstructions)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.SetInstructions");

	UWBP_QTESimon_C_SetInstructions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InInstructions != nullptr)
		*InInstructions = params.InInstructions;
}


// Function WBP_QTESimon.WBP_QTESimon_C.UpdateAnimationState
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::UpdateAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.UpdateAnimationState");

	UWBP_QTESimon_C_UpdateAnimationState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.GetInAndInstructionAnimationLength
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_QTESimon_C::GetInAndInstructionAnimationLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.GetInAndInstructionAnimationLength");

	UWBP_QTESimon_C_GetInAndInstructionAnimationLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTESimon.WBP_QTESimon_C.SetAutoOutOkAfterInputSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAutoOut                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESimon_C::SetAutoOutOkAfterInputSuccess(bool IsAutoOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.SetAutoOutOkAfterInputSuccess");

	UWBP_QTESimon_C_SetAutoOutOkAfterInputSuccess_Params params;
	params.IsAutoOut = IsAutoOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.SetTimeGaugeRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESimon_C::SetTimeGaugeRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.SetTimeGaugeRate");

	UWBP_QTESimon_C_SetTimeGaugeRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.IsPlayingOut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTESimon_C::IsPlayingOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.IsPlayingOut");

	UWBP_QTESimon_C_IsPlayingOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTESimon.WBP_QTESimon_C.IsPlayingIn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTESimon_C::IsPlayingIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.IsPlayingIn");

	UWBP_QTESimon_C_IsPlayingIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTESimon.WBP_QTESimon_C.PlayOutNg
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::PlayOutNg()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.PlayOutNg");

	UWBP_QTESimon_C_PlayOutNg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.PlayOutOk
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::PlayOutOk()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.PlayOutOk");

	UWBP_QTESimon_C_PlayOutOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.StartAnimationPlayList
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::StartAnimationPlayList()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.StartAnimationPlayList");

	UWBP_QTESimon_C_StartAnimationPlayList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.PlayAnimationPlayList
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isPlay                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESimon_C::PlayAnimationPlayList(bool* isPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.PlayAnimationPlayList");

	UWBP_QTESimon_C_PlayAnimationPlayList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isPlay != nullptr)
		*isPlay = params.isPlay;
}


// Function WBP_QTESimon.WBP_QTESimon_C.InitializeAnimationSet
// (Protected, BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::InitializeAnimationSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.InitializeAnimationSet");

	UWBP_QTESimon_C_InitializeAnimationSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.PlayIn
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::PlayIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.PlayIn");

	UWBP_QTESimon_C_PlayIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.IsPlayingInputSuccess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTESimon_C::IsPlayingInputSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.IsPlayingInputSuccess");

	UWBP_QTESimon_C_IsPlayingInputSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTESimon.WBP_QTESimon_C.ResetAllButtonZOrder
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::ResetAllButtonZOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.ResetAllButtonZOrder");

	UWBP_QTESimon_C_ResetAllButtonZOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.ResetButtonZOrder
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_QTESimonButton_C*   TargetButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QTESimon_C::ResetButtonZOrder(class UWBP_QTESimonButton_C* TargetButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.ResetButtonZOrder");

	UWBP_QTESimon_C_ResetButtonZOrder_Params params;
	params.TargetButton = TargetButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.SetButtonZOrderToFront
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_QTESimonButton_C*   TargetButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QTESimon_C::SetButtonZOrderToFront(class UWBP_QTESimonButton_C* TargetButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.SetButtonZOrderToFront");

	UWBP_QTESimon_C_SetButtonZOrderToFront_Params params;
	params.TargetButton = TargetButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.GetButtonImage
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Image                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESimon_C::GetButtonImage(const struct FName& InputName, class UTexture2D** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.GetButtonImage");

	UWBP_QTESimon_C_GetButtonImage_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Image != nullptr)
		*Image = params.Image;
}


// Function WBP_QTESimon.WBP_QTESimon_C.PlayInputSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InInputName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAutoHide                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESimon_C::PlayInputSuccess(const struct FName& InInputName, bool IsAutoHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.PlayInputSuccess");

	UWBP_QTESimon_C_PlayInputSuccess_Params params;
	params.InInputName = InInputName;
	params.IsAutoHide = IsAutoHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.Reset");

	UWBP_QTESimon_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_QTESimon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.Construct");

	UWBP_QTESimon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESimon_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.Tick");

	UWBP_QTESimon_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.OnButtonInputAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::OnButtonInputAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.OnButtonInputAnimationFinished");

	UWBP_QTESimon_C_OnButtonInputAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.OnFinishedCurrentAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::OnFinishedCurrentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.OnFinishedCurrentAnimation");

	UWBP_QTESimon_C_OnFinishedCurrentAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.BindOnFinishedCurrentAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::BindOnFinishedCurrentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.BindOnFinishedCurrentAnimation");

	UWBP_QTESimon_C_BindOnFinishedCurrentAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.UnbindOnFinishedCurrentAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::UnbindOnFinishedCurrentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.UnbindOnFinishedCurrentAnimation");

	UWBP_QTESimon_C_UnbindOnFinishedCurrentAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.BindOnInAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::BindOnInAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.BindOnInAnimationFinished");

	UWBP_QTESimon_C_BindOnInAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.OnInAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::OnInAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.OnInAnimationFinished");

	UWBP_QTESimon_C_OnInAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.UnbindOnInAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::UnbindOnInAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.UnbindOnInAnimationFinished");

	UWBP_QTESimon_C_UnbindOnInAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.BindOnOutAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::BindOnOutAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.BindOnOutAnimationFinished");

	UWBP_QTESimon_C_BindOnOutAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.OnOutAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::OnOutAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.OnOutAnimationFinished");

	UWBP_QTESimon_C_OnOutAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.UnbindOnOutAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::UnbindOnOutAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.UnbindOnOutAnimationFinished");

	UWBP_QTESimon_C_UnbindOnOutAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.OnButtonInstructionAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::OnButtonInstructionAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.OnButtonInstructionAnimationFinished");

	UWBP_QTESimon_C_OnButtonInstructionAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.PlayInstructions
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::PlayInstructions()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.PlayInstructions");

	UWBP_QTESimon_C_PlayInstructions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.OnWaitTimeFinishedAfterPlayAnim
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::OnWaitTimeFinishedAfterPlayAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.OnWaitTimeFinishedAfterPlayAnim");

	UWBP_QTESimon_C_OnWaitTimeFinishedAfterPlayAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.OnWaitTimeFinishedBeforeOutBack
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::OnWaitTimeFinishedBeforeOutBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.OnWaitTimeFinishedBeforeOutBack");

	UWBP_QTESimon_C_OnWaitTimeFinishedBeforeOutBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.OnOutbackAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::OnOutbackAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.OnOutbackAnimationFinished");

	UWBP_QTESimon_C_OnOutbackAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.ExecuteUbergraph_WBP_QTESimon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESimon_C::ExecuteUbergraph_WBP_QTESimon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.ExecuteUbergraph_WBP_QTESimon");

	UWBP_QTESimon_C_ExecuteUbergraph_WBP_QTESimon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.OnWaitTimeFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::OnWaitTimeFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.OnWaitTimeFinished__DelegateSignature");

	UWBP_QTESimon_C_OnWaitTimeFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.OnOutAnimationFinishedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::OnOutAnimationFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.OnOutAnimationFinishedDispatcher__DelegateSignature");

	UWBP_QTESimon_C_OnOutAnimationFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.OnInAnimationFinishedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::OnInAnimationFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.OnInAnimationFinishedDispatcher__DelegateSignature");

	UWBP_QTESimon_C_OnInAnimationFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature");

	UWBP_QTESimon_C_OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

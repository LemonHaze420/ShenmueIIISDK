
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

// Function WBP_QTESimon.WBP_QTESimon_C.GetCurrentInstructionButtonEffect
// (Net, NetReliable, Exec, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   InInputName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWBP_QTESimonButtonEffect_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWBP_QTESimonButtonEffect_C* UWBP_QTESimon_C::STATIC_GetButtonEffectFromInputName(const struct FName& InInputName)
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
// (NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UWBP_QTESimon_C::STATIC_ResetAllButtonEffectZOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.ResetAllButtonEffectZOrder");

	UWBP_QTESimon_C_ResetAllButtonEffectZOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.ResetButtonEffectZOrder
// (NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
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
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_QTESimonButtonEffect_C* TargetButtonEffect             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QTESimon_C::STATIC_SetButtonEffectZOrderToFront(class UWBP_QTESimonButtonEffect_C* TargetButtonEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.SetButtonEffectZOrderToFront");

	UWBP_QTESimon_C_SetButtonEffectZOrderToFront_Params params;
	params.TargetButtonEffect = TargetButtonEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.IsPlayingInstruction
// (Net, NetRequest, NetResponse, Static, NetMulticast, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTESimon_C::STATIC_IsPlayingInstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.IsPlayingInstruction");

	UWBP_QTESimon_C_IsPlayingInstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTESimon.WBP_QTESimon_C.StopInstructions
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UWBP_QTESimon_C::STATIC_StopInstructions()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.StopInstructions");

	UWBP_QTESimon_C_StopInstructions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.PlayOutBack
// (NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void UWBP_QTESimon_C::STATIC_PlayOutBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.PlayOutBack");

	UWBP_QTESimon_C_PlayOutBack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.StartWaitTime
// (Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          InWaitTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESimon_C::StartWaitTime(float InWaitTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.StartWaitTime");

	UWBP_QTESimon_C_StartWaitTime_Params params;
	params.InWaitTime = InWaitTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.Update
// (Exec, Static, NetMulticast, Public, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void UWBP_QTESimon_C::STATIC_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.Update");

	UWBP_QTESimon_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.SetupButton
// (Net, Static, MulticastDelegate, Private, Protected, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UWBP_QTESimon_C::STATIC_SetupButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.SetupButton");

	UWBP_QTESimon_C_SetupButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.GetCurrentInstructionButton
// (NetReliable, Native, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWBP_QTESimonButton_C*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWBP_QTESimonButton_C* UWBP_QTESimon_C::GetCurrentInstructionButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.GetCurrentInstructionButton");

	UWBP_QTESimon_C_GetCurrentInstructionButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTESimon.WBP_QTESimon_C.GetButtonFromInputName
// (NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Net, NetReliable, NetRequest, NetResponse, Static, NetMulticast, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FName>           InInstructions                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_QTESimon_C::STATIC_SetInstructions(TArray<struct FName>* InInstructions)
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
// (Net, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UWBP_QTESimon_C::STATIC_UpdateAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.UpdateAnimationState");

	UWBP_QTESimon_C_UpdateAnimationState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.GetInAndInstructionAnimationLength
// (NetReliable, Exec, NetResponse, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Net, NetRequest, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// bool                           IsAutoOut                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESimon_C::STATIC_SetAutoOutOkAfterInputSuccess(bool IsAutoOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.SetAutoOutOkAfterInputSuccess");

	UWBP_QTESimon_C_SetAutoOutOkAfterInputSuccess_Params params;
	params.IsAutoOut = IsAutoOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.SetTimeGaugeRate
// (NetRequest, Native, Static, Private, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESimon_C::STATIC_SetTimeGaugeRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.SetTimeGaugeRate");

	UWBP_QTESimon_C_SetTimeGaugeRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.IsPlayingOut
// (NetRequest, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTESimon_C::STATIC_IsPlayingOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.IsPlayingOut");

	UWBP_QTESimon_C_IsPlayingOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTESimon.WBP_QTESimon_C.IsPlayingIn
// (Net, NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTESimon_C::IsPlayingIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.IsPlayingIn");

	UWBP_QTESimon_C_IsPlayingIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTESimon.WBP_QTESimon_C.PlayOutNg
// (Native, Public, Private, Protected, DLLImport, Const)

void UWBP_QTESimon_C::PlayOutNg()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.PlayOutNg");

	UWBP_QTESimon_C_PlayOutNg_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.PlayOutOk
// (NetReliable, NetRequest, Exec, Public, Private, Protected, DLLImport, Const)

void UWBP_QTESimon_C::PlayOutOk()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.PlayOutOk");

	UWBP_QTESimon_C_PlayOutOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.StartAnimationPlayList
// (NetRequest, Exec, Event, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UWBP_QTESimon_C::StartAnimationPlayList()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.StartAnimationPlayList");

	UWBP_QTESimon_C_StartAnimationPlayList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.PlayAnimationPlayList
// (Native, Static, NetMulticast, Public, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           isPlay                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESimon_C::STATIC_PlayAnimationPlayList(bool* isPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.PlayAnimationPlayList");

	UWBP_QTESimon_C_PlayAnimationPlayList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isPlay != nullptr)
		*isPlay = params.isPlay;
}


// Function WBP_QTESimon.WBP_QTESimon_C.InitializeAnimationSet
// (NetRequest, Native, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, NetClient, Const)

void UWBP_QTESimon_C::STATIC_InitializeAnimationSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.InitializeAnimationSet");

	UWBP_QTESimon_C_InitializeAnimationSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.PlayIn
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UWBP_QTESimon_C::STATIC_PlayIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.PlayIn");

	UWBP_QTESimon_C_PlayIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.IsPlayingInputSuccess
// (Net, Exec, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTESimon_C::STATIC_IsPlayingInputSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.IsPlayingInputSuccess");

	UWBP_QTESimon_C_IsPlayingInputSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTESimon.WBP_QTESimon_C.ResetAllButtonZOrder
// (NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UWBP_QTESimon_C::ResetAllButtonZOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.ResetAllButtonZOrder");

	UWBP_QTESimon_C_ResetAllButtonZOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.ResetButtonZOrder
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_QTESimonButton_C*   TargetButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QTESimon_C::STATIC_ResetButtonZOrder(class UWBP_QTESimonButton_C* TargetButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.ResetButtonZOrder");

	UWBP_QTESimon_C_ResetButtonZOrder_Params params;
	params.TargetButton = TargetButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.SetButtonZOrderToFront
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_QTESimonButton_C*   TargetButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QTESimon_C::STATIC_SetButtonZOrderToFront(class UWBP_QTESimonButton_C* TargetButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.SetButtonZOrderToFront");

	UWBP_QTESimon_C_SetButtonZOrderToFront_Params params;
	params.TargetButton = TargetButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.GetButtonImage
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Image                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESimon_C::STATIC_GetButtonImage(const struct FName& InputName, class UTexture2D** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.GetButtonImage");

	UWBP_QTESimon_C_GetButtonImage_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Image != nullptr)
		*Image = params.Image;
}


// Function WBP_QTESimon.WBP_QTESimon_C.PlayInputSuccess
// (Native, NetResponse, Static, NetMulticast, Public, Private, NetServer, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// struct FName                   InInputName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAutoHide                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESimon_C::STATIC_PlayInputSuccess(const struct FName& InInputName, bool IsAutoHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.PlayInputSuccess");

	UWBP_QTESimon_C_PlayInputSuccess_Params params;
	params.InInputName = InInputName;
	params.IsAutoHide = IsAutoHide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.Reset
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void UWBP_QTESimon_C::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.Reset");

	UWBP_QTESimon_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.Construct
// (Exec, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UWBP_QTESimon_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.Construct");

	UWBP_QTESimon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.Tick
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, NetClient, DLLImport)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESimon_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.Tick");

	UWBP_QTESimon_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.OnButtonInputAnimationFinished
// (Exec, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UWBP_QTESimon_C::STATIC_OnButtonInputAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.OnButtonInputAnimationFinished");

	UWBP_QTESimon_C_OnButtonInputAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.OnFinishedCurrentAnimation
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UWBP_QTESimon_C::STATIC_OnFinishedCurrentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.OnFinishedCurrentAnimation");

	UWBP_QTESimon_C_OnFinishedCurrentAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.BindOnFinishedCurrentAnimation
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UWBP_QTESimon_C::STATIC_BindOnFinishedCurrentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.BindOnFinishedCurrentAnimation");

	UWBP_QTESimon_C_BindOnFinishedCurrentAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.UnbindOnFinishedCurrentAnimation
// (NetReliable, NetRequest, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UWBP_QTESimon_C::STATIC_UnbindOnFinishedCurrentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.UnbindOnFinishedCurrentAnimation");

	UWBP_QTESimon_C_UnbindOnFinishedCurrentAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.BindOnInAnimationFinished
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UWBP_QTESimon_C::STATIC_BindOnInAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.BindOnInAnimationFinished");

	UWBP_QTESimon_C_BindOnInAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.OnInAnimationFinished
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UWBP_QTESimon_C::STATIC_OnInAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.OnInAnimationFinished");

	UWBP_QTESimon_C_OnInAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.UnbindOnInAnimationFinished
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UWBP_QTESimon_C::STATIC_UnbindOnInAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.UnbindOnInAnimationFinished");

	UWBP_QTESimon_C_UnbindOnInAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.BindOnOutAnimationFinished
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UWBP_QTESimon_C::STATIC_BindOnOutAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.BindOnOutAnimationFinished");

	UWBP_QTESimon_C_BindOnOutAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.OnOutAnimationFinished
// (Net, NetRequest, Exec, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UWBP_QTESimon_C::STATIC_OnOutAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.OnOutAnimationFinished");

	UWBP_QTESimon_C_OnOutAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.UnbindOnOutAnimationFinished
// (Net, NetRequest, Exec, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UWBP_QTESimon_C::STATIC_UnbindOnOutAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.UnbindOnOutAnimationFinished");

	UWBP_QTESimon_C_UnbindOnOutAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.OnButtonInstructionAnimationFinished
// (NetRequest, Exec, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UWBP_QTESimon_C::STATIC_OnButtonInstructionAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.OnButtonInstructionAnimationFinished");

	UWBP_QTESimon_C_OnButtonInstructionAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.PlayInstructions
// (NetRequest, Exec, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UWBP_QTESimon_C::STATIC_PlayInstructions()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.PlayInstructions");

	UWBP_QTESimon_C_PlayInstructions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.OnWaitTimeFinishedAfterPlayAnim
// (Net, NetReliable, Exec, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UWBP_QTESimon_C::STATIC_OnWaitTimeFinishedAfterPlayAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.OnWaitTimeFinishedAfterPlayAnim");

	UWBP_QTESimon_C_OnWaitTimeFinishedAfterPlayAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.OnWaitTimeFinishedBeforeOutBack
// (Net, NetReliable, Exec, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UWBP_QTESimon_C::STATIC_OnWaitTimeFinishedBeforeOutBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.OnWaitTimeFinishedBeforeOutBack");

	UWBP_QTESimon_C_OnWaitTimeFinishedBeforeOutBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.OnOutBackAnimationFinished
// (NetReliable, Exec, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UWBP_QTESimon_C::STATIC_OnOutBackAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.OnOutBackAnimationFinished");

	UWBP_QTESimon_C_OnOutBackAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.ExecuteUbergraph_WBP_QTESimon
// (Net, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, BlueprintCallable)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTESimon_C::STATIC_ExecuteUbergraph_WBP_QTESimon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.ExecuteUbergraph_WBP_QTESimon");

	UWBP_QTESimon_C_ExecuteUbergraph_WBP_QTESimon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.OnWaitTimeFinished__DelegateSignature
// (Net, NetReliable, NetRequest, Event, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UWBP_QTESimon_C::OnWaitTimeFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.OnWaitTimeFinished__DelegateSignature");

	UWBP_QTESimon_C_OnWaitTimeFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.OnOutAnimationFinishedDispatcher__DelegateSignature
// (Net, NetReliable, NetRequest, Event, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UWBP_QTESimon_C::OnOutAnimationFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.OnOutAnimationFinishedDispatcher__DelegateSignature");

	UWBP_QTESimon_C_OnOutAnimationFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.OnInAnimationFinishedDispatcher__DelegateSignature
// (Net, NetReliable, NetRequest, Event, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UWBP_QTESimon_C::OnInAnimationFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTESimon.WBP_QTESimon_C.OnInAnimationFinishedDispatcher__DelegateSignature");

	UWBP_QTESimon_C_OnInAnimationFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTESimon.WBP_QTESimon_C.OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature
// (NetReliable, NetRequest, Event, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)

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

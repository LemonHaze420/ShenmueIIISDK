
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

// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.IsOutAnimationPlaying
// (NetReliable, Event, NetResponse, Static, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_BellTowerPillarAttentionBigIcon_C::STATIC_IsOutAnimationPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.IsOutAnimationPlaying");

	UWBP_BellTowerPillarAttentionBigIcon_C_IsOutAnimationPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.OnAnimationEndDuringFinishing
// (Native, Event, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void UWBP_BellTowerPillarAttentionBigIcon_C::OnAnimationEndDuringFinishing()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.OnAnimationEndDuringFinishing");

	UWBP_BellTowerPillarAttentionBigIcon_C_OnAnimationEndDuringFinishing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.Finish
// (Net, NetReliable, NetRequest, Exec, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           IsAutoRemoveFromParent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BellTowerPillarAttentionBigIcon_C::STATIC_Finish(bool IsAutoRemoveFromParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.Finish");

	UWBP_BellTowerPillarAttentionBigIcon_C_Finish_Params params;
	params.IsAutoRemoveFromParent = IsAutoRemoveFromParent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.Start
// (Net, NetReliable, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UWBP_BellTowerPillarAttentionBigIcon_C::STATIC_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.Start");

	UWBP_BellTowerPillarAttentionBigIcon_C_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.PlayAnimIcon
// (Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*        Anim                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          PlaybackSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BellTowerPillarAttentionBigIcon_C::STATIC_PlayAnimIcon(class UWidgetAnimation* Anim, float PlaybackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.PlayAnimIcon");

	UWBP_BellTowerPillarAttentionBigIcon_C_PlayAnimIcon_Params params;
	params.Anim = Anim;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.SetParam
// (Net, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IconAnim                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Blink                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BellTowerPillarAttentionBigIcon_C::SetParam(int ButtonIndex, ES3ActionIconType Type, bool IconAnim, bool Blink)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.SetParam");

	UWBP_BellTowerPillarAttentionBigIcon_C_SetParam_Params params;
	params.ButtonIndex = ButtonIndex;
	params.Type = Type;
	params.IconAnim = IconAnim;
	params.Blink = Blink;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.InitIcon
// (NetRequest, Event, NetResponse, Static, NetMulticast, Private, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BellTowerPillarAttentionBigIcon_C::STATIC_InitIcon(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.InitIcon");

	UWBP_BellTowerPillarAttentionBigIcon_C_InitIcon_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.GetOpacity
// (NetReliable, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Opacity                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_BellTowerPillarAttentionBigIcon_C::GetOpacity(class UImage* Image, float* Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.GetOpacity");

	UWBP_BellTowerPillarAttentionBigIcon_C_GetOpacity_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Opacity != nullptr)
		*Opacity = params.Opacity;
}


// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.SetOpacity
// (Net, NetReliable, NetRequest, Native, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BellTowerPillarAttentionBigIcon_C::SetOpacity(class UImage* Image, float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.SetOpacity");

	UWBP_BellTowerPillarAttentionBigIcon_C_SetOpacity_Params params;
	params.Image = Image;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.SetIconFlipAnim
// (NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BellTowerPillarAttentionBigIcon_C::SetIconFlipAnim(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.SetIconFlipAnim");

	UWBP_BellTowerPillarAttentionBigIcon_C_SetIconFlipAnim_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.SetBaseBlink
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UWBP_BellTowerPillarAttentionBigIcon_C::STATIC_SetBaseBlink()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.SetBaseBlink");

	UWBP_BellTowerPillarAttentionBigIcon_C_SetBaseBlink_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.Initialize
// (Static, Public, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BellTowerPillarAttentionBigIcon_C::STATIC_Initialize(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.Initialize");

	UWBP_BellTowerPillarAttentionBigIcon_C_Initialize_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.SetActionType
// (NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults)
// Parameters:
// ES3ActionIconType              ActionType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BellTowerPillarAttentionBigIcon_C::STATIC_SetActionType(ES3ActionIconType ActionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.SetActionType");

	UWBP_BellTowerPillarAttentionBigIcon_C_SetActionType_Params params;
	params.ActionType = ActionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.FadeBase
// (NetReliable, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// bool                           In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BellTowerPillarAttentionBigIcon_C::STATIC_FadeBase(bool In)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.FadeBase");

	UWBP_BellTowerPillarAttentionBigIcon_C_FadeBase_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.FadeIcon
// (Net, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BellTowerPillarAttentionBigIcon_C::FadeIcon(bool In)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.FadeIcon");

	UWBP_BellTowerPillarAttentionBigIcon_C_FadeIcon_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.AnimIcon
// (NetReliable, Exec, Event, Public, Private, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BellTowerPillarAttentionBigIcon_C::AnimIcon(bool In)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.AnimIcon");

	UWBP_BellTowerPillarAttentionBigIcon_C_AnimIcon_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.OnAnimationFinished
// (NetReliable, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_BellTowerPillarAttentionBigIcon_C::STATIC_OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.OnAnimationFinished");

	UWBP_BellTowerPillarAttentionBigIcon_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.Construct
// (Net, Native, NetResponse, MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UWBP_BellTowerPillarAttentionBigIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.Construct");

	UWBP_BellTowerPillarAttentionBigIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.ExecuteUbergraph_WBP_BellTowerPillarAttentionBigIcon
// (Exec, Native, NetMulticast, Private, NetServer, HasOutParms, NetClient, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BellTowerPillarAttentionBigIcon_C::ExecuteUbergraph_WBP_BellTowerPillarAttentionBigIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.ExecuteUbergraph_WBP_BellTowerPillarAttentionBigIcon");

	UWBP_BellTowerPillarAttentionBigIcon_C_ExecuteUbergraph_WBP_BellTowerPillarAttentionBigIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.onAnimEnd__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_BellTowerPillarAttentionBigIcon_C::onAnimEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BellTowerPillarAttentionBigIcon.WBP_BellTowerPillarAttentionBigIcon_C.onAnimEnd__DelegateSignature");

	UWBP_BellTowerPillarAttentionBigIcon_C_onAnimEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

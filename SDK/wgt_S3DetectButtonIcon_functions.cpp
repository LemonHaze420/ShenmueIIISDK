
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

// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetColor
// (Net, NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uwgt_S3DetectButtonIcon_C::STATIC_SetColor(class UImage* Image, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetColor");

	Uwgt_S3DetectButtonIcon_C_SetColor_Params params;
	params.Image = Image;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.AnimBase
// (NetReliable, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_S3DetectButtonIcon_C::STATIC_AnimBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.AnimBase");

	Uwgt_S3DetectButtonIcon_C_AnimBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.FlashAnimBase
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void Uwgt_S3DetectButtonIcon_C::STATIC_FlashAnimBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.FlashAnimBase");

	Uwgt_S3DetectButtonIcon_C_FlashAnimBase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.ResetParam
// (NetReliable, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)

void Uwgt_S3DetectButtonIcon_C::STATIC_ResetParam()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.ResetParam");

	Uwgt_S3DetectButtonIcon_C_ResetParam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.PlayAnimIcon
// (Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*        Anim                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          PlaybackSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectButtonIcon_C::PlayAnimIcon(class UWidgetAnimation* Anim, float PlaybackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.PlayAnimIcon");

	Uwgt_S3DetectButtonIcon_C_PlayAnimIcon_Params params;
	params.Anim = Anim;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetParam
// (NetReliable, NetRequest, Exec, Native, Static, MulticastDelegate, Private, Delegate, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FS3DetectActionParam    Param                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uwgt_S3DetectButtonIcon_C::STATIC_SetParam(int ButtonIndex, struct FS3DetectActionParam* Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetParam");

	Uwgt_S3DetectButtonIcon_C_SetParam_Params params;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Param != nullptr)
		*Param = params.Param;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.InitIcon
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectButtonIcon_C::STATIC_InitIcon(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.InitIcon");

	Uwgt_S3DetectButtonIcon_C_InitIcon_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.GetOpacity
// (Net, Exec, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Opacity                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectButtonIcon_C::STATIC_GetOpacity(class UImage* Image, float* Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.GetOpacity");

	Uwgt_S3DetectButtonIcon_C_GetOpacity_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Opacity != nullptr)
		*Opacity = params.Opacity;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetOpacity
// (Net, Exec, Event, Static, NetMulticast, Protected, NetServer, HasOutParms, NetClient, DLLImport)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectButtonIcon_C::STATIC_SetOpacity(class UImage* Image, float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetOpacity");

	Uwgt_S3DetectButtonIcon_C_SetOpacity_Params params;
	params.Image = Image;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetIconFlipAnim
// (NetRequest, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectButtonIcon_C::STATIC_SetIconFlipAnim(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetIconFlipAnim");

	Uwgt_S3DetectButtonIcon_C_SetIconFlipAnim_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetBaseBlink
// (Net, Event, Static, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void Uwgt_S3DetectButtonIcon_C::STATIC_SetBaseBlink()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetBaseBlink");

	Uwgt_S3DetectButtonIcon_C_SetBaseBlink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.Initialize
// (NetRequest, Native, Event, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectButtonIcon_C::Initialize(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.Initialize");

	Uwgt_S3DetectButtonIcon_C_Initialize_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetActionType
// (NetReliable, Exec, Event, Static, MulticastDelegate, Private, Delegate, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3ActionIconType              ActionType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectButtonIcon_C::STATIC_SetActionType(ES3ActionIconType ActionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetActionType");

	Uwgt_S3DetectButtonIcon_C_SetActionType_Params params;
	params.ActionType = ActionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.FadeIcon
// (NetRequest, Event, Static, MulticastDelegate, Private, Delegate, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectButtonIcon_C::STATIC_FadeIcon(bool In)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.FadeIcon");

	Uwgt_S3DetectButtonIcon_C_FadeIcon_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.AnimIcon
// (NetReliable, NetResponse, Static, NetMulticast, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectButtonIcon_C::STATIC_AnimIcon(bool In)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.AnimIcon");

	Uwgt_S3DetectButtonIcon_C_AnimIcon_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.OnAnimationFinished
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, Public, Protected, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void Uwgt_S3DetectButtonIcon_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.OnAnimationFinished");

	Uwgt_S3DetectButtonIcon_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.Construct
// (NetResponse, Static, NetMulticast, NetServer, HasDefaults, NetClient, BlueprintPure)

void Uwgt_S3DetectButtonIcon_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.Construct");

	Uwgt_S3DetectButtonIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.BndEvt__IconAnim_EX_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, NetServer, HasDefaults, NetClient, BlueprintPure)

void Uwgt_S3DetectButtonIcon_C::STATIC_BndEvt__IconAnim_EX_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.BndEvt__IconAnim_EX_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3DetectButtonIcon_C_BndEvt__IconAnim_EX_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.ExecuteUbergraph_wgt_S3DetectButtonIcon
// (Event, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, DLLImport, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectButtonIcon_C::ExecuteUbergraph_wgt_S3DetectButtonIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.ExecuteUbergraph_wgt_S3DetectButtonIcon");

	Uwgt_S3DetectButtonIcon_C_ExecuteUbergraph_wgt_S3DetectButtonIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.onAnimEnd__DelegateSignature
// (NetReliable, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void Uwgt_S3DetectButtonIcon_C::onAnimEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.onAnimEnd__DelegateSignature");

	Uwgt_S3DetectButtonIcon_C_onAnimEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

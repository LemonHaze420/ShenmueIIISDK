
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
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uwgt_S3DetectButtonIcon_C::SetColor(class UImage* Image, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetColor");

	Uwgt_S3DetectButtonIcon_C_SetColor_Params params;
	params.Image = Image;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.AnimBase
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3DetectButtonIcon_C::AnimBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.AnimBase");

	Uwgt_S3DetectButtonIcon_C_AnimBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.FlashAnimBase
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3DetectButtonIcon_C::FlashAnimBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.FlashAnimBase");

	Uwgt_S3DetectButtonIcon_C_FlashAnimBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.ResetParam
// (Private, BlueprintCallable, BlueprintEvent)

void Uwgt_S3DetectButtonIcon_C::ResetParam()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.ResetParam");

	Uwgt_S3DetectButtonIcon_C_ResetParam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.PlayAnimIcon
// (Private, BlueprintCallable, BlueprintEvent)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FS3DetectActionParam    Param                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uwgt_S3DetectButtonIcon_C::SetParam(int ButtonIndex, struct FS3DetectActionParam* Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetParam");

	Uwgt_S3DetectButtonIcon_C_SetParam_Params params;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Param != nullptr)
		*Param = params.Param;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.InitIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectButtonIcon_C::InitIcon(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.InitIcon");

	Uwgt_S3DetectButtonIcon_C_InitIcon_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.GetOpacity
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Opacity                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectButtonIcon_C::GetOpacity(class UImage* Image, float* Opacity)
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
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectButtonIcon_C::SetOpacity(class UImage* Image, float Opacity)
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
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectButtonIcon_C::SetIconFlipAnim(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetIconFlipAnim");

	Uwgt_S3DetectButtonIcon_C_SetIconFlipAnim_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetBaseBlink
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3DetectButtonIcon_C::SetBaseBlink()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetBaseBlink");

	Uwgt_S3DetectButtonIcon_C_SetBaseBlink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectButtonIcon_C::Initialize(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.Initialize");

	Uwgt_S3DetectButtonIcon_C_Initialize_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetActionType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              ActionType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectButtonIcon_C::SetActionType(ES3ActionIconType ActionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.SetActionType");

	Uwgt_S3DetectButtonIcon_C_SetActionType_Params params;
	params.ActionType = ActionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.FadeIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectButtonIcon_C::FadeIcon(bool In)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.FadeIcon");

	Uwgt_S3DetectButtonIcon_C_FadeIcon_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.AnimIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectButtonIcon_C::AnimIcon(bool In)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.AnimIcon");

	Uwgt_S3DetectButtonIcon_C_AnimIcon_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
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
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_S3DetectButtonIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.Construct");

	Uwgt_S3DetectButtonIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.BndEvt__IconAnim_EX_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void Uwgt_S3DetectButtonIcon_C::BndEvt__IconAnim_EX_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.BndEvt__IconAnim_EX_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3DetectButtonIcon_C_BndEvt__IconAnim_EX_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonIcon.wgt_S3DetectButtonIcon_C.ExecuteUbergraph_wgt_S3DetectButtonIcon
// ()
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
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

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

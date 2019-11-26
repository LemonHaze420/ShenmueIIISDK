
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

// Function wgt_S3DetectButtonBase.wgt_S3DetectButtonBase_C.FadeBase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectButtonBase_C::FadeBase(bool In)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonBase.wgt_S3DetectButtonBase_C.FadeBase");

	Uwgt_S3DetectButtonBase_C_FadeBase_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonBase.wgt_S3DetectButtonBase_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void Uwgt_S3DetectButtonBase_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonBase.wgt_S3DetectButtonBase_C.OnAnimationFinished");

	Uwgt_S3DetectButtonBase_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonBase.wgt_S3DetectButtonBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_S3DetectButtonBase_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonBase.wgt_S3DetectButtonBase_C.Construct");

	Uwgt_S3DetectButtonBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonBase.wgt_S3DetectButtonBase_C.ExecuteUbergraph_wgt_S3DetectButtonBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3DetectButtonBase_C::ExecuteUbergraph_wgt_S3DetectButtonBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonBase.wgt_S3DetectButtonBase_C.ExecuteUbergraph_wgt_S3DetectButtonBase");

	Uwgt_S3DetectButtonBase_C_ExecuteUbergraph_wgt_S3DetectButtonBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonBase.wgt_S3DetectButtonBase_C.onAnimEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_S3DetectButtonBase_C::onAnimEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonBase.wgt_S3DetectButtonBase_C.onAnimEnd__DelegateSignature");

	Uwgt_S3DetectButtonBase_C_onAnimEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

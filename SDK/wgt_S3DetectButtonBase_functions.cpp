
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
// (Net, Exec, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Net, Exec, Native, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void Uwgt_S3DetectButtonBase_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonBase.wgt_S3DetectButtonBase_C.OnAnimationFinished");

	Uwgt_S3DetectButtonBase_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonBase.wgt_S3DetectButtonBase_C.Construct
// (NetReliable, NetResponse, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void Uwgt_S3DetectButtonBase_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonBase.wgt_S3DetectButtonBase_C.Construct");

	Uwgt_S3DetectButtonBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3DetectButtonBase.wgt_S3DetectButtonBase_C.ExecuteUbergraph_wgt_S3DetectButtonBase
// (NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)
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
// (NetRequest, Native, Static, Public, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void Uwgt_S3DetectButtonBase_C::STATIC_onAnimEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3DetectButtonBase.wgt_S3DetectButtonBase_C.onAnimEnd__DelegateSignature");

	Uwgt_S3DetectButtonBase_C_onAnimEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

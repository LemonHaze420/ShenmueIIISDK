
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

// Function BPF_ImageDetectAction.BPF_ImageDetectAction_C.SetDetectIconMaterialParams
// (NetResponse, MulticastDelegate, Public, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_ImageDetectAction_C::SetDetectIconMaterialParams(class UMaterialInstanceDynamic* Material, ES3ActionIconType Type, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageDetectAction.BPF_ImageDetectAction_C.SetDetectIconMaterialParams");

	UBPF_ImageDetectAction_C_SetDetectIconMaterialParams_Params params;
	params.Material = Material;
	params.Type = Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_ImageDetectAction.BPF_ImageDetectAction_C.GetDetectActionConfirm
// (NetReliable, Native, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UBPF_ImageDetectAction_C::STATIC_GetDetectActionConfirm(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageDetectAction.BPF_ImageDetectAction_C.GetDetectActionConfirm");

	UBPF_ImageDetectAction_C_GetDetectActionConfirm_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_ImageDetectAction.BPF_ImageDetectAction_C.GetDeviceBindingIcon
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3PadButtonIndex              Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_ImageDetectAction_C::GetDeviceBindingIcon(ES3PadButtonIndex Index, class UObject* __WorldContext, class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageDetectAction.BPF_ImageDetectAction_C.GetDeviceBindingIcon");

	UBPF_ImageDetectAction_C_GetDeviceBindingIcon_Params params;
	params.Index = Index;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;
}


// Function BPF_ImageDetectAction.BPF_ImageDetectAction_C.DetectIconIdxToFaceButtonIdx
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Absolute                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3PadButtonIndex              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

ES3PadButtonIndex UBPF_ImageDetectAction_C::STATIC_DetectIconIdxToFaceButtonIdx(int Index, bool Absolute, class UObject* __WorldContext, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageDetectAction.BPF_ImageDetectAction_C.DetectIconIdxToFaceButtonIdx");

	UBPF_ImageDetectAction_C_DetectIconIdxToFaceButtonIdx_Params params;
	params.Index = Index;
	params.Absolute = Absolute;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function BPF_ImageDetectAction.BPF_ImageDetectAction_C.GetDetectIconBase
// (Net, Native, Event, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Absolute                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                IconBase                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_ImageDetectAction_C::GetDetectIconBase(int ButtonIndex, bool Absolute, class UObject* __WorldContext, class UTexture** IconBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageDetectAction.BPF_ImageDetectAction_C.GetDetectIconBase");

	UBPF_ImageDetectAction_C_GetDetectIconBase_Params params;
	params.ButtonIndex = ButtonIndex;
	params.Absolute = Absolute;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconBase != nullptr)
		*IconBase = params.IconBase;
}


// Function BPF_ImageDetectAction.BPF_ImageDetectAction_C.GetDetectButtonBase
// (NetRequest, Exec, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UTexture2D*>      TexArray                       (Parm, OutParm, ZeroConstructor)

void UBPF_ImageDetectAction_C::GetDetectButtonBase(class UObject* __WorldContext, TArray<class UTexture2D*>* TexArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageDetectAction.BPF_ImageDetectAction_C.GetDetectButtonBase");

	UBPF_ImageDetectAction_C_GetDetectButtonBase_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TexArray != nullptr)
		*TexArray = params.TexArray;
}


// Function BPF_ImageDetectAction.BPF_ImageDetectAction_C.GetDetectActionIcon
// (Net, NetReliable, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, NetClient)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               FlipSize                       (Parm, OutParm, IsPlainOldData)

void UBPF_ImageDetectAction_C::GetDetectActionIcon(ES3ActionIconType Type, class UObject* __WorldContext, class UTexture** Icon, struct FVector2D* FlipSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ImageDetectAction.BPF_ImageDetectAction_C.GetDetectActionIcon");

	UBPF_ImageDetectAction_C_GetDetectActionIcon_Params params;
	params.Type = Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
	if (FlipSize != nullptr)
		*FlipSize = params.FlipSize;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

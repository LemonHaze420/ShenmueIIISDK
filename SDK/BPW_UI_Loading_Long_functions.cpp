
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

// Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.ChangeFontType
// (Net, Exec, Event, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport)

void UBPW_UI_Loading_Long_C::STATIC_ChangeFontType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.ChangeFontType");

	UBPW_UI_Loading_Long_C_ChangeFontType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.CheckHiddenMirror
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, BlueprintCallable)

void UBPW_UI_Loading_Long_C::STATIC_CheckHiddenMirror()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.CheckHiddenMirror");

	UBPW_UI_Loading_Long_C_CheckHiddenMirror_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.SetLoadingType
// (Net, NetReliable, NetResponse, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// ES3LoadingType                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPW_UI_Loading_Long_C::SetLoadingType(ES3LoadingType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.SetLoadingType");

	UBPW_UI_Loading_Long_C_SetLoadingType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.SetDebugIndex
// (NetRequest, NetResponse, MulticastDelegate, Private, Delegate, HasOutParms, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Loading_Long_C::SetDebugIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.SetDebugIndex");

	UBPW_UI_Loading_Long_C_SetDebugIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.GetProgressBarImage
// (Exec, Event, Public, Private, Protected, NetServer, BlueprintCallable)
// Parameters:
// class US3LoadingProgressImage* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class US3LoadingProgressImage* UBPW_UI_Loading_Long_C::GetProgressBarImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.GetProgressBarImage");

	UBPW_UI_Loading_Long_C_GetProgressBarImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.SetCharaData
// (NetRequest, Event, NetResponse, NetMulticast, Public, Private, Protected, HasDefaults, NetClient, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTextBlock*              Description                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTextBlock*              Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPW_UI_Loading_Long_C::SetCharaData(int Index, class UImage* Image, class UTextBlock* Description, class UTextBlock* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.SetCharaData");

	UBPW_UI_Loading_Long_C_SetCharaData_Params params;
	params.Index = Index;
	params.Image = Image;
	params.Description = Description;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.SetTexture
// (Net, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient)

void UBPW_UI_Loading_Long_C::STATIC_SetTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.SetTexture");

	UBPW_UI_Loading_Long_C_SetTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.Tick
// (Net, Exec, Event, Public, Private, Protected, NetServer, BlueprintCallable)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Loading_Long_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.Tick");

	UBPW_UI_Loading_Long_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.ExecuteUbergraph_BPW_UI_Loading_Long
// (Net, NetRequest, Exec, Event, Protected, NetServer, BlueprintCallable)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Loading_Long_C::ExecuteUbergraph_BPW_UI_Loading_Long(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.ExecuteUbergraph_BPW_UI_Loading_Long");

	UBPW_UI_Loading_Long_C_ExecuteUbergraph_BPW_UI_Loading_Long_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.MirrorRotation__DelegateSignature
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, Public, Delegate, HasOutParms, BlueprintEvent)

void UBPW_UI_Loading_Long_C::STATIC_MirrorRotation__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.MirrorRotation__DelegateSignature");

	UBPW_UI_Loading_Long_C_MirrorRotation__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.ChangeFontType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_UI_Loading_Long_C::ChangeFontType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.ChangeFontType");

	UBPW_UI_Loading_Long_C_ChangeFontType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.CheckHiddenMirror
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_UI_Loading_Long_C::CheckHiddenMirror()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.CheckHiddenMirror");

	UBPW_UI_Loading_Long_C_CheckHiddenMirror_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.SetLoadingType
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3LoadingType*                Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPW_UI_Loading_Long_C::SetLoadingType(ES3LoadingType* Type)
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
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (BlueprintCallable, BlueprintEvent)

void UBPW_UI_Loading_Long_C::SetTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.SetTexture");

	UBPW_UI_Loading_Long_C_SetTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Loading_Long_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
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
// (HasDefaults)
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
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPW_UI_Loading_Long_C::MirrorRotation__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Loading_Long.BPW_UI_Loading_Long_C.MirrorRotation__DelegateSignature");

	UBPW_UI_Loading_Long_C_MirrorRotation__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

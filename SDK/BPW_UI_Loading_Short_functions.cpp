
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

// Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.ChangeFontColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPW_UI_Loading_Short_C::ChangeFontColor(class UTextBlock* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.ChangeFontColor");

	UBPW_UI_Loading_Short_C_ChangeFontColor_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.StartFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Loading_Short_C::StartFade(bool In)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.StartFade");

	UBPW_UI_Loading_Short_C_StartFade_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_UI_Loading_Short_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.Construct");

	UBPW_UI_Loading_Short_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Loading_Short_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.Tick");

	UBPW_UI_Loading_Short_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.ExecuteUbergraph_BPW_UI_Loading_Short
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Loading_Short_C::ExecuteUbergraph_BPW_UI_Loading_Short(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.ExecuteUbergraph_BPW_UI_Loading_Short");

	UBPW_UI_Loading_Short_C_ExecuteUbergraph_BPW_UI_Loading_Short_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.OnFinishFadeOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPW_UI_Loading_Short_C::OnFinishFadeOut__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.OnFinishFadeOut__DelegateSignature");

	UBPW_UI_Loading_Short_C_OnFinishFadeOut__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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
// (NetRequest, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, NetClient, BlueprintPure)
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
// (NetReliable, NetRequest, Native, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// bool                           In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Loading_Short_C::StartFade(bool In)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.StartFade");

	UBPW_UI_Loading_Short_C_StartFade_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.Construct
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, BlueprintEvent)

void UBPW_UI_Loading_Short_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.Construct");

	UBPW_UI_Loading_Short_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.Tick
// (NetReliable, NetRequest, Native, NetResponse, Public, Private, Protected, HasOutParms, NetClient, BlueprintPure)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.ExecuteUbergraph_BPW_UI_Loading_Short
// (Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_Loading_Short_C::STATIC_ExecuteUbergraph_BPW_UI_Loading_Short(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.ExecuteUbergraph_BPW_UI_Loading_Short");

	UBPW_UI_Loading_Short_C_ExecuteUbergraph_BPW_UI_Loading_Short_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.OnFinishFadeOut__DelegateSignature
// (Net, Native, Event, NetResponse, NetMulticast, Delegate, NetServer, NetClient)

void UBPW_UI_Loading_Short_C::OnFinishFadeOut__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_Loading_Short.BPW_UI_Loading_Short_C.OnFinishFadeOut__DelegateSignature");

	UBPW_UI_Loading_Short_C_OnFinishFadeOut__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

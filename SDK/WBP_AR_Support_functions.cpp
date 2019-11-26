
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

// Function WBP_AR_Support.WBP_AR_Support_C.GetPushCountRate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_AR_Support_C::GetPushCountRate(int Index, float* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AR_Support.WBP_AR_Support_C.GetPushCountRate");

	UWBP_AR_Support_C_GetPushCountRate_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function WBP_AR_Support.WBP_AR_Support_C.UpdateFillRatio
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_AR_Support_C::UpdateFillRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AR_Support.WBP_AR_Support_C.UpdateFillRatio");

	UWBP_AR_Support_C_UpdateFillRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AR_Support.WBP_AR_Support_C.ChangeButtonIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_padSwitch>      ButtonType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AR_Support_C::ChangeButtonIcon(TEnumAsByte<EN_padSwitch> ButtonType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AR_Support.WBP_AR_Support_C.ChangeButtonIcon");

	UWBP_AR_Support_C_ChangeButtonIcon_Params params;
	params.ButtonType = ButtonType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AR_Support.WBP_AR_Support_C.Count Check
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_AR_Support_C::Count_Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AR_Support.WBP_AR_Support_C.Count Check");

	UWBP_AR_Support_C_Count_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AR_Support.WBP_AR_Support_C.AddPushCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AR_Support_C::AddPushCount(bool Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AR_Support.WBP_AR_Support_C.AddPushCount");

	UWBP_AR_Support_C_AddPushCount_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AR_Support.WBP_AR_Support_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_AR_Support_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AR_Support.WBP_AR_Support_C.Construct");

	UWBP_AR_Support_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AR_Support.WBP_AR_Support_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AR_Support_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AR_Support.WBP_AR_Support_C.Tick");

	UWBP_AR_Support_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AR_Support.WBP_AR_Support_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UWBP_AR_Support_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AR_Support.WBP_AR_Support_C.Reset");

	UWBP_AR_Support_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AR_Support.WBP_AR_Support_C.SetEnabledSupportUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AR_Support_C::SetEnabledSupportUI(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AR_Support.WBP_AR_Support_C.SetEnabledSupportUI");

	UWBP_AR_Support_C_SetEnabledSupportUI_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AR_Support.WBP_AR_Support_C.ExecuteUbergraph_WBP_AR_Support
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AR_Support_C::ExecuteUbergraph_WBP_AR_Support(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AR_Support.WBP_AR_Support_C.ExecuteUbergraph_WBP_AR_Support");

	UWBP_AR_Support_C_ExecuteUbergraph_WBP_AR_Support_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AR_Support.WBP_AR_Support_C.CountChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AR_Support_C::CountChange__DelegateSignature(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AR_Support.WBP_AR_Support_C.CountChange__DelegateSignature");

	UWBP_AR_Support_C_CountChange__DelegateSignature_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AR_Support.WBP_AR_Support_C.CountMAX__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_AR_Support_C::CountMAX__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AR_Support.WBP_AR_Support_C.CountMAX__DelegateSignature");

	UWBP_AR_Support_C_CountMAX__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

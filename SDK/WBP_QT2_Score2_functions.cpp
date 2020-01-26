
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function WBP_QT2_Score2.WBP_QT2_Score2_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWBP_QT2_Score2_C::SetEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QT2_Score2.WBP_QT2_Score2_C.SetEnabled");

	AWBP_QT2_Score2_C_SetEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QT2_Score2.WBP_QT2_Score2_C.GetTextArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UTextBlock*>      Array                          (Parm, OutParm, ZeroConstructor)

void AWBP_QT2_Score2_C::GetTextArray(TArray<class UTextBlock*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QT2_Score2.WBP_QT2_Score2_C.GetTextArray");

	AWBP_QT2_Score2_C_GetTextArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function WBP_QT2_Score2.WBP_QT2_Score2_C.Set Text New
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void AWBP_QT2_Score2_C::Set_Text_New(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QT2_Score2.WBP_QT2_Score2_C.Set Text New");

	AWBP_QT2_Score2_C_Set_Text_New_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QT2_Score2.WBP_QT2_Score2_C.SetVisibleScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWBP_QT2_Score2_C::SetVisibleScore(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QT2_Score2.WBP_QT2_Score2_C.SetVisibleScore");

	AWBP_QT2_Score2_C_SetVisibleScore_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QT2_Score2.WBP_QT2_Score2_C.SetVisibleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWBP_QT2_Score2_C::SetVisibleText(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QT2_Score2.WBP_QT2_Score2_C.SetVisibleText");

	AWBP_QT2_Score2_C_SetVisibleText_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QT2_Score2.WBP_QT2_Score2_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           NotNumber                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWBP_QT2_Score2_C::SetText(const struct FText& Text, bool NotNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QT2_Score2.WBP_QT2_Score2_C.SetText");

	AWBP_QT2_Score2_C_SetText_Params params;
	params.Text = Text;
	params.NotNumber = NotNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QT2_Score2.WBP_QT2_Score2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWBP_QT2_Score2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QT2_Score2.WBP_QT2_Score2_C.UserConstructionScript");

	AWBP_QT2_Score2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QT2_Score2.WBP_QT2_Score2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWBP_QT2_Score2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QT2_Score2.WBP_QT2_Score2_C.ReceiveBeginPlay");

	AWBP_QT2_Score2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QT2_Score2.WBP_QT2_Score2_C.ExecuteUbergraph_WBP_QT2_Score2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWBP_QT2_Score2_C::ExecuteUbergraph_WBP_QT2_Score2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QT2_Score2.WBP_QT2_Score2_C.ExecuteUbergraph_WBP_QT2_Score2");

	AWBP_QT2_Score2_C_ExecuteUbergraph_WBP_QT2_Score2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

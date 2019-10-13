
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

// Function wgt_MemoPageBase.wgt_MemoPageBase_C.SetFontSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTextBlock*              PlaceNameText                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void Uwgt_MemoPageBase_C::SetFontSize(class UTextBlock* Text, class UTextBlock** PlaceNameText)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MemoPageBase.wgt_MemoPageBase_C.SetFontSize");

	Uwgt_MemoPageBase_C_SetFontSize_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlaceNameText != nullptr)
		*PlaceNameText = params.PlaceNameText;
}


// Function wgt_MemoPageBase.wgt_MemoPageBase_C.SetPageIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PageIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_MemoPageBase_C::SetPageIndex(int PageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MemoPageBase.wgt_MemoPageBase_C.SetPageIndex");

	Uwgt_MemoPageBase_C_SetPageIndex_Params params;
	params.PageIndex = PageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_MemoPageBase.wgt_MemoPageBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_MemoPageBase_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MemoPageBase.wgt_MemoPageBase_C.Construct");

	Uwgt_MemoPageBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_MemoPageBase.wgt_MemoPageBase_C.SetSlotContent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3MemopadTextWidget**   Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void Uwgt_MemoPageBase_C::SetSlotContent(int* Index, class US3MemopadTextWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MemoPageBase.wgt_MemoPageBase_C.SetSlotContent");

	Uwgt_MemoPageBase_C_SetSlotContent_Params params;
	params.Index = Index;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_MemoPageBase.wgt_MemoPageBase_C.SetSlotHiddenFlag
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_MemoPageBase_C::SetSlotHiddenFlag(int* Index, bool* flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MemoPageBase.wgt_MemoPageBase_C.SetSlotHiddenFlag");

	Uwgt_MemoPageBase_C_SetSlotHiddenFlag_Params params;
	params.Index = Index;
	params.flag = flag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_MemoPageBase.wgt_MemoPageBase_C.ExecuteUbergraph_wgt_MemoPageBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_MemoPageBase_C::ExecuteUbergraph_wgt_MemoPageBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MemoPageBase.wgt_MemoPageBase_C.ExecuteUbergraph_wgt_MemoPageBase");

	Uwgt_MemoPageBase_C_ExecuteUbergraph_wgt_MemoPageBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_MemoPageBase.wgt_MemoPageBase_C.ED_LoadFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_MemoPageBase_C::ED_LoadFinish__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MemoPageBase.wgt_MemoPageBase_C.ED_LoadFinish__DelegateSignature");

	Uwgt_MemoPageBase_C_ED_LoadFinish__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

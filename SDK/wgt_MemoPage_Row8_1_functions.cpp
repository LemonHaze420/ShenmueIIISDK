
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

// Function wgt_MemoPage_Row8_1.wgt_MemoPage_Row8_0_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_MemoPage_Row8_0_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MemoPage_Row8_1.wgt_MemoPage_Row8_0_C.Construct");

	Uwgt_MemoPage_Row8_0_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_MemoPage_Row8_1.wgt_MemoPage_Row8_0_C.PushButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               positiopn                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uwgt_MemoPage_Row8_0_C::PushButton(const struct FVector2D& positiopn)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MemoPage_Row8_1.wgt_MemoPage_Row8_0_C.PushButton");

	Uwgt_MemoPage_Row8_0_C_PushButton_Params params;
	params.positiopn = positiopn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_MemoPage_Row8_1.wgt_MemoPage_Row8_0_C.SetPageIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PageIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_MemoPage_Row8_0_C::SetPageIndex(int PageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MemoPage_Row8_1.wgt_MemoPage_Row8_0_C.SetPageIndex");

	Uwgt_MemoPage_Row8_0_C_SetPageIndex_Params params;
	params.PageIndex = PageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_MemoPage_Row8_1.wgt_MemoPage_Row8_0_C.ExecuteUbergraph_wgt_MemoPage_Row8_1
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_MemoPage_Row8_0_C::ExecuteUbergraph_wgt_MemoPage_Row8_1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_MemoPage_Row8_1.wgt_MemoPage_Row8_0_C.ExecuteUbergraph_wgt_MemoPage_Row8_1");

	Uwgt_MemoPage_Row8_0_C_ExecuteUbergraph_wgt_MemoPage_Row8_1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

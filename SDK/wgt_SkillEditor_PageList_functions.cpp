
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

// Function wgt_SkillEditor_PageList.wgt_SkillEditor_PageList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_SkillEditor_PageList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_PageList.wgt_SkillEditor_PageList_C.Construct");

	Uwgt_SkillEditor_PageList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_PageList.wgt_SkillEditor_PageList_C.InitializePageCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PageMax                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_PageList_C::InitializePageCount(int PageMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_PageList.wgt_SkillEditor_PageList_C.InitializePageCount");

	Uwgt_SkillEditor_PageList_C_InitializePageCount_Params params;
	params.PageMax = PageMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_PageList.wgt_SkillEditor_PageList_C.SetCurrentPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_PageList_C::SetCurrentPage(int page)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_PageList.wgt_SkillEditor_PageList_C.SetCurrentPage");

	Uwgt_SkillEditor_PageList_C_SetCurrentPage_Params params;
	params.page = page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_PageList.wgt_SkillEditor_PageList_C.EnableAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_PageList_C::EnableAnimation(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_PageList.wgt_SkillEditor_PageList_C.EnableAnimation");

	Uwgt_SkillEditor_PageList_C_EnableAnimation_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_PageList.wgt_SkillEditor_PageList_C.ExecuteUbergraph_wgt_SkillEditor_PageList
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_PageList_C::ExecuteUbergraph_wgt_SkillEditor_PageList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_PageList.wgt_SkillEditor_PageList_C.ExecuteUbergraph_wgt_SkillEditor_PageList");

	Uwgt_SkillEditor_PageList_C_ExecuteUbergraph_wgt_SkillEditor_PageList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

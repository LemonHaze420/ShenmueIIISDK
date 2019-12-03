
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
// (Net, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void Uwgt_SkillEditor_PageList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_PageList.wgt_SkillEditor_PageList_C.Construct");

	Uwgt_SkillEditor_PageList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_PageList.wgt_SkillEditor_PageList_C.InitializePageCount
// (Native, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PageMax                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_PageList_C::STATIC_InitializePageCount(int PageMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_PageList.wgt_SkillEditor_PageList_C.InitializePageCount");

	Uwgt_SkillEditor_PageList_C_InitializePageCount_Params params;
	params.PageMax = PageMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_PageList.wgt_SkillEditor_PageList_C.SetCurrentPage
// (Native, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_PageList_C::STATIC_SetCurrentPage(int page)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_PageList.wgt_SkillEditor_PageList_C.SetCurrentPage");

	Uwgt_SkillEditor_PageList_C_SetCurrentPage_Params params;
	params.page = page;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_PageList.wgt_SkillEditor_PageList_C.EnableAnimation
// (Net, Native, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_PageList_C::STATIC_EnableAnimation(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditor_PageList.wgt_SkillEditor_PageList_C.EnableAnimation");

	Uwgt_SkillEditor_PageList_C_EnableAnimation_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditor_PageList.wgt_SkillEditor_PageList_C.ExecuteUbergraph_wgt_SkillEditor_PageList
// (Net, NetReliable, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditor_PageList_C::STATIC_ExecuteUbergraph_wgt_SkillEditor_PageList(int EntryPoint)
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

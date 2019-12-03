
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

// Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.SetSkillLibrary
// (Net, NetReliable, NetRequest, Exec, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTL_CommandLibrary_C*   SkillLibrary                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditorDetails_C::SetSkillLibrary(class UBTL_CommandLibrary_C* SkillLibrary)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.SetSkillLibrary");

	Uwgt_SkillEditorDetails_C_SetSkillLibrary_Params params;
	params.SkillLibrary = SkillLibrary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.SetDefaultFrameVisible
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditorDetails_C::STATIC_SetDefaultFrameVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.SetDefaultFrameVisible");

	Uwgt_SkillEditorDetails_C_SetDefaultFrameVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.SetDescriptionText
// (Native, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void Uwgt_SkillEditorDetails_C::SetDescriptionText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.SetDescriptionText");

	Uwgt_SkillEditorDetails_C_SetDescriptionText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.SetItem_TableIndex
// (NetRequest, Native, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditorDetails_C::STATIC_SetItem_TableIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.SetItem_TableIndex");

	Uwgt_SkillEditorDetails_C_SetItem_TableIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.Construct
// (Net, NetRequest, Exec, Native, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void Uwgt_SkillEditorDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.Construct");

	Uwgt_SkillEditorDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.PreConstruct
// (Net, NetReliable, NetRequest, Exec, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditorDetails_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.PreConstruct");

	Uwgt_SkillEditorDetails_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.ExecuteUbergraph_wgt_SkillEditorDetails
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditorDetails_C::STATIC_ExecuteUbergraph_wgt_SkillEditorDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.ExecuteUbergraph_wgt_SkillEditorDetails");

	Uwgt_SkillEditorDetails_C_ExecuteUbergraph_wgt_SkillEditorDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

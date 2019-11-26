
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

// Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.SetSkillLibrary
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditorDetails_C::SetDefaultFrameVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.SetDefaultFrameVisible");

	Uwgt_SkillEditorDetails_C_SetDefaultFrameVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.SetDescriptionText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void Uwgt_SkillEditorDetails_C::SetDescriptionText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.SetDescriptionText");

	Uwgt_SkillEditorDetails_C_SetDescriptionText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.SetItem_TableIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditorDetails_C::SetItem_TableIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.SetItem_TableIndex");

	Uwgt_SkillEditorDetails_C_SetItem_TableIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_SkillEditorDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.Construct");

	Uwgt_SkillEditorDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditorDetails_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.PreConstruct");

	Uwgt_SkillEditorDetails_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.ExecuteUbergraph_wgt_SkillEditorDetails
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditorDetails_C::ExecuteUbergraph_wgt_SkillEditorDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorDetails.wgt_SkillEditorDetails_C.ExecuteUbergraph_wgt_SkillEditorDetails");

	Uwgt_SkillEditorDetails_C_ExecuteUbergraph_wgt_SkillEditorDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

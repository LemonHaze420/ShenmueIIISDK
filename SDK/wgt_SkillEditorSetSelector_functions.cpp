
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

// Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.AlertSet
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_SkillEditorSetSelector_C::AlertSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.AlertSet");

	Uwgt_SkillEditorSetSelector_C_AlertSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.SetTitleText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void Uwgt_SkillEditorSetSelector_C::SetTitleText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.SetTitleText");

	Uwgt_SkillEditorSetSelector_C_SetTitleText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.PlayArrowAnim
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Play                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditorSetSelector_C::PlayArrowAnim(bool Play)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.PlayArrowAnim");

	Uwgt_SkillEditorSetSelector_C_PlayArrowAnim_Params params;
	params.Play = Play;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.SetButtonImage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           auto                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditorSetSelector_C::SetButtonImage(bool auto)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.SetButtonImage");

	Uwgt_SkillEditorSetSelector_C_SetButtonImage_Params params;
	params.auto = auto;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.SetSkillSetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   SkillSetText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditorSetSelector_C::SetSkillSetIndex(const struct FText& SkillSetText, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.SetSkillSetIndex");

	Uwgt_SkillEditorSetSelector_C_SetSkillSetIndex_Params params;
	params.SkillSetText = SkillSetText;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_SkillEditorSetSelector_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.Construct");

	Uwgt_SkillEditorSetSelector_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.ExecuteUbergraph_wgt_SkillEditorSetSelector
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditorSetSelector_C::ExecuteUbergraph_wgt_SkillEditorSetSelector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.ExecuteUbergraph_wgt_SkillEditorSetSelector");

	Uwgt_SkillEditorSetSelector_C_ExecuteUbergraph_wgt_SkillEditorSetSelector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

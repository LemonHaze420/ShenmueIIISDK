
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

// Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.AlertSet
// (Net, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_SkillEditorSetSelector_C::STATIC_AlertSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.AlertSet");

	Uwgt_SkillEditorSetSelector_C_AlertSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.SetTitleText
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void Uwgt_SkillEditorSetSelector_C::STATIC_SetTitleText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.SetTitleText");

	Uwgt_SkillEditorSetSelector_C_SetTitleText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.PlayArrowAnim
// (Exec, NetResponse, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (Net, NetReliable, Native, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           auto                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditorSetSelector_C::SetButtonImage(bool Auto)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.SetButtonImage");

	Uwgt_SkillEditorSetSelector_C_SetButtonImage_Params params;
	params.Auto = Auto;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.SetSkillSetIndex
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (Net, Exec, Native, NetResponse, NetMulticast, NetServer, HasDefaults, NetClient, BlueprintPure)

void Uwgt_SkillEditorSetSelector_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.Construct");

	Uwgt_SkillEditorSetSelector_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.ExecuteUbergraph_wgt_SkillEditorSetSelector
// (Exec, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
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

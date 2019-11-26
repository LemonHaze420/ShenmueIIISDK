
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

// Function WBP_SkillEditorFrame_Center.WBP_SkillEditorFrame_Center_C.SetBackColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelect                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SkillEditorFrame_Center_C::SetBackColor(bool IsSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SkillEditorFrame_Center.WBP_SkillEditorFrame_Center_C.SetBackColor");

	UWBP_SkillEditorFrame_Center_C_SetBackColor_Params params;
	params.IsSelect = IsSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SkillEditorFrame_Center.WBP_SkillEditorFrame_Center_C.GetVisibility_Background
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_SkillEditorFrame_Center_C::GetVisibility_Background()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SkillEditorFrame_Center.WBP_SkillEditorFrame_Center_C.GetVisibility_Background");

	UWBP_SkillEditorFrame_Center_C_GetVisibility_Background_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_SkillEditorFrame_Center.WBP_SkillEditorFrame_Center_C.GetVisibility_FrameLine
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_SkillEditorFrame_Center_C::GetVisibility_FrameLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SkillEditorFrame_Center.WBP_SkillEditorFrame_Center_C.GetVisibility_FrameLine");

	UWBP_SkillEditorFrame_Center_C_GetVisibility_FrameLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_SkillEditorFrame_Center.WBP_SkillEditorFrame_Center_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SkillEditorFrame_Center_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SkillEditorFrame_Center.WBP_SkillEditorFrame_Center_C.PreConstruct");

	UWBP_SkillEditorFrame_Center_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SkillEditorFrame_Center.WBP_SkillEditorFrame_Center_C.ExecuteUbergraph_WBP_SkillEditorFrame_Center
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SkillEditorFrame_Center_C::ExecuteUbergraph_WBP_SkillEditorFrame_Center(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SkillEditorFrame_Center.WBP_SkillEditorFrame_Center_C.ExecuteUbergraph_WBP_SkillEditorFrame_Center");

	UWBP_SkillEditorFrame_Center_C_ExecuteUbergraph_WBP_SkillEditorFrame_Center_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

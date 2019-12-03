
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

// Function WBP_SkillEditorFrame.WBP_SkillEditorFrame_C.SetBackColor
// (Net, NetReliable, NetRequest, Event, Private, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// bool                           IsSelect                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SkillEditorFrame_C::SetBackColor(bool IsSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SkillEditorFrame.WBP_SkillEditorFrame_C.SetBackColor");

	UWBP_SkillEditorFrame_C_SetBackColor_Params params;
	params.IsSelect = IsSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SkillEditorFrame.WBP_SkillEditorFrame_C.GetVisibility_Background
// (Net, NetReliable, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_SkillEditorFrame_C::STATIC_GetVisibility_Background()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SkillEditorFrame.WBP_SkillEditorFrame_C.GetVisibility_Background");

	UWBP_SkillEditorFrame_C_GetVisibility_Background_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_SkillEditorFrame.WBP_SkillEditorFrame_C.GetVisibility_FrameLine
// (NetReliable, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_SkillEditorFrame_C::STATIC_GetVisibility_FrameLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SkillEditorFrame.WBP_SkillEditorFrame_C.GetVisibility_FrameLine");

	UWBP_SkillEditorFrame_C_GetVisibility_FrameLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_SkillEditorFrame.WBP_SkillEditorFrame_C.PreConstruct
// (Net, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SkillEditorFrame_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SkillEditorFrame.WBP_SkillEditorFrame_C.PreConstruct");

	UWBP_SkillEditorFrame_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SkillEditorFrame.WBP_SkillEditorFrame_C.ExecuteUbergraph_WBP_SkillEditorFrame
// (Native, Static, NetMulticast, Public, Protected, NetServer, DLLImport, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SkillEditorFrame_C::STATIC_ExecuteUbergraph_WBP_SkillEditorFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SkillEditorFrame.WBP_SkillEditorFrame_C.ExecuteUbergraph_WBP_SkillEditorFrame");

	UWBP_SkillEditorFrame_C_ExecuteUbergraph_WBP_SkillEditorFrame_Params params;
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

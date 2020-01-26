
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

// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.RefreshLayoutStringLen
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StrLen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Threshold                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BattleSkillDisplay_C::RefreshLayoutStringLen(int StrLen, int Threshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.RefreshLayoutStringLen");

	Uwgt_BattleSkillDisplay_C_RefreshLayoutStringLen_Params params;
	params.StrLen = StrLen;
	params.Threshold = Threshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.RefreshLayout
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Layout                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BattleSkillDisplay_C::RefreshLayout(int Layout)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.RefreshLayout");

	Uwgt_BattleSkillDisplay_C_RefreshLayout_Params params;
	params.Layout = Layout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.ReanchorWidget
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FAnchorData             AnchorData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uwgt_BattleSkillDisplay_C::ReanchorWidget(class UWidget* Widget, struct FAnchorData* AnchorData)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.ReanchorWidget");

	Uwgt_BattleSkillDisplay_C_ReanchorWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnchorData != nullptr)
		*AnchorData = params.AnchorData;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetLayout
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LayoutType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BattleSkillDisplay_C::SetLayout(int LayoutType)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetLayout");

	Uwgt_BattleSkillDisplay_C_SetLayout_Params params;
	params.LayoutType = LayoutType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.CacheWidgetAchorData
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FAnchorData             AnchorData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uwgt_BattleSkillDisplay_C::CacheWidgetAchorData(class UWidget* Widget, struct FAnchorData* AnchorData)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.CacheWidgetAchorData");

	Uwgt_BattleSkillDisplay_C_CacheWidgetAchorData_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnchorData != nullptr)
		*AnchorData = params.AnchorData;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.GetActiveSkillLibrary
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBTL_CommandLibrary_C*   SkillLibrary                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_BattleSkillDisplay_C::GetActiveSkillLibrary(class UBTL_CommandLibrary_C** SkillLibrary, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.GetActiveSkillLibrary");

	Uwgt_BattleSkillDisplay_C_GetActiveSkillLibrary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkillLibrary != nullptr)
		*SkillLibrary = params.SkillLibrary;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetSkillLibrary
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBTL_CommandLibrary_C*   SkillLibrary                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BattleSkillDisplay_C::SetSkillLibrary(class UBTL_CommandLibrary_C* SkillLibrary)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetSkillLibrary");

	Uwgt_BattleSkillDisplay_C_SetSkillLibrary_Params params;
	params.SkillLibrary = SkillLibrary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.ShowSkillLevel
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BattleSkillDisplay_C::ShowSkillLevel(const struct FName& Skill)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.ShowSkillLevel");

	Uwgt_BattleSkillDisplay_C_ShowSkillLevel_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetSkillLevel
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NextProgress                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BattleSkillDisplay_C::SetSkillLevel(int Level, float NextProgress, int MaxLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetSkillLevel");

	Uwgt_BattleSkillDisplay_C_SetSkillLevel_Params params;
	params.Level = Level;
	params.NextProgress = NextProgress;
	params.MaxLevel = MaxLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetSkill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   SkillName                      (BlueprintVisible, BlueprintReadOnly, Parm)

void Uwgt_BattleSkillDisplay_C::SetSkill(const struct FName& ItemId, const struct FText& SkillName)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetSkill");

	Uwgt_BattleSkillDisplay_C_SetSkill_Params params;
	params.ItemId = ItemId;
	params.SkillName = SkillName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetSkillName
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// ES3Locale                      Language                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BattleSkillDisplay_C::SetSkillName(const struct FText& Title, ES3Locale Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetSkillName");

	Uwgt_BattleSkillDisplay_C_SetSkillName_Params params;
	params.Title = Title;
	params.Language = Language;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.ShowSkillCommand
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BattleSkillDisplay_C::ShowSkillCommand(const struct FName& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.ShowSkillCommand");

	Uwgt_BattleSkillDisplay_C_ShowSkillCommand_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetRenderTex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*  RenderTex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BattleSkillDisplay_C::SetRenderTex(class UTextureRenderTarget2D* RenderTex)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetRenderTex");

	Uwgt_BattleSkillDisplay_C_SetRenderTex_Params params;
	params.RenderTex = RenderTex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.StopMotion
// (Protected, BlueprintCallable, BlueprintEvent)

void Uwgt_BattleSkillDisplay_C::StopMotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.StopMotion");

	Uwgt_BattleSkillDisplay_C_StopMotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.PlayItemMotion
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BattleSkillDisplay_C::PlayItemMotion(const struct FName& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.PlayItemMotion");

	Uwgt_BattleSkillDisplay_C_PlayItemMotion_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_BattleSkillDisplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.Construct");

	Uwgt_BattleSkillDisplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_BattleSkillDisplay_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.Destruct");

	Uwgt_BattleSkillDisplay_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BattleSkillDisplay_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.PreConstruct");

	Uwgt_BattleSkillDisplay_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.BndEvt__wgt_BTL_MontagePlayer_K2Node_ComponentBoundEvent_0_OnSceneCapture__DelegateSignature
// (BlueprintEvent)

void Uwgt_BattleSkillDisplay_C::BndEvt__wgt_BTL_MontagePlayer_K2Node_ComponentBoundEvent_0_OnSceneCapture__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.BndEvt__wgt_BTL_MontagePlayer_K2Node_ComponentBoundEvent_0_OnSceneCapture__DelegateSignature");

	Uwgt_BattleSkillDisplay_C_BndEvt__wgt_BTL_MontagePlayer_K2Node_ComponentBoundEvent_0_OnSceneCapture__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.ExecuteUbergraph_wgt_BattleSkillDisplay
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BattleSkillDisplay_C::ExecuteUbergraph_wgt_BattleSkillDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.ExecuteUbergraph_wgt_BattleSkillDisplay");

	Uwgt_BattleSkillDisplay_C_ExecuteUbergraph_wgt_BattleSkillDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

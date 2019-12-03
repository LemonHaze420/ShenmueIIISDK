
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

// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.RefreshLayoutStringLen
// (Static, MulticastDelegate, Public, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            StrLen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Threshold                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BattleSkillDisplay_C::STATIC_RefreshLayoutStringLen(int StrLen, int Threshold)
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
// (Net, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Layout                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BattleSkillDisplay_C::STATIC_RefreshLayout(int Layout)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.RefreshLayout");

	Uwgt_BattleSkillDisplay_C_RefreshLayout_Params params;
	params.Layout = Layout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.ReanchorWidget
// (Net, NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FAnchorData             AnchorData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uwgt_BattleSkillDisplay_C::STATIC_ReanchorWidget(class UWidget* Widget, struct FAnchorData* AnchorData)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.ReanchorWidget");

	Uwgt_BattleSkillDisplay_C_ReanchorWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnchorData != nullptr)
		*AnchorData = params.AnchorData;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetLayout
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            LayoutType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BattleSkillDisplay_C::STATIC_SetLayout(int LayoutType)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetLayout");

	Uwgt_BattleSkillDisplay_C_SetLayout_Params params;
	params.LayoutType = LayoutType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.CacheWidgetAchorData
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FAnchorData             AnchorData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uwgt_BattleSkillDisplay_C::STATIC_CacheWidgetAchorData(class UWidget* Widget, struct FAnchorData* AnchorData)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.CacheWidgetAchorData");

	Uwgt_BattleSkillDisplay_C_CacheWidgetAchorData_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnchorData != nullptr)
		*AnchorData = params.AnchorData;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.GetActiveSkillLibrary
// (NetReliable, NetRequest, Exec, Native, NetResponse, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBTL_CommandLibrary_C*   SkillLibrary                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_BattleSkillDisplay_C::GetActiveSkillLibrary(class UBTL_CommandLibrary_C** SkillLibrary, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.GetActiveSkillLibrary");

	Uwgt_BattleSkillDisplay_C_GetActiveSkillLibrary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkillLibrary != nullptr)
		*SkillLibrary = params.SkillLibrary;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetSkillLibrary
// (Exec, NetResponse, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Event, NetResponse, NetMulticast, Private, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (NetReliable, Native, NetResponse, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetSkill
// (NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Public, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetSkillName
// (Net, NetMulticast, Private, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
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
// (Net, Native, Event, NetResponse, Static, NetMulticast, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BattleSkillDisplay_C::STATIC_ShowSkillCommand(const struct FName& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.ShowSkillCommand");

	Uwgt_BattleSkillDisplay_C_ShowSkillCommand_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetRenderTex
// (Net, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// class UTextureRenderTarget2D*  RenderTex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BattleSkillDisplay_C::STATIC_SetRenderTex(class UTextureRenderTarget2D* RenderTex)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.SetRenderTex");

	Uwgt_BattleSkillDisplay_C_SetRenderTex_Params params;
	params.RenderTex = RenderTex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.StopMotion
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasDefaults, NetClient, BlueprintPure)

void Uwgt_BattleSkillDisplay_C::STATIC_StopMotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.StopMotion");

	Uwgt_BattleSkillDisplay_C_StopMotion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.PlayItemMotion
// (Net, NetReliable, Exec, Native, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BattleSkillDisplay_C::PlayItemMotion(const struct FName& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.PlayItemMotion");

	Uwgt_BattleSkillDisplay_C_PlayItemMotion_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.Construct
// (Net, Exec, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void Uwgt_BattleSkillDisplay_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.Construct");

	Uwgt_BattleSkillDisplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.Destruct
// (Exec, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void Uwgt_BattleSkillDisplay_C::STATIC_Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.Destruct");

	Uwgt_BattleSkillDisplay_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.PreConstruct
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BattleSkillDisplay_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.PreConstruct");

	Uwgt_BattleSkillDisplay_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.BndEvt__wgt_BTL_MontagePlayer_K2Node_ComponentBoundEvent_0_OnSceneCapture__DelegateSignature
// (NetReliable, NetRequest, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void Uwgt_BattleSkillDisplay_C::STATIC_BndEvt__wgt_BTL_MontagePlayer_K2Node_ComponentBoundEvent_0_OnSceneCapture__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.BndEvt__wgt_BTL_MontagePlayer_K2Node_ComponentBoundEvent_0_OnSceneCapture__DelegateSignature");

	Uwgt_BattleSkillDisplay_C_BndEvt__wgt_BTL_MontagePlayer_K2Node_ComponentBoundEvent_0_OnSceneCapture__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.ExecuteUbergraph_wgt_BattleSkillDisplay
// (NetRequest, Native, Event, NetResponse, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BattleSkillDisplay_C::ExecuteUbergraph_wgt_BattleSkillDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BattleSkillDisplay.wgt_BattleSkillDisplay_C.ExecuteUbergraph_wgt_BattleSkillDisplay");

	Uwgt_BattleSkillDisplay_C_ExecuteUbergraph_wgt_BattleSkillDisplay_Params params;
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

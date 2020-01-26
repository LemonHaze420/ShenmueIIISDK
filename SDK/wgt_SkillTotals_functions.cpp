
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

// Function wgt_SkillTotals.wgt_SkillTotals_C.PlayMeterSound
// (Private, BlueprintCallable, BlueprintEvent)

void Uwgt_SkillTotals_C::PlayMeterSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillTotals.wgt_SkillTotals_C.PlayMeterSound");

	Uwgt_SkillTotals_C_PlayMeterSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillTotals.wgt_SkillTotals_C.SetBarHighlight
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             bar                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Highlight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillTotals_C::SetBarHighlight(class UUserWidget* bar, bool Highlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillTotals.wgt_SkillTotals_C.SetBarHighlight");

	Uwgt_SkillTotals_C_SetBarHighlight_Params params;
	params.bar = bar;
	params.Highlight = Highlight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillTotals.wgt_SkillTotals_C.LerpLevelUpDisplay
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          N                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillTotals_C::LerpLevelUpDisplay(float N)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillTotals.wgt_SkillTotals_C.LerpLevelUpDisplay");

	Uwgt_SkillTotals_C_LerpLevelUpDisplay_Params params;
	params.N = N;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillTotals.wgt_SkillTotals_C.SetLevelUpData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SparringResultLevelUpData Attack                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FST_SparringResultLevelUpData Vitality                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FST_SparringResultLevelUpData Player                         (BlueprintVisible, BlueprintReadOnly, Parm)

void Uwgt_SkillTotals_C::SetLevelUpData(const struct FST_SparringResultLevelUpData& Attack, const struct FST_SparringResultLevelUpData& Vitality, const struct FST_SparringResultLevelUpData& Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillTotals.wgt_SkillTotals_C.SetLevelUpData");

	Uwgt_SkillTotals_C_SetLevelUpData_Params params;
	params.Attack = Attack;
	params.Vitality = Vitality;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillTotals.wgt_SkillTotals_C.UpdateLevelData
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPW_SkillBar_C*         BarWidget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class US3DerivedPlayerLevel*   Stat                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillTotals_C::UpdateLevelData(class UBPW_SkillBar_C* BarWidget, class US3DerivedPlayerLevel* Stat)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillTotals.wgt_SkillTotals_C.UpdateLevelData");

	Uwgt_SkillTotals_C_UpdateLevelData_Params params;
	params.BarWidget = BarWidget;
	params.Stat = Stat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillTotals.wgt_SkillTotals_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_SkillTotals_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillTotals.wgt_SkillTotals_C.Update");

	Uwgt_SkillTotals_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillTotals.wgt_SkillTotals_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_SkillTotals_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillTotals.wgt_SkillTotals_C.Construct");

	Uwgt_SkillTotals_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillTotals.wgt_SkillTotals_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillTotals_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillTotals.wgt_SkillTotals_C.PreConstruct");

	Uwgt_SkillTotals_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillTotals.wgt_SkillTotals_C.BndEvt__Bar_Attack_K2Node_ComponentBoundEvent_0_OnAnimLevelUp__DelegateSignature
// (BlueprintEvent)

void Uwgt_SkillTotals_C::BndEvt__Bar_Attack_K2Node_ComponentBoundEvent_0_OnAnimLevelUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillTotals.wgt_SkillTotals_C.BndEvt__Bar_Attack_K2Node_ComponentBoundEvent_0_OnAnimLevelUp__DelegateSignature");

	Uwgt_SkillTotals_C_BndEvt__Bar_Attack_K2Node_ComponentBoundEvent_0_OnAnimLevelUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillTotals.wgt_SkillTotals_C.BndEvt__Bar_Level_K2Node_ComponentBoundEvent_1_OnAnimLevelUp__DelegateSignature
// (BlueprintEvent)

void Uwgt_SkillTotals_C::BndEvt__Bar_Level_K2Node_ComponentBoundEvent_1_OnAnimLevelUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillTotals.wgt_SkillTotals_C.BndEvt__Bar_Level_K2Node_ComponentBoundEvent_1_OnAnimLevelUp__DelegateSignature");

	Uwgt_SkillTotals_C_BndEvt__Bar_Level_K2Node_ComponentBoundEvent_1_OnAnimLevelUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillTotals.wgt_SkillTotals_C.BndEvt__Bar_Vitality_K2Node_ComponentBoundEvent_2_OnAnimLevelUp__DelegateSignature
// (BlueprintEvent)

void Uwgt_SkillTotals_C::BndEvt__Bar_Vitality_K2Node_ComponentBoundEvent_2_OnAnimLevelUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillTotals.wgt_SkillTotals_C.BndEvt__Bar_Vitality_K2Node_ComponentBoundEvent_2_OnAnimLevelUp__DelegateSignature");

	Uwgt_SkillTotals_C_BndEvt__Bar_Vitality_K2Node_ComponentBoundEvent_2_OnAnimLevelUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillTotals.wgt_SkillTotals_C.StartLevelUpAnim
// (BlueprintCallable, BlueprintEvent)

void Uwgt_SkillTotals_C::StartLevelUpAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillTotals.wgt_SkillTotals_C.StartLevelUpAnim");

	Uwgt_SkillTotals_C_StartLevelUpAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillTotals.wgt_SkillTotals_C.ExecuteUbergraph_wgt_SkillTotals
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillTotals_C::ExecuteUbergraph_wgt_SkillTotals(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillTotals.wgt_SkillTotals_C.ExecuteUbergraph_wgt_SkillTotals");

	Uwgt_SkillTotals_C_ExecuteUbergraph_wgt_SkillTotals_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillTotals.wgt_SkillTotals_C.OnLevelUpAnimationDone__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_SkillTotals_C::OnLevelUpAnimationDone__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillTotals.wgt_SkillTotals_C.OnLevelUpAnimationDone__DelegateSignature");

	Uwgt_SkillTotals_C_OnLevelUpAnimationDone__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

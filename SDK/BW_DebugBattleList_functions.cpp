
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

// Function BW_DebugBattleList.BW_DebugBattleList_C.AddBattles
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DebugBattleListActor_C* DebugList                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleList_C::AddBattles(class ABP_DebugBattleListActor_C* DebugList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.AddBattles");

	UBW_DebugBattleList_C_AddBattles_Params params;
	params.DebugList = DebugList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.AddBattleWidget
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBW_DebugBattleListItem_C* NewItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void UBW_DebugBattleList_C::AddBattleWidget(class UBW_DebugBattleListItem_C* NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.AddBattleWidget");

	UBW_DebugBattleList_C_AddBattleWidget_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.MakeRankText
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   InName                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_DojoVictoryStandard ST_DojoVictoryStandard         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_DebugBattleList_C::MakeRankText(const struct FName& InName, const struct FST_DojoVictoryStandard& ST_DojoVictoryStandard)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.MakeRankText");

	UBW_DebugBattleList_C_MakeRankText_Params params;
	params.InName = InName;
	params.ST_DojoVictoryStandard = ST_DojoVictoryStandard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.SetSkillItemCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleList_C::SetSkillItemCount(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.SetSkillItemCount");

	UBW_DebugBattleList_C_SetSkillItemCount_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.ChangeDojoRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDojoPlace>        Dojo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleList_C::ChangeDojoRank(TEnumAsByte<EDojoPlace> Dojo, int Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.ChangeDojoRank");

	UBW_DebugBattleList_C_ChangeDojoRank_Params params;
	params.Dojo = Dojo;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.GetHealingItemCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleList_C::GetHealingItemCount(int* Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.GetHealingItemCount");

	UBW_DebugBattleList_C_GetHealingItemCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Num != nullptr)
		*Num = params.Num;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.AddHealingItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amt                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleList_C::AddHealingItems(int Amt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.AddHealingItems");

	UBW_DebugBattleList_C_AddHealingItems_Params params;
	params.Amt = Amt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.FilterNonMaxLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           OutArray                       (Parm, OutParm, ZeroConstructor)

void UBW_DebugBattleList_C::FilterNonMaxLevel(TArray<struct FName>* Array, TArray<struct FName>* OutArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.FilterNonMaxLevel");

	UBW_DebugBattleList_C_FilterNonMaxLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (OutArray != nullptr)
		*OutArray = params.OutArray;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.GetOwnedLevelableSkills
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           ItemLabels                     (Parm, OutParm, ZeroConstructor)

void UBW_DebugBattleList_C::GetOwnedLevelableSkills(TArray<struct FName>* ItemLabels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.GetOwnedLevelableSkills");

	UBW_DebugBattleList_C_GetOwnedLevelableSkills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLabels != nullptr)
		*ItemLabels = params.ItemLabels;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.AddSkillItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AddNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleList_C::AddSkillItems(int AddNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.AddSkillItems");

	UBW_DebugBattleList_C_AddSkillItems_Params params;
	params.AddNum = AddNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.LevelAnySkills
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CompleteSkills                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleList_C::LevelAnySkills(int CompleteSkills)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.LevelAnySkills");

	UBW_DebugBattleList_C_LevelAnySkills_Params params;
	params.CompleteSkills = CompleteSkills;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.AddPointsToCurrentSkillSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleList_C::AddPointsToCurrentSkillSet(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.AddPointsToCurrentSkillSet");

	UBW_DebugBattleList_C_AddPointsToCurrentSkillSet_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.UpdateTextHeavy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBW_DebugBattleList_C::UpdateTextHeavy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.UpdateTextHeavy");

	UBW_DebugBattleList_C_UpdateTextHeavy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)

void UBW_DebugBattleList_C::UpdateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.UpdateText");

	UBW_DebugBattleList_C_UpdateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.CallOnStartBattle
// (Private, BlueprintCallable, BlueprintEvent)

void UBW_DebugBattleList_C::CallOnStartBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.CallOnStartBattle");

	UBW_DebugBattleList_C_CallOnStartBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBW_DebugBattleList_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.Initialize");

	UBW_DebugBattleList_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleList_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.Tick");

	UBW_DebugBattleList_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBW_DebugBattleList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.Construct");

	UBW_DebugBattleList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_3_OnPlus__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleList_C::BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_3_OnPlus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_3_OnPlus__DelegateSignature");

	UBW_DebugBattleList_C_BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_3_OnPlus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_4_OnMinus__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleList_C::BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_4_OnMinus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_4_OnMinus__DelegateSignature");

	UBW_DebugBattleList_C_BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_4_OnMinus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_5_OnMax__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleList_C::BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_5_OnMax__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_5_OnMax__DelegateSignature");

	UBW_DebugBattleList_C_BndEvt__BW_DebugBattleListStat_K2Node_ComponentBoundEvent_5_OnMax__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__HealItems_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleList_C::BndEvt__HealItems_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__HealItems_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature");

	UBW_DebugBattleList_C_BndEvt__HealItems_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__HealItems_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleList_C::BndEvt__HealItems_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__HealItems_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature");

	UBW_DebugBattleList_C_BndEvt__HealItems_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__HealItems_K2Node_ComponentBoundEvent_2_OnMax__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleList_C::BndEvt__HealItems_K2Node_ComponentBoundEvent_2_OnMax__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__HealItems_K2Node_ComponentBoundEvent_2_OnMax__DelegateSignature");

	UBW_DebugBattleList_C_BndEvt__HealItems_K2Node_ComponentBoundEvent_2_OnMax__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__Button_ChobuStart_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleList_C::BndEvt__Button_ChobuStart_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__Button_ChobuStart_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugBattleList_C_BndEvt__Button_ChobuStart_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__ChoDojoStat_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleList_C::BndEvt__ChoDojoStat_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__ChoDojoStat_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature");

	UBW_DebugBattleList_C_BndEvt__ChoDojoStat_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__ChoDojoStat_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleList_C::BndEvt__ChoDojoStat_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__ChoDojoStat_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature");

	UBW_DebugBattleList_C_BndEvt__ChoDojoStat_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__HakDojoStat_K2Node_ComponentBoundEvent_2_OnPlus__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleList_C::BndEvt__HakDojoStat_K2Node_ComponentBoundEvent_2_OnPlus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__HakDojoStat_K2Node_ComponentBoundEvent_2_OnPlus__DelegateSignature");

	UBW_DebugBattleList_C_BndEvt__HakDojoStat_K2Node_ComponentBoundEvent_2_OnPlus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__HakDojoStat_K2Node_ComponentBoundEvent_3_OnMinus__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleList_C::BndEvt__HakDojoStat_K2Node_ComponentBoundEvent_3_OnMinus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__HakDojoStat_K2Node_ComponentBoundEvent_3_OnMinus__DelegateSignature");

	UBW_DebugBattleList_C_BndEvt__HakDojoStat_K2Node_ComponentBoundEvent_3_OnMinus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__Button_HakkasonStart_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleList_C::BndEvt__Button_HakkasonStart_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__Button_HakkasonStart_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugBattleList_C_BndEvt__Button_HakkasonStart_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__Button_MaxRyo_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleList_C::BndEvt__Button_MaxRyo_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__Button_MaxRyo_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugBattleList_C_BndEvt__Button_MaxRyo_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__Difficulty_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleList_C::BndEvt__Difficulty_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__Difficulty_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature");

	UBW_DebugBattleList_C_BndEvt__Difficulty_K2Node_ComponentBoundEvent_0_OnPlus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__Difficulty_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleList_C::BndEvt__Difficulty_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__Difficulty_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature");

	UBW_DebugBattleList_C_BndEvt__Difficulty_K2Node_ComponentBoundEvent_1_OnMinus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__BW_DebugBattleListLevelStat_K2Node_ComponentBoundEvent_1_OnChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleList_C::BndEvt__BW_DebugBattleListLevelStat_K2Node_ComponentBoundEvent_1_OnChanged__DelegateSignature(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__BW_DebugBattleListLevelStat_K2Node_ComponentBoundEvent_1_OnChanged__DelegateSignature");

	UBW_DebugBattleList_C_BndEvt__BW_DebugBattleListLevelStat_K2Node_ComponentBoundEvent_1_OnChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__AttackLevel_K2Node_ComponentBoundEvent_0_OnChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleList_C::BndEvt__AttackLevel_K2Node_ComponentBoundEvent_0_OnChanged__DelegateSignature(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__AttackLevel_K2Node_ComponentBoundEvent_0_OnChanged__DelegateSignature");

	UBW_DebugBattleList_C_BndEvt__AttackLevel_K2Node_ComponentBoundEvent_0_OnChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__VitalityLevel_K2Node_ComponentBoundEvent_1_OnChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleList_C::BndEvt__VitalityLevel_K2Node_ComponentBoundEvent_1_OnChanged__DelegateSignature(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__VitalityLevel_K2Node_ComponentBoundEvent_1_OnChanged__DelegateSignature");

	UBW_DebugBattleList_C_BndEvt__VitalityLevel_K2Node_ComponentBoundEvent_1_OnChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__BW_BoolProperty_K2Node_ComponentBoundEvent_1_BoolPropertyChanged__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleList_C::BndEvt__BW_BoolProperty_K2Node_ComponentBoundEvent_1_BoolPropertyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.BndEvt__BW_BoolProperty_K2Node_ComponentBoundEvent_1_BoolPropertyChanged__DelegateSignature");

	UBW_DebugBattleList_C_BndEvt__BW_BoolProperty_K2Node_ComponentBoundEvent_1_BoolPropertyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.OnBattleButtonFocused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3Button*               Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBW_DebugBattleList_C::OnBattleButtonFocused(class US3Button* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.OnBattleButtonFocused");

	UBW_DebugBattleList_C_OnBattleButtonFocused_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.BuildMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UBW_DebugBattleList_C::BuildMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.BuildMenu");

	UBW_DebugBattleList_C_BuildMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.SetInitialFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UBW_DebugBattleList_C::SetInitialFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.SetInitialFocus");

	UBW_DebugBattleList_C_SetInitialFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.ExecuteUbergraph_BW_DebugBattleList
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleList_C::ExecuteUbergraph_BW_DebugBattleList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.ExecuteUbergraph_BW_DebugBattleList");

	UBW_DebugBattleList_C_ExecuteUbergraph_BW_DebugBattleList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleList.BW_DebugBattleList_C.OnStartBattle__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBW_DebugBattleList_C::OnStartBattle__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleList.BW_DebugBattleList_C.OnStartBattle__DelegateSignature");

	UBW_DebugBattleList_C_OnStartBattle__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

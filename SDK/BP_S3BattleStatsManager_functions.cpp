
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

// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.InitDefaultLevelProgression
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_S3BattleStatsManager_C::InitDefaultLevelProgression()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.InitDefaultLevelProgression");

	UBP_S3BattleStatsManager_C_InitDefaultLevelProgression_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.ReinitFixedLevel
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_S3BattleStatsManager_C::ReinitFixedLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.ReinitFixedLevel");

	UBP_S3BattleStatsManager_C_ReinitFixedLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.Debug_TestSkillProgression
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_S3BattleStatsManager_C::Debug_TestSkillProgression()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.Debug_TestSkillProgression");

	UBP_S3BattleStatsManager_C_Debug_TestSkillProgression_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.IsSkillEquipable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   SkillId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_S3BattleStatsManager_C::IsSkillEquipable(const struct FName& SkillId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.IsSkillEquipable");

	UBP_S3BattleStatsManager_C_IsSkillEquipable_Params params;
	params.SkillId = SkillId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.IsSkillLevelable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   SkillItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_S3BattleStatsManager_C::IsSkillLevelable(const struct FName& SkillItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.IsSkillLevelable");

	UBP_S3BattleStatsManager_C_IsSkillLevelable_Params params;
	params.SkillItem = SkillItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.GetDojoRankMax
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EDojoPlace>        Dojo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3DojoRank                    Rank                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3BattleStatsManager_C::GetDojoRankMax(TEnumAsByte<EDojoPlace> Dojo, ES3DojoRank* Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.GetDojoRankMax");

	UBP_S3BattleStatsManager_C_GetDojoRankMax_Params params;
	params.Dojo = Dojo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rank != nullptr)
		*Rank = params.Rank;
}


// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.InitBlueprint
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_S3BattleStatsManager_C::InitBlueprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.InitBlueprint");

	UBP_S3BattleStatsManager_C_InitBlueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.SetLastAdviceData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattleAdviceData_C*     AdviceData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3BattleStatsManager_C::SetLastAdviceData(class UBattleAdviceData_C* AdviceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.SetLastAdviceData");

	UBP_S3BattleStatsManager_C_SetLastAdviceData_Params params;
	params.AdviceData = AdviceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.GetLastAdviceData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBattleAdviceData_C*     AdviceData                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3BattleStatsManager_C::GetLastAdviceData(class UBattleAdviceData_C** AdviceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.GetLastAdviceData");

	UBP_S3BattleStatsManager_C_GetLastAdviceData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AdviceData != nullptr)
		*AdviceData = params.AdviceData;
}


// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.GetDojoRankIndex
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Dojo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_S3BattleStatsManager_C::GetDojoRankIndex(const struct FName& Dojo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.GetDojoRankIndex");

	UBP_S3BattleStatsManager_C_GetDojoRankIndex_Params params;
	params.Dojo = Dojo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.DojoRankNameToEnum
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3DojoRank                    Rank                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3BattleStatsManager_C::DojoRankNameToEnum(const struct FName& Name, ES3DojoRank* Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.DojoRankNameToEnum");

	UBP_S3BattleStatsManager_C_DojoRankNameToEnum_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rank != nullptr)
		*Rank = params.Rank;
}


// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.DojoRankEnumToName
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ES3DojoRank                    InRank                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   OutRank                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3BattleStatsManager_C::DojoRankEnumToName(ES3DojoRank InRank, struct FName* OutRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.DojoRankEnumToName");

	UBP_S3BattleStatsManager_C_DojoRankEnumToName_Params params;
	params.InRank = InRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRank != nullptr)
		*OutRank = params.OutRank;
}


// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.GetDojoRankAsEnum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDojoPlace>        Dojo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3DojoRank                    Rank                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3BattleStatsManager_C::GetDojoRankAsEnum(TEnumAsByte<EDojoPlace> Dojo, ES3DojoRank* Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.GetDojoRankAsEnum");

	UBP_S3BattleStatsManager_C_GetDojoRankAsEnum_Params params;
	params.Dojo = Dojo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rank != nullptr)
		*Rank = params.Rank;
}


// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.SetDojoRankAsEnum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDojoPlace>        Dojo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3DojoRank                    Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3BattleStatsManager_C::SetDojoRankAsEnum(TEnumAsByte<EDojoPlace> Dojo, ES3DojoRank Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.SetDojoRankAsEnum");

	UBP_S3BattleStatsManager_C_SetDojoRankAsEnum_Params params;
	params.Dojo = Dojo;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

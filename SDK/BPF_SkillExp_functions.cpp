
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

// Function BPF_SkillExp.BPF_SkillExp_C.BPF_ShouldShowSkillAquisitionHint
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_SkillExp_C::STATIC_BPF_ShouldShowSkillAquisitionHint(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_SkillExp.BPF_SkillExp_C.BPF_ShouldShowSkillAquisitionHint");

	UBPF_SkillExp_C_BPF_ShouldShowSkillAquisitionHint_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_SkillExp.BPF_SkillExp_C.BPF_HasPlayerMasteredAllSkills
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_SkillExp_C::STATIC_BPF_HasPlayerMasteredAllSkills(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_SkillExp.BPF_SkillExp_C.BPF_HasPlayerMasteredAllSkills");

	UBPF_SkillExp_C_BPF_HasPlayerMasteredAllSkills_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_SkillExp.BPF_SkillExp_C.BPF_CountNonMasteredSkills
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBPF_SkillExp_C::STATIC_BPF_CountNonMasteredSkills(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_SkillExp.BPF_SkillExp_C.BPF_CountNonMasteredSkills");

	UBPF_SkillExp_C_BPF_CountNonMasteredSkills_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_SkillExp.BPF_SkillExp_C.BPF_IsPlayerSkillMastered
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   SkillItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_SkillExp_C::STATIC_BPF_IsPlayerSkillMastered(const struct FName& SkillItem, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_SkillExp.BPF_SkillExp_C.BPF_IsPlayerSkillMastered");

	UBPF_SkillExp_C_BPF_IsPlayerSkillMastered_Params params;
	params.SkillItem = SkillItem;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_SkillExp.BPF_SkillExp_C.BPF_GetPlayerSkillLevelData
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   SkillItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutLevel                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutNextRatio                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SkillMinLevel                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SkillMaxLevel                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_SkillExp_C::STATIC_BPF_GetPlayerSkillLevelData(const struct FName& SkillItem, class UObject* __WorldContext, int* OutLevel, float* OutNextRatio, int* SkillMinLevel, int* SkillMaxLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_SkillExp.BPF_SkillExp_C.BPF_GetPlayerSkillLevelData");

	UBPF_SkillExp_C_BPF_GetPlayerSkillLevelData_Params params;
	params.SkillItem = SkillItem;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLevel != nullptr)
		*OutLevel = params.OutLevel;
	if (OutNextRatio != nullptr)
		*OutNextRatio = params.OutNextRatio;
	if (SkillMinLevel != nullptr)
		*SkillMinLevel = params.SkillMinLevel;
	if (SkillMaxLevel != nullptr)
		*SkillMaxLevel = params.SkillMaxLevel;
}


// Function BPF_SkillExp.BPF_SkillExp_C.BPF_GetPlayerSkillLevelMax
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutLevel                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_SkillExp_C::STATIC_BPF_GetPlayerSkillLevelMax(const struct FName& Key, class UObject* __WorldContext, int* OutLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_SkillExp.BPF_SkillExp_C.BPF_GetPlayerSkillLevelMax");

	UBPF_SkillExp_C_BPF_GetPlayerSkillLevelMax_Params params;
	params.Key = Key;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLevel != nullptr)
		*OutLevel = params.OutLevel;
}


// Function BPF_SkillExp.BPF_SkillExp_C.BPF_GetPlayerSkillLevelAsRatio
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPF_SkillExp_C::STATIC_BPF_GetPlayerSkillLevelAsRatio(const struct FName& Key, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_SkillExp.BPF_SkillExp_C.BPF_GetPlayerSkillLevelAsRatio");

	UBPF_SkillExp_C_BPF_GetPlayerSkillLevelAsRatio_Params params;
	params.Key = Key;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_SkillExp.BPF_SkillExp_C.BPF_GetPlayerSkillLevel
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   SkillItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutLevel                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_SkillExp_C::STATIC_BPF_GetPlayerSkillLevel(const struct FName& SkillItem, class UObject* __WorldContext, int* OutLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_SkillExp.BPF_SkillExp_C.BPF_GetPlayerSkillLevel");

	UBPF_SkillExp_C_BPF_GetPlayerSkillLevel_Params params;
	params.SkillItem = SkillItem;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLevel != nullptr)
		*OutLevel = params.OutLevel;
}


// Function BPF_SkillExp.BPF_SkillExp_C.BPF_GetPlayerSkillStats
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3PlayerExpCollection*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class US3PlayerExpCollection* UBPF_SkillExp_C::STATIC_BPF_GetPlayerSkillStats(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_SkillExp.BPF_SkillExp_C.BPF_GetPlayerSkillStats");

	UBPF_SkillExp_C_BPF_GetPlayerSkillStats_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

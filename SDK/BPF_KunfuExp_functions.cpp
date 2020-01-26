
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

// Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_GetPlayerStat_Vitality
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3DerivedPlayerLevel*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class US3DerivedPlayerLevel* UBPF_KunfuExp_C::STATIC_BPF_GetPlayerStat_Vitality(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_GetPlayerStat_Vitality");

	UBPF_KunfuExp_C_BPF_GetPlayerStat_Vitality_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_GetPlayerStats_Kunfu
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3PlayerExpCollection*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class US3PlayerExpCollection* UBPF_KunfuExp_C::STATIC_BPF_GetPlayerStats_Kunfu(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_GetPlayerStats_Kunfu");

	UBPF_KunfuExp_C_BPF_GetPlayerStats_Kunfu_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_AddKunFuLevel
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AddLPevel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_KunfuExp_C::STATIC_BPF_AddKunFuLevel(const struct FName& Key, int AddLPevel, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_AddKunFuLevel");

	UBPF_KunfuExp_C_BPF_AddKunFuLevel_Params params;
	params.Key = Key;
	params.AddLPevel = AddLPevel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_GetKunFuLevel
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutLevel                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutNextRatio                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_KunfuExp_C::STATIC_BPF_GetKunFuLevel(const struct FName& Key, class UObject* __WorldContext, int* OutLevel, float* OutNextRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_GetKunFuLevel");

	UBPF_KunfuExp_C_BPF_GetKunFuLevel_Params params;
	params.Key = Key;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLevel != nullptr)
		*OutLevel = params.OutLevel;
	if (OutNextRatio != nullptr)
		*OutNextRatio = params.OutNextRatio;
}


// Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_GetKunFuLevelRange
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Min                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_KunfuExp_C::STATIC_BPF_GetKunFuLevelRange(const struct FName& Key, class UObject* __WorldContext, int* Min, int* Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_GetKunFuLevelRange");

	UBPF_KunfuExp_C_BPF_GetKunFuLevelRange_Params params;
	params.Key = Key;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Min != nullptr)
		*Min = params.Min;
	if (Max != nullptr)
		*Max = params.Max;
}


// Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_SetKunFuLevel
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_KunfuExp_C::STATIC_BPF_SetKunFuLevel(const struct FName& Key, int Level, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_SetKunFuLevel");

	UBPF_KunfuExp_C_BPF_SetKunFuLevel_Params params;
	params.Key = Key;
	params.Level = Level;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_SetKunfuRatio
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Ratio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_KunfuExp_C::STATIC_BPF_SetKunfuRatio(const struct FName& Type, float Ratio, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_SetKunfuRatio");

	UBPF_KunfuExp_C_BPF_SetKunfuRatio_Params params;
	params.Type = Type;
	params.Ratio = Ratio;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_AddKunfuRatio
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Ratio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_KunfuExp_C::STATIC_BPF_AddKunfuRatio(const struct FName& Type, float Ratio, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_AddKunfuRatio");

	UBPF_KunfuExp_C_BPF_AddKunfuRatio_Params params;
	params.Type = Type;
	params.Ratio = Ratio;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_SetKunfuPoints
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_KunfuExp_C::STATIC_BPF_SetKunfuPoints(const struct FName& Type, float Value, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_SetKunfuPoints");

	UBPF_KunfuExp_C_BPF_SetKunfuPoints_Params params;
	params.Type = Type;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_AddKunfuPoints
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Amt                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_KunfuExp_C::STATIC_BPF_AddKunfuPoints(const struct FName& Type, float Amt, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_AddKunfuPoints");

	UBPF_KunfuExp_C_BPF_AddKunfuPoints_Params params;
	params.Type = Type;
	params.Amt = Amt;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

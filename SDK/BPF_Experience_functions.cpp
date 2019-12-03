
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

// Function BPF_Experience.BPF_Experience_C.BPF_UpdateTrainingLevelUpData
// (NetReliable, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FST_SparringResultLevelUpData Player                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FST_SparringResultLevelUpData ATK                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FST_SparringResultLevelUpData VIT                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_Experience_C::STATIC_BPF_UpdateTrainingLevelUpData(class UObject* __WorldContext, struct FST_SparringResultLevelUpData* Player, struct FST_SparringResultLevelUpData* ATK, struct FST_SparringResultLevelUpData* VIT)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Experience.BPF_Experience_C.BPF_UpdateTrainingLevelUpData");

	UBPF_Experience_C_BPF_UpdateTrainingLevelUpData_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;
	if (ATK != nullptr)
		*ATK = params.ATK;
	if (VIT != nullptr)
		*VIT = params.VIT;

	return params.ReturnValue;
}


// Function BPF_Experience.BPF_Experience_C.BPF_InitializeTrainingLevelUpData
// (Net, NetReliable, NetResponse, Static, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_SparringResultLevelUpData Player                         (Parm, OutParm)
// struct FST_SparringResultLevelUpData ATK                            (Parm, OutParm)
// struct FST_SparringResultLevelUpData VIT                            (Parm, OutParm)

void UBPF_Experience_C::STATIC_BPF_InitializeTrainingLevelUpData(class UObject* __WorldContext, struct FST_SparringResultLevelUpData* Player, struct FST_SparringResultLevelUpData* ATK, struct FST_SparringResultLevelUpData* VIT)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Experience.BPF_Experience_C.BPF_InitializeTrainingLevelUpData");

	UBPF_Experience_C_BPF_InitializeTrainingLevelUpData_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;
	if (ATK != nullptr)
		*ATK = params.ATK;
	if (VIT != nullptr)
		*VIT = params.VIT;
}


// Function BPF_Experience.BPF_Experience_C.BPF_ShouldShowExpHintPostTraining
// (Net, NetReliable, NetRequest, Static, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_Experience_C::STATIC_BPF_ShouldShowExpHintPostTraining(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Experience.BPF_Experience_C.BPF_ShouldShowExpHintPostTraining");

	UBPF_Experience_C_BPF_ShouldShowExpHintPostTraining_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_Experience.BPF_Experience_C.BPF_CalcPlayerExpModifer_Energy_Lerp
// (Net, NetReliable, Exec, Static, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Multiplier                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Experience_C::STATIC_BPF_CalcPlayerExpModifer_Energy_Lerp(float Min, float Max, class UObject* __WorldContext, float* Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Experience.BPF_Experience_C.BPF_CalcPlayerExpModifer_Energy_Lerp");

	UBPF_Experience_C_BPF_CalcPlayerExpModifer_Energy_Lerp_Params params;
	params.Min = Min;
	params.Max = Max;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Multiplier != nullptr)
		*Multiplier = params.Multiplier;
}


// Function BPF_Experience.BPF_Experience_C.BPF_DebugLogPlayerExpModifier
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_Experience_C::BPF_DebugLogPlayerExpModifier(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Experience.BPF_Experience_C.BPF_DebugLogPlayerExpModifier");

	UBPF_Experience_C_BPF_DebugLogPlayerExpModifier_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_Experience.BPF_Experience_C.BPF_CalcPlayerExpModifier_Energy
// (Exec, Event, Static, NetMulticast, Public, Private, Delegate, HasOutParms)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Multiplier                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Experience_C::STATIC_BPF_CalcPlayerExpModifier_Energy(class UObject* __WorldContext, float* Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Experience.BPF_Experience_C.BPF_CalcPlayerExpModifier_Energy");

	UBPF_Experience_C_BPF_CalcPlayerExpModifier_Energy_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Multiplier != nullptr)
		*Multiplier = params.Multiplier;
}


// Function BPF_Experience.BPF_Experience_C.BPF_CalcPlayerExpModifier_Difficulty
// (Net, NetRequest, Native, Event, Static, NetServer, NetClient)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPF_Experience_C::STATIC_BPF_CalcPlayerExpModifier_Difficulty(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Experience.BPF_Experience_C.BPF_CalcPlayerExpModifier_Difficulty");

	UBPF_Experience_C_BPF_CalcPlayerExpModifier_Difficulty_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_Experience.BPF_Experience_C.BPF_CalcPlayerExpModifier
// (Net, NetRequest, Native, Event, Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPF_Experience_C::STATIC_BPF_CalcPlayerExpModifier(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Experience.BPF_Experience_C.BPF_CalcPlayerExpModifier");

	UBPF_Experience_C_BPF_CalcPlayerExpModifier_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

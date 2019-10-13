
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPF_DebugData.BPF_DebugData_C.GetSubmissionConfig
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3SubmissionConfig*     Config                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_DebugData_C::STATIC_GetSubmissionConfig(class UObject* __WorldContext, class US3SubmissionConfig** Config)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_DebugData.BPF_DebugData_C.GetSubmissionConfig");

	UBPF_DebugData_C_GetSubmissionConfig_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Config != nullptr)
		*Config = params.Config;
}


// Function BPF_DebugData.BPF_DebugData_C.IsDebugStepInRange
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InRange                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_DebugData_C::STATIC_IsDebugStepInRange(class UObject* __WorldContext, bool* InRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_DebugData.BPF_DebugData_C.IsDebugStepInRange");

	UBPF_DebugData_C_IsDebugStepInRange_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InRange != nullptr)
		*InRange = params.InRange;
}


// Function BPF_DebugData.BPF_DebugData_C.IsDebugDisableCutscene
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Disable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_DebugData_C::STATIC_IsDebugDisableCutscene(class UObject* __WorldContext, bool* Disable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_DebugData.BPF_DebugData_C.IsDebugDisableCutscene");

	UBPF_DebugData_C_IsDebugDisableCutscene_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Disable != nullptr)
		*Disable = params.Disable;
}


// Function BPF_DebugData.BPF_DebugData_C.IsDebugDisableMainFlow
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Disable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_DebugData_C::STATIC_IsDebugDisableMainFlow(class UObject* __WorldContext, bool* Disable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_DebugData.BPF_DebugData_C.IsDebugDisableMainFlow");

	UBPF_DebugData_C_IsDebugDisableMainFlow_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Disable != nullptr)
		*Disable = params.Disable;
}


// Function BPF_DebugData.BPF_DebugData_C.IsDebugDisableNPC
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Disable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_DebugData_C::STATIC_IsDebugDisableNPC(class UObject* __WorldContext, bool* Disable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_DebugData.BPF_DebugData_C.IsDebugDisableNPC");

	UBPF_DebugData_C_IsDebugDisableNPC_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Disable != nullptr)
		*Disable = params.Disable;
}


// Function BPF_DebugData.BPF_DebugData_C.GetDebugData
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3DebugDataAsset*       Debug_Data_Asset               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_DebugData_C::STATIC_GetDebugData(class UObject* __WorldContext, class US3DebugDataAsset** Debug_Data_Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_DebugData.BPF_DebugData_C.GetDebugData");

	UBPF_DebugData_C_GetDebugData_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Debug_Data_Asset != nullptr)
		*Debug_Data_Asset = params.Debug_Data_Asset;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

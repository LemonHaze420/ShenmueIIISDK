
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

// Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.HasStatProgressChange
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FST_SparringResultLevelUpData Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_TrainingLevelUpRecorder_C::HasStatProgressChange(const struct FST_SparringResultLevelUpData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.HasStatProgressChange");

	UBP_TrainingLevelUpRecorder_C_HasStatProgressChange_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.HasRecordedProgressChange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_TrainingLevelUpRecorder_C::HasRecordedProgressChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.HasRecordedProgressChange");

	UBP_TrainingLevelUpRecorder_C_HasRecordedProgressChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.GetLevelUpData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FST_SparringResultLevelUpData Player                         (Parm, OutParm)
// struct FST_SparringResultLevelUpData ATK                            (Parm, OutParm)
// struct FST_SparringResultLevelUpData VIT                            (Parm, OutParm)

void UBP_TrainingLevelUpRecorder_C::GetLevelUpData(struct FST_SparringResultLevelUpData* Player, struct FST_SparringResultLevelUpData* ATK, struct FST_SparringResultLevelUpData* VIT)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.GetLevelUpData");

	UBP_TrainingLevelUpRecorder_C_GetLevelUpData_Params params;

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


// Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.HasRecordedStatLevelUp
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FST_SparringResultLevelUpData Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_TrainingLevelUpRecorder_C::HasRecordedStatLevelUp(const struct FST_SparringResultLevelUpData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.HasRecordedStatLevelUp");

	UBP_TrainingLevelUpRecorder_C_HasRecordedStatLevelUp_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.HasRecordedLevelUp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_TrainingLevelUpRecorder_C::HasRecordedLevelUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.HasRecordedLevelUp");

	UBP_TrainingLevelUpRecorder_C_HasRecordedLevelUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.UpdateStatData
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3DerivedPlayerLevel*   Stat                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_SparringResultLevelUpData Data                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_TrainingLevelUpRecorder_C::UpdateStatData(class US3DerivedPlayerLevel* Stat, struct FST_SparringResultLevelUpData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.UpdateStatData");

	UBP_TrainingLevelUpRecorder_C_UpdateStatData_Params params;
	params.Stat = Stat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.RecordCurrentState
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_TrainingLevelUpRecorder_C::RecordCurrentState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.RecordCurrentState");

	UBP_TrainingLevelUpRecorder_C_RecordCurrentState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.GetInitialStatState
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class US3DerivedPlayerLevel*   Stat                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_SparringResultLevelUpData Data                           (Parm, OutParm)

void UBP_TrainingLevelUpRecorder_C::GetInitialStatState(class US3DerivedPlayerLevel* Stat, struct FST_SparringResultLevelUpData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.GetInitialStatState");

	UBP_TrainingLevelUpRecorder_C_GetInitialStatState_Params params;
	params.Stat = Stat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.RecordInitialState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_TrainingLevelUpRecorder_C::RecordInitialState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C.RecordInitialState");

	UBP_TrainingLevelUpRecorder_C_RecordInitialState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

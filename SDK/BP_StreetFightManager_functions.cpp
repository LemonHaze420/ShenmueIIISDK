
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

// Function BP_StreetFightManager.BP_StreetFightManager_C.ChangeFlag_Impl
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StreetFightManager_C::ChangeFlag_Impl(int Index, int flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.ChangeFlag_Impl");

	ABP_StreetFightManager_C_ChangeFlag_Impl_Params params;
	params.Index = Index;
	params.flag = flag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StreetFightManager_C::Activate(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.Activate");

	ABP_StreetFightManager_C_Activate_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.RandomBox
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NextIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StreetFightManager_C::RandomBox(int* NextIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.RandomBox");

	ABP_StreetFightManager_C_RandomBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextIndex != nullptr)
		*NextIndex = params.NextIndex;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.IsIgnoreStep
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Ignore                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StreetFightManager_C::IsIgnoreStep(bool* Ignore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.IsIgnoreStep");

	ABP_StreetFightManager_C_IsIgnoreStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ignore != nullptr)
		*Ignore = params.Ignore;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.CheckMainFlowBattle
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_StreetFightManager_C::CheckMainFlowBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.CheckMainFlowBattle");

	ABP_StreetFightManager_C_CheckMainFlowBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.GetNextFighter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_StreetFightManager_C::GetNextFighter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.GetNextFighter");

	ABP_StreetFightManager_C_GetNextFighter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.JudgeBattle
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_StreetFightResult> Reselt                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StreetFightManager_C::JudgeBattle(TEnumAsByte<Enum_StreetFightResult> Reselt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.JudgeBattle");

	ABP_StreetFightManager_C_JudgeBattle_Params params;
	params.Reselt = Reselt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.UpdateFighter
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_StreetFightManager_C::UpdateFighter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.UpdateFighter");

	ABP_StreetFightManager_C_UpdateFighter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.UpdateReward
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_StreetFightManager_C::UpdateReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.UpdateReward");

	ABP_StreetFightManager_C_UpdateReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.IsChampion
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Champion                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StreetFightManager_C::IsChampion(bool* Champion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.IsChampion");

	ABP_StreetFightManager_C_IsChampion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Champion != nullptr)
		*Champion = params.Champion;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.Reset
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_StreetFightManager_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.Reset");

	ABP_StreetFightManager_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.UpdateEntryMoney
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_StreetFightManager_C::UpdateEntryMoney()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.UpdateEntryMoney");

	ABP_StreetFightManager_C_UpdateEntryMoney_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.GetReward
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StreetFightManager_C::GetReward(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.GetReward");

	ABP_StreetFightManager_C_GetReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.ConvertMinite
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Minite                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StreetFightManager_C::ConvertMinite(float Time, int* Minite)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.ConvertMinite");

	ABP_StreetFightManager_C_ConvertMinite_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Minite != nullptr)
		*Minite = params.Minite;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.UpdateCheckTime
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_StreetFightManager_C::UpdateCheckTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.UpdateCheckTime");

	ABP_StreetFightManager_C_UpdateCheckTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_StreetFightManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.UserConstructionScript");

	ABP_StreetFightManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_StreetFightManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.ReceiveBeginPlay");

	ABP_StreetFightManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.FinishStreetFight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_StreetFightResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StreetFightManager_C::FinishStreetFight(TEnumAsByte<Enum_StreetFightResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.FinishStreetFight");

	ABP_StreetFightManager_C_FinishStreetFight_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StreetFightManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.ReceiveEndPlay");

	ABP_StreetFightManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.BeginTalk
// (BlueprintCallable, BlueprintEvent)

void ABP_StreetFightManager_C::BeginTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.BeginTalk");

	ABP_StreetFightManager_C_BeginTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.EndTalk
// (BlueprintCallable, BlueprintEvent)

void ABP_StreetFightManager_C::EndTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.EndTalk");

	ABP_StreetFightManager_C_EndTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.ChangeFlag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StreetFightManager_C::ChangeFlag(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.ChangeFlag");

	ABP_StreetFightManager_C_ChangeFlag_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.ExecuteUbergraph_BP_StreetFightManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StreetFightManager_C::ExecuteUbergraph_BP_StreetFightManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.ExecuteUbergraph_BP_StreetFightManager");

	ABP_StreetFightManager_C_ExecuteUbergraph_BP_StreetFightManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function BP_StreetFightManager.BP_StreetFightManager_C.ChangeFlag_Impl
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
// (Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StreetFightManager_C::Activate(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.Activate");

	ABP_StreetFightManager_C_Activate_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.RandomBox
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            NextIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StreetFightManager_C::STATIC_RandomBox(int* NextIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.RandomBox");

	ABP_StreetFightManager_C_RandomBox_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextIndex != nullptr)
		*NextIndex = params.NextIndex;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.IsIgnoreStep
// (Event, NetResponse, Private, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintEvent)
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
// (Net, NetReliable, NetRequest, Event, NetMulticast, Public, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_StreetFightManager_C::CheckMainFlowBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.CheckMainFlowBattle");

	ABP_StreetFightManager_C_CheckMainFlowBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.GetNextFighter
// (Native, NetResponse, Static, NetMulticast, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_StreetFightManager_C::STATIC_GetNextFighter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.GetNextFighter");

	ABP_StreetFightManager_C_GetNextFighter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.JudgeBattle
// (Net, NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, NetClient, Const)
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
// (NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_StreetFightManager_C::STATIC_UpdateFighter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.UpdateFighter");

	ABP_StreetFightManager_C_UpdateFighter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.UpdateReward
// (Exec, Native, NetResponse, Static, NetMulticast, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_StreetFightManager_C::STATIC_UpdateReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.UpdateReward");

	ABP_StreetFightManager_C_UpdateReward_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.IsChampion
// (Net, NetReliable, NetRequest, Event, Static, MulticastDelegate, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Champion                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StreetFightManager_C::STATIC_IsChampion(bool* Champion)
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
// (NetReliable, Event, NetMulticast, MulticastDelegate, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_StreetFightManager_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.Reset");

	ABP_StreetFightManager_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.UpdateEntryMoney
// (Event, NetResponse, Delegate, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)

void ABP_StreetFightManager_C::UpdateEntryMoney()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.UpdateEntryMoney");

	ABP_StreetFightManager_C_UpdateEntryMoney_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.GetReward
// (NetRequest, Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StreetFightManager_C::STATIC_GetReward(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.GetReward");

	ABP_StreetFightManager_C_GetReward_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.ConvertMinite
// (NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Minite                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StreetFightManager_C::ConvertMinite(float Time, int* Minite)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.ConvertMinite");

	ABP_StreetFightManager_C_ConvertMinite_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Minite != nullptr)
		*Minite = params.Minite;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.UpdateCheckTime
// (NetReliable, Native, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_StreetFightManager_C::UpdateCheckTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.UpdateCheckTime");

	ABP_StreetFightManager_C_UpdateCheckTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.UserConstructionScript
// (Exec, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_StreetFightManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.UserConstructionScript");

	ABP_StreetFightManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.ReceiveBeginPlay
// (Net, Native, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_StreetFightManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.ReceiveBeginPlay");

	ABP_StreetFightManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.FinishStreetFight
// (NetRequest, Native, NetResponse, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Enum_StreetFightResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StreetFightManager_C::FinishStreetFight(TEnumAsByte<Enum_StreetFightResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.FinishStreetFight");

	ABP_StreetFightManager_C_FinishStreetFight_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.ReceiveEndPlay
// (Net, NetReliable, Native, NetResponse, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StreetFightManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.ReceiveEndPlay");

	ABP_StreetFightManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.BeginTalk
// (Native, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_StreetFightManager_C::BeginTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.BeginTalk");

	ABP_StreetFightManager_C_BeginTalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.EndTalk
// (Net, NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_StreetFightManager_C::EndTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.EndTalk");

	ABP_StreetFightManager_C_EndTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.ChangeFlag
// (Net, NetReliable, NetRequest, Exec, Native, Event, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StreetFightManager.BP_StreetFightManager_C.ExecuteUbergraph_BP_StreetFightManager
// (Net, NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StreetFightManager_C::ExecuteUbergraph_BP_StreetFightManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StreetFightManager.BP_StreetFightManager_C.ExecuteUbergraph_BP_StreetFightManager");

	ABP_StreetFightManager_C_ExecuteUbergraph_BP_StreetFightManager_Params params;
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


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

// Function BPF_NPC.BPF_NPC_C.BPF_TeleportFollowSHE
// (Net, Exec, NetResponse, Static, NetMulticast, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Back                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Side                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Rotate_to_players              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_NPC_C::STATIC_BPF_TeleportFollowSHE(float Back, float Side, bool Rotate_to_players, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_NPC.BPF_NPC_C.BPF_TeleportFollowSHE");

	UBPF_NPC_C_BPF_TeleportFollowSHE_Params params;
	params.Back = Back;
	params.Side = Side;
	params.Rotate_to_players = Rotate_to_players;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_NPC.BPF_NPC_C.BPF_IsLeadActive
// (Net, Native, Event, Static, MulticastDelegate, Public, Delegate, NetServer, NetClient, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_NPC_C::STATIC_BPF_IsLeadActive(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_NPC.BPF_NPC_C.BPF_IsLeadActive");

	UBPF_NPC_C_BPF_IsLeadActive_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_NPC.BPF_NPC_C.BPF_IsLeadCompleted
// (Net, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_NPC_C::STATIC_BPF_IsLeadCompleted(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_NPC.BPF_NPC_C.BPF_IsLeadCompleted");

	UBPF_NPC_C_BPF_IsLeadCompleted_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_NPC.BPF_NPC_C.BPF_StartNPCLeadEvent
// (NetReliable, NetRequest, Native, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     TableRow                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_NPC_C::STATIC_BPF_StartNPCLeadEvent(const struct FDataTableRowHandle& TableRow, class UObject* __WorldContext, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_NPC.BPF_NPC_C.BPF_StartNPCLeadEvent");

	UBPF_NPC_C_BPF_StartNPCLeadEvent_Params params;
	params.TableRow = TableRow;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BPF_NPC.BPF_NPC_C.BPF_SpawnFollowSHE
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, Private, Protected, Delegate, NetClient, Const)
// Parameters:
// float                          Back                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Side                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Rotate_to_players              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_NPC_C::STATIC_BPF_SpawnFollowSHE(float Back, float Side, bool Rotate_to_players, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_NPC.BPF_NPC_C.BPF_SpawnFollowSHE");

	UBPF_NPC_C_BPF_SpawnFollowSHE_Params params;
	params.Back = Back;
	params.Side = Side;
	params.Rotate_to_players = Rotate_to_players;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_NPC.BPF_NPC_C.BPF_QueryTagCharaName2NpcActorNew
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AS3Character*            Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_NPC_C::STATIC_BPF_QueryTagCharaName2NpcActorNew(const struct FName& CharaName, class UObject* __WorldContext, class AS3Character** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_NPC.BPF_NPC_C.BPF_QueryTagCharaName2NpcActorNew");

	UBPF_NPC_C_BPF_QueryTagCharaName2NpcActorNew_Params params;
	params.CharaName = CharaName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function BPF_NPC.BPF_NPC_C.BPF_QueryPlayerNearNpcNew
// (Net, NetReliable, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, NetClient, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  NpcActorRef                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_NPC_C::STATIC_BPF_QueryPlayerNearNpcNew(class UObject* __WorldContext, class AActor** NpcActorRef, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_NPC.BPF_NPC_C.BPF_QueryPlayerNearNpcNew");

	UBPF_NPC_C_BPF_QueryPlayerNearNpcNew_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NpcActorRef != nullptr)
		*NpcActorRef = params.NpcActorRef;
	if (Length != nullptr)
		*Length = params.Length;
}


// Function BPF_NPC.BPF_NPC_C.BPF_NPC_GetMiniGameIdsTable
// (NetResponse, MulticastDelegate, Public, NetServer, NetClient, Const)
// Parameters:
// int                            RowIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FNPCMiniGameManagerIds  Out_Row                        (Parm, OutParm)

void UBPF_NPC_C::BPF_NPC_GetMiniGameIdsTable(int RowIndex, class UObject* __WorldContext, bool* bSuccess, struct FNPCMiniGameManagerIds* Out_Row)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_NPC.BPF_NPC_C.BPF_NPC_GetMiniGameIdsTable");

	UBPF_NPC_C_BPF_NPC_GetMiniGameIdsTable_Params params;
	params.RowIndex = RowIndex;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (Out_Row != nullptr)
		*Out_Row = params.Out_Row;
}


// Function BPF_NPC.BPF_NPC_C.BPF_NPC_ConvertScriptStateIDFromName
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, HasOutParms, Const)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_NPC_C::BPF_NPC_ConvertScriptStateIDFromName(int ID, class UObject* __WorldContext, struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_NPC.BPF_NPC_C.BPF_NPC_ConvertScriptStateIDFromName");

	UBPF_NPC_C_BPF_NPC_ConvertScriptStateIDFromName_Params params;
	params.ID = ID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BPF_NPC.BPF_NPC_C.BPF_NPC_GetVisibleTalkIconStates
// (NetReliable, NetRequest, Native, Public, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<ELocomotionState>> States                         (Parm, OutParm, ZeroConstructor)

void UBPF_NPC_C::BPF_NPC_GetVisibleTalkIconStates(class UObject* __WorldContext, TArray<TEnumAsByte<ELocomotionState>>* States)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_NPC.BPF_NPC_C.BPF_NPC_GetVisibleTalkIconStates");

	UBPF_NPC_C_BPF_NPC_GetVisibleTalkIconStates_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (States != nullptr)
		*States = params.States;
}


// Function BPF_NPC.BPF_NPC_C.BPF_NPC_GetCanNotTalkTurnAcoundStates
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<ELocomotionState>> States                         (Parm, OutParm, ZeroConstructor)

void UBPF_NPC_C::STATIC_BPF_NPC_GetCanNotTalkTurnAcoundStates(class UObject* __WorldContext, TArray<TEnumAsByte<ELocomotionState>>* States)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_NPC.BPF_NPC_C.BPF_NPC_GetCanNotTalkTurnAcoundStates");

	UBPF_NPC_C_BPF_NPC_GetCanNotTalkTurnAcoundStates_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (States != nullptr)
		*States = params.States;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

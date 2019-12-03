
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

// Function BPC_TurnAround_ScheduleNPC2.BPC_TurnAround_ScheduleNPC2_C.CanTurnAround
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, Private, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bCan                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_ScheduleNPC2_C::CanTurnAround(bool* bCan)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_ScheduleNPC2.BPC_TurnAround_ScheduleNPC2_C.CanTurnAround");

	UBPC_TurnAround_ScheduleNPC2_C_CanTurnAround_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCan != nullptr)
		*bCan = params.bCan;
}


// Function BPC_TurnAround_ScheduleNPC2.BPC_TurnAround_ScheduleNPC2_C.TryPostTeleportTurnaround
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bTeleported                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_ScheduleNPC2_C::STATIC_TryPostTeleportTurnaround(bool bTeleported)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_ScheduleNPC2.BPC_TurnAround_ScheduleNPC2_C.TryPostTeleportTurnaround");

	UBPC_TurnAround_ScheduleNPC2_C_TryPostTeleportTurnaround_Params params;
	params.bTeleported = bTeleported;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround_ScheduleNPC2.BPC_TurnAround_ScheduleNPC2_C.ExecuteUbergraph_BPC_TurnAround_ScheduleNPC2
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_ScheduleNPC2_C::STATIC_ExecuteUbergraph_BPC_TurnAround_ScheduleNPC2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround_ScheduleNPC2.BPC_TurnAround_ScheduleNPC2_C.ExecuteUbergraph_BPC_TurnAround_ScheduleNPC2");

	UBPC_TurnAround_ScheduleNPC2_C_ExecuteUbergraph_BPC_TurnAround_ScheduleNPC2_Params params;
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

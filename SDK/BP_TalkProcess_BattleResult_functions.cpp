
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

// Function BP_TalkProcess_BattleResult.BP_TalkProcess_BattleResult_C.Activate
// (Net, Exec, Native, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UBP_TalkProcess_BattleResult_C::STATIC_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_BattleResult.BP_TalkProcess_BattleResult_C.Activate");

	UBP_TalkProcess_BattleResult_C_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_BattleResult.BP_TalkProcess_BattleResult_C.ExecuteUbergraph_BP_TalkProcess_BattleResult
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, Delegate, NetServer, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_BattleResult_C::ExecuteUbergraph_BP_TalkProcess_BattleResult(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_BattleResult.BP_TalkProcess_BattleResult_C.ExecuteUbergraph_BP_TalkProcess_BattleResult");

	UBP_TalkProcess_BattleResult_C_ExecuteUbergraph_BP_TalkProcess_BattleResult_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

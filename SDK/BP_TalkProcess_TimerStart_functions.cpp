
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

// Function BP_TalkProcess_TimerStart.BP_TalkProcess_TimerStart_C.Activate
// (Net, NetReliable, NetRequest, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBP_TalkProcess_TimerStart_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_TimerStart.BP_TalkProcess_TimerStart_C.Activate");

	UBP_TalkProcess_TimerStart_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_TimerStart.BP_TalkProcess_TimerStart_C.ExecuteUbergraph_BP_TalkProcess_TimerStart
// (NetReliable, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_TimerStart_C::STATIC_ExecuteUbergraph_BP_TalkProcess_TimerStart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_TimerStart.BP_TalkProcess_TimerStart_C.ExecuteUbergraph_BP_TalkProcess_TimerStart");

	UBP_TalkProcess_TimerStart_C_ExecuteUbergraph_BP_TalkProcess_TimerStart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function BP_TalkProcess_TimerStop.BP_TalkProcess_TimerStop_C.Activate
// (Event, Public, BlueprintEvent)

void UBP_TalkProcess_TimerStop_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_TimerStop.BP_TalkProcess_TimerStop_C.Activate");

	UBP_TalkProcess_TimerStop_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_TimerStop.BP_TalkProcess_TimerStop_C.ExecuteUbergraph_BP_TalkProcess_TimerStop
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_TimerStop_C::ExecuteUbergraph_BP_TalkProcess_TimerStop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_TimerStop.BP_TalkProcess_TimerStop_C.ExecuteUbergraph_BP_TalkProcess_TimerStop");

	UBP_TalkProcess_TimerStop_C_ExecuteUbergraph_BP_TalkProcess_TimerStop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

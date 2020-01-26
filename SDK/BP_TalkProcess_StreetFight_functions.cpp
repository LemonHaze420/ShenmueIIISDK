
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

// Function BP_TalkProcess_StreetFight.BP_TalkProcess_StreetFight_C.Activate
// (Event, Public, BlueprintEvent)

void UBP_TalkProcess_StreetFight_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_StreetFight.BP_TalkProcess_StreetFight_C.Activate");

	UBP_TalkProcess_StreetFight_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_StreetFight.BP_TalkProcess_StreetFight_C.ExecuteUbergraph_BP_TalkProcess_StreetFight
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_StreetFight_C::ExecuteUbergraph_BP_TalkProcess_StreetFight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_StreetFight.BP_TalkProcess_StreetFight_C.ExecuteUbergraph_BP_TalkProcess_StreetFight");

	UBP_TalkProcess_StreetFight_C_ExecuteUbergraph_BP_TalkProcess_StreetFight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

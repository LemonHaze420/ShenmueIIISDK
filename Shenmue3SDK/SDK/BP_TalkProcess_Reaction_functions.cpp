
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

// Function BP_TalkProcess_Reaction.BP_TalkProcess_Reaction_C.Activate
// (Event, Public, BlueprintEvent)

void UBP_TalkProcess_Reaction_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Reaction.BP_TalkProcess_Reaction_C.Activate");

	UBP_TalkProcess_Reaction_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Reaction.BP_TalkProcess_Reaction_C.ExecuteUbergraph_BP_TalkProcess_Reaction
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_Reaction_C::ExecuteUbergraph_BP_TalkProcess_Reaction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Reaction.BP_TalkProcess_Reaction_C.ExecuteUbergraph_BP_TalkProcess_Reaction");

	UBP_TalkProcess_Reaction_C_ExecuteUbergraph_BP_TalkProcess_Reaction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

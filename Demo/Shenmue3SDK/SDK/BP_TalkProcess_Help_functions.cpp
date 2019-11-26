
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

// Function BP_TalkProcess_Help.BP_TalkProcess_Help_C.Activate
// (Event, Public, BlueprintEvent)

void UBP_TalkProcess_Help_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Help.BP_TalkProcess_Help_C.Activate");

	UBP_TalkProcess_Help_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Help.BP_TalkProcess_Help_C.CloseHelp
// (BlueprintCallable, BlueprintEvent)

void UBP_TalkProcess_Help_C::CloseHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Help.BP_TalkProcess_Help_C.CloseHelp");

	UBP_TalkProcess_Help_C_CloseHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Help.BP_TalkProcess_Help_C.ExecuteUbergraph_BP_TalkProcess_Help
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_Help_C::ExecuteUbergraph_BP_TalkProcess_Help(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Help.BP_TalkProcess_Help_C.ExecuteUbergraph_BP_TalkProcess_Help");

	UBP_TalkProcess_Help_C_ExecuteUbergraph_BP_TalkProcess_Help_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

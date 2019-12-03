
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

// Function BP_TalkProcess_Help.BP_TalkProcess_Help_C.Activate
// (NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBP_TalkProcess_Help_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Help.BP_TalkProcess_Help_C.Activate");

	UBP_TalkProcess_Help_C_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Help.BP_TalkProcess_Help_C.CloseHelp
// (Net, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBP_TalkProcess_Help_C::CloseHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Help.BP_TalkProcess_Help_C.CloseHelp");

	UBP_TalkProcess_Help_C_CloseHelp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Help.BP_TalkProcess_Help_C.ExecuteUbergraph_BP_TalkProcess_Help
// (NetRequest, Exec, Native, Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_Help_C::STATIC_ExecuteUbergraph_BP_TalkProcess_Help(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Help.BP_TalkProcess_Help_C.ExecuteUbergraph_BP_TalkProcess_Help");

	UBP_TalkProcess_Help_C_ExecuteUbergraph_BP_TalkProcess_Help_Params params;
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

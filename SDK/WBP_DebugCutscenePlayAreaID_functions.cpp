
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

// Function WBP_DebugCutscenePlayAreaID.WBP_DebugCutscenePlayAreaID_C.UpdateText
// (NetRequest, Exec, MulticastDelegate, Public, NetServer, HasDefaults, NetClient, BlueprintPure)

void UWBP_DebugCutscenePlayAreaID_C::UpdateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugCutscenePlayAreaID.WBP_DebugCutscenePlayAreaID_C.UpdateText");

	UWBP_DebugCutscenePlayAreaID_C_UpdateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugCutscenePlayAreaID.WBP_DebugCutscenePlayAreaID_C.SetCutsceneID
// (Net, NetRequest, Native, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   InCutsceneID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DebugCutscenePlayAreaID_C::STATIC_SetCutsceneID(const struct FName& InCutsceneID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugCutscenePlayAreaID.WBP_DebugCutscenePlayAreaID_C.SetCutsceneID");

	UWBP_DebugCutscenePlayAreaID_C_SetCutsceneID_Params params;
	params.InCutsceneID = InCutsceneID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

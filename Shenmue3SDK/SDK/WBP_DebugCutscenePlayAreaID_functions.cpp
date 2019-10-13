
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

// Function WBP_DebugCutscenePlayAreaID.WBP_DebugCutscenePlayAreaID_C.UpdateText
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_DebugCutscenePlayAreaID_C::UpdateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugCutscenePlayAreaID.WBP_DebugCutscenePlayAreaID_C.UpdateText");

	UWBP_DebugCutscenePlayAreaID_C_UpdateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DebugCutscenePlayAreaID.WBP_DebugCutscenePlayAreaID_C.SetCutsceneID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InCutsceneID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DebugCutscenePlayAreaID_C::SetCutsceneID(const struct FName& InCutsceneID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DebugCutscenePlayAreaID.WBP_DebugCutscenePlayAreaID_C.SetCutsceneID");

	UWBP_DebugCutscenePlayAreaID_C_SetCutsceneID_Params params;
	params.InCutsceneID = InCutsceneID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function WBP_CutsceneSubtitleText3D.WBP_CutsceneSubtitleText3D_C.TestUpdateTextFromReplaceString
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FName>           Labels                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_CutsceneSubtitleText3D_C::STATIC_TestUpdateTextFromReplaceString(TArray<struct FName>* Labels)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CutsceneSubtitleText3D.WBP_CutsceneSubtitleText3D_C.TestUpdateTextFromReplaceString");

	UWBP_CutsceneSubtitleText3D_C_TestUpdateTextFromReplaceString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Labels != nullptr)
		*Labels = params.Labels;
}


// Function WBP_CutsceneSubtitleText3D.WBP_CutsceneSubtitleText3D_C.UpdateText
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           Labels                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_CutsceneSubtitleText3D_C::UpdateText(TArray<struct FName>* Labels)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CutsceneSubtitleText3D.WBP_CutsceneSubtitleText3D_C.UpdateText");

	UWBP_CutsceneSubtitleText3D_C_UpdateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Labels != nullptr)
		*Labels = params.Labels;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

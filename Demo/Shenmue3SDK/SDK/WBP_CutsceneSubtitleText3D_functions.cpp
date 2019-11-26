
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

// Function WBP_CutsceneSubtitleText3D.WBP_CutsceneSubtitleText3D_C.TestUpdateTextFromReplaceString
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Labels                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_CutsceneSubtitleText3D_C::TestUpdateTextFromReplaceString(TArray<struct FName>* Labels)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CutsceneSubtitleText3D.WBP_CutsceneSubtitleText3D_C.TestUpdateTextFromReplaceString");

	UWBP_CutsceneSubtitleText3D_C_TestUpdateTextFromReplaceString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Labels != nullptr)
		*Labels = params.Labels;
}


// Function WBP_CutsceneSubtitleText3D.WBP_CutsceneSubtitleText3D_C.UpdateText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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


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

// Function WBP_HighwayStar_Debug.WBP_HighwayStar_Debug_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_HighwayStar_Debug_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HighwayStar_Debug.WBP_HighwayStar_Debug_C.GetText_1");

	UWBP_HighwayStar_Debug_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_HighwayStar_Debug.WBP_HighwayStar_Debug_C.SetScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_HighwayStar_Debug_C::SetScore(int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HighwayStar_Debug.WBP_HighwayStar_Debug_C.SetScore");

	UWBP_HighwayStar_Debug_C_SetScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

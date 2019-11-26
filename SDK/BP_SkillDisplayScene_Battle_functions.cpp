
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

// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.GetOwningPlayerPawn
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* ABP_SkillDisplayScene_Battle_C::GetOwningPlayerPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.GetOwningPlayerPawn");

	ABP_SkillDisplayScene_Battle_C_GetOwningPlayerPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.IsLoading
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_SkillDisplayScene_Battle_C::IsLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.IsLoading");

	ABP_SkillDisplayScene_Battle_C_IsLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

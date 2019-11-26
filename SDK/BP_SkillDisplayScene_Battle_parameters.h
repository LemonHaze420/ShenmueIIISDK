#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.GetOwningPlayerPawn
struct ABP_SkillDisplayScene_Battle_C_GetOwningPlayerPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.IsLoading
struct ABP_SkillDisplayScene_Battle_C_IsLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

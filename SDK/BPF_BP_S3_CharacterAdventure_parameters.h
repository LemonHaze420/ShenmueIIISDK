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

// Function BPF_BP_S3_CharacterAdventure.BPF_BP_S3_CharacterAdventure_C.Get_BP_S3_CharacterAdventure
struct UBPF_BP_S3_CharacterAdventure_C_Get_BP_S3_CharacterAdventure_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_S3_Character_Adventure_C*                Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

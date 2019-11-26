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

// Function SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C.IsUseFluctuationEmotion
struct USubABP_CutsceneCharacter_C_IsUseFluctuationEmotion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C.InitFaceMotages
struct USubABP_CutsceneCharacter_C_InitFaceMotages_Params
{
	bool                                               Succsess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C.CalcLookAt
struct USubABP_CutsceneCharacter_C_CalcLookAt_Params
{
};

// Function SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C.BlueprintUpdateAnimation
struct USubABP_CutsceneCharacter_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C.CalcEmotion
struct USubABP_CutsceneCharacter_C_CalcEmotion_Params
{
};

// Function SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C.CalcClipper
struct USubABP_CutsceneCharacter_C_CalcClipper_Params
{
};

// Function SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C.CalcEyeBlink
struct USubABP_CutsceneCharacter_C_CalcEyeBlink_Params
{
};

// Function SubABP_CutsceneCharacter.SubABP_CutsceneCharacter_C.ExecuteUbergraph_SubABP_CutsceneCharacter
struct USubABP_CutsceneCharacter_C_ExecuteUbergraph_SubABP_CutsceneCharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

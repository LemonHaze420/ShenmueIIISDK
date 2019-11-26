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

// Function BPC_TalkReaction.BPC_TalkReaction_C.GetSubAnimCharacterBase
struct UBPC_TalkReaction_C_GetSubAnimCharacterBase_Params
{
	class USubABP_CharacterBase_C*                     AsSub_ABP_Character_Base;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkReaction.BPC_TalkReaction_C.OwnerStopAnimation
struct UBPC_TalkReaction_C_OwnerStopAnimation_Params
{
};

// Function BPC_TalkReaction.BPC_TalkReaction_C.OnLoaded_D61EDC7B437B6BD78FA87FAB93DFA5D1
struct UBPC_TalkReaction_C_OnLoaded_D61EDC7B437B6BD78FA87FAB93DFA5D1_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkReaction.BPC_TalkReaction_C.ReceiveBeginPlay
struct UBPC_TalkReaction_C_ReceiveBeginPlay_Params
{
};

// Function BPC_TalkReaction.BPC_TalkReaction_C.PlayReactionAnimation
struct UBPC_TalkReaction_C_PlayReactionAnimation_Params
{
	int                                                ReactionId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendWeights;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnFlag;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkReaction.BPC_TalkReaction_C.ReceiveEndPlay
struct UBPC_TalkReaction_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkReaction.BPC_TalkReaction_C.ExecuteUbergraph_BPC_TalkReaction
struct UBPC_TalkReaction_C_ExecuteUbergraph_BPC_TalkReaction_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

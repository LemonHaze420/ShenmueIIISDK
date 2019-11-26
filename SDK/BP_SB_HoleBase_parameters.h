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

// Function BP_SB_HoleBase.BP_SB_HoleBase_C.GetMiniGameValueType
struct ABP_SB_HoleBase_C_GetMiniGameValueType_Params
{
	TEnumAsByte<EN_ValueType>                          Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_HoleBase.BP_SB_HoleBase_C.UserConstructionScript
struct ABP_SB_HoleBase_C_UserConstructionScript_Params
{
};

// Function BP_SB_HoleBase.BP_SB_HoleBase_C.StartMiniGame
struct ABP_SB_HoleBase_C_StartMiniGame_Params
{
};

// Function BP_SB_HoleBase.BP_SB_HoleBase_C.EndMiniGame
struct ABP_SB_HoleBase_C_EndMiniGame_Params
{
};

// Function BP_SB_HoleBase.BP_SB_HoleBase_C.WinMiniGame
struct ABP_SB_HoleBase_C_WinMiniGame_Params
{
};

// Function BP_SB_HoleBase.BP_SB_HoleBase_C.LoseMiniGame
struct ABP_SB_HoleBase_C_LoseMiniGame_Params
{
};

// Function BP_SB_HoleBase.BP_SB_HoleBase_C.DrawMiniGame
struct ABP_SB_HoleBase_C_DrawMiniGame_Params
{
};

// Function BP_SB_HoleBase.BP_SB_HoleBase_C.RestartMiniGame
struct ABP_SB_HoleBase_C_RestartMiniGame_Params
{
};

// Function BP_SB_HoleBase.BP_SB_HoleBase_C.EnterMiniGame
struct ABP_SB_HoleBase_C_EnterMiniGame_Params
{
	float                                              EnterTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_HoleBase.BP_SB_HoleBase_C.FinalizeTalk
struct ABP_SB_HoleBase_C_FinalizeTalk_Params
{
};

// Function BP_SB_HoleBase.BP_SB_HoleBase_C.DeleteHoleInBall
struct ABP_SB_HoleBase_C_DeleteHoleInBall_Params
{
};

// Function BP_SB_HoleBase.BP_SB_HoleBase_C.ExecuteUbergraph_BP_SB_HoleBase
struct ABP_SB_HoleBase_C_ExecuteUbergraph_BP_SB_HoleBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_HoleBase.BP_SB_HoleBase_C.OnHasPassedDispatcher__DelegateSignature
struct ABP_SB_HoleBase_C_OnHasPassedDispatcher__DelegateSignature_Params
{
};

// Function BP_SB_HoleBase.BP_SB_HoleBase_C.OnHoleInDispatcher__DelegateSignature
struct ABP_SB_HoleBase_C_OnHoleInDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

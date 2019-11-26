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

// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.GetMiniGameValueType
struct ABP_MiniGame_ThrowObjectBase_C_GetMiniGameValueType_Params
{
	TEnumAsByte<EN_ValueType>                          Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.IsGameCenterMode
struct ABP_MiniGame_ThrowObjectBase_C_IsGameCenterMode_Params
{
	bool                                               bGameCenter;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.SetGameCenterMode
struct ABP_MiniGame_ThrowObjectBase_C_SetGameCenterMode_Params
{
	bool                                               bGolfType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.Throw
struct ABP_MiniGame_ThrowObjectBase_C_Throw_Params
{
};

// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.IsStoped
struct ABP_MiniGame_ThrowObjectBase_C_IsStoped_Params
{
	bool                                               bStoped;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.UserConstructionScript
struct ABP_MiniGame_ThrowObjectBase_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.WinMiniGame
struct ABP_MiniGame_ThrowObjectBase_C_WinMiniGame_Params
{
};

// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.LoseMiniGame
struct ABP_MiniGame_ThrowObjectBase_C_LoseMiniGame_Params
{
};

// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.DrawMiniGame
struct ABP_MiniGame_ThrowObjectBase_C_DrawMiniGame_Params
{
};

// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.EndMiniGame
struct ABP_MiniGame_ThrowObjectBase_C_EndMiniGame_Params
{
};

// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.StartMiniGame
struct ABP_MiniGame_ThrowObjectBase_C_StartMiniGame_Params
{
};

// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.FinalizeTalk
struct ABP_MiniGame_ThrowObjectBase_C_FinalizeTalk_Params
{
};

// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.RestartMiniGame
struct ABP_MiniGame_ThrowObjectBase_C_RestartMiniGame_Params
{
};

// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.ReceiveTick
struct ABP_MiniGame_ThrowObjectBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.EnterMiniGame
struct ABP_MiniGame_ThrowObjectBase_C_EnterMiniGame_Params
{
	float                                              EnterTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.ExecuteUbergraph_BP_MiniGame_ThrowObjectBase
struct ABP_MiniGame_ThrowObjectBase_C_ExecuteUbergraph_BP_MiniGame_ThrowObjectBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.OnStopedDispatcher__DelegateSignature
struct ABP_MiniGame_ThrowObjectBase_C_OnStopedDispatcher__DelegateSignature_Params
{
	bool                                               bResult;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       GiftName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSpecial;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               SuccessSound;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsGameCenter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C.OnFirstTouchDispatcher__DelegateSignature
struct ABP_MiniGame_ThrowObjectBase_C_OnFirstTouchDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.GetClothMeshComponent
struct ABP_MiniGame_Keiho_C_GetClothMeshComponent_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateRotateAngle
struct ABP_MiniGame_Keiho_C_UpdateRotateAngle_Params
{
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InitAsyncLoad
struct ABP_MiniGame_Keiho_C_InitAsyncLoad_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateSE
struct ABP_MiniGame_Keiho_C_UpdateSE_Params
{
	bool                                               InRange;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateKungFuAccumulation
struct ABP_MiniGame_Keiho_C_UpdateKungFuAccumulation_Params
{
	float                                              StickRot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.GetPlayLabel
struct ABP_MiniGame_Keiho_C_GetPlayLabel_Params
{
	TEnumAsByte<E_MiniGame_MahoPartnerState>           State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       labelName;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.SetNPCVisible
struct ABP_MiniGame_Keiho_C_SetNPCVisible_Params
{
	bool                                               InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdatePartnerAnim
struct ABP_MiniGame_Keiho_C_UpdatePartnerAnim_Params
{
	float                                              PowerRate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.GetDistanceFromCenter
struct ABP_MiniGame_Keiho_C_GetDistanceFromCenter_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateAddValue
struct ABP_MiniGame_Keiho_C_UpdateAddValue_Params
{
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateDrawLine
struct ABP_MiniGame_Keiho_C_UpdateDrawLine_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.SpawnInputControlActor
struct ABP_MiniGame_Keiho_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UpdateRyoMove
struct ABP_MiniGame_Keiho_C_UpdateRyoMove_Params
{
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.UserConstructionScript
struct ABP_MiniGame_Keiho_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Timeline_InitPartnerCollision__FinishedFunc
struct ABP_MiniGame_Keiho_C_Timeline_InitPartnerCollision__FinishedFunc_Params
{
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Timeline_InitPartnerCollision__UpdateFunc
struct ABP_MiniGame_Keiho_C_Timeline_InitPartnerCollision__UpdateFunc_Params
{
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_FootPrintL
struct ABP_MiniGame_Keiho_C_Event_FootPrintL_Params
{
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.StartMiniGame
struct ABP_MiniGame_Keiho_C_StartMiniGame_Params
{
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_FootPrintR
struct ABP_MiniGame_Keiho_C_Event_FootPrintR_Params
{
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_RyoUpdateFade
struct ABP_MiniGame_Keiho_C_Event_RyoUpdateFade_Params
{
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.ClothesChangedCC
struct ABP_MiniGame_Keiho_C_ClothesChangedCC_Params
{
	TScriptInterface<class US3ClothInterface>          Interface;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InitPartnerCollision
struct ABP_MiniGame_Keiho_C_InitPartnerCollision_Params
{
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.ReceiveBeginPlay
struct ABP_MiniGame_Keiho_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.ReceiveTick
struct ABP_MiniGame_Keiho_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InputRightStickHorizontal
struct ABP_MiniGame_Keiho_C_InputRightStickHorizontal_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InputRightStickVertical
struct ABP_MiniGame_Keiho_C_InputRightStickVertical_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.StartGame
struct ABP_MiniGame_Keiho_C_StartGame_Params
{
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InputLeftStickVertical
struct ABP_MiniGame_Keiho_C_InputLeftStickVertical_Params
{
	float                                              InputLeftVertical;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.InputLeftStickHorizontal
struct ABP_MiniGame_Keiho_C_InputLeftStickHorizontal_Params
{
	float                                              InputLeftHorizontal;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.AfterFadeInEvent
struct ABP_MiniGame_Keiho_C_AfterFadeInEvent_Params
{
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_StopRyoMoveForTurn
struct ABP_MiniGame_Keiho_C_Event_StopRyoMoveForTurn_Params
{
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_OnChangeAnimState
struct ABP_MiniGame_Keiho_C_Event_OnChangeAnimState_Params
{
	TEnumAsByte<E_MiniGame_MahoPartnerState>           State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.SetKungFuDifficulty
struct ABP_MiniGame_Keiho_C_SetKungFuDifficulty_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.TimeUpEvent
struct ABP_MiniGame_Keiho_C_TimeUpEvent_Params
{
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.EndMiniGame
struct ABP_MiniGame_Keiho_C_EndMiniGame_Params
{
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.OnTimeUp
struct ABP_MiniGame_Keiho_C_OnTimeUp_Params
{
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.PlayScriptRabel
struct ABP_MiniGame_Keiho_C_PlayScriptRabel_Params
{
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.Event_OpenHelp
struct ABP_MiniGame_Keiho_C_Event_OpenHelp_Params
{
};

// Function BP_MiniGame_Keiho.BP_MiniGame_Keiho_C.ExecuteUbergraph_BP_MiniGame_Keiho
struct ABP_MiniGame_Keiho_C_ExecuteUbergraph_BP_MiniGame_Keiho_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

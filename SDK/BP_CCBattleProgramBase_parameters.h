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

// Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.GetEventDispatcher
struct ABP_CCBattleProgramBase_C_GetEventDispatcher_Params
{
	class UBP_CCBattleEvents_C*                        EventDispatcher;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.StartRetry
struct ABP_CCBattleProgramBase_C_StartRetry_Params
{
};

// Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.SetPlayerController
struct ABP_CCBattleProgramBase_C_SetPlayerController_Params
{
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.StartGame_SingleSet
struct ABP_CCBattleProgramBase_C_StartGame_SingleSet_Params
{
	struct FST_CCBattle_Set                            SET;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.SetOutputTexture
struct ABP_CCBattleProgramBase_C_SetOutputTexture_Params
{
	class UTextureRenderTarget2D*                      Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.UserConstructionScript
struct ABP_CCBattleProgramBase_C_UserConstructionScript_Params
{
};

// Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.ReceiveBeginPlay
struct ABP_CCBattleProgramBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.ReceiveEndPlay
struct ABP_CCBattleProgramBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CCBattleProgramBase.BP_CCBattleProgramBase_C.ExecuteUbergraph_BP_CCBattleProgramBase
struct ABP_CCBattleProgramBase_C_ExecuteUbergraph_BP_CCBattleProgramBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

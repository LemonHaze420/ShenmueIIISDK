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

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.SetAnimOffsetPos
struct ABP_Minigame_Fishing_Test_C_SetAnimOffsetPos_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.AddAdjustPlayCount
struct ABP_Minigame_Fishing_Test_C_AddAdjustPlayCount_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.CheckIsAdjustPlay
struct ABP_Minigame_Fishing_Test_C_CheckIsAdjustPlay_Params
{
	bool                                               IsAdjust;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.GetRefractionRate
struct ABP_Minigame_Fishing_Test_C_GetRefractionRate_Params
{
	float                                              Rate;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.SetBuoyPosOnSwing
struct ABP_Minigame_Fishing_Test_C_SetBuoyPosOnSwing_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.UpdateCableEndPos
struct ABP_Minigame_Fishing_Test_C_UpdateCableEndPos_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.UpdateBiteFishTargetLocation
struct ABP_Minigame_Fishing_Test_C_UpdateBiteFishTargetLocation_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.UpdateRyoDirection
struct ABP_Minigame_Fishing_Test_C_UpdateRyoDirection_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.UpdateLoadMeshData
struct ABP_Minigame_Fishing_Test_C_UpdateLoadMeshData_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.InitAsyncLoad
struct ABP_Minigame_Fishing_Test_C_InitAsyncLoad_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.UpdateBuoyLocation
struct ABP_Minigame_Fishing_Test_C_UpdateBuoyLocation_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.SettingFishWeight
struct ABP_Minigame_Fishing_Test_C_SettingFishWeight_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.GetClothMeshComponent
struct ABP_Minigame_Fishing_Test_C_GetClothMeshComponent_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.GetDetectAction
struct ABP_Minigame_Fishing_Test_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.ClockVisibleChange
struct ABP_Minigame_Fishing_Test_C_ClockVisibleChange_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.UpdateAroundFish
struct ABP_Minigame_Fishing_Test_C_UpdateAroundFish_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.CheckSubQuestEnabled
struct ABP_Minigame_Fishing_Test_C_CheckSubQuestEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.SetEnabledFishArea
struct ABP_Minigame_Fishing_Test_C_SetEnabledFishArea_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.CreateSubQuestWidget
struct ABP_Minigame_Fishing_Test_C_CreateSubQuestWidget_Params
{
	int                                                RyoValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.IsSubQuestCompetition
struct ABP_Minigame_Fishing_Test_C_IsSubQuestCompetition_Params
{
	bool                                               IsCompetition;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                EventFlagValue;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.ResetWaterPlane
struct ABP_Minigame_Fishing_Test_C_ResetWaterPlane_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.SettingWaterPlane
struct ABP_Minigame_Fishing_Test_C_SettingWaterPlane_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.GetResultRank
struct ABP_Minigame_Fishing_Test_C_GetResultRank_Params
{
	int                                                Rank;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.IsFailedFishing
struct ABP_Minigame_Fishing_Test_C_IsFailedFishing_Params
{
	bool                                               Failed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.CheckTimeup
struct ABP_Minigame_Fishing_Test_C_CheckTimeup_Params
{
	bool                                               Timeup;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.SettingTimeup
struct ABP_Minigame_Fishing_Test_C_SettingTimeup_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.SettingEscape
struct ABP_Minigame_Fishing_Test_C_SettingEscape_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.SettingDetector
struct ABP_Minigame_Fishing_Test_C_SettingDetector_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.IsEnableFishing
struct ABP_Minigame_Fishing_Test_C_IsEnableFishing_Params
{
	bool                                               Enable;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.GetSellPosition
struct ABP_Minigame_Fishing_Test_C_GetSellPosition_Params
{
	struct FVector                                     pos;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.InitializeShopResult
struct ABP_Minigame_Fishing_Test_C_InitializeShopResult_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.SpawnSequenceActor
struct ABP_Minigame_Fishing_Test_C_SpawnSequenceActor_Params
{
	class ULevelSequence*                              InSequence0;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AttachParentActor0;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_SpawnableSequenceActor_C*                SpawnObj;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.SettingSEPlayer
struct ABP_Minigame_Fishing_Test_C_SettingSEPlayer_Params
{
	bool                                               IsDestroy;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.StopFishingBGM
struct ABP_Minigame_Fishing_Test_C_StopFishingBGM_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.PlayBGM
struct ABP_Minigame_Fishing_Test_C_PlayBGM_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.PlayReelSE
struct ABP_Minigame_Fishing_Test_C_PlayReelSE_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.StopAllSE
struct ABP_Minigame_Fishing_Test_C_StopAllSE_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.DebugSEPlay
struct ABP_Minigame_Fishing_Test_C_DebugSEPlay_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.PlayResultSound
struct ABP_Minigame_Fishing_Test_C_PlayResultSound_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.GetResultFishMesh
struct ABP_Minigame_Fishing_Test_C_GetResultFishMesh_Params
{
	class USkeletalMeshComponent*                      RetMesh;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.FishHit
struct ABP_Minigame_Fishing_Test_C_FishHit_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.HitSetting
struct ABP_Minigame_Fishing_Test_C_HitSetting_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.GetFishingBuoyMesh
struct ABP_Minigame_Fishing_Test_C_GetFishingBuoyMesh_Params
{
	class UStaticMeshComponent*                        BuoyMesh;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.UpdateCapture
struct ABP_Minigame_Fishing_Test_C_UpdateCapture_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.RestartSwing
struct ABP_Minigame_Fishing_Test_C_RestartSwing_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.SetQteTriangleRotation
struct ABP_Minigame_Fishing_Test_C_SetQteTriangleRotation_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.UpdateQte
struct ABP_Minigame_Fishing_Test_C_UpdateQte_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.MakeQteTriangle
struct ABP_Minigame_Fishing_Test_C_MakeQteTriangle_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.RemoveQte
struct ABP_Minigame_Fishing_Test_C_RemoveQte_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.CreateResultWindow
struct ABP_Minigame_Fishing_Test_C_CreateResultWindow_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.SettingRod
struct ABP_Minigame_Fishing_Test_C_SettingRod_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.SetCableLength
struct ABP_Minigame_Fishing_Test_C_SetCableLength_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.SettingWidgetText
struct ABP_Minigame_Fishing_Test_C_SettingWidgetText_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.GetFishShadow
struct ABP_Minigame_Fishing_Test_C_GetFishShadow_Params
{
	class ABP_Fishing_FishShadow_C*                    RetFishShadow;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.SetPullPower
struct ABP_Minigame_Fishing_Test_C_SetPullPower_Params
{
	float                                              ArgAxis;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ArgIsX;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.GetFishGram
struct ABP_Minigame_Fishing_Test_C_GetFishGram_Params
{
	int                                                ArgGram;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.HitTimeRestart
struct ABP_Minigame_Fishing_Test_C_HitTimeRestart_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.CalcReelSpeedRate
struct ABP_Minigame_Fishing_Test_C_CalcReelSpeedRate_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.CalcDistance
struct ABP_Minigame_Fishing_Test_C_CalcDistance_Params
{
	float                                              ArgRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RetLocation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.QTE_Finish
struct ABP_Minigame_Fishing_Test_C_QTE_Finish_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.CalcArrowPow
struct ABP_Minigame_Fishing_Test_C_CalcArrowPow_Params
{
	float                                              ArgInputPow;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RetPow;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.CalcCastingRate
struct ABP_Minigame_Fishing_Test_C_CalcCastingRate_Params
{
	float                                              Rate;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.StartCast
struct ABP_Minigame_Fishing_Test_C_StartCast_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.GetFishingBuoyRoot
struct ABP_Minigame_Fishing_Test_C_GetFishingBuoyRoot_Params
{
	class UStaticMeshComponent*                        BuoyMesh;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.DebugDrawRangeLine
struct ABP_Minigame_Fishing_Test_C_DebugDrawRangeLine_Params
{
	float                                              ArgSplitNum;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.UpdateDebug
struct ABP_Minigame_Fishing_Test_C_UpdateDebug_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.CalcRodBone
struct ABP_Minigame_Fishing_Test_C_CalcRodBone_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.UpdateABPCastingRate
struct ABP_Minigame_Fishing_Test_C_UpdateABPCastingRate_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.GetCable
struct ABP_Minigame_Fishing_Test_C_GetCable_Params
{
	class UCableComponent*                             RetCable;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.GetBuoyScene
struct ABP_Minigame_Fishing_Test_C_GetBuoyScene_Params
{
	class USceneComponent*                             newParam;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.UpdateFishPos
struct ABP_Minigame_Fishing_Test_C_UpdateFishPos_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.InputSwingRY
struct ABP_Minigame_Fishing_Test_C_InputSwingRY_Params
{
	float                                              ArgAxis;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.SettingResultCamera
struct ABP_Minigame_Fishing_Test_C_SettingResultCamera_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.CameraChange
struct ABP_Minigame_Fishing_Test_C_CameraChange_Params
{
	bool                                               ArgUseSceneCamera;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.SettingFromBuoy
struct ABP_Minigame_Fishing_Test_C_SettingFromBuoy_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.CheckFishAreaCollision
struct ABP_Minigame_Fishing_Test_C_CheckFishAreaCollision_Params
{
	bool                                               RetHit;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.MakeLandingFishList
struct ABP_Minigame_Fishing_Test_C_MakeLandingFishList_Params
{
	bool                                               RetHit;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.SettingHitFish
struct ABP_Minigame_Fishing_Test_C_SettingHitFish_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.UpdateFish
struct ABP_Minigame_Fishing_Test_C_UpdateFish_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.SettingFishScale
struct ABP_Minigame_Fishing_Test_C_SettingFishScale_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.UpdateDelayState
struct ABP_Minigame_Fishing_Test_C_UpdateDelayState_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.UpdateDistance
struct ABP_Minigame_Fishing_Test_C_UpdateDistance_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.GetNowDistance
struct ABP_Minigame_Fishing_Test_C_GetNowDistance_Params
{
	float                                              RetDist;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.SetupResult
struct ABP_Minigame_Fishing_Test_C_SetupResult_Params
{
	float                                              ArgWait;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.CalcLimitDistPer
struct ABP_Minigame_Fishing_Test_C_CalcLimitDistPer_Params
{
	float                                              RetLimitPow;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.GetFishingArrow
struct ABP_Minigame_Fishing_Test_C_GetFishingArrow_Params
{
	class ABP_Fishing_Arrow_C*                         AsBP_Fishing_Ryo;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.GetHitFishData
struct ABP_Minigame_Fishing_Test_C_GetHitFishData_Params
{
	struct FST_MG_FishData                             newParam;                                                 // (Parm, OutParm)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.GetFishingABP
struct ABP_Minigame_Fishing_Test_C_GetFishingABP_Params
{
	class UABP_Fishing_re_C*                           AsABP_Fishing_Re;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.GetFishingRyo
struct ABP_Minigame_Fishing_Test_C_GetFishingRyo_Params
{
	class ABP_Fishing_Ryo_C*                           AsBP_Fishing_Ryo;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.getQTEDirection
struct ABP_Minigame_Fishing_Test_C_getQTEDirection_Params
{
	int                                                qte_dir;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.CheckLeftStickTurn
struct ABP_Minigame_Fishing_Test_C_CheckLeftStickTurn_Params
{
	bool                                               is_turn;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.GetFishingBuoy
struct ABP_Minigame_Fishing_Test_C_GetFishingBuoy_Params
{
	class ABP_FishingBuoy_test_C*                      Buoy;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.CreateWindow
struct ABP_Minigame_Fishing_Test_C_CreateWindow_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.SpawnInputControlActor
struct ABP_Minigame_Fishing_Test_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.UserConstructionScript
struct ABP_Minigame_Fishing_Test_C_UserConstructionScript_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.QTEEndTimeline__FinishedFunc
struct ABP_Minigame_Fishing_Test_C_QTEEndTimeline__FinishedFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.QTEEndTimeline__UpdateFunc
struct ABP_Minigame_Fishing_Test_C_QTEEndTimeline__UpdateFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.qte_timeline_type3__FinishedFunc
struct ABP_Minigame_Fishing_Test_C_qte_timeline_type3__FinishedFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.qte_timeline_type3__UpdateFunc
struct ABP_Minigame_Fishing_Test_C_qte_timeline_type3__UpdateFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.qte_timeline_type3__qte_show__EventFunc
struct ABP_Minigame_Fishing_Test_C_qte_timeline_type3__qte_show__EventFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.qte_timeline_type3__qte_wait_start__EventFunc
struct ABP_Minigame_Fishing_Test_C_qte_timeline_type3__qte_wait_start__EventFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.qte_timeline_type3__qte_start__EventFunc
struct ABP_Minigame_Fishing_Test_C_qte_timeline_type3__qte_start__EventFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.qte_timeline_type2__FinishedFunc
struct ABP_Minigame_Fishing_Test_C_qte_timeline_type2__FinishedFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.qte_timeline_type2__UpdateFunc
struct ABP_Minigame_Fishing_Test_C_qte_timeline_type2__UpdateFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.qte_timeline_type2__qte_show__EventFunc
struct ABP_Minigame_Fishing_Test_C_qte_timeline_type2__qte_show__EventFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.qte_timeline_type2__qte_wait_start__EventFunc
struct ABP_Minigame_Fishing_Test_C_qte_timeline_type2__qte_wait_start__EventFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.qte_timeline_type2__qte_start__EventFunc
struct ABP_Minigame_Fishing_Test_C_qte_timeline_type2__qte_start__EventFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.򠪦􆖐񍳔_
struct ABP_Minigame_Fishing_Test_C__UnknownFunc01__Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Particle Start Timeline__FinishedFunc
struct ABP_Minigame_Fishing_Test_C_Particle_Start_Timeline__FinishedFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Particle Start Timeline__UpdateFunc
struct ABP_Minigame_Fishing_Test_C_Particle_Start_Timeline__UpdateFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.P
struct ABP_Minigame_Fishing_Test_C_P_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.qte_timeline_type1__FinishedFunc
struct ABP_Minigame_Fishing_Test_C_qte_timeline_type1__FinishedFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.qte_timeline_type1__UpdateFunc
struct ABP_Minigame_Fishing_Test_C_qte_timeline_type1__UpdateFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.qte_timeline_type1__qte_show__EventFunc
struct ABP_Minigame_Fishing_Test_C_qte_timeline_type1__qte_show__EventFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.qte_timeline_type1__qte_wait_start__EventFunc
struct ABP_Minigame_Fishing_Test_C_qte_timeline_type1__qte_wait_start__EventFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.qte_timeline_type1__qte_start__EventFunc
struct ABP_Minigame_Fishing_Test_C_qte_timeline_type1__qte_start__EventFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.ParticleRipple Start Timeline__FinishedFunc
struct ABP_Minigame_Fishing_Test_C_ParticleRipple_Start_Timeline__FinishedFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.ParticleRipple Start Timeline__UpdateFunc
struct ABP_Minigame_Fishing_Test_C_ParticleRipple_Start_Timeline__UpdateFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.BlendRateOnHitTimeline__FinishedFunc
struct ABP_Minigame_Fishing_Test_C_BlendRateOnHitTimeline__FinishedFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.BlendRateOnHitTimeline__UpdateFunc
struct ABP_Minigame_Fishing_Test_C_BlendRateOnHitTimeline__UpdateFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.QTEFailedAnimTimeline__FinishedFunc
struct ABP_Minigame_Fishing_Test_C_QTEFailedAnimTimeline__FinishedFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.QTEFailedAnimTimeline__UpdateFunc
struct ABP_Minigame_Fishing_Test_C_QTEFailedAnimTimeline__UpdateFunc_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Create QTE Widget
struct ABP_Minigame_Fishing_Test_C_Create_QTE_Widget_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Swing LStickX
struct ABP_Minigame_Fishing_Test_C_Swing_LStickX_Params
{
	float                                              Axis;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Swing RStickY
struct ABP_Minigame_Fishing_Test_C_Swing_RStickY_Params
{
	float                                              Axis;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Wait LStick X
struct ABP_Minigame_Fishing_Test_C_Wait_LStick_X_Params
{
	float                                              A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Wait RStick X
struct ABP_Minigame_Fishing_Test_C_Wait_RStick_X_Params
{
	float                                              Axis;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Wait RStick Y
struct ABP_Minigame_Fishing_Test_C_Wait_RStick_Y_Params
{
	float                                              Axis;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Input Update
struct ABP_Minigame_Fishing_Test_C_Input_Update_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Wait Input Update
struct ABP_Minigame_Fishing_Test_C_Wait_Input_Update_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Buoy Attract
struct ABP_Minigame_Fishing_Test_C_Buoy_Attract_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Hit RStick X
struct ABP_Minigame_Fishing_Test_C_Hit_RStick_X_Params
{
	float                                              Axis;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Hit RStick Y
struct ABP_Minigame_Fishing_Test_C_Hit_RStick_Y_Params
{
	float                                              Axis;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Hit InputUpdate
struct ABP_Minigame_Fishing_Test_C_Hit_InputUpdate_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Swing Input Update
struct ABP_Minigame_Fishing_Test_C_Swing_Input_Update_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Push HitCheck R2
struct ABP_Minigame_Fishing_Test_C_Push_HitCheck_R2_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.QTE Start
struct ABP_Minigame_Fishing_Test_C_QTE_Start_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.QTE Start Type3
struct ABP_Minigame_Fishing_Test_C_QTE_Start_Type3_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.QTE Start Type2
struct ABP_Minigame_Fishing_Test_C_QTE_Start_Type2_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Wait And Hit PushR
struct ABP_Minigame_Fishing_Test_C_Wait_And_Hit_PushR_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Wait And Hit PushL
struct ABP_Minigame_Fishing_Test_C_Wait_And_Hit_PushL_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Wait And Hit PushU
struct ABP_Minigame_Fishing_Test_C_Wait_And_Hit_PushU_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Wait And Hit PushD
struct ABP_Minigame_Fishing_Test_C_Wait_And_Hit_PushD_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Wait And Hit Update
struct ABP_Minigame_Fishing_Test_C_Wait_And_Hit_Update_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Wait And Hit ReleaseR
struct ABP_Minigame_Fishing_Test_C_Wait_And_Hit_ReleaseR_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Wait And Hit ReleaseL
struct ABP_Minigame_Fishing_Test_C_Wait_And_Hit_ReleaseL_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Wait And Hit ReleaseU
struct ABP_Minigame_Fishing_Test_C_Wait_And_Hit_ReleaseU_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Wait And Hit ReleaseD
struct ABP_Minigame_Fishing_Test_C_Wait_And_Hit_ReleaseD_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Swing Move Start
struct ABP_Minigame_Fishing_Test_C_Swing_Move_Start_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Swing Move Stop
struct ABP_Minigame_Fishing_Test_C_Swing_Move_Stop_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Set Fishing Arrow Visible
struct ABP_Minigame_Fishing_Test_C_Set_Fishing_Arrow_Visible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Swing RStickX
struct ABP_Minigame_Fishing_Test_C_Swing_RStickX_Params
{
	float                                              InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Wait LStick Y
struct ABP_Minigame_Fishing_Test_C_Wait_LStick_Y_Params
{
	float                                              Axis;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.QTE Init
struct ABP_Minigame_Fishing_Test_C_QTE_Init_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.StartMiniGame
struct ABP_Minigame_Fishing_Test_C_StartMiniGame_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.EndMiniGame
struct ABP_Minigame_Fishing_Test_C_EndMiniGame_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.RestartMiniGame
struct ABP_Minigame_Fishing_Test_C_RestartMiniGame_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Init
struct ABP_Minigame_Fishing_Test_C_Init_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Fin
struct ABP_Minigame_Fishing_Test_C_Fin_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Event_DebugDelayFishHit
struct ABP_Minigame_Fishing_Test_C_Event_DebugDelayFishHit_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.BindHitEventToBite
struct ABP_Minigame_Fishing_Test_C_BindHitEventToBite_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Event_BiteFish
struct ABP_Minigame_Fishing_Test_C_Event_BiteFish_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.QTE End
struct ABP_Minigame_Fishing_Test_C_QTE_End_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Event_RestartFishing
struct ABP_Minigame_Fishing_Test_C_Event_RestartFishing_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.FinalizeTalk
struct ABP_Minigame_Fishing_Test_C_FinalizeTalk_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Event_StartMiniGame
struct ABP_Minigame_Fishing_Test_C_Event_StartMiniGame_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Event_StartGameAfterFadeOut
struct ABP_Minigame_Fishing_Test_C_Event_StartGameAfterFadeOut_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.OnEndBiteFish
struct ABP_Minigame_Fishing_Test_C_OnEndBiteFish_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.OnEndFadeOutFinished
struct ABP_Minigame_Fishing_Test_C_OnEndFadeOutFinished_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.OnEndFadeInFinished
struct ABP_Minigame_Fishing_Test_C_OnEndFadeInFinished_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.ReceiveBeginPlay
struct ABP_Minigame_Fishing_Test_C_ReceiveBeginPlay_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.ReceiveTick
struct ABP_Minigame_Fishing_Test_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Swing_Finished
struct ABP_Minigame_Fishing_Test_C_Swing_Finished_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Rod Update
struct ABP_Minigame_Fishing_Test_C_Rod_Update_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Hit
struct ABP_Minigame_Fishing_Test_C_Hit_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Finish Check
struct ABP_Minigame_Fishing_Test_C_Finish_Check_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Swing_Release
struct ABP_Minigame_Fishing_Test_C_Swing_Release_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Swing
struct ABP_Minigame_Fishing_Test_C_Swing_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.FeedBack Play
struct ABP_Minigame_Fishing_Test_C_FeedBack_Play_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.FeedBackStop
struct ABP_Minigame_Fishing_Test_C_FeedBackStop_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Update
struct ABP_Minigame_Fishing_Test_C_Update_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Particle Update
struct ABP_Minigame_Fishing_Test_C_Particle_Update_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Set Active Object
struct ABP_Minigame_Fishing_Test_C_Set_Active_Object_Params
{
	bool                                               is_active;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Show Result
struct ABP_Minigame_Fishing_Test_C_Show_Result_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.GetFishFinished
struct ABP_Minigame_Fishing_Test_C_GetFishFinished_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.S_1
struct ABP_Minigame_Fishing_Test_C_S_1_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Update Arrow
struct ABP_Minigame_Fishing_Test_C_Update_Arrow_Params
{
	float                                              Power;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.EventSwingRelease
struct ABP_Minigame_Fishing_Test_C_EventSwingRelease_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.QTE Update
struct ABP_Minigame_Fishing_Test_C_QTE_Update_Params
{
	float                                              move_rate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.qte_flash_end
struct ABP_Minigame_Fishing_Test_C_qte_flash_end_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Delete Particle
struct ABP_Minigame_Fishing_Test_C_Delete_Particle_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.QTE Start Type1
struct ABP_Minigame_Fishing_Test_C_QTE_Start_Type1_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.ShowCaptureWindow
struct ABP_Minigame_Fishing_Test_C_ShowCaptureWindow_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.EventABPEventBind
struct ABP_Minigame_Fishing_Test_C_EventABPEventBind_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.EventABPEventUnBind
struct ABP_Minigame_Fishing_Test_C_EventABPEventUnBind_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Particle_StartWaitRipple
struct ABP_Minigame_Fishing_Test_C_Particle_StartWaitRipple_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Particle_EndWaitRipple
struct ABP_Minigame_Fishing_Test_C_Particle_EndWaitRipple_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Particle_StartHitWater
struct ABP_Minigame_Fishing_Test_C_Particle_StartHitWater_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Particle_EndHitWater
struct ABP_Minigame_Fishing_Test_C_Particle_EndHitWater_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.CancelMiniGame
struct ABP_Minigame_Fishing_Test_C_CancelMiniGame_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Event_AddFreeFish
struct ABP_Minigame_Fishing_Test_C_Event_AddFreeFish_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.RemoveFishList
struct ABP_Minigame_Fishing_Test_C_RemoveFishList_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Event_OnQuitDecide
struct ABP_Minigame_Fishing_Test_C_Event_OnQuitDecide_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Event_OnQuitCancel
struct ABP_Minigame_Fishing_Test_C_Event_OnQuitCancel_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Event_CreateQuitDialog
struct ABP_Minigame_Fishing_Test_C_Event_CreateQuitDialog_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.QTEFailedAnim
struct ABP_Minigame_Fishing_Test_C_QTEFailedAnim_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.Event_ButtonBottom
struct ABP_Minigame_Fishing_Test_C_Event_ButtonBottom_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.UpdateForCable
struct ABP_Minigame_Fishing_Test_C_UpdateForCable_Params
{
};

// Function BP_Minigame_Fishing_Test.BP_Minigame_Fishing_Test_C.ExecuteUbergraph_BP_Minigame_Fishing_Test
struct ABP_Minigame_Fishing_Test_C_ExecuteUbergraph_BP_Minigame_Fishing_Test_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

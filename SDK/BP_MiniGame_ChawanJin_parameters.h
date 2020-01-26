#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ChangeHelpButton
struct ABP_MiniGame_ChawanJin_C_ChangeHelpButton_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.MiniGameDataCheckWinData
struct ABP_MiniGame_ChawanJin_C_MiniGameDataCheckWinData_Params
{
	bool                                               EnableSaveData;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CulcCupmoveCoefficient
struct ABP_MiniGame_ChawanJin_C_CulcCupmoveCoefficient_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AdjustDistance;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.SetOffsetMotionMesh
struct ABP_MiniGame_ChawanJin_C_SetOffsetMotionMesh_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.PlayMoveSe
struct ABP_MiniGame_ChawanJin_C_PlayMoveSe_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ResetForcedCancelDisable
struct ABP_MiniGame_ChawanJin_C_ResetForcedCancelDisable_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.SetForcedCancelDisable
struct ABP_MiniGame_ChawanJin_C_SetForcedCancelDisable_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Set_IndicateBS
struct ABP_MiniGame_ChawanJin_C_Set_IndicateBS_Params
{
	unsigned char                                      Cup_No;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Attach_CupMoveR
struct ABP_MiniGame_ChawanJin_C_Attach_CupMoveR_Params
{
	float                                              FMH_Pos;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.WaitSceneCamera
struct ABP_MiniGame_ChawanJin_C_WaitSceneCamera_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.SetVisibleButton
struct ABP_MiniGame_ChawanJin_C_SetVisibleButton_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.GetDetectAction
struct ABP_MiniGame_ChawanJin_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CulcSeqPosAdjust
struct ABP_MiniGame_ChawanJin_C_CulcSeqPosAdjust_Params
{
	struct FVector                                     Adjust;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Get_MoveMotionAdjust
struct ABP_MiniGame_ChawanJin_C_Get_MoveMotionAdjust_Params
{
	float                                              Mul_Value;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Get_AnimInstaceBS
struct ABP_MiniGame_ChawanJin_C_Get_AnimInstaceBS_Params
{
	class UABP_MiniGame_CJ_RyoBS_C*                    AsABP_Mini_Game_CJ_Ryo;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Get_TargetMovePosID
struct ABP_MiniGame_ChawanJin_C_Get_TargetMovePosID_Params
{
	TEnumAsByte<EN_CJ_CupPos>                          CurrentPosID;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.TestSet
struct ABP_MiniGame_ChawanJin_C_TestSet_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CtlTrophy_TotalPlayTime
struct ABP_MiniGame_ChawanJin_C_CtlTrophy_TotalPlayTime_Params
{
	bool                                               Changed_from_before;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Trophy_Get;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CtlTrophy_SaveGameTime
struct ABP_MiniGame_ChawanJin_C_CtlTrophy_SaveGameTime_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CtlTrophy_PlayHistory
struct ABP_MiniGame_ChawanJin_C_CtlTrophy_PlayHistory_Params
{
	bool                                               Changed_from_before;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Trophy_Get;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CheckDLC
struct ABP_MiniGame_ChawanJin_C_CheckDLC_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ChangeMenoButton
struct ABP_MiniGame_ChawanJin_C_ChangeMenoButton_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ChangeClockVisible
struct ABP_MiniGame_ChawanJin_C_ChangeClockVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.GameCancelPostProcess
struct ABP_MiniGame_ChawanJin_C_GameCancelPostProcess_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CheckInterruptible
struct ABP_MiniGame_ChawanJin_C_CheckInterruptible_Params
{
	bool                                               Enable;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CheckItemAcquisition
struct ABP_MiniGame_ChawanJin_C_CheckItemAcquisition_Params
{
	int                                                FlagID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AlreadyAcquired;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.MakeMemoPage
struct ABP_MiniGame_ChawanJin_C_MakeMemoPage_Params
{
	int                                                SelectPage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.IsActivateHelp
struct ABP_MiniGame_ChawanJin_C_IsActivateHelp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Make_Memo
struct ABP_MiniGame_ChawanJin_C_Make_Memo_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.MakeWonInfo
struct ABP_MiniGame_ChawanJin_C_MakeWonInfo_Params
{
	bool                                               WonFlag;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.GetCupRotation
struct ABP_MiniGame_ChawanJin_C_GetCupRotation_Params
{
	struct FRotator                                    Rotator;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CheckItemKind
struct ABP_MiniGame_ChawanJin_C_CheckItemKind_Params
{
	struct FString                                     Item_ID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CheckReset
struct ABP_MiniGame_ChawanJin_C_CheckReset_Params
{
	bool                                               FlagEnable;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CheckWinSaveData
struct ABP_MiniGame_ChawanJin_C_CheckWinSaveData_Params
{
	TArray<int>                                        WinTable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.SetWinSaveData
struct ABP_MiniGame_ChawanJin_C_SetWinSaveData_Params
{
	int                                                Cipher_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WinFlag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Progress_Quest;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               Forced_Faile;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ResetWinSaveData
struct ABP_MiniGame_ChawanJin_C_ResetWinSaveData_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CallTest
struct ABP_MiniGame_ChawanJin_C_CallTest_Params
{
	bool                                               Loaded_End;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.StartMeshOff
struct ABP_MiniGame_ChawanJin_C_StartMeshOff_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.GetCupLocation
struct ABP_MiniGame_ChawanJin_C_GetCupLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CheckMiniGameEnable
struct ABP_MiniGame_ChawanJin_C_CheckMiniGameEnable_Params
{
	bool                                               GameEnable;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CreateWinCountKey
struct ABP_MiniGame_ChawanJin_C_CreateWinCountKey_Params
{
	TEnumAsByte<EMiniGamePurpose>                      Purpose;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Key;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CipherFlagCheck
struct ABP_MiniGame_ChawanJin_C_CipherFlagCheck_Params
{
	int                                                FlagID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForcedFailure;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.IkRot
struct ABP_MiniGame_ChawanJin_C_IkRot_Params
{
	float                                              add_h;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              add_v;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CulcSocket
struct ABP_MiniGame_ChawanJin_C_CulcSocket_Params
{
	struct FVector                                     newParam;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.IkMoveBall
struct ABP_MiniGame_ChawanJin_C_IkMoveBall_Params
{
	float                                              add_h;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              add_v;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.GetClothMeshComponent
struct ABP_MiniGame_ChawanJin_C_GetClothMeshComponent_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Culc_CupMoveWidth_Rot
struct ABP_MiniGame_ChawanJin_C_Culc_CupMoveWidth_Rot_Params
{
	struct FVector                                     Add_Width;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.SetField
struct ABP_MiniGame_ChawanJin_C_SetField_Params
{
	float                                              Add;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.RefreshSaveData
struct ABP_MiniGame_ChawanJin_C_RefreshSaveData_Params
{
	int                                                LoadData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.MiniGameDataSaveLoad
struct ABP_MiniGame_ChawanJin_C_MiniGameDataSaveLoad_Params
{
	bool                                               Save;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Won;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.MakeSaveData
struct ABP_MiniGame_ChawanJin_C_MakeSaveData_Params
{
	int                                                SaveCode;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CheckResult
struct ABP_MiniGame_ChawanJin_C_CheckResult_Params
{
	bool                                               Win;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemId;                                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               QuestProgress;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               FocedFailure;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               AlreadyGameWon;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ItemAcquisitionFlagID;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_CJ_ItemGiveingPerson>               ItemGiveingPerson;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.InitWork
struct ABP_MiniGame_ChawanJin_C_InitWork_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Make_Ks
struct ABP_MiniGame_ChawanJin_C_Make_Ks_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Attach_CupMove
struct ABP_MiniGame_ChawanJin_C_Attach_CupMove_Params
{
	struct FVector                                     AttachPos;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Culc_CupMoveWidth
struct ABP_MiniGame_ChawanJin_C_Culc_CupMoveWidth_Params
{
	float                                              Add_Width;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Change_TargetToCurrent
struct ABP_MiniGame_ChawanJin_C_Change_TargetToCurrent_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Get_CurrentMovePosID
struct ABP_MiniGame_ChawanJin_C_Get_CurrentMovePosID_Params
{
	TEnumAsByte<EN_CJ_CupPos>                          CurrentPosID;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Get_AnimInstace
struct ABP_MiniGame_ChawanJin_C_Get_AnimInstace_Params
{
	class UABP_MiniGame_CJ_Ryo_C*                      AsABP_Mini_Game_CJ_Ryo;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Get_CupPos
struct ABP_MiniGame_ChawanJin_C_Get_CupPos_Params
{
	struct FName                                       CurOrTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CupPos;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.InitAsyncLoad
struct ABP_MiniGame_ChawanJin_C_InitAsyncLoad_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.SpawnInputControlActor
struct ABP_MiniGame_ChawanJin_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.UserConstructionScript
struct ABP_MiniGame_ChawanJin_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.OnLoaded_63E0AA844D10E66D96C45D962DD44D81
struct ABP_MiniGame_ChawanJin_C_OnLoaded_63E0AA844D10E66D96C45D962DD44D81_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.OnLoaded_26E38CB8452D0B1C77E25596A4C7F2F4
struct ABP_MiniGame_ChawanJin_C_OnLoaded_26E38CB8452D0B1C77E25596A4C7F2F4_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.OnLoaded_4E68A4D94FD541AE2BC143A8853313EC
struct ABP_MiniGame_ChawanJin_C_OnLoaded_4E68A4D94FD541AE2BC143A8853313EC_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.StartMiniGame
struct ABP_MiniGame_ChawanJin_C_StartMiniGame_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.EndMiniGame
struct ABP_MiniGame_ChawanJin_C_EndMiniGame_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.RestartMiniGame
struct ABP_MiniGame_ChawanJin_C_RestartMiniGame_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.WinMiniGame
struct ABP_MiniGame_ChawanJin_C_WinMiniGame_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.LoseMiniGame
struct ABP_MiniGame_ChawanJin_C_LoseMiniGame_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Event_EndMiniGame
struct ABP_MiniGame_ChawanJin_C_Event_EndMiniGame_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ReceiveBeginPlay
struct ABP_MiniGame_ChawanJin_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ReceiveTick
struct ABP_MiniGame_ChawanJin_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
struct ABP_MiniGame_ChawanJin_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
struct ABP_MiniGame_ChawanJin_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ResumeMiniGame
struct ABP_MiniGame_ChawanJin_C_ResumeMiniGame_Params
{
	struct FString                                     ResumeKeyword;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.OnTalkScriptEvent
struct ABP_MiniGame_ChawanJin_C_OnTalkScriptEvent_Params
{
	int                                                EventNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ReceiveEndPlay
struct ABP_MiniGame_ChawanJin_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Evt_CursolChange
struct ABP_MiniGame_ChawanJin_C_Evt_CursolChange_Params
{
	struct FName                                       Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Evt_MoveEnd
struct ABP_MiniGame_ChawanJin_C_Evt_MoveEnd_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Evt_KsModuleEnd
struct ABP_MiniGame_ChawanJin_C_Evt_KsModuleEnd_Params
{
	struct FName                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.EvtFlagChange
struct ABP_MiniGame_ChawanJin_C_EvtFlagChange_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.FlagChg_Refresh
struct ABP_MiniGame_ChawanJin_C_FlagChg_Refresh_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Evt_MemoFinish
struct ABP_MiniGame_ChawanJin_C_Evt_MemoFinish_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Evt_GameCancel
struct ABP_MiniGame_ChawanJin_C_Evt_GameCancel_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.DelayedInitialize
struct ABP_MiniGame_ChawanJin_C_DelayedInitialize_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.WinScene_End
struct ABP_MiniGame_ChawanJin_C_WinScene_End_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.WinScene_EndSeq
struct ABP_MiniGame_ChawanJin_C_WinScene_EndSeq_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.WinScene_StartSeq
struct ABP_MiniGame_ChawanJin_C_WinScene_StartSeq_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.LookItem
struct ABP_MiniGame_ChawanJin_C_LookItem_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Scene_ItemLook
struct ABP_MiniGame_ChawanJin_C_Scene_ItemLook_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.SeqEnd
struct ABP_MiniGame_ChawanJin_C_SeqEnd_Params
{
};

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ExecuteUbergraph_BP_MiniGame_ChawanJin
struct ABP_MiniGame_ChawanJin_C_ExecuteUbergraph_BP_MiniGame_ChawanJin_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

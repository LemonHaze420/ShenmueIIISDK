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

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetPriority
struct ABP_AppointSystemManager_C_GetPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetDetectAction
struct ABP_AppointSystemManager_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.PauseAps
struct ABP_AppointSystemManager_C_PauseAps_Params
{
	bool                                               Pause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.ClucSpawnLocationSHE
struct ABP_AppointSystemManager_C_ClucSpawnLocationSHE_Params
{
	float                                              BackOffset;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Side_Offset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Hight_Offset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SHE_vector;                                               // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    SHE_rot;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.WarpShe
struct ABP_AppointSystemManager_C_WarpShe_Params
{
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.AddDays
struct ABP_AppointSystemManager_C_AddDays_Params
{
	int                                                Days;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.CheckEnableTime
struct ABP_AppointSystemManager_C_CheckEnableTime_Params
{
	int                                                in_index;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                out_index;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.DetectEnable_Help
struct ABP_AppointSystemManager_C_DetectEnable_Help_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.SetExspFlag
struct ABP_AppointSystemManager_C_SetExspFlag_Params
{
	TEnumAsByte<EN_AppointKStype>                      ks_type;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.CancelAPS
struct ABP_AppointSystemManager_C_CancelAPS_Params
{
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetJumpRot
struct ABP_AppointSystemManager_C_GetJumpRot_Params
{
	TEnumAsByte<EN_AppointKStype>                      ks_type;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              jumprot;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               jump_enable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.KillKSchild
struct ABP_AppointSystemManager_C_KillKSchild_Params
{
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetJumpTime
struct ABP_AppointSystemManager_C_GetJumpTime_Params
{
	TEnumAsByte<EN_AppointKStype>                      ks_type;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_AppointDate                             time_data;                                                // (Parm, OutParm)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetEyecatch
struct ABP_AppointSystemManager_C_GetEyecatch_Params
{
	TEnumAsByte<EN_AppointKStype>                      ks_type;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Eyecatch;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               eyecatch_enable;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetJumpPoint
struct ABP_AppointSystemManager_C_GetJumpPoint_Params
{
	TEnumAsByte<EN_AppointKStype>                      ks_type;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     jumppos;                                                  // (Parm, OutParm, IsPlainOldData)
	bool                                               jump_enable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.ExecAddKs
struct ABP_AppointSystemManager_C_ExecAddKs_Params
{
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetSelectTexts
struct ABP_AppointSystemManager_C_GetSelectTexts_Params
{
	struct FName                                       INameID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GetName;                                                  // (Parm, OutParm)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.ChangeKSFilter
struct ABP_AppointSystemManager_C_ChangeKSFilter_Params
{
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.AddKSitem
struct ABP_AppointSystemManager_C_AddKSitem_Params
{
	int                                                KS_pos;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EnableTimeMin;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EnableTimeMax;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                JumpHour;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                JumpMin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     JumpLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    jumprot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FName                                       KSlavel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Eyecatch;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ExspFlag;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ExspCheck;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Add_Complited;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.SetPlayEyecatchFlag
struct ABP_AppointSystemManager_C_SetPlayEyecatchFlag_Params
{
	bool                                               Play;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.ChangeSkipEndFade
struct ABP_AppointSystemManager_C_ChangeSkipEndFade_Params
{
	bool                                               EndFadeFlag;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.IsEnableButtonTime
struct ABP_AppointSystemManager_C_IsEnableButtonTime_Params
{
	bool                                               IsEnable;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.ReleaseAppointData
struct ABP_AppointSystemManager_C_ReleaseAppointData_Params
{
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.IsPassAppoint
struct ABP_AppointSystemManager_C_IsPassAppoint_Params
{
	bool                                               IsFuture;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetData
struct ABP_AppointSystemManager_C_GetData_Params
{
	int                                                AddDay;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Year;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Month;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Day;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.IsAppointFuture
struct ABP_AppointSystemManager_C_IsAppointFuture_Params
{
	bool                                               Pass;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.GetAppointData
struct ABP_AppointSystemManager_C_GetAppointData_Params
{
	struct FVector                                     JumpPoint;                                                // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FST_AppointDate                             Date;                                                     // (Parm, OutParm)
	struct FText                                       MainText;                                                 // (Parm, OutParm)
	struct FText                                       SubText;                                                  // (Parm, OutParm)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.SetAppointButtonFlag
struct ABP_AppointSystemManager_C_SetAppointButtonFlag_Params
{
	bool                                               Deny;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.Finalize
struct ABP_AppointSystemManager_C_Finalize_Params
{
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.DetectActionUnregist
struct ABP_AppointSystemManager_C_DetectActionUnregist_Params
{
	bool                                               Unregist;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.SetAppointData
struct ABP_AppointSystemManager_C_SetAppointData_Params
{
	struct FVector                                     JumpPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FName                                       Eyecatch;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AddDay;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Hour;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Minute;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EnableTimeMin;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EnableTimeMax;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ChangeStep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Label_Left;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SkipEndFade;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.UserConstructionScript
struct ABP_AppointSystemManager_C_UserConstructionScript_Params
{
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.EyecatchFinish
struct ABP_AppointSystemManager_C_EyecatchFinish_Params
{
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.ReceiveTick
struct ABP_AppointSystemManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.ReceiveBeginPlay
struct ABP_AppointSystemManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.DecideDetectAction
struct ABP_AppointSystemManager_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.EndJump
struct ABP_AppointSystemManager_C_EndJump_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.ApsChild_TimeOver_Actor1
struct ABP_AppointSystemManager_C_ApsChild_TimeOver_Actor1_Params
{
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.ApsChild_TimeOver_Actor2
struct ABP_AppointSystemManager_C_ApsChild_TimeOver_Actor2_Params
{
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.ChangePlayerController
struct ABP_AppointSystemManager_C_ChangePlayerController_Params
{
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.HelpEnd
struct ABP_AppointSystemManager_C_HelpEnd_Params
{
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.InHelpEnd
struct ABP_AppointSystemManager_C_InHelpEnd_Params
{
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.catch_onSelected
struct ABP_AppointSystemManager_C_catch_onSelected_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.ExecuteUbergraph_BP_AppointSystemManager
struct ABP_AppointSystemManager_C_ExecuteUbergraph_BP_AppointSystemManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.EndAppointJump__DelegateSignature
struct ABP_AppointSystemManager_C_EndAppointJump__DelegateSignature_Params
{
};

// Function BP_AppointSystemManager.BP_AppointSystemManager_C.StartAppointJump__DelegateSignature
struct ABP_AppointSystemManager_C_StartAppointJump__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

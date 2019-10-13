#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SetChinaTextures
struct ABP_MiniGame_Kachofugetsu_C_SetChinaTextures_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetAppearRate
struct ABP_MiniGame_Kachofugetsu_C_GetAppearRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetChinaText
struct ABP_MiniGame_Kachofugetsu_C_GetChinaText_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Return;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.MainCameraEndPos
struct ABP_MiniGame_Kachofugetsu_C_MainCameraEndPos_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.InitializeGameCollision
struct ABP_MiniGame_Kachofugetsu_C_InitializeGameCollision_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.UpdateBackerEventCount
struct ABP_MiniGame_Kachofugetsu_C_UpdateBackerEventCount_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetDetectAction
struct ABP_MiniGame_Kachofugetsu_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetResultWaitTime
struct ABP_MiniGame_Kachofugetsu_C_GetResultWaitTime_Params
{
	TEnumAsByte<EMiniGameKFTypeEnum>                   Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetRandomResult
struct ABP_MiniGame_Kachofugetsu_C_GetRandomResult_Params
{
	TEnumAsByte<EMiniGameKFTypeEnum>                   IgnoreType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseIgnoreType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMiniGameKFTypeEnum>                   Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.UpdatePlayCountWinFlag
struct ABP_MiniGame_Kachofugetsu_C_UpdatePlayCountWinFlag_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SpawnForceResultSequence
struct ABP_MiniGame_Kachofugetsu_C_SpawnForceResultSequence_Params
{
	TEnumAsByte<EMiniGameKFTypeEnum>                   Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetClothMeshComponent
struct ABP_MiniGame_Kachofugetsu_C_GetClothMeshComponent_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetLevelSequence
struct ABP_MiniGame_Kachofugetsu_C_GetLevelSequence_Params
{
	TEnumAsByte<EMiniGameKFTypeEnum>                   Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              Sequence;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.InitAsyncLoad
struct ABP_MiniGame_Kachofugetsu_C_InitAsyncLoad_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.CalcForceWinRate
struct ABP_MiniGame_Kachofugetsu_C_CalcForceWinRate_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.IsForceWinByFortune
struct ABP_MiniGame_Kachofugetsu_C_IsForceWinByFortune_Params
{
	bool                                               IsForceWin;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.IsBackerEvent
struct ABP_MiniGame_Kachofugetsu_C_IsBackerEvent_Params
{
	bool                                               IsEvent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SetGameCollisionEnabled
struct ABP_MiniGame_Kachofugetsu_C_SetGameCollisionEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.IsEventStep
struct ABP_MiniGame_Kachofugetsu_C_IsEventStep_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SaveEventLosing
struct ABP_MiniGame_Kachofugetsu_C_SaveEventLosing_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.IsForceWin
struct ABP_MiniGame_Kachofugetsu_C_IsForceWin_Params
{
	bool                                               ForceWin;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.LoadEventLosing
struct ABP_MiniGame_Kachofugetsu_C_LoadEventLosing_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SetBoardInfo
struct ABP_MiniGame_Kachofugetsu_C_SetBoardInfo_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetBallThrowPower
struct ABP_MiniGame_Kachofugetsu_C_GetBallThrowPower_Params
{
	float                                              Power;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.DetachAndThrowBall
struct ABP_MiniGame_Kachofugetsu_C_DetachAndThrowBall_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GetAnimInstance
struct ABP_MiniGame_Kachofugetsu_C_GetAnimInstance_Params
{
	class UABP_MiniGame_KF_Ryo_C*                      AsABP_Mini_Game_KF_Ryo;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ForceRepay
struct ABP_MiniGame_Kachofugetsu_C_ForceRepay_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.UpdateBallMove
struct ABP_MiniGame_Kachofugetsu_C_UpdateBallMove_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.InitializeValue
struct ABP_MiniGame_Kachofugetsu_C_InitializeValue_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.UpdateGameMainCamera
struct ABP_MiniGame_Kachofugetsu_C_UpdateGameMainCamera_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SpawnBall
struct ABP_MiniGame_Kachofugetsu_C_SpawnBall_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.DecideType
struct ABP_MiniGame_Kachofugetsu_C_DecideType_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SetPlayerMeshPos
struct ABP_MiniGame_Kachofugetsu_C_SetPlayerMeshPos_Params
{
	struct FVector                                     pos;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.InterpPlayerMeshPos
struct ABP_MiniGame_Kachofugetsu_C_InterpPlayerMeshPos_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.InputAction
struct ABP_MiniGame_Kachofugetsu_C_InputAction_Params
{
	TEnumAsByte<EMiniGameKFTypeEnum>                   Command;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SpawnInputControlActor
struct ABP_MiniGame_Kachofugetsu_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.UserConstructionScript
struct ABP_MiniGame_Kachofugetsu_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__FlowerCol_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniGame_Kachofugetsu_C_BndEvt__FlowerCol_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__FlowerCol_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MiniGame_Kachofugetsu_C_BndEvt__FlowerCol_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BirdCol_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniGame_Kachofugetsu_C_BndEvt__BirdCol_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BirdCol_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MiniGame_Kachofugetsu_C_BndEvt__BirdCol_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__WindCol_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniGame_Kachofugetsu_C_BndEvt__WindCol_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__WindCol_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MiniGame_Kachofugetsu_C_BndEvt__WindCol_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__MoonCol_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniGame_Kachofugetsu_C_BndEvt__MoonCol_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__MoonCol_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MiniGame_Kachofugetsu_C_BndEvt__MoonCol_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__GameArea_K2Node_ComponentBoundEvent_656_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MiniGame_Kachofugetsu_C_BndEvt__GameArea_K2Node_ComponentBoundEvent_656_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__CoverCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_MiniGame_Kachofugetsu_C_BndEvt__CoverCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BowlCol1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_MiniGame_Kachofugetsu_C_BndEvt__BowlCol1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BowlCol2_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
struct ABP_MiniGame_Kachofugetsu_C_BndEvt__BowlCol2_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BowlCol3_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
struct ABP_MiniGame_Kachofugetsu_C_BndEvt__BowlCol3_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BowlCol4_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature
struct ABP_MiniGame_Kachofugetsu_C_BndEvt__BowlCol4_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BowlCol5_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature
struct ABP_MiniGame_Kachofugetsu_C_BndEvt__BowlCol5_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.WinMiniGame
struct ABP_MiniGame_Kachofugetsu_C_WinMiniGame_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.LoseMiniGame
struct ABP_MiniGame_Kachofugetsu_C_LoseMiniGame_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.DrawMiniGame
struct ABP_MiniGame_Kachofugetsu_C_DrawMiniGame_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.StartMiniGame
struct ABP_MiniGame_Kachofugetsu_C_StartMiniGame_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.EndMiniGame
struct ABP_MiniGame_Kachofugetsu_C_EndMiniGame_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.FinalizeTalk
struct ABP_MiniGame_Kachofugetsu_C_FinalizeTalk_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.OnFinishedFade
struct ABP_MiniGame_Kachofugetsu_C_OnFinishedFade_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ReceiveBeginPlay
struct ABP_MiniGame_Kachofugetsu_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ReceiveTick
struct ABP_MiniGame_Kachofugetsu_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
struct ABP_MiniGame_Kachofugetsu_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
struct ABP_MiniGame_Kachofugetsu_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.OnTalkScriptEvent
struct ABP_MiniGame_Kachofugetsu_C_OnTalkScriptEvent_Params
{
	int*                                               EventNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ResumeMiniGame
struct ABP_MiniGame_Kachofugetsu_C_ResumeMiniGame_Params
{
	struct FString*                                    ResumeKeyword;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ThrowBall
struct ABP_MiniGame_Kachofugetsu_C_ThrowBall_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.FlowSelectDecideEvent
struct ABP_MiniGame_Kachofugetsu_C_FlowSelectDecideEvent_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ThrowBallFromAnim
struct ABP_MiniGame_Kachofugetsu_C_ThrowBallFromAnim_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.StopThrowBallSE
struct ABP_MiniGame_Kachofugetsu_C_StopThrowBallSE_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.BindBallHitXEvent
struct ABP_MiniGame_Kachofugetsu_C_BindBallHitXEvent_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ForceWin
struct ABP_MiniGame_Kachofugetsu_C_ForceWin_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.CancelMiniGame
struct ABP_MiniGame_Kachofugetsu_C_CancelMiniGame_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ConsumeGamblePrice
struct ABP_MiniGame_Kachofugetsu_C_ConsumeGamblePrice_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ForceLoseEvent
struct ABP_MiniGame_Kachofugetsu_C_ForceLoseEvent_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.DelayedInitialize
struct ABP_MiniGame_Kachofugetsu_C_DelayedInitialize_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.GameFlowForChina
struct ABP_MiniGame_Kachofugetsu_C_GameFlowForChina_Params
{
	TEnumAsByte<EMiniGameKFTypeEnum>                   Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ActionForChina
struct ABP_MiniGame_Kachofugetsu_C_ActionForChina_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.PlayAppearUIAnim
struct ABP_MiniGame_Kachofugetsu_C_PlayAppearUIAnim_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.DecideResultForChina
struct ABP_MiniGame_Kachofugetsu_C_DecideResultForChina_Params
{
};

// Function BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ExecuteUbergraph_BP_MiniGame_Kachofugetsu
struct ABP_MiniGame_Kachofugetsu_C_ExecuteUbergraph_BP_MiniGame_Kachofugetsu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

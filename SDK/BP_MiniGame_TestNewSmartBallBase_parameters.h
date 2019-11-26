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

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CreateDummyBalls
struct ABP_MiniGame_TestNewSmartBallBase_C_CreateDummyBalls_Params
{
	bool                                               bDummy;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.OverlapOneSideCollision
struct ABP_MiniGame_TestNewSmartBallBase_C_OverlapOneSideCollision_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.SetGameCollisionEnabled
struct ABP_MiniGame_TestNewSmartBallBase_C_SetGameCollisionEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.GetSightCheckLocation
struct ABP_MiniGame_TestNewSmartBallBase_C_GetSightCheckLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.SetVisibleDummyMesh
struct ABP_MiniGame_TestNewSmartBallBase_C_SetVisibleDummyMesh_Params
{
	bool                                               bNewVisibility;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CreateDummyNails
struct ABP_MiniGame_TestNewSmartBallBase_C_CreateDummyNails_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.DestroyGameActors
struct ABP_MiniGame_TestNewSmartBallBase_C_DestroyGameActors_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CreateUnderPusher
struct ABP_MiniGame_TestNewSmartBallBase_C_CreateUnderPusher_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CreateHoles
struct ABP_MiniGame_TestNewSmartBallBase_C_CreateHoles_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CreateNails
struct ABP_MiniGame_TestNewSmartBallBase_C_CreateNails_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.SetOverlapCollisionEnabled
struct ABP_MiniGame_TestNewSmartBallBase_C_SetOverlapCollisionEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.OutPutDebugData
struct ABP_MiniGame_TestNewSmartBallBase_C_OutPutDebugData_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.InitializeValue
struct ABP_MiniGame_TestNewSmartBallBase_C_InitializeValue_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.SetHoleColor
struct ABP_MiniGame_TestNewSmartBallBase_C_SetHoleColor_Params
{
	int                                                Bit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.GetMiniGameHelpName
struct ABP_MiniGame_TestNewSmartBallBase_C_GetMiniGameHelpName_Params
{
	struct FString                                     String;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.AddItem
struct ABP_MiniGame_TestNewSmartBallBase_C_AddItem_Params
{
	int                                                GiftNum;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.TogglePusherSound
struct ABP_MiniGame_TestNewSmartBallBase_C_TogglePusherSound_Params
{
	bool                                               toggle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CheckThroughBall
struct ABP_MiniGame_TestNewSmartBallBase_C_CheckThroughBall_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.DebugOutputNailDataCsv
struct ABP_MiniGame_TestNewSmartBallBase_C_DebugOutputNailDataCsv_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.InitializeNailPos
struct ABP_MiniGame_TestNewSmartBallBase_C_InitializeNailPos_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.UpdateDebugNail
struct ABP_MiniGame_TestNewSmartBallBase_C_UpdateDebugNail_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.AddImpluseFromBall
struct ABP_MiniGame_TestNewSmartBallBase_C_AddImpluseFromBall_Params
{
	class ABP_SB_TestNewPinball_C*                     TargetBall;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Impluse;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.GetBallsFromDistance
struct ABP_MiniGame_TestNewSmartBallBase_C_GetBallsFromDistance_Params
{
	class ABP_SB_TestNewPinball_C*                     Ball;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ABP_SB_TestNewPinball_C*>             ReturnBalls;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.UpdateBallOrder
struct ABP_MiniGame_TestNewSmartBallBase_C_UpdateBallOrder_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.ItemGetCheck
struct ABP_MiniGame_TestNewSmartBallBase_C_ItemGetCheck_Params
{
	int                                                ItemCount;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CheckBingoBit
struct ABP_MiniGame_TestNewSmartBallBase_C_CheckBingoBit_Params
{
	int                                                Bit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CheckHoleInBit
struct ABP_MiniGame_TestNewSmartBallBase_C_CheckHoleInBit_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CheckBingo
struct ABP_MiniGame_TestNewSmartBallBase_C_CheckBingo_Params
{
	int                                                BingoNum;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CheckEnd
struct ABP_MiniGame_TestNewSmartBallBase_C_CheckEnd_Params
{
	bool                                               End;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.ForceGravityHole
struct ABP_MiniGame_TestNewSmartBallBase_C_ForceGravityHole_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.IsAllStoppedOutOfRangeBalls
struct ABP_MiniGame_TestNewSmartBallBase_C_IsAllStoppedOutOfRangeBalls_Params
{
	bool                                               bStop;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.IsAllGameAreaStoppedBalls
struct ABP_MiniGame_TestNewSmartBallBase_C_IsAllGameAreaStoppedBalls_Params
{
	bool                                               bStop;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.GetNotInHoleCount
struct ABP_MiniGame_TestNewSmartBallBase_C_GetNotInHoleCount_Params
{
	int                                                bAllIn;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.IsAllHoleIn
struct ABP_MiniGame_TestNewSmartBallBase_C_IsAllHoleIn_Params
{
	bool                                               bAllIn;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.SpawnInputControlActor
struct ABP_MiniGame_TestNewSmartBallBase_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.UserConstructionScript
struct ABP_MiniGame_TestNewSmartBallBase_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.PushFromUnderTimeline__FinishedFunc
struct ABP_MiniGame_TestNewSmartBallBase_C_PushFromUnderTimeline__FinishedFunc_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.PushFromUnderTimeline__UpdateFunc
struct ABP_MiniGame_TestNewSmartBallBase_C_PushFromUnderTimeline__UpdateFunc_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__BallDeleteCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__BallDeleteCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_Pusher_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature
struct ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_Pusher_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_GameAreaCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_GameAreaCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_GameAreaCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_GameAreaCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_BallDeleteZone_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_BallDeleteZone_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_ForceMoveArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_ForceMoveArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_ForceMoveArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_ForceMoveArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__OneSideCollision_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__OneSideCollision_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_RailArea_K2Node_ComponentBoundEvent_43_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_RailArea_K2Node_ComponentBoundEvent_43_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_RailArea_K2Node_ComponentBoundEvent_44_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_RailArea_K2Node_ComponentBoundEvent_44_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_WallHitArea1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_WallHitArea1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_WallHitArea2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_WallHitArea2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_WallHitArea3_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_WallHitArea3_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_WallHitArea1_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_WallHitArea1_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_WallHitArea3_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_WallHitArea3_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_WallHitArea2_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_WallHitArea2_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_WallHitArea4_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_WallHitArea4_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__Box_WallHitArea4_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__Box_WallHitArea4_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__GameArea_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__GameArea_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.StartMiniGame
struct ABP_MiniGame_TestNewSmartBallBase_C_StartMiniGame_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.EndMiniGame
struct ABP_MiniGame_TestNewSmartBallBase_C_EndMiniGame_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.WinMiniGame
struct ABP_MiniGame_TestNewSmartBallBase_C_WinMiniGame_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.LoseMiniGame
struct ABP_MiniGame_TestNewSmartBallBase_C_LoseMiniGame_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CallSubStartMiniGameEvents
struct ABP_MiniGame_TestNewSmartBallBase_C_CallSubStartMiniGameEvents_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CallSubEndMiniGameEvents
struct ABP_MiniGame_TestNewSmartBallBase_C_CallSubEndMiniGameEvents_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CallSubWinMiniGameEvents
struct ABP_MiniGame_TestNewSmartBallBase_C_CallSubWinMiniGameEvents_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CallSubLoseMiniGameEvents
struct ABP_MiniGame_TestNewSmartBallBase_C_CallSubLoseMiniGameEvents_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.EnterMiniGame
struct ABP_MiniGame_TestNewSmartBallBase_C_EnterMiniGame_Params
{
	float                                              EnterTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.RestartMiniGame
struct ABP_MiniGame_TestNewSmartBallBase_C_RestartMiniGame_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CallSubResatrtMiniGameEvents
struct ABP_MiniGame_TestNewSmartBallBase_C_CallSubResatrtMiniGameEvents_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CallSubEnterMiniGameEvents
struct ABP_MiniGame_TestNewSmartBallBase_C_CallSubEnterMiniGameEvents_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.FinalizeTalk
struct ABP_MiniGame_TestNewSmartBallBase_C_FinalizeTalk_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CallSubFinalizeTalkMiniGameEvents
struct ABP_MiniGame_TestNewSmartBallBase_C_CallSubFinalizeTalkMiniGameEvents_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.OnFinishedFade
struct ABP_MiniGame_TestNewSmartBallBase_C_OnFinishedFade_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.DownStopper
struct ABP_MiniGame_TestNewSmartBallBase_C_DownStopper_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.OnFinishedCoinSequence
struct ABP_MiniGame_TestNewSmartBallBase_C_OnFinishedCoinSequence_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.OnFinishedSequencePlayer
struct ABP_MiniGame_TestNewSmartBallBase_C_OnFinishedSequencePlayer_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.Event_DebugCheckStart
struct ABP_MiniGame_TestNewSmartBallBase_C_Event_DebugCheckStart_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.Event_DebugCheckRestrt
struct ABP_MiniGame_TestNewSmartBallBase_C_Event_DebugCheckRestrt_Params
{
	class ABP_MiniGameBase_C*                          SelfMiniGame;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BindInputControlEvents
struct ABP_MiniGame_TestNewSmartBallBase_C_BindInputControlEvents_Params
{
	class ABP_MiniGameInputBase_C*                     Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.ReceiveBeginPlay
struct ABP_MiniGame_TestNewSmartBallBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.UpdatePusherLocation
struct ABP_MiniGame_TestNewSmartBallBase_C_UpdatePusherLocation_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.SpawnBall
struct ABP_MiniGame_TestNewSmartBallBase_C_SpawnBall_Params
{
	struct FVector                                     WorldLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.ResumeMiniGame
struct ABP_MiniGame_TestNewSmartBallBase_C_ResumeMiniGame_Params
{
	struct FString                                     ResumeKeyword;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.SuspendMiniGame
struct ABP_MiniGame_TestNewSmartBallBase_C_SuspendMiniGame_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.OnTalkScriptEvent
struct ABP_MiniGame_TestNewSmartBallBase_C_OnTalkScriptEvent_Params
{
	int                                                EventNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.ReceiveTick
struct ABP_MiniGame_TestNewSmartBallBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.PushFromUnder
struct ABP_MiniGame_TestNewSmartBallBase_C_PushFromUnder_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.ResetEndGame
struct ABP_MiniGame_TestNewSmartBallBase_C_ResetEndGame_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_42_OnGameContinueDispatcher__DelegateSignature
struct ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_42_OnGameContinueDispatcher__DelegateSignature_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_43_OnGameFinishedDispatcher__DelegateSignature
struct ABP_MiniGame_TestNewSmartBallBase_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_43_OnGameFinishedDispatcher__DelegateSignature_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.EndGame
struct ABP_MiniGame_TestNewSmartBallBase_C_EndGame_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.SpawnAllBalls
struct ABP_MiniGame_TestNewSmartBallBase_C_SpawnAllBalls_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.OnEndKihudaFlow
struct ABP_MiniGame_TestNewSmartBallBase_C_OnEndKihudaFlow_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.BindHoleInToCheckBingEvent
struct ABP_MiniGame_TestNewSmartBallBase_C_BindHoleInToCheckBingEvent_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.Event_CheckBingo
struct ABP_MiniGame_TestNewSmartBallBase_C_Event_CheckBingo_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.Event_EndMiniGame
struct ABP_MiniGame_TestNewSmartBallBase_C_Event_EndMiniGame_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.ReceiveEndPlay
struct ABP_MiniGame_TestNewSmartBallBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.CancelMiniGame
struct ABP_MiniGame_TestNewSmartBallBase_C_CancelMiniGame_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.StopPushUnderMove
struct ABP_MiniGame_TestNewSmartBallBase_C_StopPushUnderMove_Params
{
};

// Function BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C.ExecuteUbergraph_BP_MiniGame_TestNewSmartBallBase
struct ABP_MiniGame_TestNewSmartBallBase_C_ExecuteUbergraph_BP_MiniGame_TestNewSmartBallBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

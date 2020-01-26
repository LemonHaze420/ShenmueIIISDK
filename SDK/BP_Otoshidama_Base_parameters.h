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

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetRewardFeed
struct ABP_Otoshidama_Base_C_GetRewardFeed_Params
{
	ES3RewardType                                      Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetZoomTarget
struct ABP_Otoshidama_Base_C_GetZoomTarget_Params
{
	class USceneComponent*                             newParam;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetBetZoomTarget
struct ABP_Otoshidama_Base_C_GetBetZoomTarget_Params
{
	class USceneComponent*                             newParam;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetCamera
struct ABP_Otoshidama_Base_C_GetCamera_Params
{
	class UCameraComponent*                            newParam;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetCasinoMaterial
struct ABP_Otoshidama_Base_C_GetCasinoMaterial_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           Material;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SetUpDummyNailMesh
struct ABP_Otoshidama_Base_C_SetUpDummyNailMesh_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.InitializePocket
struct ABP_Otoshidama_Base_C_InitializePocket_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetDetectAction
struct ABP_Otoshidama_Base_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.InitAsyncLoad
struct ABP_Otoshidama_Base_C_InitAsyncLoad_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetClothMeshComponent
struct ABP_Otoshidama_Base_C_GetClothMeshComponent_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetCameraPosition
struct ABP_Otoshidama_Base_C_GetCameraPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SetBoardMaterial
struct ABP_Otoshidama_Base_C_SetBoardMaterial_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetMiniGameHelpName
struct ABP_Otoshidama_Base_C_GetMiniGameHelpName_Params
{
	struct FString                                     String;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetBottomPocketMaterial
struct ABP_Otoshidama_Base_C_GetBottomPocketMaterial_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           return_value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetBottomPocketCount
struct ABP_Otoshidama_Base_C_GetBottomPocketCount_Params
{
	int                                                Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetBottomPocket
struct ABP_Otoshidama_Base_C_GetBottomPocket_Params
{
	int                                                Dimension_1;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.UpdateHandMotion
struct ABP_Otoshidama_Base_C_UpdateHandMotion_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SetHandMotion
struct ABP_Otoshidama_Base_C_SetHandMotion_Params
{
	float                                              hand_rate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CenterPocektHit
struct ABP_Otoshidama_Base_C_CenterPocektHit_Params
{
	int                                                hit_result;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.HitCheck
struct ABP_Otoshidama_Base_C_HitCheck_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.DestroyNail
struct ABP_Otoshidama_Base_C_DestroyNail_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CreateNail
struct ABP_Otoshidama_Base_C_CreateNail_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Finalize_Check
struct ABP_Otoshidama_Base_C_Finalize_Check_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BottomPocketHit
struct ABP_Otoshidama_Base_C_BottomPocketHit_Params
{
	int                                                hit_index;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GetDataBaseValue
struct ABP_Otoshidama_Base_C_GetDataBaseValue_Params
{
	struct FName                                       row_name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SpawnBall
struct ABP_Otoshidama_Base_C_SpawnBall_Params
{
	class ABP_OD_ball_Test_C*                          OutputPin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.UserConstructionScript
struct ABP_Otoshidama_Base_C_UserConstructionScript_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Timeline_StartCamera__FinishedFunc
struct ABP_Otoshidama_Base_C_Timeline_StartCamera__FinishedFunc_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Timeline_StartCamera__UpdateFunc
struct ABP_Otoshidama_Base_C_Timeline_StartCamera__UpdateFunc_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Action Button Pushed
struct ABP_Otoshidama_Base_C_Action_Button_Pushed_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Right Pushed
struct ABP_Otoshidama_Base_C_D_Right_Pushed_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Left Pushed
struct ABP_Otoshidama_Base_C_D_Left_Pushed_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Back Pushed
struct ABP_Otoshidama_Base_C_Back_Pushed_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.X Button Pushed
struct ABP_Otoshidama_Base_C_X_Button_Pushed_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Input Update
struct ABP_Otoshidama_Base_C_Input_Update_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Right Released
struct ABP_Otoshidama_Base_C_D_Right_Released_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Left Released
struct ABP_Otoshidama_Base_C_D_Left_Released_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Down Released
struct ABP_Otoshidama_Base_C_D_Down_Released_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Down Pushed
struct ABP_Otoshidama_Base_C_D_Down_Pushed_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Up Released
struct ABP_Otoshidama_Base_C_D_Up_Released_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.D-Up Pushed
struct ABP_Otoshidama_Base_C_D_Up_Pushed_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.LeftStick X-Axis
struct ABP_Otoshidama_Base_C_LeftStick_X_Axis_Params
{
	float                                              Axis_Value;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Left Stick Y-Axis
struct ABP_Otoshidama_Base_C_Left_Stick_Y_Axis_Params
{
	float                                              Axis_Value;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Initialize
struct ABP_Otoshidama_Base_C_Initialize_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Finalize
struct ABP_Otoshidama_Base_C_Finalize_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.FinalizeReset
struct ABP_Otoshidama_Base_C_FinalizeReset_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.StartMiniGame
struct ABP_Otoshidama_Base_C_StartMiniGame_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.RestartMiniGame
struct ABP_Otoshidama_Base_C_RestartMiniGame_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.EndMiniGame
struct ABP_Otoshidama_Base_C_EndMiniGame_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SetChooseCameraTransform
struct ABP_Otoshidama_Base_C_SetChooseCameraTransform_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.OnFinishedFade
struct ABP_Otoshidama_Base_C_OnFinishedFade_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.ReceiveBeginPlay
struct ABP_Otoshidama_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.ReceiveTick
struct ABP_Otoshidama_Base_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__fall area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Otoshidama_Base_C_BndEvt__fall_area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GameStart
struct ABP_Otoshidama_Base_C_GameStart_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.GameEnd
struct ABP_Otoshidama_Base_C_GameEnd_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BeginHitEvent
struct ABP_Otoshidama_Base_C_BeginHitEvent_Params
{
	int                                                hit_index;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.bAllReset
struct ABP_Otoshidama_Base_C_bAllReset_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__right_hit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Otoshidama_Base_C_BndEvt__right_hit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__right_hit_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
struct ABP_Otoshidama_Base_C_BndEvt__right_hit_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__left_hit_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Otoshidama_Base_C_BndEvt__left_hit_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__left_hit_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
struct ABP_Otoshidama_Base_C_BndEvt__left_hit_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__WoodSound_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Otoshidama_Base_C_BndEvt__WoodSound_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.OnTalkEnd
struct ABP_Otoshidama_Base_C_OnTalkEnd_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CenterPocektHitEvent
struct ABP_Otoshidama_Base_C_CenterPocektHitEvent_Params
{
	int                                                hit_element;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.DestroyNailEvent
struct ABP_Otoshidama_Base_C_DestroyNailEvent_Params
{
	class ABP_OD_Nail_C*                               nail;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__fall area_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
struct ABP_Otoshidama_Base_C_BndEvt__fall_area_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.WinMiniGame
struct ABP_Otoshidama_Base_C_WinMiniGame_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.LoseMiniGame
struct ABP_Otoshidama_Base_C_LoseMiniGame_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.DrawMiniGame
struct ABP_Otoshidama_Base_C_DrawMiniGame_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BindTalkEndEvent
struct ABP_Otoshidama_Base_C_BindTalkEndEvent_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CreateNailEvent
struct ABP_Otoshidama_Base_C_CreateNailEvent_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Otoshidama End
struct ABP_Otoshidama_Base_C_Otoshidama_End_Params
{
	bool                                               is_success;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Set Body Collision Enable
struct ABP_Otoshidama_Base_C_Set_Body_Collision_Enable_Params
{
	bool                                               is_enable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__WoodSound_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
struct ABP_Otoshidama_Base_C_BndEvt__WoodSound_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__WallSoundLeft_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Otoshidama_Base_C_BndEvt__WallSoundLeft_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__WallSoundRight_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Otoshidama_Base_C_BndEvt__WallSoundRight_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__WallSoundLeft_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct ABP_Otoshidama_Base_C_BndEvt__WallSoundLeft_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.BndEvt__WallSoundRight_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
struct ABP_Otoshidama_Base_C_BndEvt__WallSoundRight_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.SetEnabledPlayerEvent
struct ABP_Otoshidama_Base_C_SetEnabledPlayerEvent_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.RestartGamePlay
struct ABP_Otoshidama_Base_C_RestartGamePlay_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Event_CameraUpdate
struct ABP_Otoshidama_Base_C_Event_CameraUpdate_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.ReceiveEndPlay
struct ABP_Otoshidama_Base_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.Event_StopStartCamera
struct ABP_Otoshidama_Base_C_Event_StopStartCamera_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.CancelMiniGame
struct ABP_Otoshidama_Base_C_CancelMiniGame_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.ChangedClothes
struct ABP_Otoshidama_Base_C_ChangedClothes_Params
{
	TScriptInterface<class US3ClothInterface>          Interface;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.DelayedGameEnd
struct ABP_Otoshidama_Base_C_DelayedGameEnd_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.DelayedInitialize
struct ABP_Otoshidama_Base_C_DelayedInitialize_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.EnabledPlayerOnDecide
struct ABP_Otoshidama_Base_C_EnabledPlayerOnDecide_Params
{
};

// Function BP_Otoshidama_Base.BP_Otoshidama_Base_C.ExecuteUbergraph_BP_Otoshidama_Base
struct ABP_Otoshidama_Base_C_ExecuteUbergraph_BP_Otoshidama_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

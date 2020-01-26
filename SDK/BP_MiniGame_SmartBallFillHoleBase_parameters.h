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

// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.CreateDummyBalls
struct ABP_MiniGame_SmartBallFillHoleBase_C_CreateDummyBalls_Params
{
	bool                                               bDummy;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.GetMiniGameHelpName
struct ABP_MiniGame_SmartBallFillHoleBase_C_GetMiniGameHelpName_Params
{
	struct FString                                     String;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.SpawnBallFallArea
struct ABP_MiniGame_SmartBallFillHoleBase_C_SpawnBallFallArea_Params
{
};

// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.ItemGetCheck
struct ABP_MiniGame_SmartBallFillHoleBase_C_ItemGetCheck_Params
{
	int                                                ItemCount;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.CheckEnd
struct ABP_MiniGame_SmartBallFillHoleBase_C_CheckEnd_Params
{
	bool                                               End;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.UserConstructionScript
struct ABP_MiniGame_SmartBallFillHoleBase_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.TL_DownStopper__FinishedFunc
struct ABP_MiniGame_SmartBallFillHoleBase_C_TL_DownStopper__FinishedFunc_Params
{
};

// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.TL_DownStopper__UpdateFunc
struct ABP_MiniGame_SmartBallFillHoleBase_C_TL_DownStopper__UpdateFunc_Params
{
};

// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.BndEvt__Box_BallFallAreaStopper_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniGame_SmartBallFillHoleBase_C_BndEvt__Box_BallFallAreaStopper_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.BndEvt__Box_BallFallAreaStopper_K2Node_ComponentBoundEvent_43_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MiniGame_SmartBallFillHoleBase_C_BndEvt__Box_BallFallAreaStopper_K2Node_ComponentBoundEvent_43_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.BndEvt__Box_WallHitArea5_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniGame_SmartBallFillHoleBase_C_BndEvt__Box_WallHitArea5_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.BndEvt__Box_WallHitArea5_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MiniGame_SmartBallFillHoleBase_C_BndEvt__Box_WallHitArea5_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.StartMiniGame
struct ABP_MiniGame_SmartBallFillHoleBase_C_StartMiniGame_Params
{
};

// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.DownStopper
struct ABP_MiniGame_SmartBallFillHoleBase_C_DownStopper_Params
{
};

// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.ReceiveBeginPlay
struct ABP_MiniGame_SmartBallFillHoleBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.SpawnAllBalls
struct ABP_MiniGame_SmartBallFillHoleBase_C_SpawnAllBalls_Params
{
};

// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.EndGame
struct ABP_MiniGame_SmartBallFillHoleBase_C_EndGame_Params
{
};

// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.SetOverlapCollisionEnabled
struct ABP_MiniGame_SmartBallFillHoleBase_C_SetOverlapCollisionEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.ExecuteUbergraph_BP_MiniGame_SmartBallFillHoleBase
struct ABP_MiniGame_SmartBallFillHoleBase_C_ExecuteUbergraph_BP_MiniGame_SmartBallFillHoleBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

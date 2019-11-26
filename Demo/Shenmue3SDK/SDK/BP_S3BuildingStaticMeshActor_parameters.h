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

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.GetBGM
struct ABP_S3BuildingStaticMeshActor_C_GetBGM_Params
{
	class USoundAtomCue*                               BGM;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.IsOverlappingCutsceneActor
struct ABP_S3BuildingStaticMeshActor_C_IsOverlappingCutsceneActor_Params
{
	struct FName                                       CharacterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOverlap;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.OverlapPlayer_Impl
struct ABP_S3BuildingStaticMeshActor_C_OverlapPlayer_Impl_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.GetCurrentBGM
struct ABP_S3BuildingStaticMeshActor_C_GetCurrentBGM_Params
{
	class USoundAtomCue*                               Sound;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.InitTick
struct ABP_S3BuildingStaticMeshActor_C_InitTick_Params
{
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.StopSE
struct ABP_S3BuildingStaticMeshActor_C_StopSE_Params
{
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.PlaySE
struct ABP_S3BuildingStaticMeshActor_C_PlaySE_Params
{
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.JudgeBGM
struct ABP_S3BuildingStaticMeshActor_C_JudgeBGM_Params
{
	bool                                               Play;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.IsNeedCheckSound
struct ABP_S3BuildingStaticMeshActor_C_IsNeedCheckSound_Params
{
	bool                                               Need;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.UpdatePostProcess
struct ABP_S3BuildingStaticMeshActor_C_UpdatePostProcess_Params
{
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.IsPlayerInVolume
struct ABP_S3BuildingStaticMeshActor_C_IsPlayerInVolume_Params
{
	bool                                               In;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.CheckSound
struct ABP_S3BuildingStaticMeshActor_C_CheckSound_Params
{
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetBGM
struct ABP_S3BuildingStaticMeshActor_C_SetBGM_Params
{
	bool                                               Play;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetShadowGain
struct ABP_S3BuildingStaticMeshActor_C_SetShadowGain_Params
{
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetGain
struct ABP_S3BuildingStaticMeshActor_C_SetGain_Params
{
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetGamma
struct ABP_S3BuildingStaticMeshActor_C_SetGamma_Params
{
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetPostProcessSetting
struct ABP_S3BuildingStaticMeshActor_C_SetPostProcessSetting_Params
{
	bool                                               Play;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.GetLeavePoint
struct ABP_S3BuildingStaticMeshActor_C_GetLeavePoint_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.IsOverlappingActorByName
struct ABP_S3BuildingStaticMeshActor_C_IsOverlappingActorByName_Params
{
	struct FName                                       CharacterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOverlap;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.UserConstructionScript
struct ABP_S3BuildingStaticMeshActor_C_UserConstructionScript_Params
{
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.ReceiveBeginPlay
struct ABP_S3BuildingStaticMeshActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.ReceiveTick
struct ABP_S3BuildingStaticMeshActor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.ReceiveEndPlay
struct ABP_S3BuildingStaticMeshActor_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.BndEvt__HouseBox1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_S3BuildingStaticMeshActor_C_BndEvt__HouseBox1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.BndEvt__HouseBox1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_S3BuildingStaticMeshActor_C_BndEvt__HouseBox1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.BndEvt__HouseBox2_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_S3BuildingStaticMeshActor_C_BndEvt__HouseBox2_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.BndEvt__HouseBox2_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct ABP_S3BuildingStaticMeshActor_C_BndEvt__HouseBox2_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.BndEvt__HouseBox3_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_S3BuildingStaticMeshActor_C_BndEvt__HouseBox3_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.BndEvt__HouseBox3_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
struct ABP_S3BuildingStaticMeshActor_C_BndEvt__HouseBox3_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.ChangeGameTimeEvent
struct ABP_S3BuildingStaticMeshActor_C_ChangeGameTimeEvent_Params
{
	ES3DayTimeEvent                                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.OverlapPlayer
struct ABP_S3BuildingStaticMeshActor_C_OverlapPlayer_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bin;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.StartCutscene
struct ABP_S3BuildingStaticMeshActor_C_StartCutscene_Params
{
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.EndCutscene
struct ABP_S3BuildingStaticMeshActor_C_EndCutscene_Params
{
};

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.ExecuteUbergraph_BP_S3BuildingStaticMeshActor
struct ABP_S3BuildingStaticMeshActor_C_ExecuteUbergraph_BP_S3BuildingStaticMeshActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

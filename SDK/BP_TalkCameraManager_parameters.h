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

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.PrepareCommonSelectionData
struct ABP_TalkCameraManager_C_PrepareCommonSelectionData_Params
{
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.ExecuteCharacterAvoidance
struct ABP_TalkCameraManager_C_ExecuteCharacterAvoidance_Params
{
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.AdjustImaginaryLineCameraPositionFromSpace
struct ABP_TalkCameraManager_C_AdjustImaginaryLineCameraPositionFromSpace_Params
{
	class AActor*                                      InTalkedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InPlayer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.GetNonCharaCameraTargetSkeletalMesh
struct ABP_TalkCameraManager_C_GetNonCharaCameraTargetSkeletalMesh_Params
{
	class AActor*                                      InActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.CalcAndSetAvailableCameraForShowItem
struct ABP_TalkCameraManager_C_CalcAndSetAvailableCameraForShowItem_Params
{
	class UPrimitiveComponent*                         SpeakingSkeletalMesh;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         ListeningSkeletalMesh;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EM_LeftOrRight>                        CameraPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DivNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              CheckHitObjectTypes;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               isDrawDebug;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EAutoCameraType                                    AutoCameraType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CheckTwoSide;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               _printCollisionMessage;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isAcEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.ResolveTalkTransitionError
struct ABP_TalkCameraManager_C_ResolveTalkTransitionError_Params
{
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.CheckFilter
struct ABP_TalkCameraManager_C_CheckFilter_Params
{
	int                                                mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FST_TalkCameraPairOrSingleFilter            Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FST_TalkCameraShoulderFilter                Param2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FST_TalkCameraAngleFilter                   Param3;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FST_TalkCameraDistanceFilter                Param4;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FST_TalkCameraLookTargetFilter              Param5;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FST_TalkCameraKindFilter                    Param6;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.CheckCameraKind
struct ABP_TalkCameraManager_C_CheckCameraKind_Params
{
	int                                                mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_TalkCameraKindFilter                    Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.CheckLookAtSocket
struct ABP_TalkCameraManager_C_CheckLookAtSocket_Params
{
	int                                                mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_TalkCameraLookTargetFilter              Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.CheckDistance
struct ABP_TalkCameraManager_C_CheckDistance_Params
{
	int                                                mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_TalkCameraDistanceFilter                Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.CheckAngle
struct ABP_TalkCameraManager_C_CheckAngle_Params
{
	int                                                mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_TalkCameraAngleFilter                   Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.CheckShoulderOrNot
struct ABP_TalkCameraManager_C_CheckShoulderOrNot_Params
{
	int                                                mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_TalkCameraShoulderFilter                Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.CheckPairOrSingle
struct ABP_TalkCameraManager_C_CheckPairOrSingle_Params
{
	int                                                mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_TalkCameraPairOrSingleFilter            Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.GetFilteredCamera
struct ABP_TalkCameraManager_C_GetFilteredCamera_Params
{
	struct FST_TalkCameraPairOrSingleFilter            PairOrSingle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FST_TalkCameraShoulderFilter                ShoulderCut;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FST_TalkCameraAngleFilter                   Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FST_TalkCameraDistanceFilter                Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FST_TalkCameraLookTargetFilter              LookTarget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FST_TalkCameraKindFilter                    CameraKind;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FST_AutoCameraAnalizedInfo>          Cameras;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.AutoCameraCutChageInit
struct ABP_TalkCameraManager_C_AutoCameraCutChageInit_Params
{
	class AActor*                                      Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Talked;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.DestroyPrevCamera
struct ABP_TalkCameraManager_C_DestroyPrevCamera_Params
{
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.IsOrderSpecificCamera
struct ABP_TalkCameraManager_C_IsOrderSpecificCamera_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.CanChangeCut
struct ABP_TalkCameraManager_C_CanChangeCut_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.GetRandomAvailableCamera
struct ABP_TalkCameraManager_C_GetRandomAvailableCamera_Params
{
	TArray<class UClass*>                              AvailableCameras;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      Camera;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.DestroyDummyMeshComponent
struct ABP_TalkCameraManager_C_DestroyDummyMeshComponent_Params
{
	TArray<class AActor*>                              Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.TryCreateDummyMesh
struct ABP_TalkCameraManager_C_TryCreateDummyMesh_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      LookAtActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceDummy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComponet;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.Init
struct ABP_TalkCameraManager_C_Init_Params
{
	struct FString                                     LockTargetCharacterId;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.SpawnLookAtCamera
struct ABP_TalkCameraManager_C_SpawnLookAtCamera_Params
{
	class UClass*                                      LookAtCameraClass;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.GetOtherActorFromTargets
struct ABP_TalkCameraManager_C_GetOtherActorFromTargets_Params
{
	TArray<class AActor*>                              Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      InActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Other;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.GetCameraGroupFromName
struct ABP_TalkCameraManager_C_GetCameraGroupFromName_Params
{
	struct FString                                     CameraGroup;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<class UClass*>                              GroupCameras;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.GetCameraClassFromName
struct ABP_TalkCameraManager_C_GetCameraClassFromName_Params
{
	struct FString                                     CameraName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UClass*                                      cameraClass;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.GetSpeakingCharacterName
struct ABP_TalkCameraManager_C_GetSpeakingCharacterName_Params
{
	TEnumAsByte<EM_Charactor>                          CharacterType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.GetAvailableCameraNum
struct ABP_TalkCameraManager_C_GetAvailableCameraNum_Params
{
	TArray<class UClass*>                              Cameras;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                DivNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SpeakingSkeletalMesh;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      ListeningSkeletalMesh;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EM_LeftOrRight>                        CameraPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              CheckHitObjectTypes;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               isDebugDraw;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.CalcCameraPositionFromImaginaryLine
struct ABP_TalkCameraManager_C_CalcCameraPositionFromImaginaryLine_Params
{
	class AActor*                                      NPC;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.TryGetDifferentCamera
struct ABP_TalkCameraManager_C_TryGetDifferentCamera_Params
{
	TArray<class UClass*>                              List;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      PrevCamera;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Camera;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.CalcAndSetAvailableCamera
struct ABP_TalkCameraManager_C_CalcAndSetAvailableCamera_Params
{
	class UPrimitiveComponent*                         SpeakingSkeletalMesh;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         ListeningSkeletalMesh;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EM_LeftOrRight>                        CameraPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DivNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              CheckHitObjectTypes;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               isDrawDebug;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EAutoCameraType                                    AutoCameraType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CheckTwoSide;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               _printCollisionMessage;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isAcEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.SetNextCameraFromRandom
struct ABP_TalkCameraManager_C_SetNextCameraFromRandom_Params
{
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.SpawnDefalutTalkCamera
struct ABP_TalkCameraManager_C_SpawnDefalutTalkCamera_Params
{
	class UClass*                                      cameraClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.SetCameraPositionFromImaginaryLine
struct ABP_TalkCameraManager_C_SetCameraPositionFromImaginaryLine_Params
{
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.UserConstructionScript
struct ABP_TalkCameraManager_C_UserConstructionScript_Params
{
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.ChangeTarget
struct ABP_TalkCameraManager_C_ChangeTarget_Params
{
	TArray<class AActor*>                              NewTarget;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              lerpTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.ChangeToLookAtCamera
struct ABP_TalkCameraManager_C_ChangeToLookAtCamera_Params
{
	class AActor*                                      Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      MotionActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.ReceiveTick
struct ABP_TalkCameraManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.ChangeCameraByAutoCameraDirector
struct ABP_TalkCameraManager_C_ChangeCameraByAutoCameraDirector_Params
{
	class AActor*                                      Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TalkedActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.ReceiveEndPlay
struct ABP_TalkCameraManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.ChangeToStartShowItemCamera
struct ABP_TalkCameraManager_C_ChangeToStartShowItemCamera_Params
{
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.ChangeToShowItemZoomCamera
struct ABP_TalkCameraManager_C_ChangeToShowItemZoomCamera_Params
{
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.ChangeCamera
struct ABP_TalkCameraManager_C_ChangeCamera_Params
{
	struct FString                                     LookTargetCharacterID;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EAutoCameraType                                    AutoCameraType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isSameTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UseCameraName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     UseCameraGroup;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class AActor*                                      PlayerActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TalkedActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.SpawnNextCamera
struct ABP_TalkCameraManager_C_SpawnNextCamera_Params
{
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.ExecuteUbergraph_BP_TalkCameraManager
struct ABP_TalkCameraManager_C_ExecuteUbergraph_BP_TalkCameraManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkCameraManager.BP_TalkCameraManager_C.OnSelectedAutoCamera__DelegateSignature
struct ABP_TalkCameraManager_C_OnSelectedAutoCamera__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_ClothManager.BP_ClothManager_C.IsCutsceneComponent
struct ABP_ClothManager_C_IsCutsceneComponent_Params
{
	class USkeletalMeshComponent*                      Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Cutscene;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.GetWearMeshType
struct ABP_ClothManager_C_GetWearMeshType_Params
{
	bool                                               RYO;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3CharaMeshType                                   Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.UpdateWear
struct ABP_ClothManager_C_UpdateWear_Params
{
	TMap<EClothPartsType, struct FName>                Map;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_ClothManager.BP_ClothManager_C.GetJeansMaterial
struct ABP_ClothManager_C_GetJeansMaterial_Params
{
	class UMaterialInstance*                           Material;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.GetTShirtsMaterial
struct ABP_ClothManager_C_GetTShirtsMaterial_Params
{
	class UMaterialInstance*                           Material;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.ResetMaterial
struct ABP_ClothManager_C_ResetMaterial_Params
{
	class AS3Character*                                Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      InComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      OutComponent;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.GetShoesMaterialIndex
struct ABP_ClothManager_C_GetShoesMaterialIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.GetBottomsMaterialIndex
struct ABP_ClothManager_C_GetBottomsMaterialIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.IsCharaTagMatching
struct ABP_ClothManager_C_IsCharaTagMatching_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Match;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.CheckUnlock
struct ABP_ClothManager_C_CheckUnlock_Params
{
};

// Function BP_ClothManager.BP_ClothManager_C.GetUnlockedClothParts
struct ABP_ClothManager_C_GetUnlockedClothParts_Params
{
	TArray<struct FName>                               UnlockedParts;                                            // (Parm, OutParm, ZeroConstructor)
	bool*                                              bRyo;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.IsStreaming
struct ABP_ClothManager_C_IsStreaming_Params
{
	bool                                               Streaming;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.CheckGetUnlockParts
struct ABP_ClothManager_C_CheckGetUnlockParts_Params
{
	struct FName                                       ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.CheckInitUnlockParts
struct ABP_ClothManager_C_CheckInitUnlockParts_Params
{
};

// Function BP_ClothManager.BP_ClothManager_C.FinishFitting
struct ABP_ClothManager_C_FinishFitting_Params
{
	bool                                               Apply;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.Fitting
struct ABP_ClothManager_C_Fitting_Params
{
	TScriptInterface<class US3ClothInterface>          Interface;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FST_ClothesFittingInfo>              FittingInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_ClothManager.BP_ClothManager_C.DebugSetupRyoMesh
struct ABP_ClothManager_C_DebugSetupRyoMesh_Params
{
};

// Function BP_ClothManager.BP_ClothManager_C.GetPartsReference
struct ABP_ClothManager_C_GetPartsReference_Params
{
	struct FName                                       PartsID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EClothPartsType                                    Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.GetMeshReference
struct ABP_ClothManager_C_GetMeshReference_Params
{
	struct FName                                       MeshID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3CharaMeshType                                   Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.GetDebugPlayerCharaName
struct ABP_ClothManager_C_GetDebugPlayerCharaName_Params
{
	struct FName                                       CharaName;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.ChangeClothes_Impl
struct ABP_ClothManager_C_ChangeClothes_Impl_Params
{
	TScriptInterface<class US3ClothInterface>          Interface;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3CharaMeshType                                   Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.UpdateShenfaMesh
struct ABP_ClothManager_C_UpdateShenfaMesh_Params
{
};

// Function BP_ClothManager.BP_ClothManager_C.UpdateRyoMesh
struct ABP_ClothManager_C_UpdateRyoMesh_Params
{
};

// Function BP_ClothManager.BP_ClothManager_C.SetupSkeletalMesh
struct ABP_ClothManager_C_SetupSkeletalMesh_Params
{
	class AS3Character*                                S3Character;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FS3ClothesChangeInfo                        Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TScriptInterface<class US3ClothInterface>          Interface;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.StartAsyncLoadObject
struct ABP_ClothManager_C_StartAsyncLoadObject_Params
{
	ES3CharaMeshType                                   MeshType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class US3ClothInterface>          Interface;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.DebugSetRyoMeshId
struct ABP_ClothManager_C_DebugSetRyoMeshId_Params
{
	struct FName                                       MeshID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WithChange;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.UserConstructionScript
struct ABP_ClothManager_C_UserConstructionScript_Params
{
};

// Function BP_ClothManager.BP_ClothManager_C.OnLoaded_68DAAF824D005673C28CC89A68FA961E
struct ABP_ClothManager_C_OnLoaded_68DAAF824D005673C28CC89A68FA961E_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.ReceiveBeginPlay
struct ABP_ClothManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_ClothManager.BP_ClothManager_C.ReceiveTick
struct ABP_ClothManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.ChangeClothes
struct ABP_ClothManager_C_ChangeClothes_Params
{
	TScriptInterface<class US3ClothInterface>*         Interface;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	ES3CharaMeshType*                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.SetSheMeshType
struct ABP_ClothManager_C_SetSheMeshType_Params
{
	ES3CharaMeshType*                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWithChange;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.WaitSpawnPlayer
struct ABP_ClothManager_C_WaitSpawnPlayer_Params
{
};

// Function BP_ClothManager.BP_ClothManager_C.ReceiveEndPlay
struct ABP_ClothManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.ChangeItemNum
struct ABP_ClothManager_C_ChangeItemNum_Params
{
	struct FName                                       ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.SetRyoMeshType
struct ABP_ClothManager_C_SetRyoMeshType_Params
{
	ES3CharaMeshType*                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWithChange;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClothManager.BP_ClothManager_C.WaitReward
struct ABP_ClothManager_C_WaitReward_Params
{
};

// Function BP_ClothManager.BP_ClothManager_C.DelayCheckUnlock
struct ABP_ClothManager_C_DelayCheckUnlock_Params
{
};

// Function BP_ClothManager.BP_ClothManager_C.ExecuteUbergraph_BP_ClothManager
struct ABP_ClothManager_C_ExecuteUbergraph_BP_ClothManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

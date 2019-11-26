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

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.OverwriteWithAnimation
struct ABP_CutsceneSkeletalMeshActor_C_OverwriteWithAnimation_Params
{
	bool                                               ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.CheckWetness
struct ABP_CutsceneSkeletalMeshActor_C_CheckWetness_Params
{
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetManualEyeCloseRate
struct ABP_CutsceneSkeletalMeshActor_C_GetManualEyeCloseRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsManualEyeClose
struct ABP_CutsceneSkeletalMeshActor_C_IsManualEyeClose_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetEyeRotationVerticalBaseAngle
struct ABP_CutsceneSkeletalMeshActor_C_GetEyeRotationVerticalBaseAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetEyeRotationHorizontalBaseAngle
struct ABP_CutsceneSkeletalMeshActor_C_GetEyeRotationHorizontalBaseAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetEyeRotationVerticalRate
struct ABP_CutsceneSkeletalMeshActor_C_GetEyeRotationVerticalRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetEyeRotationHorizontalRate
struct ABP_CutsceneSkeletalMeshActor_C_GetEyeRotationHorizontalRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetEyeRotationAlpha
struct ABP_CutsceneSkeletalMeshActor_C_GetEyeRotationAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.SetupIndoorCollision
struct ABP_CutsceneSkeletalMeshActor_C_SetupIndoorCollision_Params
{
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetProfile
struct ABP_CutsceneSkeletalMeshActor_C_GetProfile_Params
{
	struct FS3CharacterProfile                         Profile;                                                  // (Parm, OutParm)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.SetProfileFromTable
struct ABP_CutsceneSkeletalMeshActor_C_SetProfileFromTable_Params
{
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetRightHandIKAlpha
struct ABP_CutsceneSkeletalMeshActor_C_GetRightHandIKAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetRightHandIKEffectorTarget
struct ABP_CutsceneSkeletalMeshActor_C_GetRightHandIKEffectorTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsUseRightHandIK
struct ABP_CutsceneSkeletalMeshActor_C_IsUseRightHandIK_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetLeftHandIKAlpha
struct ABP_CutsceneSkeletalMeshActor_C_GetLeftHandIKAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetLeftHandIKEffectorTarget
struct ABP_CutsceneSkeletalMeshActor_C_GetLeftHandIKEffectorTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsUseLeftHandIK
struct ABP_CutsceneSkeletalMeshActor_C_IsUseLeftHandIK_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetCharaName
struct ABP_CutsceneSkeletalMeshActor_C_GetCharaName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetWeightFullBody_SEQ2
struct ABP_CutsceneSkeletalMeshActor_C_GetWeightFullBody_SEQ2_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetWeightH_R2
struct ABP_CutsceneSkeletalMeshActor_C_GetWeightH_R2_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetWeightH_L2
struct ABP_CutsceneSkeletalMeshActor_C_GetWeightH_L2_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsEnabledCalcEmotion
struct ABP_CutsceneSkeletalMeshActor_C_IsEnabledCalcEmotion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsForceEyeClose
struct ABP_CutsceneSkeletalMeshActor_C_IsForceEyeClose_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.GetWeightF_SEQ2
struct ABP_CutsceneSkeletalMeshActor_C_GetWeightF_SEQ2_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsTalkSelf
struct ABP_CutsceneSkeletalMeshActor_C_IsTalkSelf_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsEnabledFreeStateEmotion
struct ABP_CutsceneSkeletalMeshActor_C_IsEnabledFreeStateEmotion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.ReleaseCutscenePlayer
struct ABP_CutsceneSkeletalMeshActor_C_ReleaseCutscenePlayer_Params
{
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.SetCutscenePlayer
struct ABP_CutsceneSkeletalMeshActor_C_SetCutscenePlayer_Params
{
	class ABP_CutscenePlayer_C*                        CutscenePlayer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsEnabledEyeBlink
struct ABP_CutsceneSkeletalMeshActor_C_IsEnabledEyeBlink_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.IsEnabledClipper
struct ABP_CutsceneSkeletalMeshActor_C_IsEnabledClipper_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.SetUpdateEnabled
struct ABP_CutsceneSkeletalMeshActor_C_SetUpdateEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.UserConstructionScript
struct ABP_CutsceneSkeletalMeshActor_C_UserConstructionScript_Params
{
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.SpawnMiniGame
struct ABP_CutsceneSkeletalMeshActor_C_SpawnMiniGame_Params
{
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.ChangedClothes
struct ABP_CutsceneSkeletalMeshActor_C_ChangedClothes_Params
{
	TScriptInterface<class US3ClothInterface>          Interface;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.ReceiveBeginPlay
struct ABP_CutsceneSkeletalMeshActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_CutsceneSkeletalMeshActor.BP_CutsceneSkeletalMeshActor_C.ExecuteUbergraph_BP_CutsceneSkeletalMeshActor
struct ABP_CutsceneSkeletalMeshActor_C_ExecuteUbergraph_BP_CutsceneSkeletalMeshActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

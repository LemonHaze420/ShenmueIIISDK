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

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.SetCharaName
struct UABP_S3_ACCharacter_C_SetCharaName_Params
{
	struct FName                                       NewName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.IsReadyTalk
struct UABP_S3_ACCharacter_C_IsReadyTalk_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AttachAnimObject
struct UABP_S3_ACCharacter_C_AttachAnimObject_Params
{
	ENPCAttachFrom                                     From;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkMeshComp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSpawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.Attach_DefinitionFromHaveItem
struct UABP_S3_ACCharacter_C_Attach_DefinitionFromHaveItem_Params
{
	struct FHaveItemAttachSetting                      HaveItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.DetachAll
struct UABP_S3_ACCharacter_C_DetachAll_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.GetAttachInfo
struct UABP_S3_ACCharacter_C_GetAttachInfo_Params
{
	class UBP_AnimNotify_Attach_C*                     Notify;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_NPC_AttachInfo                          Info;                                                     // (Parm, OutParm)
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AttachStaticObject
struct UABP_S3_ACCharacter_C_AttachStaticObject_Params
{
	ENPCAttachFrom                                     From;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        MeshComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSpwan;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.Attach
struct UABP_S3_ACCharacter_C_Attach_Params
{
	struct FNPCAttachSetting                           Setting;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_ModifyBone_CB95F9094739B009A3C66FBA30471F31
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_ModifyBone_CB95F9094739B009A3C66FBA30471F31_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_043A6256457A7CD0DB9BC8BA70202498
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_043A6256457A7CD0DB9BC8BA70202498_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_613241A345B92B8202FED7B3D19799E5
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_613241A345B92B8202FED7B3D19799E5_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_ModifyBone_5FF269CE4FE111C407DC82AAA7B9AD5A
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_ModifyBone_5FF269CE4FE111C407DC82AAA7B9AD5A_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_ModifyBone_25A040624373212E9146A8A14C0AB3C5
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_ModifyBone_25A040624373212E9146A8A14C0AB3C5_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_ModifyBone_076800874AE8A307DD7B76AAB9AF9E05
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_ModifyBone_076800874AE8A307DD7B76AAB9AF9E05_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_A69B2A5543F9C8F71F228D82D3C3C77B
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_A69B2A5543F9C8F71F228D82D3C3C77B_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_ModifyBone_733F07F7489F702C70EBF586685C04C6
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_ModifyBone_733F07F7489F702C70EBF586685C04C6_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_ModifyBone_06AB11D7478D87F7D2E7CDBBD55A4C05
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_ModifyBone_06AB11D7478D87F7D2E7CDBBD55A4C05_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_4418E22543E4B9C65AB7C58BA9FE43DD
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_4418E22543E4B9C65AB7C58BA9FE43DD_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_F1EC4C2D43668D8B73CA489F63F5F743
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_F1EC4C2D43668D8B73CA489F63F5F743_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_DA7381A841467AC15D45D0A3EBE0A427
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_DA7381A841467AC15D45D0A3EBE0A427_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_DFAF7E7B48428CBCCAFD28983C5D3C4C
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_DFAF7E7B48428CBCCAFD28983C5D3C4C_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_060034EC4B8CD885AA0CC8B3CB646651
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_060034EC4B8CD885AA0CC8B3CB646651_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_594328A0494A192C29296CB1C2B7C3C1
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_594328A0494A192C29296CB1C2B7C3C1_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_6169B54C4DD021BA9DC22D9F89EDAA30
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_6169B54C4DD021BA9DC22D9F89EDAA30_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_FB8BA695436655B06EBA709DBE1FB952
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_FB8BA695436655B06EBA709DBE1FB952_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_B095B0A049028FAA77CC1AAE4CD27C4E
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_B095B0A049028FAA77CC1AAE4CD27C4E_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_1DFF154D40EA788EEF7385B45B15D85F
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_1DFF154D40EA788EEF7385B45B15D85F_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_1844A3E24300F4FFEEC255832D0CC0EC
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_1844A3E24300F4FFEEC255832D0CC0EC_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_9211CF5347245E63505F90BCFA5A1FFA
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_9211CF5347245E63505F90BCFA5A1FFA_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_AE27EFFA4C6E4E51460A1EA17DB7388B
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_AE27EFFA4C6E4E51460A1EA17DB7388B_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_E54F0A8447BF0C5DE4D1A983D49F8A03
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_E54F0A8447BF0C5DE4D1A983D49F8A03_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_D4D441534CAE79E94FE9A091F8AA0F46
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_D4D441534CAE79E94FE9A091F8AA0F46_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_D780519044902033B925A1AF6040D1E9
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_D780519044902033B925A1AF6040D1E9_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_SequencePlayer_F1D166A64E9615815124BAA82A4E04F6
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_SequencePlayer_F1D166A64E9615815124BAA82A4E04F6_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_TransitionResult_BD5F28084E410326CA2FA0B20B93A18E
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_TransitionResult_BD5F28084E410326CA2FA0B20B93A18E_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_TransitionResult_4B2286A041FB3ED3FCAB2B9341C0E848
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_TransitionResult_4B2286A041FB3ED3FCAB2B9341C0E848_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_TransitionResult_7A1938CC400AF168CAB4C1A4D510BD8C
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_TransitionResult_7A1938CC400AF168CAB4C1A4D510BD8C_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_F6D798F74BD57435CC50D18236A8E825
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_F6D798F74BD57435CC50D18236A8E825_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_4FD83E2B4EF0F83FC43E969F3029FD9B
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_4FD83E2B4EF0F83FC43E969F3029FD9B_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_418B0A9D4D975D1B1B216EA848D6EF8B
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_418B0A9D4D975D1B1B216EA848D6EF8B_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_9BE4640240A8158AE30DF2BE98ED6A17
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_9BE4640240A8158AE30DF2BE98ED6A17_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_5E80273F4C35850011D571BC5C587FC2
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_5E80273F4C35850011D571BC5C587FC2_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_TwoBoneIK_5B7B80DF4BF3542313FBCDB51E9CAAC4
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_TwoBoneIK_5B7B80DF4BF3542313FBCDB51E9CAAC4_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_TwoBoneIK_B0B79DDC4867771D0D899D857D648A8C
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_TwoBoneIK_B0B79DDC4867771D0D899D857D648A8C_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_ModifyBone_2DD3F2AD4ABEDA317983A4AE85825B61
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_ModifyBone_2DD3F2AD4ABEDA317983A4AE85825B61_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_ModifyBone_B1AF5D2D4BE882D50B33DEBBFDAE9540
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_ModifyBone_B1AF5D2D4BE882D50B33DEBBFDAE9540_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_TwoBoneIK_EF5F7C0349BB05A3F8A141AFCD07CCFD
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_TwoBoneIK_EF5F7C0349BB05A3F8A141AFCD07CCFD_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_TwoBoneIK_DE91B1CB4C6FF3A350402A85D49012E9
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_TwoBoneIK_DE91B1CB4C6FF3A350402A85D49012E9_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_5AE71F36450E92E614AA70A1E6BE0519
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_5AE71F36450E92E614AA70A1E6BE0519_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_EnterAdjusting
struct UABP_S3_ACCharacter_C_AnimNotify_EnterAdjusting_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_EnterAnimating
struct UABP_S3_ACCharacter_C_AnimNotify_EnterAnimating_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_EnterIdle
struct UABP_S3_ACCharacter_C_AnimNotify_EnterIdle_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_EnterIdleToWalking
struct UABP_S3_ACCharacter_C_AnimNotify_EnterIdleToWalking_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_EnterOpenDoor
struct UABP_S3_ACCharacter_C_AnimNotify_EnterOpenDoor_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_EnterRunning
struct UABP_S3_ACCharacter_C_AnimNotify_EnterRunning_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_EnterSitting
struct UABP_S3_ACCharacter_C_AnimNotify_EnterSitting_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_EnterSittingAnimating
struct UABP_S3_ACCharacter_C_AnimNotify_EnterSittingAnimating_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_EnterSittingToWalking
struct UABP_S3_ACCharacter_C_AnimNotify_EnterSittingToWalking_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_EnterStairs
struct UABP_S3_ACCharacter_C_AnimNotify_EnterStairs_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_EnterTalking
struct UABP_S3_ACCharacter_C_AnimNotify_EnterTalking_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_EnterTurningInPlace
struct UABP_S3_ACCharacter_C_AnimNotify_EnterTurningInPlace_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_EnterWalking
struct UABP_S3_ACCharacter_C_AnimNotify_EnterWalking_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_EnterWalkingInterruption
struct UABP_S3_ACCharacter_C_AnimNotify_EnterWalkingInterruption_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_EnterWalkingToIdle
struct UABP_S3_ACCharacter_C_AnimNotify_EnterWalkingToIdle_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_EnterWalkingToIdleOnTheWay
struct UABP_S3_ACCharacter_C_AnimNotify_EnterWalkingToIdleOnTheWay_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_EnterWalkingToSit
struct UABP_S3_ACCharacter_C_AnimNotify_EnterWalkingToSit_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_EnterWalkingTurn
struct UABP_S3_ACCharacter_C_AnimNotify_EnterWalkingTurn_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_EnterSittingTurn
struct UABP_S3_ACCharacter_C_AnimNotify_EnterSittingTurn_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_RightFootDominant
struct UABP_S3_ACCharacter_C_AnimNotify_RightFootDominant_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_LeftFootDominant
struct UABP_S3_ACCharacter_C_AnimNotify_LeftFootDominant_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_AnimationAComplete
struct UABP_S3_ACCharacter_C_AnimNotify_AnimationAComplete_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_AnimationBComplete
struct UABP_S3_ACCharacter_C_AnimNotify_AnimationBComplete_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_77C333574C1086A9BFB57FB90778DF03
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_77C333574C1086A9BFB57FB90778DF03_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_EndAnimating
struct UABP_S3_ACCharacter_C_AnimNotify_EndAnimating_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_AdjustComplete
struct UABP_S3_ACCharacter_C_AnimNotify_AdjustComplete_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_DisableFootIK
struct UABP_S3_ACCharacter_C_AnimNotify_DisableFootIK_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_EnableFootIK
struct UABP_S3_ACCharacter_C_AnimNotify_EnableFootIK_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_LeftStepBack
struct UABP_S3_ACCharacter_C_AnimNotify_LeftStepBack_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_EnableBreathIK
struct UABP_S3_ACCharacter_C_AnimNotify_EnableBreathIK_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_DisableBreathIK
struct UABP_S3_ACCharacter_C_AnimNotify_DisableBreathIK_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_58E93D704EE5C5FD3007A8B35DF19550
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_58E93D704EE5C5FD3007A8B35DF19550_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_StartFingerPointing
struct UABP_S3_ACCharacter_C_AnimNotify_StartFingerPointing_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_EndFingerPointing
struct UABP_S3_ACCharacter_C_AnimNotify_EndFingerPointing_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_356B409D4A369AD929D36A986C0C1216
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_356B409D4A369AD929D36A986C0C1216_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_BeginSitting
struct UABP_S3_ACCharacter_C_AnimNotify_BeginSitting_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_BeginTransitionSittingToWalking
struct UABP_S3_ACCharacter_C_AnimNotify_BeginTransitionSittingToWalking_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_GroundingFootL
struct UABP_S3_ACCharacter_C_AnimNotify_GroundingFootL_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.AnimNotify_GroundingFootR
struct UABP_S3_ACCharacter_C_AnimNotify_GroundingFootR_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_3BDE2EDA41E75B81671A4985599EC936
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_3BDE2EDA41E75B81671A4985599EC936_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.BlueprintInitializeAnimation
struct UABP_S3_ACCharacter_C_BlueprintInitializeAnimation_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.SetUseHandMotion
struct UABP_S3_ACCharacter_C_SetUseHandMotion_Params
{
	bool                                               bUse;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.Attach_HaveItem
struct UABP_S3_ACCharacter_C_Attach_HaveItem_Params
{
	struct FHaveItemAttachSetting                      HaveItemSetting;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_5F1A4754403BF6959CD4FDA792165DCE
struct UABP_S3_ACCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_5F1A4754403BF6959CD4FDA792165DCE_Params
{
};

// Function ABP_S3_ACCharacter.ABP_S3_ACCharacter_C.ExecuteUbergraph_ABP_S3_ACCharacter
struct UABP_S3_ACCharacter_C_ExecuteUbergraph_ABP_S3_ACCharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

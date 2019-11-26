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

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.IsUseFluctuationEmotion
struct USubABP_CharacterBase_C_IsUseFluctuationEmotion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.DebugPlayEmotion
struct USubABP_CharacterBase_C_DebugPlayEmotion_Params
{
	ECharacterEmotion                                  EmotionId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.OverlapEyeCloseBlendMap
struct USubABP_CharacterBase_C_OverlapEyeCloseBlendMap_Params
{
	bool                                               Overlap;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.InitAnimation
struct USubABP_CharacterBase_C_InitAnimation_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.InitManger
struct USubABP_CharacterBase_C_InitManger_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.DebugPlayClipper
struct USubABP_CharacterBase_C_DebugPlayClipper_Params
{
	EMouseShape                                        ClipperId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.InitFaceMotages
struct USubABP_CharacterBase_C_InitFaceMotages_Params
{
	bool                                               Succsess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.PlayEyelidMontage
struct USubABP_CharacterBase_C_PlayEyelidMontage_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_TwoBoneIK_2427342E4DE62DA9681D10899FA0C469
struct USubABP_CharacterBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_TwoBoneIK_2427342E4DE62DA9681D10899FA0C469_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_BlendListByBool_0BE400954F2DD819D23E14A25E18FFB6
struct USubABP_CharacterBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_BlendListByBool_0BE400954F2DD819D23E14A25E18FFB6_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_TwoBoneIK_3A969FD84F89E2B587387FAE2BB3883B
struct USubABP_CharacterBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_TwoBoneIK_3A969FD84F89E2B587387FAE2BB3883B_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_S3LookAt_34BE70864AAE1E681F3699AD76E8D06D
struct USubABP_CharacterBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_S3LookAt_34BE70864AAE1E681F3699AD76E8D06D_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_S3LookAt_5BE236A94C87625E7BBB518DE62094E8
struct USubABP_CharacterBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_S3LookAt_5BE236A94C87625E7BBB518DE62094E8_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_LayeredBoneBlend_A7266A3E498F3EF9A0308BBBBB2EB246
struct USubABP_CharacterBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_LayeredBoneBlend_A7266A3E498F3EF9A0308BBBBB2EB246_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_BlendListByBool_DAA02AFC4DC1197CB2C0178C65D47C4E
struct USubABP_CharacterBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_BlendListByBool_DAA02AFC4DC1197CB2C0178C65D47C4E_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_ModifyBone_09A482254DA4FED67620BDBA9AF2C14F
struct USubABP_CharacterBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_ModifyBone_09A482254DA4FED67620BDBA9AF2C14F_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_S3LookAt_17A9CDE541DED1AD6C3E81964EA9FF7B
struct USubABP_CharacterBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_S3LookAt_17A9CDE541DED1AD6C3E81964EA9FF7B_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_ModifyBone_6E40D96F4FF1FABBA3D5C893DA0FF173
struct USubABP_CharacterBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_ModifyBone_6E40D96F4FF1FABBA3D5C893DA0FF173_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_ModifyBone_75ECB2A54119C4902CEA6EB4A98AB190
struct USubABP_CharacterBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_ModifyBone_75ECB2A54119C4902CEA6EB4A98AB190_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_S3LookAt_872AD054496382ED20CEBEAA0C3ABB35
struct USubABP_CharacterBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_S3LookAt_872AD054496382ED20CEBEAA0C3ABB35_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_LookAt_A25ED02C40574FBD07485A8EDF7DAABF
struct USubABP_CharacterBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_LookAt_A25ED02C40574FBD07485A8EDF7DAABF_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_LookAt_B0B10A0C473B7DF27D75AD8F131D92F5
struct USubABP_CharacterBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_LookAt_B0B10A0C473B7DF27D75AD8F131D92F5_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_BlendListByBool_F15186F940D416D2FF0FC7A94367E54F
struct USubABP_CharacterBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_BlendListByBool_F15186F940D416D2FF0FC7A94367E54F_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_BlendListByBool_146D05A044B11F478977D6BACF041763
struct USubABP_CharacterBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_BlendListByBool_146D05A044B11F478977D6BACF041763_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_S3LookAt_83CCFA454C996E72BFBB599FD2A0AA25
struct USubABP_CharacterBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_S3LookAt_83CCFA454C996E72BFBB599FD2A0AA25_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_BlendListByBool_660409A34D1A9E226405539E6C696495
struct USubABP_CharacterBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_BlendListByBool_660409A34D1A9E226405539E6C696495_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_S3LookAt_5AEFF4E648C09169E60A47AE69852A08
struct USubABP_CharacterBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_S3LookAt_5AEFF4E648C09169E60A47AE69852A08_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_LayeredBoneBlend_163784F549F81C3689E764B16BB5F07E
struct USubABP_CharacterBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_LayeredBoneBlend_163784F549F81C3689E764B16BB5F07E_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.PlayGreeting
struct USubABP_CharacterBase_C_PlayGreeting_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.BlueprintInitializeAnimation
struct USubABP_CharacterBase_C_BlueprintInitializeAnimation_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.RetryFaceAnimation
struct USubABP_CharacterBase_C_RetryFaceAnimation_Params
{
	class AS3Character*                                LoadedCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.CalcEmotion
struct USubABP_CharacterBase_C_CalcEmotion_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_S3LookAt_99EADCD44C38324A201E7AA7D7E49D7B
struct USubABP_CharacterBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_S3LookAt_99EADCD44C38324A201E7AA7D7E49D7B_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.CalcLookAt
struct USubABP_CharacterBase_C_CalcLookAt_Params
{
};

// Function SubABP_CharacterBase.SubABP_CharacterBase_C.ExecuteUbergraph_SubABP_CharacterBase
struct USubABP_CharacterBase_C_ExecuteUbergraph_SubABP_CharacterBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

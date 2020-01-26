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

// Function SubABP_Grab.SubABP_Grab_C.RewindBoneAnimTime
struct USubABP_Grab_C_RewindBoneAnimTime_Params
{
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubABP_Grab.SubABP_Grab_C.IsPlaying
struct USubABP_Grab_C_IsPlaying_Params
{
	bool                                               Finished;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SubABP_Grab.SubABP_Grab_C.StartBlendIn
struct USubABP_Grab_C_StartBlendIn_Params
{
};

// Function SubABP_Grab.SubABP_Grab_C.StartBlendOut
struct USubABP_Grab_C_StartBlendOut_Params
{
};

// Function SubABP_Grab.SubABP_Grab_C.GetOverlappedActors
struct USubABP_Grab_C_GetOverlappedActors_Params
{
	TArray<class AActor*>                              Actors;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function SubABP_Grab.SubABP_Grab_C.IsFinished
struct USubABP_Grab_C_IsFinished_Params
{
	bool                                               Finished;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SubABP_Grab.SubABP_Grab_C.ResetAnimation
struct USubABP_Grab_C_ResetAnimation_Params
{
	float                                              ResetTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubABP_Grab.SubABP_Grab_C.InitColliders
struct USubABP_Grab_C_InitColliders_Params
{
	TArray<class UPrimitiveComponent*>                 Primitives;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SubABP_Grab.SubABP_Grab_C.PauseBoneAndParents
struct USubABP_Grab_C_PauseBoneAndParents_Params
{
	struct FName                                       Bone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubABP_Grab.SubABP_Grab_C.StartAnimation
struct USubABP_Grab_C_StartAnimation_Params
{
	float                                              StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubABP_Grab.SubABP_Grab_C.GetBoneAnimTime
struct USubABP_Grab_C_GetBoneAnimTime_Params
{
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SubABP_Grab.SubABP_Grab_C.GetParentFingerBones
struct USubABP_Grab_C_GetParentFingerBones_Params
{
	struct FName                                       Bone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Bones;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function SubABP_Grab.SubABP_Grab_C.SetBoneAnimTime
struct USubABP_Grab_C_SetBoneAnimTime_Params
{
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubABP_Grab.SubABP_Grab_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_19377CE5462D9DB570DD7D96A6186A21
struct USubABP_Grab_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_19377CE5462D9DB570DD7D96A6186A21_Params
{
};

// Function SubABP_Grab.SubABP_Grab_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_567DDB6D4C775863F5CD8EB548C0EBD9
struct USubABP_Grab_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_567DDB6D4C775863F5CD8EB548C0EBD9_Params
{
};

// Function SubABP_Grab.SubABP_Grab_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_C2AAAF0F4C89BCDA2DC109B3AE999D61
struct USubABP_Grab_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_C2AAAF0F4C89BCDA2DC109B3AE999D61_Params
{
};

// Function SubABP_Grab.SubABP_Grab_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_E280B4D9423985EC885D41813644F934
struct USubABP_Grab_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_E280B4D9423985EC885D41813644F934_Params
{
};

// Function SubABP_Grab.SubABP_Grab_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_0482EB604FA09D8849ECDDA4769202DF
struct USubABP_Grab_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_0482EB604FA09D8849ECDDA4769202DF_Params
{
};

// Function SubABP_Grab.SubABP_Grab_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_565AEAA548298064ADEBF89D438C15B4
struct USubABP_Grab_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_565AEAA548298064ADEBF89D438C15B4_Params
{
};

// Function SubABP_Grab.SubABP_Grab_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_C536418B48231CA1EE5A54B8B78CA8CE
struct USubABP_Grab_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_C536418B48231CA1EE5A54B8B78CA8CE_Params
{
};

// Function SubABP_Grab.SubABP_Grab_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_54D261244689807764D374B77605F380
struct USubABP_Grab_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_54D261244689807764D374B77605F380_Params
{
};

// Function SubABP_Grab.SubABP_Grab_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_E3E8D9614ACCBDB72FA13DBA0F20D37B
struct USubABP_Grab_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_E3E8D9614ACCBDB72FA13DBA0F20D37B_Params
{
};

// Function SubABP_Grab.SubABP_Grab_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_04749C2E4C7B0768CFF67E99193FC80D
struct USubABP_Grab_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_04749C2E4C7B0768CFF67E99193FC80D_Params
{
};

// Function SubABP_Grab.SubABP_Grab_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_5CD85EA6404AC9DCE458448E07B8B996
struct USubABP_Grab_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_5CD85EA6404AC9DCE458448E07B8B996_Params
{
};

// Function SubABP_Grab.SubABP_Grab_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_E40701264EE04C4F663E9E87EDF4E57F
struct USubABP_Grab_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_E40701264EE04C4F663E9E87EDF4E57F_Params
{
};

// Function SubABP_Grab.SubABP_Grab_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_3BE61BA4451508B644ED258BF555C675
struct USubABP_Grab_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_3BE61BA4451508B644ED258BF555C675_Params
{
};

// Function SubABP_Grab.SubABP_Grab_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_C69A9BEB4E358F6131F2FB80B41A331C
struct USubABP_Grab_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_C69A9BEB4E358F6131F2FB80B41A331C_Params
{
};

// Function SubABP_Grab.SubABP_Grab_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_D8C019CC49B97D5028C652A52B1A3F2C
struct USubABP_Grab_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_D8C019CC49B97D5028C652A52B1A3F2C_Params
{
};

// Function SubABP_Grab.SubABP_Grab_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_1276F4B048DD1630457E27B438428FBA
struct USubABP_Grab_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_1276F4B048DD1630457E27B438428FBA_Params
{
};

// Function SubABP_Grab.SubABP_Grab_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_B13BBE6A49F6900AE246258DDB000001
struct USubABP_Grab_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_B13BBE6A49F6900AE246258DDB000001_Params
{
};

// Function SubABP_Grab.SubABP_Grab_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_0B44694445C9783F77151492820F553E
struct USubABP_Grab_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_0B44694445C9783F77151492820F553E_Params
{
};

// Function SubABP_Grab.SubABP_Grab_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_5894D8074E0C904E0024EF8EF2EA9460
struct USubABP_Grab_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_5894D8074E0C904E0024EF8EF2EA9460_Params
{
};

// Function SubABP_Grab.SubABP_Grab_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_2DF7C37A4F123FF85B0EC7AE5E4A0AAF
struct USubABP_Grab_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_SequenceEvaluator_2DF7C37A4F123FF85B0EC7AE5E4A0AAF_Params
{
};

// Function SubABP_Grab.SubABP_Grab_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_BlendListByBool_A712509C492F4FADAF125C8B44D31F3F
struct USubABP_Grab_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_Grab_AnimGraphNode_BlendListByBool_A712509C492F4FADAF125C8B44D31F3F_Params
{
};

// Function SubABP_Grab.SubABP_Grab_C.BlueprintUpdateAnimation
struct USubABP_Grab_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubABP_Grab.SubABP_Grab_C.BlueprintInitializeAnimation
struct USubABP_Grab_C_BlueprintInitializeAnimation_Params
{
};

// Function SubABP_Grab.SubABP_Grab_C.OnBoneOverlap
struct USubABP_Grab_C_OnBoneOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SubABP_Grab.SubABP_Grab_C.ExecuteUbergraph_SubABP_Grab
struct USubABP_Grab_C_ExecuteUbergraph_SubABP_Grab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

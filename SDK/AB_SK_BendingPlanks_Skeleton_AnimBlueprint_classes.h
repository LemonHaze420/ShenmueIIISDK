#pragma once

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_SK_BendingPlanks_Skeleton_AnimBlueprint.AB_SK_BendingPlanks_Skeleton_AnimBlueprint_C
// 0x0374 (0x06D4 - 0x0360)
class UAB_SK_BendingPlanks_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9CF71E5A401F22D2E753DD8700036D53;      // 0x0368(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2DDEA6074A599F44AD8BA8AF12D4F33D;// 0x03B0(0x0160)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_01BB2BE34B3A9868D2ACBAB522398BF1;// 0x0510(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CAB179704225D7648785FAB3686478B5;// 0x0558(0x0160)
	struct FRotator                                    RotationLeft;                                             // 0x06B8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RotationRight;                                            // 0x06C4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Alpha;                                                    // 0x06D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_SK_BendingPlanks_Skeleton_AnimBlueprint.AB_SK_BendingPlanks_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void STATIC_GetAlpha(float* Alpha);
	void STATIC_SetAlpha(float Alpha);
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_BendingPlanks_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_CAB179704225D7648785FAB3686478B5();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_BendingPlanks_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_2DDEA6074A599F44AD8BA8AF12D4F33D();
	void STATIC_ExecuteUbergraph_AB_SK_BendingPlanks_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

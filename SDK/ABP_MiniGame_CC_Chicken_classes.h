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

// AnimBlueprintGeneratedClass ABP_MiniGame_CC_Chicken.ABP_MiniGame_CC_Chicken_C
// 0x0478 (0x07D8 - 0x0360)
class UABP_MiniGame_CC_Chicken_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0A1D91BD40D8EC6792824F8717A47327;      // 0x0368(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_39DD18754A3FDAEED00EC1B0F1C76BF7;      // 0x03B0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13D0CB8B4EDB8DA33E95298F58F87B5A;// 0x0420(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_842270184BBB82C5E8BDCB9A681DA62D;// 0x04D0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_30A0372049E9165668375C8298EA95F5;// 0x0580(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_6199A76F4BFDBDC8A1688D9981DB7322;// 0x0630(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1FE28AF34C0B57553F05A99933807461;// 0x0710(0x00B0)
	TEnumAsByte<E_MiniGame_CC_ChickenState>            OwnerState;                                               // 0x07C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x07C1(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           IdleSequence;                                             // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Walkequence;                                              // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_MiniGame_CC_Chicken.ABP_MiniGame_CC_Chicken_C");
		return ptr;
	}


	void SetMiniGameMode(bool Enabled);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Chicken_AnimGraphNode_BlendListByEnum_6199A76F4BFDBDC8A1688D9981DB7322();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Chicken_AnimGraphNode_SequencePlayer_1FE28AF34C0B57553F05A99933807461();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Chicken_AnimGraphNode_SequencePlayer_30A0372049E9165668375C8298EA95F5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Chicken_AnimGraphNode_SequencePlayer_13D0CB8B4EDB8DA33E95298F58F87B5A();
	void STATIC_BlueprintUpdateAnimation(float DeltaTimeX);
	void STATIC_ExecuteUbergraph_ABP_MiniGame_CC_Chicken(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

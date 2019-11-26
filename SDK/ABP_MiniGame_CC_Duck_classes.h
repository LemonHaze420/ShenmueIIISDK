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

// AnimBlueprintGeneratedClass ABP_MiniGame_CC_Duck.ABP_MiniGame_CC_Duck_C
// 0x0461 (0x07C1 - 0x0360)
class UABP_MiniGame_CC_Duck_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F8B1683F44D12B55C003C1B4E6B20FF8;      // 0x0368(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_397C03F1455DC251580F1393501CF7FC;      // 0x03B0(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_3F97BCD44582ACD8DB7DA8BC89A37FCD;// 0x0420(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2F69FCFC482B06E3369836953F5CF324;// 0x0500(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0AFD55184D74730BD7ABAEA33BB109ED;// 0x05B0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_68D3B5BF4DB50EEE7CD035B865B96774;// 0x0660(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E0469B7248CDD9C8F63E97B5374BB67A;// 0x0710(0x00B0)
	TEnumAsByte<E_MiniGame_CC_ChickenState>            OwnerState;                                               // 0x07C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_MiniGame_CC_Duck.ABP_MiniGame_CC_Duck_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Duck_AnimGraphNode_BlendListByEnum_3F97BCD44582ACD8DB7DA8BC89A37FCD();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_MiniGame_CC_Duck(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

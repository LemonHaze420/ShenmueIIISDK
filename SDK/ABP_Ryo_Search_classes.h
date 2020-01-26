#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Ryo_Search.ABP_Ryo_Search_C
// 0x06C0 (0x0A20 - 0x0360)
class UABP_Ryo_Search_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_84FBBA484356032851E8B1B7FB720641;      // 0x0368(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0FA491DC419B7536979E969C4D2A3B14;      // 0x03B0(0x0070)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_62AACEF94B14C803CF78EBA61DC4FD14;// 0x0420(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_AACC3F9645372796A8F78697FAA7A824;// 0x0468(0x0048)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_D3B7183C44A2357A7A067ABB493551C8;    // 0x04B0(0x0220)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4FF9AC21473D5CB718766A87FFEDCFE0;// 0x06D0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7D41B50A4CB6689CE5A8358402C93F68;// 0x07A0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F1339BF240D63FD865691BA5FBFBCB50;// 0x0850(0x00B0)
	class UAnimSequence*                               __SUBINSTANCE_GrabSequence_4889FEEC4B464B175CE990AF7FC1FB1D;// 0x0900(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_4889FEEC4B464B175CE990AF7FC1FB1D;// 0x0908(0x00C8)
	struct FTransform                                  HandTransform;                                            // 0x09D0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               DebugIK;                                                  // 0x0A00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Preview;                                                  // 0x0A01(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0A02(0x0006) MISSED OFFSET
	class ABP_SearchArea_C*                            SearchArea;                                               // 0x0A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               PreviewSequence;                                          // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               GrabSequence;                                             // 0x0A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Ryo_Search.ABP_Ryo_Search_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Ryo_Search_AnimGraphNode_SubInstance_4889FEEC4B464B175CE990AF7FC1FB1D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Ryo_Search_AnimGraphNode_BlendListByBool_4FF9AC21473D5CB718766A87FFEDCFE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Ryo_Search_AnimGraphNode_Fabrik_D3B7183C44A2357A7A067ABB493551C8();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_GrabbedItem();
	void AnimNotify_ReleasedItem();
	void AnimNotify_Completed();
	void AnimNotify_LookingAtItem();
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Ryo_Search_AnimGraphNode_SequencePlayer_7D41B50A4CB6689CE5A8358402C93F68();
	void AnimNotify_MoveStart();
	void ExecuteUbergraph_ABP_Ryo_Search(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

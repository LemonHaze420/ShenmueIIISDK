#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_MiniGame_WM_Ryo_re.ABP_MiniGame_WM_Ryo_re_C
// 0x03E0 (0x0740 - 0x0360)
class UABP_MiniGame_WM_Ryo_re_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6378D18A4FE6A0D56A149E932CAC1DE4;      // 0x0368(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FA00389A465E45771CF9218E85EE07C2;      // 0x03B0(0x0070)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_33D580484AD91E2C5402079A80B61198;// 0x0420(0x0160)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_AFA08D2443CA2CA55CE2E8989132D43B;// 0x0580(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A99CA9164354AB4879D7ED9F0B4177D3;// 0x05C8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_CFFE93D24228543E52D83C8FF436CC11;// 0x0610(0x0128)
	float                                              Power;                                                    // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HandNeckPower;                                            // 0x073C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_MiniGame_WM_Ryo_re.ABP_MiniGame_WM_Ryo_re_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_WM_Ryo_re_AnimGraphNode_BlendSpacePlayer_CFFE93D24228543E52D83C8FF436CC11();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_WM_Ryo_re_AnimGraphNode_ModifyBone_33D580484AD91E2C5402079A80B61198();
	void ExecuteUbergraph_ABP_MiniGame_WM_Ryo_re(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

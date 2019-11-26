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

// AnimBlueprintGeneratedClass PPABP_Ryo.PPABP_Ryo_C
// 0x2A30 (0x2DC0 - 0x0390)
class UPPABP_Ryo_C : public US3PostProcessAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_823F0AD04599048B79CB0F86F4C3FDB6;// 0x0398(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_67C65606471D0BEAF2E4938719326D07;// 0x03E0(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_306A308E4454C6CE8F135489AD674250;// 0x0430(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0D9A6CBC47D2BC3D6B13968870DE14C3;// 0x07B0(0x0380)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_670354A04151F3574DB83EBE9060E97F;  // 0x0B30(0x0068)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0B98(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_109DD06841C933E3291CC0A7FFDD04B2;// 0x0BA0(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_21794F504BC6438621DE8E88EE0AAC19;// 0x0F20(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_DD8D54C04AA9088F58587581B76C3200;// 0x12A0(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_EB0EE10A4EB0378F51749EB8FAB02258;// 0x1620(0x0380)
	struct FAnimNode_Root                              AnimGraphNode_Root_F841D5E4424CDB4846BAA183A16EFB73;      // 0x19A0(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_589F587A496748E71EFB79B0EDC36470;// 0x19E8(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3752A7034B01DD951E2F44BC11475EB7;// 0x1AB8(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B60B1DF341433E4C57A1BB83BCA2844C;// 0x1B98(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_31A2085349400F57AAAABCAD83019C99;// 0x1BE8(0x0050)
	unsigned char                                      UnknownData02[0x8];                                       // 0x1C38(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_DBABBB4B45F3CE9E60F2AA94CB5D294F;// 0x1C40(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9EAE9E9A4E4F73F2AD956DB22BCA26F0;// 0x1FC0(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_27D6E30442BE8F9CDDC9CE84595D7F5B;// 0x2340(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1882EE35462FAC8B442D57B340793292;// 0x26C0(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0E1DA0F947B20D97F23658AD6F942686;// 0x2A40(0x0380)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass PPABP_Ryo.PPABP_Ryo_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Ryo_AnimGraphNode_AnimDynamics_27D6E30442BE8F9CDDC9CE84595D7F5B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Ryo_AnimGraphNode_AnimDynamics_1882EE35462FAC8B442D57B340793292();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Ryo_AnimGraphNode_AnimDynamics_0E1DA0F947B20D97F23658AD6F942686();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Ryo_AnimGraphNode_AnimDynamics_9EAE9E9A4E4F73F2AD956DB22BCA26F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Ryo_AnimGraphNode_AnimDynamics_DBABBB4B45F3CE9E60F2AA94CB5D294F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Ryo_AnimGraphNode_BlendListByBool_589F587A496748E71EFB79B0EDC36470();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Ryo_AnimGraphNode_AnimDynamics_EB0EE10A4EB0378F51749EB8FAB02258();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Ryo_AnimGraphNode_AnimDynamics_DD8D54C04AA9088F58587581B76C3200();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Ryo_AnimGraphNode_AnimDynamics_21794F504BC6438621DE8E88EE0AAC19();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Ryo_AnimGraphNode_AnimDynamics_109DD06841C933E3291CC0A7FFDD04B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Ryo_AnimGraphNode_AnimDynamics_0D9A6CBC47D2BC3D6B13968870DE14C3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Ryo_AnimGraphNode_AnimDynamics_306A308E4454C6CE8F135489AD674250();
	void ExecuteUbergraph_PPABP_Ryo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

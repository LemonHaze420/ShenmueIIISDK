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

// AnimBlueprintGeneratedClass ABP_ForkliftRyo_Mini.ABP_ForkliftRyo_Mini_C
// 0x0180 (0x04E0 - 0x0360)
class UABP_ForkliftRyo_Mini_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_35E179CB4EC4714DD84260831E1445A7;      // 0x0368(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_77637F44424AB5D4B5FB2B92248024BE;// 0x03B0(0x0128)
	float                                              Alpha;                                                    // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SteeringRate;                                             // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_ForkliftRyo_Mini.ABP_ForkliftRyo_Mini_C");
		return ptr;
	}


	void SetSteeringAnimRate(float SteeringRate);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ForkliftRyo_Mini_AnimGraphNode_BlendSpacePlayer_77637F44424AB5D4B5FB2B92248024BE();
	void ExecuteUbergraph_ABP_ForkliftRyo_Mini(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

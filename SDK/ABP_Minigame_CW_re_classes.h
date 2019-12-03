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

// AnimBlueprintGeneratedClass ABP_Minigame_CW_re.ABP_Minigame_CW_re_C
// 0x06B5 (0x0A15 - 0x0360)
class UABP_Minigame_CW_re_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8D7C2C7043C7D4FA28E42CB425304A69;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_44DD933C48EDFE26360EE69F3B52C8C1;// 0x03B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_78DB1AC64A2D825264665D8541E4386A;// 0x03F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B1A11A0348B8211C2A3BDEA2736F4C62;// 0x0440(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E8ED7E2A4C3D13EE104C91B460A1BE86;// 0x0488(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_77D2C573477B56AFFCA0BA944C3C7DFA;// 0x04D0(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_387C848C477F60B2052C67BDB8CD0209;// 0x05F8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_51FF15F941338418DFAEEC84A016A06B;// 0x0640(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BAA431024E07CD294D0171A47B171997;// 0x0768(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F8A2059445D7D1B65002109FFC68AD45;// 0x07B0(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E87B7D734B3EE15B797FEB84539165BE;// 0x08D8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3FA987BF4884AE6CCD9DBEB4CF869178;// 0x0920(0x00E0)
	float                                              Xmove;                                                    // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Ymove;                                                    // 0x0A04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGetWood;                                                 // 0x0A08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0A09(0x0003) MISSED OFFSET
	float                                              Angle;                                                    // 0x0A0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GetWoodPlayRate;                                          // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInitialize;                                              // 0x0A14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Minigame_CW_re.ABP_Minigame_CW_re_C");
		return ptr;
	}


	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minigame_CW_re_AnimGraphNode_TransitionResult_78DB1AC64A2D825264665D8541E4386A();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minigame_CW_re_AnimGraphNode_TransitionResult_B1A11A0348B8211C2A3BDEA2736F4C62();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minigame_CW_re_AnimGraphNode_TransitionResult_E8ED7E2A4C3D13EE104C91B460A1BE86();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minigame_CW_re_AnimGraphNode_BlendSpacePlayer_77D2C573477B56AFFCA0BA944C3C7DFA();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minigame_CW_re_AnimGraphNode_TransitionResult_44DD933C48EDFE26360EE69F3B52C8C1();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minigame_CW_re_AnimGraphNode_BlendSpacePlayer_51FF15F941338418DFAEEC84A016A06B();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minigame_CW_re_AnimGraphNode_BlendSpacePlayer_F8A2059445D7D1B65002109FFC68AD45();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void PlayGetWoodMotion(float Angle);
	void STATIC_AnimNotify_ReturnEnd();
	void STATIC_AnimNotify_ChangeStateFromGetWood();
	void STATIC_AnimNotify_ChangeStateFromReturn();
	void STATIC_AnimNotify_TransitionFromReturn();
	void STATIC_ExecuteUbergraph_ABP_Minigame_CW_re(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

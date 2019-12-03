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

// BlueprintGeneratedClass BP_MiniGame_KungFuBase_Input.BP_MiniGame_KungFuBase_Input_C
// 0x000E (0x0350 - 0x0342)
class ABP_MiniGame_KungFuBase_Input_C : public ABP_MiniGameInputBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_KungFuBase_Input.BP_MiniGame_KungFuBase_Input_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_MG_Top_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_MG_Bottom_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_5(const struct FKey& Key);
	void STATIC_ExecuteUbergraph_BP_MiniGame_KungFuBase_Input(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

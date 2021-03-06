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

// BlueprintGeneratedClass BP_CW_Input.BP_CW_Input_C
// 0x000E (0x0350 - 0x0342)
class ABP_CW_Input_C : public ABP_MiniGameInputBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CW_Input.BP_CW_Input_C");
		return ptr;
	}


	void IsDebugSound(bool* IsDebugSound);
	void UserConstructionScript();
	void InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_MG_Top_K2Node_InputActionEvent_13(struct FKey* Key);
	void InpActEvt_MG_Bottom_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_MG_Right_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_MG_Right_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_MG_Left_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_MG_Left_K2Node_InputActionEvent_8(const struct FKey& Key);
	void ExecuteUbergraph_BP_CW_Input(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

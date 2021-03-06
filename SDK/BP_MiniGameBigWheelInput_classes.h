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

// BlueprintGeneratedClass BP_MiniGameBigWheelInput.BP_MiniGameBigWheelInput_C
// 0x000E (0x0350 - 0x0342)
class ABP_MiniGameBigWheelInput_C : public ABP_MiniGameInputBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGameBigWheelInput.BP_MiniGameBigWheelInput_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_3(const struct FKey& Key);
	void ExecuteUbergraph_BP_MiniGameBigWheelInput(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

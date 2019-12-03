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

// BlueprintGeneratedClass BP_MiniGame_Sunken_Input.BP_MiniGame_Sunken_Input_C
// 0x0008 (0x0358 - 0x0350)
class ABP_MiniGame_Sunken_Input_C : public ABP_MiniGame_KungFuBase_Input_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_Sunken_Input.BP_MiniGame_Sunken_Input_C");
		return ptr;
	}


	void UserConstructionScript();
	void STATIC_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_2(const struct FKey& Key);
	void STATIC_ExecuteUbergraph_BP_MiniGame_Sunken_Input(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

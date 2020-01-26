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

// BlueprintGeneratedClass SL_Chobu_DBG.SL_Chobu_DBG_C
// 0x0009 (0x0339 - 0x0330)
class ASL_Chobu_DBG_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	bool                                               WarningorGameover;                                        // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SL_Chobu_DBG.SL_Chobu_DBG_C");
		return ptr;
	}


	void InpActEvt_Five_K2Node_InputKeyEvent_22(const struct FKey& Key);
	void InpActEvt_Four_K2Node_InputKeyEvent_21(const struct FKey& Key);
	void InpActEvt_Eight_K2Node_InputKeyEvent_20(const struct FKey& Key);
	void InpActEvt_Ctrl_NumPadTwo_K2Node_InputKeyEvent_19(const struct FKey& Key);
	void InpActEvt_Ctrl_NumPadOne_K2Node_InputKeyEvent_18(const struct FKey& Key);
	void InpActEvt_Ctrl_NumPadTwo_K2Node_InputKeyEvent_17(const struct FKey& Key);
	void InpActEvt_Ctrl_NumPadThree_K2Node_InputKeyEvent_16(const struct FKey& Key);
	void InpActEvt_Ctrl_NumPadFour_K2Node_InputKeyEvent_15(const struct FKey& Key);
	void InpActEvt_Ctrl_NumPadFive_K2Node_InputKeyEvent_14(const struct FKey& Key);
	void InpActEvt_Ctrl_NumPadSix_K2Node_InputKeyEvent_13(const struct FKey& Key);
	void InpActEvt_R_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SL_Chobu_DBG(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

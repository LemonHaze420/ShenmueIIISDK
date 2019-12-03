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

// BlueprintGeneratedClass BP_CheatManagerBase.BP_CheatManagerBase_C
// 0x0008 (0x0090 - 0x0088)
class UBP_CheatManagerBase_C : public US3CheatManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0088(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CheatManagerBase.BP_CheatManagerBase_C");
		return ptr;
	}


	void STATIC_InitAdventureDebugMenus(class ABP_S3CharacterBase_C* Character);
	void STATIC_OnInputKey_O();
	void STATIC_OnInputKey_Cmd_Insert();
	void STATIC_OnInputKey_CmdShiftPageUp();
	void STATIC_OnInputKey_CmdShiftPageDown();
	void STATIC_OnInputKey_CmdPageUp();
	void STATIC_OnInputKey_CmdPageDown();
	void STATIC_OnInputKey_CmdAltPageUp();
	void STATIC_OnInputKey_CmdAltPageDown();
	void STATIC_OnInputKey_CmdAltInsert();
	void OnKeyInput_3();
	void STATIC_OnInputKey_P();
	void OnKeyInput_2();
	void STATIC_OnKeyInput_Num_Plus();
	void STATIC_OnKeyInput_Num_Minus();
	void STATIC_OnKeyInput_L();
	void STATIC_OnInputKey_Alt_Shift_L();
	void STATIC_OnInputKey_Alt_L();
	void STATIC_OnKeyInput_Pause();
	void STATIC_OnKeyInput_F9Ctrl();
	void STATIC_OnKeyInput_F10();
	void STATIC_OnInputAction_DebugView();
	void STATIC_OnInput_RightShoulder();
	void STATIC_OnInput_LeftShoulder();
	void STATIC_OnInput_DpadLeft();
	void STATIC_OnKeyInput_E();
	void STATIC_OnKeyInput_Q();
	void STATIC_OnKeyInput_ShiftQ();
	void STATIC_OnKeyInput_T();
	void STATIC_OnKeyInput_U();
	void STATIC_OnKeyInput_SpecialRight();
	void OnKeyInput_Y();
	void STATIC_OnKeyInput_CtrlY();
	void OnInputKey_V();
	void STATIC_OnKeyInput_F();
	void OnKeyInput_Z();
	void OnKeyInput_AltB();
	void STATIC_OnKeyInput_D();
	void ReceiveInitCheatManager();
	void OnKeyInputSemicolon();
	void STATIC_DelayRemoveAllWidgets();
	void STATIC_OnKeyInput_ShiftT();
	void OnKeyInput_AltT();
	void OnKeyInput_CtrlT();
	void STATIC_ExecuteUbergraph_BP_CheatManagerBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

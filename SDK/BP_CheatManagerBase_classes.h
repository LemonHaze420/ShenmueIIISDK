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


	void InitAdventureDebugMenus(class ABP_S3CharacterBase_C* Character);
	void OnInputKey_O();
	void OnInputKey_Cmd_Insert();
	void OnInputKey_CmdShiftPageUp();
	void OnInputKey_CmdShiftPageDown();
	void OnInputKey_CmdPageUp();
	void OnInputKey_CmdPageDown();
	void OnInputKey_CmdAltPageUp();
	void OnInputKey_CmdAltPageDown();
	void OnInputKey_CmdAltInsert();
	void OnKeyInput_3();
	void OnInputKey_P();
	void OnKeyInput_2();
	void OnKeyInput_Num_();
	void OnKeyInput_Num_();
	void OnKeyInput_L();
	void OnInputKey_Alt_Shift_L();
	void OnInputKey_Alt_L();
	void OnKeyInput_Pause();
	void OnKeyInput_F9Ctrl();
	void OnKeyInput_F10();
	void OnInputAction_DebugView();
	void OnInput_RightShoulder();
	void OnInput_LeftShoulder();
	void OnInput_DpadLeft();
	void OnKeyInput_E();
	void OnKeyInput_Q();
	void OnKeyInput_ShiftQ();
	void OnKeyInput_T();
	void OnKeyInput_U();
	void OnKeyInput_SpecialRight();
	void OnKeyInput_Y();
	void OnKeyInput_CtrlY();
	void OnInputKey_V();
	void OnKeyInput_F();
	void OnKeyInput_Z();
	void OnKeyInput_AltB();
	void OnKeyInput_D();
	void ReceiveInitCheatManager();
	void OnKeyInputSemicolon();
	void DelayRemoveAllWidgets();
	void OnKeyInput_ShiftT();
	void OnKeyInput_AltT();
	void OnKeyInput_CtrlT();
	void ExecuteUbergraph_BP_CheatManagerBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

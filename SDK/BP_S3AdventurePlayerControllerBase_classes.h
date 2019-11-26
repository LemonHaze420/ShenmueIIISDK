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

// BlueprintGeneratedClass BP_S3AdventurePlayerControllerBase.BP_S3AdventurePlayerControllerBase_C
// 0x0010 (0x0740 - 0x0730)
class ABP_S3AdventurePlayerControllerBase_C : public AS3AdventurePlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0730(0x0008) (Transient, DuplicateTransient)
	class ABP_ExitActor_C*                             ExitActor;                                                // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3AdventurePlayerControllerBase.BP_S3AdventurePlayerControllerBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_debugView_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_P_K2Node_InputKeyEvent_70(const struct FKey& Key);
	void InpActEvt_O_K2Node_InputKeyEvent_69(const struct FKey& Key);
	void InpActEvt_Cmd_Insert_K2Node_InputKeyEvent_68(const struct FKey& Key);
	void InpActEvt_Cmd_Shift_PageUp_K2Node_InputKeyEvent_67(const struct FKey& Key);
	void InpActEvt_Cmd_Shift_PageDown_K2Node_InputKeyEvent_66(const struct FKey& Key);
	void InpActEvt_Cmd_PageUp_K2Node_InputKeyEvent_65(const struct FKey& Key);
	void InpActEvt_Cmd_PageDown_K2Node_InputKeyEvent_64(const struct FKey& Key);
	void InpActEvt_Cmd_Alt_PageUp_K2Node_InputKeyEvent_63(const struct FKey& Key);
	void InpActEvt_Cmd_Alt_PageDown_K2Node_InputKeyEvent_62(const struct FKey& Key);
	void InpActEvt_Cmd_Alt_Insert_K2Node_InputKeyEvent_61(const struct FKey& Key);
	void InpActEvt_Two_K2Node_InputKeyEvent_60(const struct FKey& Key);
	void InpActEvt_One_K2Node_InputKeyEvent_59(const struct FKey& Key);
	void InpActEvt_Add_K2Node_InputKeyEvent_58(const struct FKey& Key);
	void InpActEvt_Subtract_K2Node_InputKeyEvent_57(const struct FKey& Key);
	void InpActEvt_L_K2Node_InputKeyEvent_56(const struct FKey& Key);
	void InpActEvt_Alt_L_K2Node_InputKeyEvent_55(const struct FKey& Key);
	void InpActEvt_Alt_Shift_L_K2Node_InputKeyEvent_54(const struct FKey& Key);
	void InpActEvt_Pause_K2Node_InputKeyEvent_53(const struct FKey& Key);
	void InpActEvt_Ctrl_F9_K2Node_InputKeyEvent_52(const struct FKey& Key);
	void InpActEvt_F10_K2Node_InputKeyEvent_51(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_50(const struct FKey& Key);
	void InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_49(const struct FKey& Key);
	void InpActEvt_E_K2Node_InputKeyEvent_48(const struct FKey& Key);
	void InpActEvt_T_K2Node_InputKeyEvent_47(const struct FKey& Key);
	void InpActEvt_U_K2Node_InputKeyEvent_46(const struct FKey& Key);
	void InpActEvt_Y_K2Node_InputKeyEvent_45(const struct FKey& Key);
	void InpActEvt_Ctrl_Y_K2Node_InputKeyEvent_44(const struct FKey& Key);
	void InpActEvt_V_K2Node_InputKeyEvent_43(const struct FKey& Key);
	void InpActEvt_F_K2Node_InputKeyEvent_42(const struct FKey& Key);
	void InpActEvt_Ctrl_T_K2Node_InputKeyEvent_41(const struct FKey& Key);
	void InpActEvt_Z_K2Node_InputKeyEvent_40(const struct FKey& Key);
	void InpActEvt_D_K2Node_InputKeyEvent_39(const struct FKey& Key);
	void InpActEvt_Alt_B_K2Node_InputKeyEvent_38(const struct FKey& Key);
	void InpActEvt_Semicolon_K2Node_InputKeyEvent_37(const struct FKey& Key);
	void InpActEvt_Alt_T_K2Node_InputKeyEvent_36(const struct FKey& Key);
	void InpActEvt_Exit_K2Node_InputActionEvent_3(const struct FKey& Key);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_S3AdventurePlayerControllerBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

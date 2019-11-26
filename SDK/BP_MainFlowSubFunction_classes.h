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

// BlueprintGeneratedClass BP_MainFlowSubFunction.BP_MainFlowSubFunction_C
// 0x0000 (0x0028 - 0x0028)
class UBP_MainFlowSubFunction_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MainFlowSubFunction.BP_MainFlowSubFunction_C");
		return ptr;
	}


	void STATIC_MfSubFunc_CheckHaveItemList(const struct FString& ItemListID, class UObject* __WorldContext, bool* FindResult);
	void STATIC_CheckHaveItemSub(const struct FString& FindID, class UObject* __WorldContext, bool* Find_Result, struct FString* ItemID_Grp);
	void STATIC_MfSubFunc_GetWarnningDay(class UObject* __WorldContext, int* MD_Warning);
	void STATIC_MfSubFunc_GetGameOverDay(class UObject* __WorldContext, int* MD_Gameover);
	void STATIC_MfSubFunc_TriggerPlayerDistance(class ATriggerBox* CheckTrigger, bool Check2D, class UObject* __WorldContext, float* Distance);
	void STATIC_MfSubFunc_CheckHaveItem(const struct FString& item_id, class UObject* __WorldContext, bool* have_item);
	void STATIC_MfSubFunc_MakeItemGet(const struct FName& JumpEventName, const struct FName& CheckItemID, int ControlBit, class UObject* __WorldContext);
	void STATIC_MfSubFunc_CanEvent(class UObject* __WorldContext, bool* Can_Event);
	void STATIC_MfSubFunc_CheckEvent(const struct FName& FindEventName, class UObject* __WorldContext, bool* Find_Result);
	void STATIC_MfSubFunc_ForcedSerchEnd(bool NoCheckBehavior, class UObject* __WorldContext, bool* Exec_Serch_End);
	void STATIC_MfSubFunc_DisableReplaceCutScene(class UObject* __WorldContext);
	void STATIC_MfSubFunc_ResultQteCutScene(class UObject* __WorldContext, bool* Qte_Success);
	void STATIC_MfSubFunc_MakeTrgAttention_UnSave(const struct FName& JumpEventName, const struct FString& EventId, int ControlBit, class UObject* __WorldContext);
	void STATIC_MfSubFunc_MakeTrgBoxEndEvent_UnSave(class ATriggerBox* TrgBoxName, const struct FName& JumpEventName, int ControlBit, class UObject* __WorldContext);
	void STATIC_MfSubFunc_MakeNopEvent(const struct FName& JumpEventName, class UObject* __WorldContext);
	void STATIC_MfSubFunc_GetEyeCatchText(const struct FName& EyeCatchID, class UObject* __WorldContext, struct FText* Main_Title, struct FText* Sub_Title);
	void STATIC_MfSubFunc_LoadCheckRewardID(unsigned char ID, class UObject* __WorldContext, bool* find_ok);
	void STATIC_MfSubFunc_RemoveRewardID(unsigned char ID, class UObject* __WorldContext);
	void STATIC_MfSubFunc_SaveRewardID(unsigned char ID, class UObject* __WorldContext);
	void STATIC_MfSubFunc_MakeTrgBoxEvent_UnSave(class ATriggerBox* TrgBoxName, const struct FName& JumpEventName, int ControlBit, class UObject* __WorldContext);
	void STATIC_MfSubFunc_MakeFlagChanged(const struct FName& JumpEventName, int OnCheckFlagIndex, int ControlBit, class UObject* __WorldContext);
	void STATIC_MfSubFunc_FindEvent(const struct FName& FindEventName, class UObject* __WorldContext, bool* Find_Result);
	void STATIC_MfSubFunc_MakeNewMessage(const struct FName& JumpEventName, TEnumAsByte<EN_MainFlowMsgDestinationID> Destination_ID, int ControlBit, class UObject* __WorldContext);
	void STATIC_MfSubFunc_CheckBeginInTrgBox(class ATriggerBox* TrgBoxName, class UObject* __WorldContext, bool* BeginIn);
	void STATIC_MfSubFunc_RequestCutScene(const struct FName& CutScene_Name, class UObject* __WorldContext);
	void STATIC_MfSubFunc_StartCutScene(const struct FName& CutsceneName, bool UseFade, const struct FName& StartEventName, const struct FName& EndEventName, class UObject* __WorldContext, bool* Entry_Result);
	void STATIC_MfSubFunc_BitCheck(int CurFlag, int MaskFlag, class UObject* __WorldContext, bool* Bit);
	void STATIC_MfSubFunc_MakeElapsedTime(const struct FName& JumpEventName, float HourLater, int ControlBit, class UObject* __WorldContext);
	void STATIC_MfSubFunc_MakeTrgMemoFinish(const struct FName& JumpEventName, int ControlBit, class UObject* __WorldContext);
	void STATIC_MfSubFunc_MakeTrgAttention(const struct FName& JumpEventName, const struct FString& EventId, int ControlBit, class UObject* __WorldContext);
	void STATIC_MfSubFunc_MakeTrgSphereEndEvent(class ATriggerSphere* TrgSphereName, const struct FName& JumpEventName, int ControlBit, class UObject* __WorldContext);
	void STATIC_MfSubFunc_MakeTrgBoxEndEvent(class ATriggerBox* TrgBoxName, const struct FName& JumpEventName, int ControlBit, class UObject* __WorldContext);
	void STATIC_MfSubFunc_MakeTrgDoorEvent(const struct FName& JumpEventName, const struct FString& DoorName, int ControlBit, class UObject* __WorldContext);
	void STATIC_MfSubFunc_ExecUnbind(const struct FName& JumpEventName, bool Forced_Unbind, class UObject* __WorldContext, bool* ResultUnbind);
	void STATIC_MfSubFunc_MakeTrgSphereEvent(class ATriggerSphere* TrgSphereName, const struct FName& JumpEventName, int ControlBit, class UObject* __WorldContext);
	void STATIC_MfSubFunc_MakeTrgBoxEvent(class ATriggerBox* TrgBoxName, const struct FName& JumpEventName, int ControlBit, class UObject* __WorldContext);
	void STATIC_MfSubFunc_MemoSet(int MemoId, bool FlagValue, class UObject* __WorldContext);
	void STATIC_MfSubFunc_MemoGroupSet(const struct FString& MemoID_Group, bool FlagValue, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

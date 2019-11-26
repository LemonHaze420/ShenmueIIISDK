#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_CheckHaveItemList
struct UBP_MainFlowSubFunction_C_MfSubFunc_CheckHaveItemList_Params
{
	struct FString                                     ItemListID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FindResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.CheckHaveItemSub
struct UBP_MainFlowSubFunction_C_CheckHaveItemSub_Params
{
	struct FString                                     FindID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Find_Result;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemID_Grp;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_GetWarnningDay
struct UBP_MainFlowSubFunction_C_MfSubFunc_GetWarnningDay_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MD_Warning;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_GetGameOverDay
struct UBP_MainFlowSubFunction_C_MfSubFunc_GetGameOverDay_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MD_Gameover;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_TriggerPlayerDistance
struct UBP_MainFlowSubFunction_C_MfSubFunc_TriggerPlayerDistance_Params
{
	class ATriggerBox*                                 CheckTrigger;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Check2D;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_CheckHaveItem
struct UBP_MainFlowSubFunction_C_MfSubFunc_CheckHaveItem_Params
{
	struct FString                                     item_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               have_item;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeItemGet
struct UBP_MainFlowSubFunction_C_MfSubFunc_MakeItemGet_Params
{
	struct FName                                       JumpEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CheckItemID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_CanEvent
struct UBP_MainFlowSubFunction_C_MfSubFunc_CanEvent_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Can_Event;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_CheckEvent
struct UBP_MainFlowSubFunction_C_MfSubFunc_CheckEvent_Params
{
	struct FName                                       FindEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Find_Result;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_ForcedSerchEnd
struct UBP_MainFlowSubFunction_C_MfSubFunc_ForcedSerchEnd_Params
{
	bool                                               NoCheckBehavior;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Exec_Serch_End;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_DisableReplaceCutScene
struct UBP_MainFlowSubFunction_C_MfSubFunc_DisableReplaceCutScene_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_ResultQteCutScene
struct UBP_MainFlowSubFunction_C_MfSubFunc_ResultQteCutScene_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Qte_Success;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgAttention_UnSave
struct UBP_MainFlowSubFunction_C_MfSubFunc_MakeTrgAttention_UnSave_Params
{
	struct FName                                       JumpEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgBoxEndEvent_UnSave
struct UBP_MainFlowSubFunction_C_MfSubFunc_MakeTrgBoxEndEvent_UnSave_Params
{
	class ATriggerBox*                                 TrgBoxName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       JumpEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeNopEvent
struct UBP_MainFlowSubFunction_C_MfSubFunc_MakeNopEvent_Params
{
	struct FName                                       JumpEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_GetEyeCatchText
struct UBP_MainFlowSubFunction_C_MfSubFunc_GetEyeCatchText_Params
{
	struct FName                                       EyeCatchID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Main_Title;                                               // (Parm, OutParm)
	struct FText                                       Sub_Title;                                                // (Parm, OutParm)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_LoadCheckRewardID
struct UBP_MainFlowSubFunction_C_MfSubFunc_LoadCheckRewardID_Params
{
	unsigned char                                      ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               find_ok;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_RemoveRewardID
struct UBP_MainFlowSubFunction_C_MfSubFunc_RemoveRewardID_Params
{
	unsigned char                                      ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_SaveRewardID
struct UBP_MainFlowSubFunction_C_MfSubFunc_SaveRewardID_Params
{
	unsigned char                                      ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgBoxEvent_UnSave
struct UBP_MainFlowSubFunction_C_MfSubFunc_MakeTrgBoxEvent_UnSave_Params
{
	class ATriggerBox*                                 TrgBoxName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       JumpEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeFlagChanged
struct UBP_MainFlowSubFunction_C_MfSubFunc_MakeFlagChanged_Params
{
	struct FName                                       JumpEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OnCheckFlagIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_FindEvent
struct UBP_MainFlowSubFunction_C_MfSubFunc_FindEvent_Params
{
	struct FName                                       FindEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Find_Result;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeNewMessage
struct UBP_MainFlowSubFunction_C_MfSubFunc_MakeNewMessage_Params
{
	struct FName                                       JumpEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_MainFlowMsgDestinationID>           Destination_ID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_CheckBeginInTrgBox
struct UBP_MainFlowSubFunction_C_MfSubFunc_CheckBeginInTrgBox_Params
{
	class ATriggerBox*                                 TrgBoxName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BeginIn;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_RequestCutScene
struct UBP_MainFlowSubFunction_C_MfSubFunc_RequestCutScene_Params
{
	struct FName                                       CutScene_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_StartCutScene
struct UBP_MainFlowSubFunction_C_MfSubFunc_StartCutScene_Params
{
	struct FName                                       CutsceneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseFade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartEventName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       EndEventName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Entry_Result;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_BitCheck
struct UBP_MainFlowSubFunction_C_MfSubFunc_BitCheck_Params
{
	int                                                CurFlag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaskFlag;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bit;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeElapsedTime
struct UBP_MainFlowSubFunction_C_MfSubFunc_MakeElapsedTime_Params
{
	struct FName                                       JumpEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HourLater;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgMemoFinish
struct UBP_MainFlowSubFunction_C_MfSubFunc_MakeTrgMemoFinish_Params
{
	struct FName                                       JumpEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgAttention
struct UBP_MainFlowSubFunction_C_MfSubFunc_MakeTrgAttention_Params
{
	struct FName                                       JumpEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgSphereEndEvent
struct UBP_MainFlowSubFunction_C_MfSubFunc_MakeTrgSphereEndEvent_Params
{
	class ATriggerSphere*                              TrgSphereName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       JumpEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgBoxEndEvent
struct UBP_MainFlowSubFunction_C_MfSubFunc_MakeTrgBoxEndEvent_Params
{
	class ATriggerBox*                                 TrgBoxName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       JumpEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgDoorEvent
struct UBP_MainFlowSubFunction_C_MfSubFunc_MakeTrgDoorEvent_Params
{
	struct FName                                       JumpEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DoorName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_ExecUnbind
struct UBP_MainFlowSubFunction_C_MfSubFunc_ExecUnbind_Params
{
	struct FName                                       JumpEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Forced_Unbind;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ResultUnbind;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgSphereEvent
struct UBP_MainFlowSubFunction_C_MfSubFunc_MakeTrgSphereEvent_Params
{
	class ATriggerSphere*                              TrgSphereName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       JumpEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MakeTrgBoxEvent
struct UBP_MainFlowSubFunction_C_MfSubFunc_MakeTrgBoxEvent_Params
{
	class ATriggerBox*                                 TrgBoxName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       JumpEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MemoSet
struct UBP_MainFlowSubFunction_C_MfSubFunc_MemoSet_Params
{
	int                                                MemoId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FlagValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowSubFunction.BP_MainFlowSubFunction_C.MfSubFunc_MemoGroupSet
struct UBP_MainFlowSubFunction_C_MfSubFunc_MemoGroupSet_Params
{
	struct FString                                     MemoID_Group;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               FlagValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

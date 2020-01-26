#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_MainFlowFunction.BP_MainFlowFunction_C.ChangeCollision
struct UBP_MainFlowFunction_C_ChangeCollision_Params
{
	bool                                               on_off;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Change;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowFunction.BP_MainFlowFunction_C.CheckOccurs
struct UBP_MainFlowFunction_C_CheckOccurs_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowFunction.BP_MainFlowFunction_C.ExecUnbind
struct UBP_MainFlowFunction_C_ExecUnbind_Params
{
};

// Function BP_MainFlowFunction.BP_MainFlowFunction_C.TrgEvent_CanTrgEvent
struct UBP_MainFlowFunction_C_TrgEvent_CanTrgEvent_Params
{
	bool                                               CAN;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowFunction.BP_MainFlowFunction_C.TrgEvent_UnbindOnly
struct UBP_MainFlowFunction_C_TrgEvent_UnbindOnly_Params
{
	bool                                               CarrigeUnbind;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExecUnbind;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowFunction.BP_MainFlowFunction_C.TrgEvent_Exec
struct UBP_MainFlowFunction_C_TrgEvent_Exec_Params
{
	bool                                               rc;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowFunction.BP_MainFlowFunction_C.TrgEvent_Enable
struct UBP_MainFlowFunction_C_TrgEvent_Enable_Params
{
	class UPrimitiveComponent*                         TriggerCompo_Name;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControlStatus;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_MainFlowEventType>                  EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UniqueParameta;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MainFlowFunction.BP_MainFlowFunction_C.TrgEvent_Manager
struct UBP_MainFlowFunction_C_TrgEvent_Manager_Params
{
};

// Function BP_MainFlowFunction.BP_MainFlowFunction_C.CallTrgEvent
struct UBP_MainFlowFunction_C_CallTrgEvent_Params
{
};

// Function BP_MainFlowFunction.BP_MainFlowFunction_C.OnEndOverlap
struct UBP_MainFlowFunction_C_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowFunction.BP_MainFlowFunction_C.DoorNotify
struct UBP_MainFlowFunction_C_DoorNotify_Params
{
};

// Function BP_MainFlowFunction.BP_MainFlowFunction_C.AttentionOnAccprd
struct UBP_MainFlowFunction_C_AttentionOnAccprd_Params
{
	struct FString                                     EventId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MainFlowFunction.BP_MainFlowFunction_C.MemoFinish
struct UBP_MainFlowFunction_C_MemoFinish_Params
{
};

// Function BP_MainFlowFunction.BP_MainFlowFunction_C.ElapsedTime
struct UBP_MainFlowFunction_C_ElapsedTime_Params
{
	struct FName                                       CutsceneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowFunction.BP_MainFlowFunction_C.NewMessage
struct UBP_MainFlowFunction_C_NewMessage_Params
{
	TEnumAsByte<EN_MainFlowMsgDestinationID>           Current_Destination_ID;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowFunction.BP_MainFlowFunction_C.FlagChanged
struct UBP_MainFlowFunction_C_FlagChanged_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowFunction.BP_MainFlowFunction_C.OnBeginOverlap
struct UBP_MainFlowFunction_C_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MainFlowFunction.BP_MainFlowFunction_C.ItemChange
struct UBP_MainFlowFunction_C_ItemChange_Params
{
	struct FName                                       ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowFunction.BP_MainFlowFunction_C.ExecuteUbergraph_BP_MainFlowFunction
struct UBP_MainFlowFunction_C_ExecuteUbergraph_BP_MainFlowFunction_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

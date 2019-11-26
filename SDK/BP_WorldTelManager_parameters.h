#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_WorldTelManager.BP_WorldTelManager_C.CheckCursorMove
struct ABP_WorldTelManager_C_CheckCursorMove_Params
{
	struct FVector2D                                   BeforPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WorldTelManager.BP_WorldTelManager_C.SetAddressBook
struct ABP_WorldTelManager_C_SetAddressBook_Params
{
	class ABP_AddressBook_C*                           AddressBook;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldTelManager.BP_WorldTelManager_C.SetData
struct ABP_WorldTelManager_C_SetData_Params
{
	class ABP_CreateMemoTexture_C*                     newParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldTelManager.BP_WorldTelManager_C.GetUseManager
struct ABP_WorldTelManager_C_GetUseManager_Params
{
	bool                                               UseManager;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldTelManager.BP_WorldTelManager_C.SetUseManager
struct ABP_WorldTelManager_C_SetUseManager_Params
{
	bool                                               UseManager;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldTelManager.BP_WorldTelManager_C.SetAddressBookPageWidgetR
struct ABP_WorldTelManager_C_SetAddressBookPageWidgetR_Params
{
	class Uwgt_AddressPage_1_C*                        AddressBookPageWidgetR;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_WorldTelManager.BP_WorldTelManager_C.SetEnableInput
struct ABP_WorldTelManager_C_SetEnableInput_Params
{
	bool                                               bEnableInput;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldTelManager.BP_WorldTelManager_C.SetAddressBookPageWidgetF
struct ABP_WorldTelManager_C_SetAddressBookPageWidgetF_Params
{
	class Uwgt_AddressPage_0_C*                        AddressBookPageWidgetF;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_WorldTelManager.BP_WorldTelManager_C.UserConstructionScript
struct ABP_WorldTelManager_C_UserConstructionScript_Params
{
};

// Function BP_WorldTelManager.BP_WorldTelManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8
struct ABP_WorldTelManager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WorldTelManager.BP_WorldTelManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_7
struct ABP_WorldTelManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WorldTelManager.BP_WorldTelManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_6
struct ABP_WorldTelManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WorldTelManager.BP_WorldTelManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_5
struct ABP_WorldTelManager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WorldTelManager.BP_WorldTelManager_C.ReceiveTick
struct ABP_WorldTelManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldTelManager.BP_WorldTelManager_C.ChangeSelection
struct ABP_WorldTelManager_C_ChangeSelection_Params
{
	struct FVector2D                                   Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_WorldTelManager.BP_WorldTelManager_C.ReceiveEndPlay
struct ABP_WorldTelManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldTelManager.BP_WorldTelManager_C.SetSelectionWithSound
struct ABP_WorldTelManager_C_SetSelectionWithSound_Params
{
	struct FVector2D                                   NewPos;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_WorldTelManager.BP_WorldTelManager_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_1
struct ABP_WorldTelManager_C_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldTelManager.BP_WorldTelManager_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_2
struct ABP_WorldTelManager_C_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldTelManager.BP_WorldTelManager_C.ExecuteUbergraph_BP_WorldTelManager
struct ABP_WorldTelManager_C_ExecuteUbergraph_BP_WorldTelManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

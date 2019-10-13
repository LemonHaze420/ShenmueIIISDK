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

// Function BW_DebugScriptList.BW_DebugScriptList_C.FindFirstScript
struct UBW_DebugScriptList_C_FindFirstScript_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugScriptList.BW_DebugScriptList_C.GetNPCCharacter
struct UBW_DebugScriptList_C_GetNPCCharacter_Params
{
	class ABP_ScheduleNPC_C*                           NPC;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugScriptList.BW_DebugScriptList_C.GetCheatManager
struct UBW_DebugScriptList_C_GetCheatManager_Params
{
	class UBP_CheatManager_C*                          CheatManager;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugScriptList.BW_DebugScriptList_C.SelectScript
struct UBW_DebugScriptList_C_SelectScript_Params
{
	struct FString                                     ScriptName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BW_DebugScriptList.BW_DebugScriptList_C.CanTalk
struct UBW_DebugScriptList_C_CanTalk_Params
{
	class US3NPCDefinition*                            Definition;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CAN;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugScriptList.BW_DebugScriptList_C.UpdateScriptList
struct UBW_DebugScriptList_C_UpdateScriptList_Params
{
	struct FString                                     CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BW_DebugScriptList.BW_DebugScriptList_C.MakeNPC_List
struct UBW_DebugScriptList_C_MakeNPC_List_Params
{
};

// Function BW_DebugScriptList.BW_DebugScriptList_C.On_NPC_List_GenerateWidget_1
struct UBW_DebugScriptList_C_On_NPC_List_GenerateWidget_1_Params
{
	struct FString                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BW_DebugScriptList.BW_DebugScriptList_C.OnLoaded_DF6DB0F24FB757ADD0DEB9B481A12BEF
struct UBW_DebugScriptList_C_OnLoaded_DF6DB0F24FB757ADD0DEB9B481A12BEF_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugScriptList.BW_DebugScriptList_C.Construct
struct UBW_DebugScriptList_C_Construct_Params
{
};

// Function BW_DebugScriptList.BW_DebugScriptList_C.BndEvt__NPC_List_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
struct UBW_DebugScriptList_C_BndEvt__NPC_List_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugScriptList.BW_DebugScriptList_C.BndEvt__S3Button_0_K2Node_ComponentBoundEvent_121_OnButtonPressedEvent__DelegateSignature
struct UBW_DebugScriptList_C_BndEvt__S3Button_0_K2Node_ComponentBoundEvent_121_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BW_DebugScriptList.BW_DebugScriptList_C.BndEvt__ScriptList_K2Node_ComponentBoundEvent_137_OnSelectionChangedEvent__DelegateSignature
struct UBW_DebugScriptList_C_BndEvt__ScriptList_K2Node_ComponentBoundEvent_137_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugScriptList.BW_DebugScriptList_C.EndTalk
struct UBW_DebugScriptList_C_EndTalk_Params
{
};

// Function BW_DebugScriptList.BW_DebugScriptList_C.BndEvt__FirstButton_K2Node_ComponentBoundEvent_158_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugScriptList_C_BndEvt__FirstButton_K2Node_ComponentBoundEvent_158_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugScriptList.BW_DebugScriptList_C.BndEvt__S3Button_0_K2Node_ComponentBoundEvent_114_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugScriptList_C_BndEvt__S3Button_0_K2Node_ComponentBoundEvent_114_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugScriptList.BW_DebugScriptList_C.ExecuteUbergraph_BW_DebugScriptList
struct UBW_DebugScriptList_C_ExecuteUbergraph_BW_DebugScriptList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

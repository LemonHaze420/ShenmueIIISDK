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

// Function BW_DebugMenu.BW_DebugMenu_C.BuildAchievementMenu
struct UBW_DebugMenu_C_BuildAchievementMenu_Params
{
};

// Function BW_DebugMenu.BW_DebugMenu_C.BuildMenu
struct UBW_DebugMenu_C_BuildMenu_Params
{
	class UObject*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugMenu.BW_DebugMenu_C.IsInputPage
struct UBW_DebugMenu_C_IsInputPage_Params
{
	bool                                               Input;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugMenu.BW_DebugMenu_C.BuildBattleMenu
struct UBW_DebugMenu_C_BuildBattleMenu_Params
{
};

// Function BW_DebugMenu.BW_DebugMenu_C.BuildAutoConversationMenu
struct UBW_DebugMenu_C_BuildAutoConversationMenu_Params
{
};

// Function BW_DebugMenu.BW_DebugMenu_C.UpdCategoryCursor
struct UBW_DebugMenu_C_UpdCategoryCursor_Params
{
};

// Function BW_DebugMenu.BW_DebugMenu_C.SetMode
struct UBW_DebugMenu_C_SetMode_Params
{
	int                                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugMenu.BW_DebugMenu_C.BuildTeleportToNPCMenu
struct UBW_DebugMenu_C_BuildTeleportToNPCMenu_Params
{
};

// Function BW_DebugMenu.BW_DebugMenu_C.BuildCutsceneMenu
struct UBW_DebugMenu_C_BuildCutsceneMenu_Params
{
};

// Function BW_DebugMenu.BW_DebugMenu_C.SetDbgSubFlags
struct UBW_DebugMenu_C_SetDbgSubFlags_Params
{
};

// Function BW_DebugMenu.BW_DebugMenu_C.BuildWatchMenu
struct UBW_DebugMenu_C_BuildWatchMenu_Params
{
};

// Function BW_DebugMenu.BW_DebugMenu_C.OnTeleportClick
struct UBW_DebugMenu_C_OnTeleportClick_Params
{
	class UObject*                                     ContextObject;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugMenu.BW_DebugMenu_C.BuildTeleportMenu
struct UBW_DebugMenu_C_BuildTeleportMenu_Params
{
};

// Function BW_DebugMenu.BW_DebugMenu_C.SetFocus
struct UBW_DebugMenu_C_SetFocus_Params
{
};

// Function BW_DebugMenu.BW_DebugMenu_C.OnKeyDown
struct UBW_DebugMenu_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_DebugMenu.BW_DebugMenu_C.BuildDebugInputMenu
struct UBW_DebugMenu_C_BuildDebugInputMenu_Params
{
};

// Function BW_DebugMenu.BW_DebugMenu_C.OnPreviewKeyDown
struct UBW_DebugMenu_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_DebugMenu.BW_DebugMenu_C.UpdateMode
struct UBW_DebugMenu_C_UpdateMode_Params
{
};

// Function BW_DebugMenu.BW_DebugMenu_C.NextMode
struct UBW_DebugMenu_C_NextMode_Params
{
};

// Function BW_DebugMenu.BW_DebugMenu_C.PrevMode
struct UBW_DebugMenu_C_PrevMode_Params
{
};

// Function BW_DebugMenu.BW_DebugMenu_C.GetModeLabel
struct UBW_DebugMenu_C_GetModeLabel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_DebugMenu.BW_DebugMenu_C.Construct
struct UBW_DebugMenu_C_Construct_Params
{
};

// Function BW_DebugMenu.BW_DebugMenu_C.Tick
struct UBW_DebugMenu_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugMenu.BW_DebugMenu_C.BndEvt__PrevModeButton_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugMenu_C_BndEvt__PrevModeButton_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugMenu.BW_DebugMenu_C.BndEvt__NextModeButton_K2Node_ComponentBoundEvent_148_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugMenu_C_BndEvt__NextModeButton_K2Node_ComponentBoundEvent_148_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugMenu.BW_DebugMenu_C.StartDebugCamera
struct UBW_DebugMenu_C_StartDebugCamera_Params
{
};

// Function BW_DebugMenu.BW_DebugMenu_C.Destruct
struct UBW_DebugMenu_C_Destruct_Params
{
};

// Function BW_DebugMenu.BW_DebugMenu_C.CloseDebugMenu
struct UBW_DebugMenu_C_CloseDebugMenu_Params
{
};

// Function BW_DebugMenu.BW_DebugMenu_C.ToggleFPS
struct UBW_DebugMenu_C_ToggleFPS_Params
{
};

// Function BW_DebugMenu.BW_DebugMenu_C.BndEvt__BW_DebugItemViewer_K2Node_ComponentBoundEvent_0_OnClickedDispatcher__DelegateSignature
struct UBW_DebugMenu_C_BndEvt__BW_DebugItemViewer_K2Node_ComponentBoundEvent_0_OnClickedDispatcher__DelegateSignature_Params
{
};

// Function BW_DebugMenu.BW_DebugMenu_C.OnCategoryClick
struct UBW_DebugMenu_C_OnCategoryClick_Params
{
	class UBW_DebugMenuCategoryButton_C*               Clicked;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BW_DebugMenu.BW_DebugMenu_C.CustomEvent
struct UBW_DebugMenu_C_CustomEvent_Params
{
};

// Function BW_DebugMenu.BW_DebugMenu_C.ExecuteUbergraph_BW_DebugMenu
struct UBW_DebugMenu_C_ExecuteUbergraph_BW_DebugMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

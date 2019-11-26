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

// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.GetMeshName
struct UWBP_DebugTeleportToNPCList_C_GetMeshName_Params
{
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MeshName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.FindNPC_fromMesh
struct UWBP_DebugTeleportToNPCList_C_FindNPC_fromMesh_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FName                                       CharaId;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.UpdateFocus
struct UWBP_DebugTeleportToNPCList_C_UpdateFocus_Params
{
};

// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.SetFocusToItem
struct UWBP_DebugTeleportToNPCList_C_SetFocusToItem_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.OnPreviewKeyDown
struct UWBP_DebugTeleportToNPCList_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.BuildTeleportToNPCList
struct UWBP_DebugTeleportToNPCList_C_BuildTeleportToNPCList_Params
{
};

// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.BndEvt__NPCName_K2Node_ComponentBoundEvent_50_OnEditableTextBoxChangedEvent__DelegateSignature
struct UWBP_DebugTeleportToNPCList_C_BndEvt__NPCName_K2Node_ComponentBoundEvent_50_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.Construct
struct UWBP_DebugTeleportToNPCList_C_Construct_Params
{
};

// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.BndEvt__ModeButton_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature
struct UWBP_DebugTeleportToNPCList_C_BndEvt__ModeButton_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_DebugTeleportToNPCList.WBP_DebugTeleportToNPCList_C.ExecuteUbergraph_WBP_DebugTeleportToNPCList
struct UWBP_DebugTeleportToNPCList_C_ExecuteUbergraph_WBP_DebugTeleportToNPCList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

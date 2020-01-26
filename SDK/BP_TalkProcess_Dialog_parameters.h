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

// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.GetDialogStringId
struct UBP_TalkProcess_Dialog_C_GetDialogStringId_Params
{
};

// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.PlaySoundEffect
struct UBP_TalkProcess_Dialog_C_PlaySoundEffect_Params
{
	bool                                               bConfirm;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.MakeDialogParameter
struct UBP_TalkProcess_Dialog_C_MakeDialogParameter_Params
{
	struct FST_GeneralWindowParam                      DialogParam;                                              // (Parm, OutParm)
};

// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.BindRewardScreenEvents
struct UBP_TalkProcess_Dialog_C_BindRewardScreenEvents_Params
{
};

// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.UnbindRewardScreenEvents
struct UBP_TalkProcess_Dialog_C_UnbindRewardScreenEvents_Params
{
};

// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.OnRewardScreenEnd
struct UBP_TalkProcess_Dialog_C_OnRewardScreenEnd_Params
{
};

// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.OnWindowDecide
struct UBP_TalkProcess_Dialog_C_OnWindowDecide_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.OnWindowCancel
struct UBP_TalkProcess_Dialog_C_OnWindowCancel_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.OnWindowClose
struct UBP_TalkProcess_Dialog_C_OnWindowClose_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.BindDialogInput
struct UBP_TalkProcess_Dialog_C_BindDialogInput_Params
{
};

// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.UnbindDialogEvents
struct UBP_TalkProcess_Dialog_C_UnbindDialogEvents_Params
{
};

// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.BindDialogClose
struct UBP_TalkProcess_Dialog_C_BindDialogClose_Params
{
};

// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.Activate
struct UBP_TalkProcess_Dialog_C_Activate_Params
{
};

// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.Update
struct UBP_TalkProcess_Dialog_C_Update_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.Finalize
struct UBP_TalkProcess_Dialog_C_Finalize_Params
{
};

// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.ExecuteUbergraph_BP_TalkProcess_Dialog
struct UBP_TalkProcess_Dialog_C_ExecuteUbergraph_BP_TalkProcess_Dialog_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

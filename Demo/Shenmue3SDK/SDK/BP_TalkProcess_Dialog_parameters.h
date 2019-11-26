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

// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.MakeDialogParameter
struct UBP_TalkProcess_Dialog_C_MakeDialogParameter_Params
{
	struct FST_GeneralWindowParam                      DialogParam;                                              // (Parm, OutParm)
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

// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.OnWindowDecide
struct UBP_TalkProcess_Dialog_C_OnWindowDecide_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.Update
struct UBP_TalkProcess_Dialog_C_Update_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.Activate
struct UBP_TalkProcess_Dialog_C_Activate_Params
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

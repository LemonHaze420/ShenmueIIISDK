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

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.GetPriority
struct ABP_S3ItemSpawnerController_C_GetPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.GetDetectAction
struct ABP_S3ItemSpawnerController_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.GetOwnSearchArea
struct ABP_S3ItemSpawnerController_C_GetOwnSearchArea_Params
{
	class ABP_SearchArea_C*                            SearchArea;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.GetActionSpawnerPos
struct ABP_S3ItemSpawnerController_C_GetActionSpawnerPos_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.GetInputDirection
struct ABP_S3ItemSpawnerController_C_GetInputDirection_Params
{
	float                                              V;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              H;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESearchAreaDirection>                  Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.ForceFindSpawner
struct ABP_S3ItemSpawnerController_C_ForceFindSpawner_Params
{
	class ABP_S3ItemSpawner_C*                         Spawner;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.GetActionSpawner
struct ABP_S3ItemSpawnerController_C_GetActionSpawner_Params
{
	class ABP_S3ItemSpawner_C*                         ActionSpawner;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.LockOnChange
struct ABP_S3ItemSpawnerController_C_LockOnChange_Params
{
	float                                              V;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              H;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.StartAction
struct ABP_S3ItemSpawnerController_C_StartAction_Params
{
	bool                                               ContinuationFlag;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.CalcCameraTransform
struct ABP_S3ItemSpawnerController_C_CalcCameraTransform_Params
{
	class ABP_S3ItemSpawner_C*                         Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.SetSearchStep
struct ABP_S3ItemSpawnerController_C_SetSearchStep_Params
{
	class US3SearchComponent*                          SearchComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bUseFadeEvent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.SetSearchComponent
struct ABP_S3ItemSpawnerController_C_SetSearchComponent_Params
{
	class ABP_S3ItemSpawner_C*                         Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.InitSearchArea
struct ABP_S3ItemSpawnerController_C_InitSearchArea_Params
{
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.NextTargetCheck
struct ABP_S3ItemSpawnerController_C_NextTargetCheck_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ABP_S3ItemSpawner_C*                         NextTarget;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.SwitchTarget
struct ABP_S3ItemSpawnerController_C_SwitchTarget_Params
{
	class ABP_S3ItemSpawner_C*                         NewTarget;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.GetListSize
struct ABP_S3ItemSpawnerController_C_GetListSize_Params
{
	int                                                Size;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.UserConstructionScript
struct ABP_S3ItemSpawnerController_C_UserConstructionScript_Params
{
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_2
struct ABP_S3ItemSpawnerController_C_InpActEvt_SearchRightButton_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.GetItem
struct ABP_S3ItemSpawnerController_C_GetItem_Params
{
	class US3SearchComponent*                          SearchComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.SearchEnd
struct ABP_S3ItemSpawnerController_C_SearchEnd_Params
{
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.ReceiveBeginPlay
struct ABP_S3ItemSpawnerController_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.DecideDetectAction
struct ABP_S3ItemSpawnerController_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.Event_InputEnabled
struct ABP_S3ItemSpawnerController_C_Event_InputEnabled_Params
{
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.Event_DisableInputTransCamera
struct ABP_S3ItemSpawnerController_C_Event_DisableInputTransCamera_Params
{
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.InpAxisEvt_ZoomPanVertical_K2Node_InputAxisEvent_1
struct ABP_S3ItemSpawnerController_C_InpAxisEvt_ZoomPanVertical_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.InpAxisEvt_ZoomPanHorizontal_K2Node_InputAxisEvent_27
struct ABP_S3ItemSpawnerController_C_InpAxisEvt_ZoomPanHorizontal_K2Node_InputAxisEvent_27_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.Event_FadeOnAction
struct ABP_S3ItemSpawnerController_C_Event_FadeOnAction_Params
{
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.AddItemSpawner
struct ABP_S3ItemSpawnerController_C_AddItemSpawner_Params
{
	class AS3ItemSpawner*                              ItemSpawner;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.RemoveItemSpawner
struct ABP_S3ItemSpawnerController_C_RemoveItemSpawner_Params
{
	class AS3ItemSpawner*                              ItemSpawner;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.OnFinishFadeInOnUseFade
struct ABP_S3ItemSpawnerController_C_OnFinishFadeInOnUseFade_Params
{
};

// Function BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C.ExecuteUbergraph_BP_S3ItemSpawnerController
struct ABP_S3ItemSpawnerController_C_ExecuteUbergraph_BP_S3ItemSpawnerController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

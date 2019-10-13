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

// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.IsDisableAttentionState
struct ABP_S3BellTowerAttentionController_C_IsDisableAttentionState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.IsSubtitlePlaying
struct ABP_S3BellTowerAttentionController_C_IsSubtitlePlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.SetForceEventButtonScript
struct ABP_S3BellTowerAttentionController_C_SetForceEventButtonScript_Params
{
	struct FString                                     InScript;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.SetForceEventButtonScriptEnabled
struct ABP_S3BellTowerAttentionController_C_SetForceEventButtonScriptEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.SetCancelInvalid
struct ABP_S3BellTowerAttentionController_C_SetCancelInvalid_Params
{
	bool                                               Invalid;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.IsDetectActionEventEnabled
struct ABP_S3BellTowerAttentionController_C_IsDetectActionEventEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.FinishDispBigIcon
struct ABP_S3BellTowerAttentionController_C_FinishDispBigIcon_Params
{
};

// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.StartDispBigIcon
struct ABP_S3BellTowerAttentionController_C_StartDispBigIcon_Params
{
};

// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.ChangeTarget
struct ABP_S3BellTowerAttentionController_C_ChangeTarget_Params
{
};

// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.InputAction
struct ABP_S3BellTowerAttentionController_C_InputAction_Params
{
	ES3ActionIconType*                                 Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.GetDetectAction
struct ABP_S3BellTowerAttentionController_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.UserConstructionScript
struct ABP_S3BellTowerAttentionController_C_UserConstructionScript_Params
{
};

// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.ReceiveEndPlay
struct ABP_S3BellTowerAttentionController_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.SetSearchStateEnabled
struct ABP_S3BellTowerAttentionController_C_SetSearchStateEnabled_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.DecideDetectAction
struct ABP_S3BellTowerAttentionController_C_DecideDetectAction_Params
{
	ES3ActionIconType*                                 Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.ExecuteUbergraph_BP_S3BellTowerAttentionController
struct ABP_S3BellTowerAttentionController_C_ExecuteUbergraph_BP_S3BellTowerAttentionController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C.OnChangedTargetDispatcher_BellTower__DelegateSignature
struct ABP_S3BellTowerAttentionController_C_OnChangedTargetDispatcher_BellTower__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

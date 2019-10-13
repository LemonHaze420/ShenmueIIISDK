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

// Function BP_UI_RewardWindowManager.BP_UI_RewardWindowManager_C.UserConstructionScript
struct ABP_UI_RewardWindowManager_C_UserConstructionScript_Params
{
};

// Function BP_UI_RewardWindowManager.BP_UI_RewardWindowManager_C.ReceiveBeginPlay
struct ABP_UI_RewardWindowManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_UI_RewardWindowManager.BP_UI_RewardWindowManager_C.FinsihRewardWindow
struct ABP_UI_RewardWindowManager_C_FinsihRewardWindow_Params
{
};

// Function BP_UI_RewardWindowManager.BP_UI_RewardWindowManager_C.AddNotice
struct ABP_UI_RewardWindowManager_C_AddNotice_Params
{
	ES3RewardCategory                                  Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_RewardWindowManager.BP_UI_RewardWindowManager_C.ReceiveEndPlay
struct ABP_UI_RewardWindowManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_RewardWindowManager.BP_UI_RewardWindowManager_C.ExecuteUbergraph_BP_UI_RewardWindowManager
struct ABP_UI_RewardWindowManager_C_ExecuteUbergraph_BP_UI_RewardWindowManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

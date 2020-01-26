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

// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.UpdateGradation
struct ABP_MiniGame_KeihoUI_C_UpdateGradation_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SafeRamge;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.UpdateSafeLineRootRotate
struct ABP_MiniGame_KeihoUI_C_UpdateSafeLineRootRotate_Params
{
	float                                              New_Rotation_X__Roll_;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.InitializeSafeRange
struct ABP_MiniGame_KeihoUI_C_InitializeSafeRange_Params
{
	float                                              Range;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.UpdateStickRotate
struct ABP_MiniGame_KeihoUI_C_UpdateStickRotate_Params
{
	float                                              New_Rotation_X__Roll_;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.UserConstructionScript
struct ABP_MiniGame_KeihoUI_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.Timeline_LineVisiblefade__FinishedFunc
struct ABP_MiniGame_KeihoUI_C_Timeline_LineVisiblefade__FinishedFunc_Params
{
};

// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.Timeline_LineVisiblefade__UpdateFunc
struct ABP_MiniGame_KeihoUI_C_Timeline_LineVisiblefade__UpdateFunc_Params
{
};

// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.ReceiveBeginPlay
struct ABP_MiniGame_KeihoUI_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.SetEnabledLine
struct ABP_MiniGame_KeihoUI_C_SetEnabledLine_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.ExecuteUbergraph_BP_MiniGame_KeihoUI
struct ABP_MiniGame_KeihoUI_C_ExecuteUbergraph_BP_MiniGame_KeihoUI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.SetExperienceAdjustRate
struct UBPC_MiniGame_KungFuFlow_C_SetExperienceAdjustRate_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.IsShowingResultScreen
struct UBPC_MiniGame_KungFuFlow_C_IsShowingResultScreen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.ShowResultScreen
struct UBPC_MiniGame_KungFuFlow_C_ShowResultScreen_Params
{
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.SetEnabledMasterImage
struct UBPC_MiniGame_KungFuFlow_C_SetEnabledMasterImage_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.PlayMaxLevelMasteredAnim
struct UBPC_MiniGame_KungFuFlow_C_PlayMaxLevelMasteredAnim_Params
{
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.UpdateUIKungFuLevelInfo
struct UBPC_MiniGame_KungFuFlow_C_UpdateUIKungFuLevelInfo_Params
{
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.GetCurrentLimitLevel
struct UBPC_MiniGame_KungFuFlow_C_GetCurrentLimitLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.ChangeKungFuNameToNext
struct UBPC_MiniGame_KungFuFlow_C_ChangeKungFuNameToNext_Params
{
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.BindEventSkillCountMax
struct UBPC_MiniGame_KungFuFlow_C_BindEventSkillCountMax_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.SetTimerCurrentRate
struct UBPC_MiniGame_KungFuFlow_C_SetTimerCurrentRate_Params
{
	float                                              TimeRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.AddSkillCount
struct UBPC_MiniGame_KungFuFlow_C_AddSkillCount_Params
{
	int                                                AddCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.GetKungFuLocalizedName
struct UBPC_MiniGame_KungFuFlow_C_GetKungFuLocalizedName_Params
{
	TEnumAsByte<E_MiniGame_KungFuType>                 Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutString;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.SetWidgetArrowSettings
struct UBPC_MiniGame_KungFuFlow_C_SetWidgetArrowSettings_Params
{
	float                                              moveSpeed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MoveTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              IntervalTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.EnabledButtonIconUI
struct UBPC_MiniGame_KungFuFlow_C_EnabledButtonIconUI_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.Finalize
struct UBPC_MiniGame_KungFuFlow_C_Finalize_Params
{
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.UpdateAccumulation
struct UBPC_MiniGame_KungFuFlow_C_UpdateAccumulation_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.BindEventTimeUp
struct UBPC_MiniGame_KungFuFlow_C_BindEventTimeUp_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.Initialize
struct UBPC_MiniGame_KungFuFlow_C_Initialize_Params
{
	bool                                               bUseButtonIcon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFlashButtonAnimIcon;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_MiniGame_KungFuType>                 KungFuType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                KungFuLevel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MiniLevel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  CameraTrans;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.ReceiveTick
struct UBPC_MiniGame_KungFuFlow_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.CallSkillCountMax
struct UBPC_MiniGame_KungFuFlow_C_CallSkillCountMax_Params
{
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.OnResultScreenClose
struct UBPC_MiniGame_KungFuFlow_C_OnResultScreenClose_Params
{
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.ReceiveEndPlay
struct UBPC_MiniGame_KungFuFlow_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.ExecuteUbergraph_BPC_MiniGame_KungFuFlow
struct UBPC_MiniGame_KungFuFlow_C_ExecuteUbergraph_BPC_MiniGame_KungFuFlow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.ResultEndDispacher__DelegateSignature
struct UBPC_MiniGame_KungFuFlow_C_ResultEndDispacher__DelegateSignature_Params
{
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.SkillCountMaxDispacher__DelegateSignature
struct UBPC_MiniGame_KungFuFlow_C_SkillCountMaxDispacher__DelegateSignature_Params
{
};

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.TimeUpDispacher__DelegateSignature
struct UBPC_MiniGame_KungFuFlow_C_TimeUpDispacher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

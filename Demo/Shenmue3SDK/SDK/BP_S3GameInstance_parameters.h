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

// Function BP_S3GameInstance.BP_S3GameInstance_C.InitMemoFlag
struct UBP_S3GameInstance_C_InitMemoFlag_Params
{
	int*                                               Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.ResetTitle
struct UBP_S3GameInstance_C_ResetTitle_Params
{
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.DbgVerifyPlayerBehavior
struct UBP_S3GameInstance_C_DbgVerifyPlayerBehavior_Params
{
	ES3PlayerBehavior                                  Expected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.GetPlayerBehaviorAllowsControl
struct UBP_S3GameInstance_C_GetPlayerBehaviorAllowsControl_Params
{
	bool                                               Allow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.SetGameWeather
struct UBP_S3GameInstance_C_SetGameWeather_Params
{
	EWeatherType                                       NewWeather;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.SetVisibleMinimap
struct UBP_S3GameInstance_C_SetVisibleMinimap_Params
{
	bool                                               IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.SetIsDetectIconAnimShort
struct UBP_S3GameInstance_C_SetIsDetectIconAnimShort_Params
{
	bool                                               IsUse;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.GetIsDetectIconAnimShort
struct UBP_S3GameInstance_C_GetIsDetectIconAnimShort_Params
{
	bool                                               newParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.IsRecollectMoviePlaying
struct UBP_S3GameInstance_C_IsRecollectMoviePlaying_Params
{
	bool                                               IsPlaying;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.GetDevelopText
struct UBP_S3GameInstance_C_GetDevelopText_Params
{
	struct FString                                     Text;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.SetDevelopText
struct UBP_S3GameInstance_C_SetDevelopText_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.toggleDbgHideCutsceneSubtitle
struct UBP_S3GameInstance_C_toggleDbgHideCutsceneSubtitle_Params
{
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.IsDbgHideCutsceneSubtitle
struct UBP_S3GameInstance_C_IsDbgHideCutsceneSubtitle_Params
{
	bool                                               flag;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.IsSheFollow
struct UBP_S3GameInstance_C_IsSheFollow_Params
{
	bool                                               flag;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.IsSheLead
struct UBP_S3GameInstance_C_IsSheLead_Params
{
	bool                                               flag;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.setSheFollowFlag
struct UBP_S3GameInstance_C_setSheFollowFlag_Params
{
	bool                                               flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.setSheLeadFlag
struct UBP_S3GameInstance_C_setSheLeadFlag_Params
{
	bool                                               flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.IsDbgMsgDisp
struct UBP_S3GameInstance_C_IsDbgMsgDisp_Params
{
	bool                                               flag;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.IsSearching
struct UBP_S3GameInstance_C_IsSearching_Params
{
	bool                                               IsSearching;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.IsLoadStreaming
struct UBP_S3GameInstance_C_IsLoadStreaming_Params
{
	bool                                               flag;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.endLoadstreamingMacro
struct UBP_S3GameInstance_C_endLoadstreamingMacro_Params
{
	bool                                               loadFlag;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.startLoadstreamingMacro
struct UBP_S3GameInstance_C_startLoadstreamingMacro_Params
{
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.isFreerun
struct UBP_S3GameInstance_C_isFreerun_Params
{
	bool                                               isFreerun;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.isBattle
struct UBP_S3GameInstance_C_isBattle_Params
{
	bool                                               isBattle;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.getPlayerBehaviorId
struct UBP_S3GameInstance_C_getPlayerBehaviorId_Params
{
	ES3PlayerBehavior                                  PlayerBehaviorId;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.setPlayerBehaviorId
struct UBP_S3GameInstance_C_setPlayerBehaviorId_Params
{
	ES3PlayerBehavior                                  PlayerBehaviorId;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.wrap_gametimeEvent(day)
struct UBP_S3GameInstance_C_wrap_gametimeEvent_day__Params
{
	ES3DayTimeEvent                                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.wrap_gametimeEvent(shop)
struct UBP_S3GameInstance_C_wrap_gametimeEvent_shop__Params
{
	ES3ShopTimeEvent                                   EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.ReceiveInit
struct UBP_S3GameInstance_C_ReceiveInit_Params
{
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.delayBeginPlay
struct UBP_S3GameInstance_C_delayBeginPlay_Params
{
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.ReceiveShutdown
struct UBP_S3GameInstance_C_ReceiveShutdown_Params
{
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.InitReward
struct UBP_S3GameInstance_C_InitReward_Params
{
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.ExecuteUbergraph_BP_S3GameInstance
struct UBP_S3GameInstance_C_ExecuteUbergraph_BP_S3GameInstance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.OnGameShutdown__DelegateSignature
struct UBP_S3GameInstance_C_OnGameShutdown__DelegateSignature_Params
{
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.OnChangeWetRate__DelegateSignature
struct UBP_S3GameInstance_C_OnChangeWetRate__DelegateSignature_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.NotVisibleMinimap__DelegateSignature
struct UBP_S3GameInstance_C_NotVisibleMinimap__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.VisibleMinimap__DelegateSignature
struct UBP_S3GameInstance_C_VisibleMinimap__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.onQTEResult__DelegateSignature
struct UBP_S3GameInstance_C_onQTEResult__DelegateSignature_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.StartCutsceneFromName__DelegateSignature
struct UBP_S3GameInstance_C_StartCutsceneFromName__DelegateSignature_Params
{
	struct FName                                       CutsceneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.onEndLoadstreamingMacro__DelegateSignature
struct UBP_S3GameInstance_C_onEndLoadstreamingMacro__DelegateSignature_Params
{
	bool                                               loadFlag;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.DbgSetMoonPhaseDispatcher__DelegateSignature
struct UBP_S3GameInstance_C_DbgSetMoonPhaseDispatcher__DelegateSignature_Params
{
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.DbgSetCloudDensitytDispatcher__DelegateSignature
struct UBP_S3GameInstance_C_DbgSetCloudDensitytDispatcher__DelegateSignature_Params
{
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.DbgToggleCloudShadowDispatcher__DelegateSignature
struct UBP_S3GameInstance_C_DbgToggleCloudShadowDispatcher__DelegateSignature_Params
{
};

// Function BP_S3GameInstance.BP_S3GameInstance_C.ForceWeatherChangeDispatcher__DelegateSignature
struct UBP_S3GameInstance_C_ForceWeatherChangeDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

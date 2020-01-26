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

// Function BPC_BSComponent.BPC_BSComponent_C.IntToGameTime
struct UBPC_BSComponent_C_IntToGameTime_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GameTime;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_BSComponent.BPC_BSComponent_C.ParseCurrentStepBsSchedule
struct UBPC_BSComponent_C_ParseCurrentStepBsSchedule_Params
{
};

// Function BPC_BSComponent.BPC_BSComponent_C.ResetEventCount
struct UBPC_BSComponent_C_ResetEventCount_Params
{
	int                                                newEventCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_BSComponent.BPC_BSComponent_C.EventOnEnd
struct UBPC_BSComponent_C_EventOnEnd_Params
{
	bool                                               interrupted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_BSComponent.BPC_BSComponent_C.StringToGameTime
struct UBPC_BSComponent_C_StringToGameTime_Params
{
	struct FString                                     Time_String_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsNumeric;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              GameTime;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_BSComponent.BPC_BSComponent_C.ReceiveBeginPlay
struct UBPC_BSComponent_C_ReceiveBeginPlay_Params
{
};

// Function BPC_BSComponent.BPC_BSComponent_C.OnStartBS
struct UBPC_BSComponent_C_OnStartBS_Params
{
};

// Function BPC_BSComponent.BPC_BSComponent_C.InitializeBSTalk
struct UBPC_BSComponent_C_InitializeBSTalk_Params
{
	class US3TalkDataListBase*                         TalkDataList;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_BSComponent.BPC_BSComponent_C.OnStepChanged
struct UBPC_BSComponent_C_OnStepChanged_Params
{
	int                                                SetSteps;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_BSComponent.BPC_BSComponent_C.OnBsEnableScheduleEvent
struct UBPC_BSComponent_C_OnBsEnableScheduleEvent_Params
{
	float                                              receiveTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_BSComponent.BPC_BSComponent_C.OnBsCountScheduleEvent
struct UBPC_BSComponent_C_OnBsCountScheduleEvent_Params
{
	float                                              receiveTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_BSComponent.BPC_BSComponent_C.OnReceiveTimeEvent
struct UBPC_BSComponent_C_OnReceiveTimeEvent_Params
{
	int                                                EventIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_BSComponent.BPC_BSComponent_C.ReceiveEndPlay
struct UBPC_BSComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_BSComponent.BPC_BSComponent_C.ExecuteUbergraph_BPC_BSComponent
struct UBPC_BSComponent_C_ExecuteUbergraph_BPC_BSComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_BSComponent.BPC_BSComponent_C.OnEndTalkEvent__DelegateSignature
struct UBPC_BSComponent_C_OnEndTalkEvent__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.SetRequestOwner
struct UBPC_EventLevelStreaming_C_SetRequestOwner_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.GetRequestOwner
struct UBPC_EventLevelStreaming_C_GetRequestOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.IsDataLevelSet
struct UBPC_EventLevelStreaming_C_IsDataLevelSet_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.StartListLevelLoad
struct UBPC_EventLevelStreaming_C_StartListLevelLoad_Params
{
	TArray<struct FName>                               NeedLevels;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.FinishLevelStreaming
struct UBPC_EventLevelStreaming_C_FinishLevelStreaming_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.StreamDataLevel
struct UBPC_EventLevelStreaming_C_StreamDataLevel_Params
{
	struct FName                                       Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.UnloadLevels
struct UBPC_EventLevelStreaming_C_UnloadLevels_Params
{
};

// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.FinishedUnloadLevel
struct UBPC_EventLevelStreaming_C_FinishedUnloadLevel_Params
{
};

// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.UnloadDataLevelOnly
struct UBPC_EventLevelStreaming_C_UnloadDataLevelOnly_Params
{
};

// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.StartStreaming
struct UBPC_EventLevelStreaming_C_StartStreaming_Params
{
	TArray<struct FName>                               NeedLevels;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.ExecuteUbergraph_BPC_EventLevelStreaming
struct UBPC_EventLevelStreaming_C_ExecuteUbergraph_BPC_EventLevelStreaming_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.OnFinishListLoad__DelegateSignature
struct UBPC_EventLevelStreaming_C_OnFinishListLoad__DelegateSignature_Params
{
};

// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.OnFinishUnload__DelegateSignature
struct UBPC_EventLevelStreaming_C_OnFinishUnload__DelegateSignature_Params
{
};

// Function BPC_EventLevelStreaming.BPC_EventLevelStreaming_C.OnFinishDataLoad__DelegateSignature
struct UBPC_EventLevelStreaming_C_OnFinishDataLoad__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

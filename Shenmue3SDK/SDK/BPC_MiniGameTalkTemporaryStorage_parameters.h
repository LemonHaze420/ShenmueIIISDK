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

// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.AddAcquiredMoney
struct UBPC_MiniGameTalkTemporaryStorage_C_AddAcquiredMoney_Params
{
	int                                                Acquired;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.GetTotalMoney
struct UBPC_MiniGameTalkTemporaryStorage_C_GetTotalMoney_Params
{
	int                                                Money;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.GetPreGameResult
struct UBPC_MiniGameTalkTemporaryStorage_C_GetPreGameResult_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_MiniGameResult>                      Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.GetTotalNumberOfResult
struct UBPC_MiniGameTalkTemporaryStorage_C_GetTotalNumberOfResult_Params
{
	TEnumAsByte<E_MiniGameResult>                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TotalCount;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.GetContinuousResultNumber
struct UBPC_MiniGameTalkTemporaryStorage_C_GetContinuousResultNumber_Params
{
	TEnumAsByte<E_MiniGameResult>                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.GetContinuousPlayCount
struct UBPC_MiniGameTalkTemporaryStorage_C_GetContinuousPlayCount_Params
{
	int                                                PlayCount;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.Finalize
struct UBPC_MiniGameTalkTemporaryStorage_C_Finalize_Params
{
};

// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.Initialize
struct UBPC_MiniGameTalkTemporaryStorage_C_Initialize_Params
{
};

// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.BindMiniGameEvents
struct UBPC_MiniGameTalkTemporaryStorage_C_BindMiniGameEvents_Params
{
	class ABP_MiniGameBase_C*                          MiniGame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.UnbindMiniGameEvents
struct UBPC_MiniGameTalkTemporaryStorage_C_UnbindMiniGameEvents_Params
{
	class ABP_MiniGameBase_C*                          MiniGame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnEndMiniGame
struct UBPC_MiniGameTalkTemporaryStorage_C_OnEndMiniGame_Params
{
	class ABP_MiniGameBase_C*                          SelfMiniGame;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnWinMiniGame
struct UBPC_MiniGameTalkTemporaryStorage_C_OnWinMiniGame_Params
{
	class ABP_MiniGameBase_C*                          SelfMiniGame;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnLoseMiniGame
struct UBPC_MiniGameTalkTemporaryStorage_C_OnLoseMiniGame_Params
{
	class ABP_MiniGameBase_C*                          SelfMiniGame;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnDrawMiniGame
struct UBPC_MiniGameTalkTemporaryStorage_C_OnDrawMiniGame_Params
{
	class ABP_MiniGameBase_C*                          SelfMiniGame;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnStartMiniGame
struct UBPC_MiniGameTalkTemporaryStorage_C_OnStartMiniGame_Params
{
	class ABP_MiniGameBase_C*                          SelfMiniGame;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.OnRestartMiniGame
struct UBPC_MiniGameTalkTemporaryStorage_C_OnRestartMiniGame_Params
{
	class ABP_MiniGameBase_C*                          SelfMiniGame;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameTalkTemporaryStorage.BPC_MiniGameTalkTemporaryStorage_C.ExecuteUbergraph_BPC_MiniGameTalkTemporaryStorage
struct UBPC_MiniGameTalkTemporaryStorage_C_ExecuteUbergraph_BPC_MiniGameTalkTemporaryStorage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

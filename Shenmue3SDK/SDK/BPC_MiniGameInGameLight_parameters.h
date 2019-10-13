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

// Function BPC_MiniGameInGameLight.BPC_MiniGameInGameLight_C.SetEnabled
struct UBPC_MiniGameInGameLight_C_SetEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameInGameLight.BPC_MiniGameInGameLight_C.ReceiveBeginPlay
struct UBPC_MiniGameInGameLight_C_ReceiveBeginPlay_Params
{
};

// Function BPC_MiniGameInGameLight.BPC_MiniGameInGameLight_C.OnStart
struct UBPC_MiniGameInGameLight_C_OnStart_Params
{
	class ABP_MiniGameBase_C*                          SelfMiniGame;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameInGameLight.BPC_MiniGameInGameLight_C.OnEnd
struct UBPC_MiniGameInGameLight_C_OnEnd_Params
{
	class ABP_MiniGameBase_C*                          SelfMiniGame;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameInGameLight.BPC_MiniGameInGameLight_C.ExecuteUbergraph_BPC_MiniGameInGameLight
struct UBPC_MiniGameInGameLight_C_ExecuteUbergraph_BPC_MiniGameInGameLight_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

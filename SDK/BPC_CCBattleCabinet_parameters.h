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

// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.InstantiateProgram
struct UBPC_CCBattleCabinet_C_InstantiateProgram_Params
{
	class UClass*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.FetchRenderTexture
struct UBPC_CCBattleCabinet_C_FetchRenderTexture_Params
{
	class UTextureRenderTarget2D*                      Output_Get;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.SwitchToStaticTexture
struct UBPC_CCBattleCabinet_C_SwitchToStaticTexture_Params
{
};

// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.SwitchToRenderTexture
struct UBPC_CCBattleCabinet_C_SwitchToRenderTexture_Params
{
	class UTextureRenderTarget2D*                      RT;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.OnLoaded_F996630945A905E3751F229F1698409F
struct UBPC_CCBattleCabinet_C_OnLoaded_F996630945A905E3751F229F1698409F_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.SetScreen
struct UBPC_CCBattleCabinet_C_SetScreen_Params
{
	class UStaticMeshComponent*                        Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                MatIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.ReceiveBeginPlay
struct UBPC_CCBattleCabinet_C_ReceiveBeginPlay_Params
{
};

// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.StartRetry
struct UBPC_CCBattleCabinet_C_StartRetry_Params
{
};

// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.OnGameEnd
struct UBPC_CCBattleCabinet_C_OnGameEnd_Params
{
	TEnumAsByte<EBattleWinLoseResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.EndGame
struct UBPC_CCBattleCabinet_C_EndGame_Params
{
};

// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.StartGame
struct UBPC_CCBattleCabinet_C_StartGame_Params
{
};

// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.ReceiveEndPlay
struct UBPC_CCBattleCabinet_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.DisableInput
struct UBPC_CCBattleCabinet_C_DisableInput_Params
{
};

// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.EnableInput
struct UBPC_CCBattleCabinet_C_EnableInput_Params
{
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.ExecuteUbergraph_BPC_CCBattleCabinet
struct UBPC_CCBattleCabinet_C_ExecuteUbergraph_BPC_CCBattleCabinet_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.OnGameCritialError__DelegateSignature
struct UBPC_CCBattleCabinet_C_OnGameCritialError__DelegateSignature_Params
{
};

// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.OnGameShutdown__DelegateSignature
struct UBPC_CCBattleCabinet_C_OnGameShutdown__DelegateSignature_Params
{
};

// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.OnGameOver__DelegateSignature
struct UBPC_CCBattleCabinet_C_OnGameOver__DelegateSignature_Params
{
};

// Function BPC_CCBattleCabinet.BPC_CCBattleCabinet_C.OnGameClear__DelegateSignature
struct UBPC_CCBattleCabinet_C_OnGameClear__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

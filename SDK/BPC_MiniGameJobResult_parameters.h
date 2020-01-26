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

// Function BPC_MiniGameJobResult.BPC_MiniGameJobResult_C.Finalize
struct UBPC_MiniGameJobResult_C_Finalize_Params
{
};

// Function BPC_MiniGameJobResult.BPC_MiniGameJobResult_C.StartResult
struct UBPC_MiniGameJobResult_C_StartResult_Params
{
	struct FText                                       JobTargetOriginalText;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       JobTargetLocalizeText;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       EarningsOriginalText;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       EarningsLocalizeText;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                JobTargetNum;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EarningsNum;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  TargetTexture;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               JobSE;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               ResultSE;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameJobResult.BPC_MiniGameJobResult_C.ReceiveTick
struct UBPC_MiniGameJobResult_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameJobResult.BPC_MiniGameJobResult_C.ExecuteUbergraph_BPC_MiniGameJobResult
struct UBPC_MiniGameJobResult_C_ExecuteUbergraph_BPC_MiniGameJobResult_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameJobResult.BPC_MiniGameJobResult_C.OnEndResultDispacher__DelegateSignature
struct UBPC_MiniGameJobResult_C_OnEndResultDispacher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

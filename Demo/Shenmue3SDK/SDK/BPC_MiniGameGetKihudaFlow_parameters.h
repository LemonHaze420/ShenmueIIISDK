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

// Function BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C.GetSequence
struct UBPC_MiniGameGetKihudaFlow_C_GetSequence_Params
{
	class ABP_MiniGameBase_C*                          MiniGame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              GetSequence;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              LookSequence;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C.StartGetKihudaFlow
struct UBPC_MiniGameGetKihudaFlow_C_StartGetKihudaFlow_Params
{
	struct FTransform                                  OffsetRelativeTrans;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               IsGetMoreTicket;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C.OnFinishedActorFlow
struct UBPC_MiniGameGetKihudaFlow_C_OnFinishedActorFlow_Params
{
};

// Function BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C.ExecuteUbergraph_BPC_MiniGameGetKihudaFlow
struct UBPC_MiniGameGetKihudaFlow_C_ExecuteUbergraph_BPC_MiniGameGetKihudaFlow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C.OnEndComponentFlow__DelegateSignature
struct UBPC_MiniGameGetKihudaFlow_C_OnEndComponentFlow__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

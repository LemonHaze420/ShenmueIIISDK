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

// Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.AddTicketItem
struct ABP_MiniGameGetKihudaFlow_C_AddTicketItem_Params
{
};

// Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.GetTicketItemID
struct ABP_MiniGameGetKihudaFlow_C_GetTicketItemID_Params
{
	TEnumAsByte<E_MiniGameBigWheelType>                Type;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.GetMaterial
struct ABP_MiniGameGetKihudaFlow_C_GetMaterial_Params
{
	TEnumAsByte<E_MiniGameBigWheelType>                Type;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UMaterial*                                   Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.UpdateTicketFlag
struct ABP_MiniGameGetKihudaFlow_C_UpdateTicketFlag_Params
{
};

// Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.SpawnSecuencePlayer
struct ABP_MiniGameGetKihudaFlow_C_SpawnSecuencePlayer_Params
{
	class ULevelSequence*                              InSequence;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AttachActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_SpawnableSequenceActor_C*                SpawnObj;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.UserConstructionScript
struct ABP_MiniGameGetKihudaFlow_C_UserConstructionScript_Params
{
};

// Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.StartGetKihudaFlow
struct ABP_MiniGameGetKihudaFlow_C_StartGetKihudaFlow_Params
{
	struct FTransform                                  OffsetRelativeTrans;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.OnFinishedGetKihuda
struct ABP_MiniGameGetKihudaFlow_C_OnFinishedGetKihuda_Params
{
	class ULevelSequencePlayer*                        LevelSequencePlayer;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.OnStoppedPlayer
struct ABP_MiniGameGetKihudaFlow_C_OnStoppedPlayer_Params
{
};

// Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.ExecuteUbergraph_BP_MiniGameGetKihudaFlow
struct ABP_MiniGameGetKihudaFlow_C_ExecuteUbergraph_BP_MiniGameGetKihudaFlow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameGetKihudaFlow.BP_MiniGameGetKihudaFlow_C.OnEndActorFlow__DelegateSignature
struct ABP_MiniGameGetKihudaFlow_C_OnEndActorFlow__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

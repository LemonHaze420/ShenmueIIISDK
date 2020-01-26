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

// Function BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.InitializeViewMeshComponent
struct ABP_MiniGame_GamblingSignboard_C_InitializeViewMeshComponent_Params
{
	int                                                ViewMeshNum;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBPC_MiniGameBoardNum_C*                     Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.OnObjectLoaded
struct ABP_MiniGame_GamblingSignboard_C_OnObjectLoaded_Params
{
	struct FString                                     LoadId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     LoadedObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.SetNumberPos
struct ABP_MiniGame_GamblingSignboard_C_SetNumberPos_Params
{
};

// Function BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.SetBoardInfoOnePlay
struct ABP_MiniGame_GamblingSignboard_C_SetBoardInfoOnePlay_Params
{
	TEnumAsByte<E_MiniGameGambleType>                  Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OnePlayPrice;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsKihuda;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.SetBoardInfo
struct ABP_MiniGame_GamblingSignboard_C_SetBoardInfo_Params
{
	TEnumAsByte<E_MiniGameGambleType>                  Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OddNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.UserConstructionScript
struct ABP_MiniGame_GamblingSignboard_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.ReceiveBeginPlay
struct ABP_MiniGame_GamblingSignboard_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_GamblingSignboard.BP_MiniGame_GamblingSignboard_C.ExecuteUbergraph_BP_MiniGame_GamblingSignboard
struct ABP_MiniGame_GamblingSignboard_C_ExecuteUbergraph_BP_MiniGame_GamblingSignboard_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

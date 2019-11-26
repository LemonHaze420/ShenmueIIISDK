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

// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.UpdateFishBaseLocation
struct ABP_Fishing_FishShadow_C_UpdateFishBaseLocation_Params
{
	struct FVector                                     BaseLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.CheckBite
struct ABP_Fishing_FishShadow_C_CheckBite_Params
{
	bool                                               ArgBite;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.MoveEnd
struct ABP_Fishing_FishShadow_C_MoveEnd_Params
{
};

// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.MoveStart
struct ABP_Fishing_FishShadow_C_MoveStart_Params
{
	int                                                ArgType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ArgFishNum;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ArgCenterPos;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              BiteWait;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.Init
struct ABP_Fishing_FishShadow_C_Init_Params
{
};

// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.StartInfinitySymbolMove
struct ABP_Fishing_FishShadow_C_StartInfinitySymbolMove_Params
{
	struct FVector                                     ArgBasePos;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.Move_InfinitySymbol
struct ABP_Fishing_FishShadow_C_Move_InfinitySymbol_Params
{
};

// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.UserConstructionScript
struct ABP_Fishing_FishShadow_C_UserConstructionScript_Params
{
};

// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.ReceiveTick
struct ABP_Fishing_FishShadow_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fishing_FishShadow.BP_Fishing_FishShadow_C.ExecuteUbergraph_BP_Fishing_FishShadow
struct ABP_Fishing_FishShadow_C_ExecuteUbergraph_BP_Fishing_FishShadow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

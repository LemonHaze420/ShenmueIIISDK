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

// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.IsBiteMove
struct ABP_Fishing_FreeFish_C_IsBiteMove_Params
{
	bool                                               ArgBite;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.Start_Bite
struct ABP_Fishing_FreeFish_C_Start_Bite_Params
{
};

// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.DebugDispArea
struct ABP_Fishing_FreeFish_C_DebugDispArea_Params
{
};

// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.Move_Bite
struct ABP_Fishing_FreeFish_C_Move_Bite_Params
{
};

// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.CheckBiteStart
struct ABP_Fishing_FreeFish_C_CheckBiteStart_Params
{
};

// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.CheckCenterPos
struct ABP_Fishing_FreeFish_C_CheckCenterPos_Params
{
	struct FVector                                     ArgPos;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     RetPos;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.SetNextMoveVector
struct ABP_Fishing_FreeFish_C_SetNextMoveVector_Params
{
};

// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.GetRandomCirclePos
struct ABP_Fishing_FreeFish_C_GetRandomCirclePos_Params
{
	struct FVector                                     ArgCenterPos;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ArgRadius;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RetPos;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.Start_ReflectionMove
struct ABP_Fishing_FreeFish_C_Start_ReflectionMove_Params
{
};

// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.Move_ReflectionMove
struct ABP_Fishing_FreeFish_C_Move_ReflectionMove_Params
{
};

// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.Init
struct ABP_Fishing_FreeFish_C_Init_Params
{
};

// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.StartInfinitySymbolMove
struct ABP_Fishing_FreeFish_C_StartInfinitySymbolMove_Params
{
	struct FVector                                     ArgBasePos;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.Move_InfinitySymbol
struct ABP_Fishing_FreeFish_C_Move_InfinitySymbol_Params
{
};

// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.UserConstructionScript
struct ABP_Fishing_FreeFish_C_UserConstructionScript_Params
{
};

// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.ReceiveTick
struct ABP_Fishing_FreeFish_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.ReceiveBeginPlay
struct ABP_Fishing_FreeFish_C_ReceiveBeginPlay_Params
{
};

// Function BP_Fishing_FreeFish.BP_Fishing_FreeFish_C.ExecuteUbergraph_BP_Fishing_FreeFish
struct ABP_Fishing_FreeFish_C_ExecuteUbergraph_BP_Fishing_FreeFish_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_MiniGameUnattendedSales.BP_MiniGameUnattendedSales_C.GetHelpName
struct ABP_MiniGameUnattendedSales_C_GetHelpName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameUnattendedSales.BP_MiniGameUnattendedSales_C.GetSightCheckLocation
struct ABP_MiniGameUnattendedSales_C_GetSightCheckLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameUnattendedSales.BP_MiniGameUnattendedSales_C.UserConstructionScript
struct ABP_MiniGameUnattendedSales_C_UserConstructionScript_Params
{
};

// Function BP_MiniGameUnattendedSales.BP_MiniGameUnattendedSales_C.ReceiveBeginPlay
struct ABP_MiniGameUnattendedSales_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGameUnattendedSales.BP_MiniGameUnattendedSales_C.ExecuteUbergraph_BP_MiniGameUnattendedSales
struct ABP_MiniGameUnattendedSales_C_ExecuteUbergraph_BP_MiniGameUnattendedSales_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BTT_CheckEscape.BTT_CheckEscape_C.ReceiveTickAI
struct UBTT_CheckEscape_C_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_CheckEscape.BTT_CheckEscape_C.ReceiveExecuteAI
struct UBTT_CheckEscape_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_CheckEscape.BTT_CheckEscape_C.ExecuteUbergraph_BTT_CheckEscape
struct UBTT_CheckEscape_C_ExecuteUbergraph_BTT_CheckEscape_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

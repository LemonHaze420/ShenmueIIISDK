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

// Function WBP_AR_SupportMeter.WBP_AR_SupportMeter_C.SetFlogNumber
struct UWBP_AR_SupportMeter_C_SetFlogNumber_Params
{
	int                                                Number;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WBP_AR_SupportMeter.WBP_AR_SupportMeter_C.SetTurtleColor
struct UWBP_AR_SupportMeter_C_SetTurtleColor_Params
{
	int                                                SelectIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AR_SupportMeter.WBP_AR_SupportMeter_C.PreConstruct
struct UWBP_AR_SupportMeter_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_AR_SupportMeter.WBP_AR_SupportMeter_C.ExecuteUbergraph_WBP_AR_SupportMeter
struct UWBP_AR_SupportMeter_C_ExecuteUbergraph_WBP_AR_SupportMeter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

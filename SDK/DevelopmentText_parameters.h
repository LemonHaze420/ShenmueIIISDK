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

// Function DevelopmentText.DevelopmentText_C.UpdateDevelopText
struct UDevelopmentText_C_UpdateDevelopText_Params
{
};

// Function DevelopmentText.DevelopmentText_C.UpdateGameTime
struct UDevelopmentText_C_UpdateGameTime_Params
{
};

// Function DevelopmentText.DevelopmentText_C.UpdateACName
struct UDevelopmentText_C_UpdateACName_Params
{
};

// Function DevelopmentText.DevelopmentText_C.GetDevelopText
struct UDevelopmentText_C_GetDevelopText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DevelopmentText.DevelopmentText_C.GetDevelopTextVisibility
struct UDevelopmentText_C_GetDevelopTextVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DevelopmentText.DevelopmentText_C.Construct
struct UDevelopmentText_C_Construct_Params
{
};

// Function DevelopmentText.DevelopmentText_C.Tick
struct UDevelopmentText_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DevelopmentText.DevelopmentText_C.ExecuteUbergraph_DevelopmentText
struct UDevelopmentText_C_ExecuteUbergraph_DevelopmentText_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

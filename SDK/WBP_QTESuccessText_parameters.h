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

// Function WBP_QTESuccessText.WBP_QTESuccessText_C.SetText
struct UWBP_QTESuccessText_C_SetText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_QTESuccessText.WBP_QTESuccessText_C.PreConstruct
struct UWBP_QTESuccessText_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTESuccessText.WBP_QTESuccessText_C.ExecuteUbergraph_WBP_QTESuccessText
struct UWBP_QTESuccessText_C_ExecuteUbergraph_WBP_QTESuccessText_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

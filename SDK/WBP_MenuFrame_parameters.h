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

// Function WBP_MenuFrame.WBP_MenuFrame_C.InitBGTint
struct UWBP_MenuFrame_C_InitBGTint_Params
{
};

// Function WBP_MenuFrame.WBP_MenuFrame_C.PreConstruct
struct UWBP_MenuFrame_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuFrame.WBP_MenuFrame_C.ExecuteUbergraph_WBP_MenuFrame
struct UWBP_MenuFrame_C_ExecuteUbergraph_WBP_MenuFrame_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

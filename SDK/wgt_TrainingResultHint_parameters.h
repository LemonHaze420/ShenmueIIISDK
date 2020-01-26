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

// Function wgt_TrainingResultHint.wgt_TrainingResultHint_C.UpdateHintText
struct Uwgt_TrainingResultHint_C_UpdateHintText_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TrainingResultHint.wgt_TrainingResultHint_C.IsValidHint
struct Uwgt_TrainingResultHint_C_IsValidHint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function wgt_TrainingResultHint.wgt_TrainingResultHint_C.SetHintType
struct Uwgt_TrainingResultHint_C_SetHintType_Params
{
	int                                                Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TrainingResultHint.wgt_TrainingResultHint_C.PreConstruct
struct Uwgt_TrainingResultHint_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_TrainingResultHint.wgt_TrainingResultHint_C.ExecuteUbergraph_wgt_TrainingResultHint
struct Uwgt_TrainingResultHint_C_ExecuteUbergraph_wgt_TrainingResultHint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

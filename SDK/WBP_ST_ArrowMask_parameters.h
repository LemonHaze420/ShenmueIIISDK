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

// Function WBP_ST_ArrowMask.WBP_ST_ArrowMask_C.SetTriangleSize
struct UWBP_ST_ArrowMask_C_SetTriangleSize_Params
{
	struct FVector2D                                   InSize;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function WBP_ST_ArrowMask.WBP_ST_ArrowMask_C.AddTrianglePos
struct UWBP_ST_ArrowMask_C_AddTrianglePos_Params
{
	struct FVector2D                                   Add;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function WBP_ST_ArrowMask.WBP_ST_ArrowMask_C.PreConstruct
struct UWBP_ST_ArrowMask_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ST_ArrowMask.WBP_ST_ArrowMask_C.Construct
struct UWBP_ST_ArrowMask_C_Construct_Params
{
};

// Function WBP_ST_ArrowMask.WBP_ST_ArrowMask_C.ExecuteUbergraph_WBP_ST_ArrowMask
struct UWBP_ST_ArrowMask_C_ExecuteUbergraph_WBP_ST_ArrowMask_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function SL_Hakkason_Search_Tou.SL_Hakkason_Search_Tou_C.ReceiveBeginPlay
struct ASL_Hakkason_Search_Tou_C_ReceiveBeginPlay_Params
{
};

// Function SL_Hakkason_Search_Tou.SL_Hakkason_Search_Tou_C.ReceiveTick
struct ASL_Hakkason_Search_Tou_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_Search_Tou.SL_Hakkason_Search_Tou_C.OnFlagChange
struct ASL_Hakkason_Search_Tou_C_OnFlagChange_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_Search_Tou.SL_Hakkason_Search_Tou_C.ChangeToFree
struct ASL_Hakkason_Search_Tou_C_ChangeToFree_Params
{
};

// Function SL_Hakkason_Search_Tou.SL_Hakkason_Search_Tou_C.ExecuteUbergraph_SL_Hakkason_Search_Tou
struct ASL_Hakkason_Search_Tou_C_ExecuteUbergraph_SL_Hakkason_Search_Tou_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

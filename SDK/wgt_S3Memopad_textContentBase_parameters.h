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

// Function wgt_S3Memopad_textContentBase.wgt_S3Memopad_textContentBase_C.UpdateDisplay
struct Uwgt_S3Memopad_textContentBase_C_UpdateDisplay_Params
{
	struct FString                                     Body;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_RubyInfo                                RubyInfo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                MemoId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               newParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

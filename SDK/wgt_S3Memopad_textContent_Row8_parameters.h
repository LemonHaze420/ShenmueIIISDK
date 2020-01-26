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

// Function wgt_S3Memopad_textContent_Row8.wgt_S3Memopad_textContent_Row8_C.CheckWriteUnderLine
struct Uwgt_S3Memopad_textContent_Row8_C_CheckWriteUnderLine_Params
{
	int                                                MemoId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WriteUnderLine;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3Memopad_textContent_Row8.wgt_S3Memopad_textContent_Row8_C.UpdateDisplay
struct Uwgt_S3Memopad_textContent_Row8_C_UpdateDisplay_Params
{
	struct FString                                     Body;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_RubyInfo                                RubyInfo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                MemoId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               newParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3Memopad_textContent_Row8.wgt_S3Memopad_textContent_Row8_C.GetRubySize
struct Uwgt_S3Memopad_textContent_Row8_C_GetRubySize_Params
{
	float                                              X;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3Memopad_textContent_Row8.wgt_S3Memopad_textContent_Row8_C.Construct
struct Uwgt_S3Memopad_textContent_Row8_C_Construct_Params
{
};

// Function wgt_S3Memopad_textContent_Row8.wgt_S3Memopad_textContent_Row8_C.Destruct
struct Uwgt_S3Memopad_textContent_Row8_C_Destruct_Params
{
};

// Function wgt_S3Memopad_textContent_Row8.wgt_S3Memopad_textContent_Row8_C.ExecuteUbergraph_wgt_S3Memopad_textContent_Row8
struct Uwgt_S3Memopad_textContent_Row8_C_ExecuteUbergraph_wgt_S3Memopad_textContent_Row8_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

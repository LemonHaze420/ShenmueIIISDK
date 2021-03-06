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

// Function WBP_Fishing_SubQuestInfo.WBP_Fishing_SubQuestInfo_C.SetTopNum
struct UWBP_Fishing_SubQuestInfo_C_SetTopNum_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Fishing_SubQuestInfo.WBP_Fishing_SubQuestInfo_C.SetCurrentInfo
struct UWBP_Fishing_SubQuestInfo_C_SetCurrentInfo_Params
{
	struct FString                                     CurrentTopText;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                RivalFlagIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CurrentTopUnit;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     RyoLocalizeName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                RyoNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Fishing_SubQuestInfo.WBP_Fishing_SubQuestInfo_C.Construct
struct UWBP_Fishing_SubQuestInfo_C_Construct_Params
{
};

// Function WBP_Fishing_SubQuestInfo.WBP_Fishing_SubQuestInfo_C.OnRivalFlagChanged
struct UWBP_Fishing_SubQuestInfo_C_OnRivalFlagChanged_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Fishing_SubQuestInfo.WBP_Fishing_SubQuestInfo_C.ExecuteUbergraph_WBP_Fishing_SubQuestInfo
struct UWBP_Fishing_SubQuestInfo_C_ExecuteUbergraph_WBP_Fishing_SubQuestInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

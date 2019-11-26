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

// Function BP_S3AchievementWidget.BP_S3AchievementWidget_C.SetAchievementName
struct UBP_S3AchievementWidget_C_SetAchievementName_Params
{
	struct FString                                     AchievementName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_S3AchievementWidget.BP_S3AchievementWidget_C.Construct
struct UBP_S3AchievementWidget_C_Construct_Params
{
};

// Function BP_S3AchievementWidget.BP_S3AchievementWidget_C.ExecuteUbergraph_BP_S3AchievementWidget
struct UBP_S3AchievementWidget_C_ExecuteUbergraph_BP_S3AchievementWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

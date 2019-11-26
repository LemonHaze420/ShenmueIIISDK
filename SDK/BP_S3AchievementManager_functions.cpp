
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_S3AchievementManager.BP_S3AchievementManager_C.WriteAchievement
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3AchievementType             ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_S3AchievementManager_C::WriteAchievement(ES3AchievementType ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AchievementManager.BP_S3AchievementManager_C.WriteAchievement");

	UBP_S3AchievementManager_C_WriteAchievement_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

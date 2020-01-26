#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_S3AchievementManager.BP_S3AchievementManager_C
// 0x0000 (0x0200 - 0x0200)
class UBP_S3AchievementManager_C : public US3AchievementManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3AchievementManager.BP_S3AchievementManager_C");
		return ptr;
	}


	bool WriteAchievement(ES3AchievementType ID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

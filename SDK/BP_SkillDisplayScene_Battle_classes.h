#pragma once

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C
// 0x006A (0x03DA - 0x0370)
class ABP_SkillDisplayScene_Battle_C : public ABP_SkillDisplayScene_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x62];                                      // 0x0378(0x0062) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C");
		return ptr;
	}


	class APawn* GetOwningPlayerPawn();
	bool IsLoading();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

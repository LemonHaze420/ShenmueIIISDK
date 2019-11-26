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

// BlueprintGeneratedClass BP_SkillDisplayScene_Battle_MatchPlayer.BP_SkillDisplayScene_Battle_MatchPlayer_C
// 0x000E (0x03E8 - 0x03DA)
class ABP_SkillDisplayScene_Battle_MatchPlayer_C : public ABP_SkillDisplayScene_Battle_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x03DA(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkillDisplayScene_Battle_MatchPlayer.BP_SkillDisplayScene_Battle_MatchPlayer_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

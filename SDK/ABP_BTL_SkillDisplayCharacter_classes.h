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

// AnimBlueprintGeneratedClass ABP_BTL_SkillDisplayCharacter.ABP_BTL_SkillDisplayCharacter_C
// 0x0455 (0x07B5 - 0x0360)
class UABP_BTL_SkillDisplayCharacter_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x44D];                                     // 0x0368(0x044D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_BTL_SkillDisplayCharacter.ABP_BTL_SkillDisplayCharacter_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

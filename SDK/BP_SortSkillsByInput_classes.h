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

// BlueprintGeneratedClass BP_SortSkillsByInput.BP_SortSkillsByInput_C
// 0x0008 (0x0030 - 0x0028)
class UBP_SortSkillsByInput_C : public USortNameCompare
{
public:
	class UBTL_CommandLibrary_C*                       SkillLibrary;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SortSkillsByInput.BP_SortSkillsByInput_C");
		return ptr;
	}


	bool STATIC_Compare(const struct FName& A, const struct FName& B);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

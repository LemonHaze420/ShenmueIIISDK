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

// BlueprintGeneratedClass BP_BRallyCourseDatabase.BP_BRallyCourseDatabase_C
// 0x0010 (0x0040 - 0x0030)
class UBP_BRallyCourseDatabase_C : public UPrimaryDataAsset
{
public:
	TArray<class UBTL_CourseDataAsset*>                Courses;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BRallyCourseDatabase.BP_BRallyCourseDatabase_C");
		return ptr;
	}


	class UBTL_CourseDataAsset* FindAwardCourseData(const struct FName& Award, int* Array_Index);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

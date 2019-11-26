
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

// Function BP_BRallyCourseDatabase.BP_BRallyCourseDatabase_C.FindAwardCourseData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   Award                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBTL_CourseDataAsset*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// int                            Array_Index                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

class UBTL_CourseDataAsset* UBP_BRallyCourseDatabase_C::FindAwardCourseData(const struct FName& Award, int* Array_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BRallyCourseDatabase.BP_BRallyCourseDatabase_C.FindAwardCourseData");

	UBP_BRallyCourseDatabase_C_FindAwardCourseData_Params params;
	params.Award = Award;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array_Index != nullptr)
		*Array_Index = params.Array_Index;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

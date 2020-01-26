
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function wgt_category_line.wgt_category_line_C.SetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 name_jp                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 name_eng                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uwgt_category_line_C::SetName(const struct FString& name_jp, const struct FString& name_eng)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_category_line.wgt_category_line_C.SetName");

	Uwgt_category_line_C_SetName_Params params;
	params.name_jp = name_jp;
	params.name_eng = name_eng;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

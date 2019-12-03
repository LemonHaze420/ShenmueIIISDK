
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

// Function BP_SortSkillsForBattle.BP_SortSkillsForBattle_C.Compare
// (Native, Event, Static, MulticastDelegate, Public, BlueprintCallable)
// Parameters:
// struct FName                   A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   B                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_SortSkillsForBattle_C::STATIC_Compare(const struct FName& A, const struct FName& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SortSkillsForBattle.BP_SortSkillsForBattle_C.Compare");

	UBP_SortSkillsForBattle_C_Compare_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function BP_ChobuBattleCharData.BP_ChobuBattleCharData_C.SearchAttackMontage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleAnimStrength            Attack                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Air                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* UBP_ChobuBattleCharData_C::SearchAttackMontage(EBattleAnimStrength Attack, bool Air)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChobuBattleCharData.BP_ChobuBattleCharData_C.SearchAttackMontage");

	UBP_ChobuBattleCharData_C_SearchAttackMontage_Params params;
	params.Attack = Attack;
	params.Air = Air;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

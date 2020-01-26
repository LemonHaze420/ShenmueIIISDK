
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

// Function BP_Lead_MotionDatabase.BP_Lead_MotionDatabase_C.GetTurnMotion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InAngle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            OutMontage                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Lead_MotionDatabase_C::GetTurnMotion(float InAngle, class UAnimMontage** OutMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lead_MotionDatabase.BP_Lead_MotionDatabase_C.GetTurnMotion");

	UBP_Lead_MotionDatabase_C_GetTurnMotion_Params params;
	params.InAngle = InAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMontage != nullptr)
		*OutMontage = params.OutMontage;
}


// Function BP_Lead_MotionDatabase.BP_Lead_MotionDatabase_C.GetWaveMotion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InAngle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InDistanceSqr                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            OutMontage                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Lead_MotionDatabase_C::GetWaveMotion(float InAngle, float InDistanceSqr, class UAnimMontage** OutMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lead_MotionDatabase.BP_Lead_MotionDatabase_C.GetWaveMotion");

	UBP_Lead_MotionDatabase_C_GetWaveMotion_Params params;
	params.InAngle = InAngle;
	params.InDistanceSqr = InDistanceSqr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMontage != nullptr)
		*OutMontage = params.OutMontage;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

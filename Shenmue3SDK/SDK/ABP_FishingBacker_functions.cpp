
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ABP_FishingBacker.ABP_FishingBacker_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_FishingBacker_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_FishingBacker.ABP_FishingBacker_C.BlueprintUpdateAnimation");

	UABP_FishingBacker_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_FishingBacker.ABP_FishingBacker_C.ExecuteUbergraph_ABP_FishingBacker
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_FishingBacker_C::ExecuteUbergraph_ABP_FishingBacker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_FishingBacker.ABP_FishingBacker_C.ExecuteUbergraph_ABP_FishingBacker");

	UABP_FishingBacker_C_ExecuteUbergraph_ABP_FishingBacker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

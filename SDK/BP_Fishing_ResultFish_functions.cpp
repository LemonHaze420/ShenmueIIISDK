
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

// Function BP_Fishing_ResultFish.BP_Fishing_ResultFish_C.SetResultAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimationAsset*         NewAnimToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_ResultFish_C::SetResultAnimation(class UAnimationAsset* NewAnimToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_ResultFish.BP_Fishing_ResultFish_C.SetResultAnimation");

	ABP_Fishing_ResultFish_C_SetResultAnimation_Params params;
	params.NewAnimToPlay = NewAnimToPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_ResultFish.BP_Fishing_ResultFish_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Fishing_ResultFish_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_ResultFish.BP_Fishing_ResultFish_C.UserConstructionScript");

	ABP_Fishing_ResultFish_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

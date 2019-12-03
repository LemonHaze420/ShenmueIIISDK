
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

// Function FootprintTypeBase.FootprintTypeBase_C.OnFootFall
// (Net, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, Delegate, BlueprintCallable)
// Parameters:
// struct FVector                 FootLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                FootRotation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TEnumAsByte<ENEFootType>       FootType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFootprintComponent_C*   FootprintComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFootprintTypeBase_C::STATIC_OnFootFall(const struct FVector& FootLocation, const struct FRotator& FootRotation, TEnumAsByte<ENEFootType> FootType, class UFootprintComponent_C* FootprintComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FootprintTypeBase.FootprintTypeBase_C.OnFootFall");

	UFootprintTypeBase_C_OnFootFall_Params params;
	params.FootLocation = FootLocation;
	params.FootRotation = FootRotation;
	params.FootType = FootType;
	params.FootprintComponent = FootprintComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

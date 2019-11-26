
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

// Function FootprintTypeBase.FootprintTypeBase_C.OnFootFall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 FootLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                FootRotation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TEnumAsByte<ENEFootType>       FootType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFootprintComponent_C*   FootprintComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFootprintTypeBase_C::OnFootFall(const struct FVector& FootLocation, const struct FRotator& FootRotation, TEnumAsByte<ENEFootType> FootType, class UFootprintComponent_C* FootprintComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FootprintTypeBase.FootprintTypeBase_C.OnFootFall");

	UFootprintTypeBase_C_OnFootFall_Params params;
	params.FootLocation = FootLocation;
	params.FootRotation = FootRotation;
	params.FootType = FootType;
	params.FootprintComponent = FootprintComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

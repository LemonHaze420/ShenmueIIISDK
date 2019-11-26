
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

// Function BP_GamePadImageSetAsset.BP_GamePadImageSetAsset_C.GetFaceButtonImageSetNoDefault
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EFaceButtonImageStyle> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_GamePadFaceButtonSetAsset_C* SET                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GamePadImageSetAsset_C::GetFaceButtonImageSetNoDefault(TEnumAsByte<EFaceButtonImageStyle> Selection, class UBP_GamePadFaceButtonSetAsset_C** SET)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamePadImageSetAsset.BP_GamePadImageSetAsset_C.GetFaceButtonImageSetNoDefault");

	UBP_GamePadImageSetAsset_C_GetFaceButtonImageSetNoDefault_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SET != nullptr)
		*SET = params.SET;
}


// Function BP_GamePadImageSetAsset.BP_GamePadImageSetAsset_C.GetShoulderImageSet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<EShoulderButtonStyle> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_GamePadShoulderSetAsset_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBP_GamePadShoulderSetAsset_C* UBP_GamePadImageSetAsset_C::GetShoulderImageSet(TEnumAsByte<EShoulderButtonStyle> Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamePadImageSetAsset.BP_GamePadImageSetAsset_C.GetShoulderImageSet");

	UBP_GamePadImageSetAsset_C_GetShoulderImageSet_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GamePadImageSetAsset.BP_GamePadImageSetAsset_C.GetDPadImageSet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EDpadButtonImageStyle> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_GamePadFaceButtonSetAsset_C* SET                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GamePadImageSetAsset_C::GetDPadImageSet(TEnumAsByte<EDpadButtonImageStyle> Selection, class UBP_GamePadFaceButtonSetAsset_C** SET)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamePadImageSetAsset.BP_GamePadImageSetAsset_C.GetDPadImageSet");

	UBP_GamePadImageSetAsset_C_GetDPadImageSet_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SET != nullptr)
		*SET = params.SET;
}


// Function BP_GamePadImageSetAsset.BP_GamePadImageSetAsset_C.GetFaceButtonImageSet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EFaceButtonImageStyle> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_GamePadFaceButtonSetAsset_C* SET                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GamePadImageSetAsset_C::GetFaceButtonImageSet(TEnumAsByte<EFaceButtonImageStyle> Selection, class UBP_GamePadFaceButtonSetAsset_C** SET)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamePadImageSetAsset.BP_GamePadImageSetAsset_C.GetFaceButtonImageSet");

	UBP_GamePadImageSetAsset_C_GetFaceButtonImageSet_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SET != nullptr)
		*SET = params.SET;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

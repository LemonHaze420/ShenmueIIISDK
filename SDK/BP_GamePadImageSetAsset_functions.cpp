
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
// (NetRequest, Native, NetMulticast, Protected, NetServer, BlueprintCallable)
// Parameters:
// TEnumAsByte<EFaceButtonImageStyle> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_GamePadFaceButtonSetAsset_C* SET                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GamePadImageSetAsset_C::GetFaceButtonImageSetNoDefault(TEnumAsByte<EFaceButtonImageStyle> Selection, class UBP_GamePadFaceButtonSetAsset_C** SET)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamePadImageSetAsset.BP_GamePadImageSetAsset_C.GetFaceButtonImageSetNoDefault");

	UBP_GamePadImageSetAsset_C_GetFaceButtonImageSetNoDefault_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SET != nullptr)
		*SET = params.SET;
}


// Function BP_GamePadImageSetAsset.BP_GamePadImageSetAsset_C.GetShoulderImageSet
// (NetRequest, Exec, Native, Event, NetResponse, Public, Protected, NetServer, DLLImport, BlueprintEvent)
// Parameters:
// TEnumAsByte<EShoulderButtonStyle> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_GamePadShoulderSetAsset_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBP_GamePadShoulderSetAsset_C* UBP_GamePadImageSetAsset_C::GetShoulderImageSet(TEnumAsByte<EShoulderButtonStyle> Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamePadImageSetAsset.BP_GamePadImageSetAsset_C.GetShoulderImageSet");

	UBP_GamePadImageSetAsset_C_GetShoulderImageSet_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GamePadImageSetAsset.BP_GamePadImageSetAsset_C.GetDPadImageSet
// (Net, NetReliable, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// TEnumAsByte<EDpadButtonImageStyle> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_GamePadFaceButtonSetAsset_C* SET                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GamePadImageSetAsset_C::GetDPadImageSet(TEnumAsByte<EDpadButtonImageStyle> Selection, class UBP_GamePadFaceButtonSetAsset_C** SET)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamePadImageSetAsset.BP_GamePadImageSetAsset_C.GetDPadImageSet");

	UBP_GamePadImageSetAsset_C_GetDPadImageSet_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SET != nullptr)
		*SET = params.SET;
}


// Function BP_GamePadImageSetAsset.BP_GamePadImageSetAsset_C.GetFaceButtonImageSet
// (Net, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Private, NetServer, DLLImport, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFaceButtonImageStyle> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_GamePadFaceButtonSetAsset_C* SET                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GamePadImageSetAsset_C::STATIC_GetFaceButtonImageSet(TEnumAsByte<EFaceButtonImageStyle> Selection, class UBP_GamePadFaceButtonSetAsset_C** SET)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamePadImageSetAsset.BP_GamePadImageSetAsset_C.GetFaceButtonImageSet");

	UBP_GamePadImageSetAsset_C_GetFaceButtonImageSet_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SET != nullptr)
		*SET = params.SET;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

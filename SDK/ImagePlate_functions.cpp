
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

// Function ImagePlate.ImagePlateComponent.SetImagePlate
// ()
// Parameters:
// struct FImagePlateParameters   Plate                          (Parm)

void UImagePlateComponent::SetImagePlate(const struct FImagePlateParameters& Plate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImagePlate.ImagePlateComponent.SetImagePlate");

	UImagePlateComponent_SetImagePlate_Params params;
	params.Plate = Plate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImagePlate.ImagePlateComponent.OnRenderTextureChanged
// ()

void UImagePlateComponent::OnRenderTextureChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImagePlate.ImagePlateComponent.OnRenderTextureChanged");

	UImagePlateComponent_OnRenderTextureChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImagePlate.ImagePlateComponent.GetPlate
// ()
// Parameters:
// struct FImagePlateParameters   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FImagePlateParameters UImagePlateComponent::GetPlate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImagePlate.ImagePlateComponent.GetPlate");

	UImagePlateComponent_GetPlate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

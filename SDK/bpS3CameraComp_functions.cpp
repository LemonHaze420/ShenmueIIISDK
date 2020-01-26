
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

// Function bpS3CameraComp.bpS3CameraComp_C.GetVerticalFOV
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          VerticalFOV                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UbpS3CameraComp_C::GetVerticalFOV(float* VerticalFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpS3CameraComp.bpS3CameraComp_C.GetVerticalFOV");

	UbpS3CameraComp_C_GetVerticalFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VerticalFOV != nullptr)
		*VerticalFOV = params.VerticalFOV;
}


// Function bpS3CameraComp.bpS3CameraComp_C.HorizonRatioToPitch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          HorizonRatio                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UbpS3CameraComp_C::HorizonRatioToPitch(float HorizonRatio, float* Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpS3CameraComp.bpS3CameraComp_C.HorizonRatioToPitch");

	UbpS3CameraComp_C_HorizonRatioToPitch_Params params;
	params.HorizonRatio = HorizonRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pitch != nullptr)
		*Pitch = params.Pitch;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

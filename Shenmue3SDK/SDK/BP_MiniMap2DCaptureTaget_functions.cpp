
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

// Function BP_MiniMap2DCaptureTaget.BP_MiniMap2DCaptureTaget_C.GetCaptureSize(2DVector)
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Center                         (Parm, OutParm, IsPlainOldData)
// struct FVector2D               half_size                      (Parm, OutParm, IsPlainOldData)

void ABP_MiniMap2DCaptureTaget_C::GetCaptureSize_2DVector_(struct FVector2D* Center, struct FVector2D* half_size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMap2DCaptureTaget.BP_MiniMap2DCaptureTaget_C.GetCaptureSize(2DVector)");

	ABP_MiniMap2DCaptureTaget_C_GetCaptureSize_2DVector__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Center != nullptr)
		*Center = params.Center;
	if (half_size != nullptr)
		*half_size = params.half_size;
}


// Function BP_MiniMap2DCaptureTaget.BP_MiniMap2DCaptureTaget_C.GetCaptureSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          CenterX                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CenterY                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          HalfSize                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMap2DCaptureTaget_C::GetCaptureSize(float* CenterX, float* CenterY, float* HalfSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMap2DCaptureTaget.BP_MiniMap2DCaptureTaget_C.GetCaptureSize");

	ABP_MiniMap2DCaptureTaget_C_GetCaptureSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CenterX != nullptr)
		*CenterX = params.CenterX;
	if (CenterY != nullptr)
		*CenterY = params.CenterY;
	if (HalfSize != nullptr)
		*HalfSize = params.HalfSize;
}


// Function BP_MiniMap2DCaptureTaget.BP_MiniMap2DCaptureTaget_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniMap2DCaptureTaget_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMap2DCaptureTaget.BP_MiniMap2DCaptureTaget_C.UserConstructionScript");

	ABP_MiniMap2DCaptureTaget_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

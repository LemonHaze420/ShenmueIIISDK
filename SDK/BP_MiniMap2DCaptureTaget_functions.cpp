
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

// Function BP_MiniMap2DCaptureTaget.BP_MiniMap2DCaptureTaget_C.GetCaptureSize(2DVector)
// (Net, Exec, Native, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               Center                         (Parm, OutParm, IsPlainOldData)
// struct FVector2D               half_size                      (Parm, OutParm, IsPlainOldData)

void ABP_MiniMap2DCaptureTaget_C::GetCaptureSize_2DVector_(struct FVector2D* Center, struct FVector2D* half_size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMap2DCaptureTaget.BP_MiniMap2DCaptureTaget_C.GetCaptureSize(2DVector)");

	ABP_MiniMap2DCaptureTaget_C_GetCaptureSize_2DVector__Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Center != nullptr)
		*Center = params.Center;
	if (half_size != nullptr)
		*half_size = params.half_size;
}


// Function BP_MiniMap2DCaptureTaget.BP_MiniMap2DCaptureTaget_C.GetCaptureSize
// (Net, NetRequest, Exec, Native, MulticastDelegate, Public, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          CenterX                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CenterY                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          HalfSize                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMap2DCaptureTaget_C::GetCaptureSize(float* CenterX, float* CenterY, float* HalfSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMap2DCaptureTaget.BP_MiniMap2DCaptureTaget_C.GetCaptureSize");

	ABP_MiniMap2DCaptureTaget_C_GetCaptureSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

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
// (Net, Exec, Native, Event, NetMulticast, Protected, NetServer, HasOutParms, NetClient, DLLImport)

void ABP_MiniMap2DCaptureTaget_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMap2DCaptureTaget.BP_MiniMap2DCaptureTaget_C.UserConstructionScript");

	ABP_MiniMap2DCaptureTaget_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

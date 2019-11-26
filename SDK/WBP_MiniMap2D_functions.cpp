
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

// Function WBP_MiniMap2D.WBP_MiniMap2D_C.GetMapCenterLocation
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Location                       (Parm, OutParm, IsPlainOldData)

void UWBP_MiniMap2D_C::GetMapCenterLocation(struct FVector2D* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniMap2D.WBP_MiniMap2D_C.GetMapCenterLocation");

	UWBP_MiniMap2D_C_GetMapCenterLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function WBP_MiniMap2D.WBP_MiniMap2D_C.GetPlayerCharYaw
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnYaw                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniMap2D_C::GetPlayerCharYaw(float* ReturnYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniMap2D.WBP_MiniMap2D_C.GetPlayerCharYaw");

	UWBP_MiniMap2D_C_GetPlayerCharYaw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnYaw != nullptr)
		*ReturnYaw = params.ReturnYaw;
}


// Function WBP_MiniMap2D.WBP_MiniMap2D_C.IsFollowPlayerCharMode
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_MiniMap2D_C::IsFollowPlayerCharMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniMap2D.WBP_MiniMap2D_C.IsFollowPlayerCharMode");

	UWBP_MiniMap2D_C_IsFollowPlayerCharMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MiniMap2D.WBP_MiniMap2D_C.GetTargetYaw
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnYaw                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniMap2D_C::GetTargetYaw(float* ReturnYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniMap2D.WBP_MiniMap2D_C.GetTargetYaw");

	UWBP_MiniMap2D_C_GetTargetYaw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnYaw != nullptr)
		*ReturnYaw = params.ReturnYaw;
}


// Function WBP_MiniMap2D.WBP_MiniMap2D_C.SetMinimapMaskTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniMap2D_C::SetMinimapMaskTexture(class UTexture* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniMap2D.WBP_MiniMap2D_C.SetMinimapMaskTexture");

	UWBP_MiniMap2D_C_SetMinimapMaskTexture_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniMap2D.WBP_MiniMap2D_C.ZoomMinimap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Zoom                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniMap2D_C::ZoomMinimap(bool Zoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniMap2D.WBP_MiniMap2D_C.ZoomMinimap");

	UWBP_MiniMap2D_C_ZoomMinimap_Params params;
	params.Zoom = Zoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniMap2D.WBP_MiniMap2D_C.SetMinimapTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                newParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniMap2D_C::SetMinimapTexture(class UTexture* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniMap2D.WBP_MiniMap2D_C.SetMinimapTexture");

	UWBP_MiniMap2D_C_SetMinimapTexture_Params params;
	params.newParam = newParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniMap2D.WBP_MiniMap2D_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_MiniMap2D_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniMap2D.WBP_MiniMap2D_C.Initialize");

	UWBP_MiniMap2D_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniMap2D.WBP_MiniMap2D_C.UpdateMiniMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_MiniMap2D_C::UpdateMiniMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniMap2D.WBP_MiniMap2D_C.UpdateMiniMap");

	UWBP_MiniMap2D_C_UpdateMiniMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniMap2D.WBP_MiniMap2D_C.FadeMinimap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHidden                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniMap2D_C::FadeMinimap(bool IsHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniMap2D.WBP_MiniMap2D_C.FadeMinimap");

	UWBP_MiniMap2D_C_FadeMinimap_Params params;
	params.IsHidden = IsHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

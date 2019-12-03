
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
// (NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Location                       (Parm, OutParm, IsPlainOldData)

void UWBP_MiniMap2D_C::STATIC_GetMapCenterLocation(struct FVector2D* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniMap2D.WBP_MiniMap2D_C.GetMapCenterLocation");

	UWBP_MiniMap2D_C_GetMapCenterLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function WBP_MiniMap2D.WBP_MiniMap2D_C.GetPlayerCharYaw
// (NetRequest, Exec, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
// (NetReliable, Event, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
// (NetReliable, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnYaw                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniMap2D_C::STATIC_GetTargetYaw(float* ReturnYaw)
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
// (Net, NetReliable, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, Public, Protected, NetServer)
// Parameters:
// bool                           Zoom                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniMap2D_C::STATIC_ZoomMinimap(bool Zoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniMap2D.WBP_MiniMap2D_C.ZoomMinimap");

	UWBP_MiniMap2D_C_ZoomMinimap_Params params;
	params.Zoom = Zoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniMap2D.WBP_MiniMap2D_C.SetMinimapTexture
// (Net, NetReliable, NetRequest, Native, NetResponse, NetMulticast, Delegate, NetServer)
// Parameters:
// class UTexture*                newParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniMap2D_C::SetMinimapTexture(class UTexture* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniMap2D.WBP_MiniMap2D_C.SetMinimapTexture");

	UWBP_MiniMap2D_C_SetMinimapTexture_Params params;
	params.newParam = newParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniMap2D.WBP_MiniMap2D_C.Initialize
// (Net, NetReliable, NetRequest, Exec, Static, NetMulticast, Private, NetServer, BlueprintEvent, BlueprintPure)

void UWBP_MiniMap2D_C::STATIC_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniMap2D.WBP_MiniMap2D_C.Initialize");

	UWBP_MiniMap2D_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniMap2D.WBP_MiniMap2D_C.UpdateMiniMap
// (NetRequest, Native, Static, HasOutParms, NetClient, BlueprintPure)

void UWBP_MiniMap2D_C::STATIC_UpdateMiniMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniMap2D.WBP_MiniMap2D_C.UpdateMiniMap");

	UWBP_MiniMap2D_C_UpdateMiniMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MiniMap2D.WBP_MiniMap2D_C.FadeMinimap
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsHidden                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MiniMap2D_C::STATIC_FadeMinimap(bool IsHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MiniMap2D.WBP_MiniMap2D_C.FadeMinimap");

	UWBP_MiniMap2D_C_FadeMinimap_Params params;
	params.IsHidden = IsHidden;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

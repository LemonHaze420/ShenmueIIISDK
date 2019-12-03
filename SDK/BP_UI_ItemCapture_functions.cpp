
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

// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.ResetItemCamera
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_UI_ItemCapture_C::STATIC_ResetItemCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.ResetItemCamera");

	ABP_UI_ItemCapture_C_ResetItemCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.SetupInterp
// (Net, NetReliable, NetRequest, NetResponse, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 PreLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_UI_ItemCapture_C::SetupInterp(const struct FVector& TargetLocation, const struct FVector& PreLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.SetupInterp");

	ABP_UI_ItemCapture_C_SetupInterp_Params params;
	params.TargetLocation = TargetLocation;
	params.PreLocation = PreLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.UpdateInterp
// (NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_UI_ItemCapture_C::UpdateInterp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.UpdateInterp");

	ABP_UI_ItemCapture_C_UpdateInterp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.InputAxis_Left
// (NetReliable, NetRequest, NetResponse, Static, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ItemCapture_C::STATIC_InputAxis_Left(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.InputAxis_Left");

	ABP_UI_ItemCapture_C_InputAxis_Left_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.UpdateCamera
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSecond                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ItemCapture_C::STATIC_UpdateCamera(float DeltaSecond)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.UpdateCamera");

	ABP_UI_ItemCapture_C_UpdateCamera_Params params;
	params.DeltaSecond = DeltaSecond;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.InputAxis_Right
// (Event, NetResponse, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Vertical                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ItemCapture_C::STATIC_InputAxis_Right(bool Vertical, float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.InputAxis_Right");

	ABP_UI_ItemCapture_C_InputAxis_Right_Params params;
	params.Vertical = Vertical;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.SetViewMode
// (Exec, NetResponse, MulticastDelegate, Public, Private, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsViewMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ItemCapture_C::SetViewMode(bool IsViewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.SetViewMode");

	ABP_UI_ItemCapture_C_SetViewMode_Params params;
	params.IsViewMode = IsViewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.SetViewMesh
// (Net, NetMulticast, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ItemCapture_C::SetViewMesh(int ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.SetViewMesh");

	ABP_UI_ItemCapture_C_SetViewMesh_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Public, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_UI_ItemCapture_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.UserConstructionScript");

	ABP_UI_ItemCapture_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.ReceiveBeginPlay
// (Native, NetResponse, Static, NetMulticast, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_UI_ItemCapture_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.ReceiveBeginPlay");

	ABP_UI_ItemCapture_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.ReceiveTick
// (Net, Native, Event, NetResponse, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ItemCapture_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.ReceiveTick");

	ABP_UI_ItemCapture_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.ReceiveDestroyed
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_UI_ItemCapture_C::STATIC_ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.ReceiveDestroyed");

	ABP_UI_ItemCapture_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.ExecuteUbergraph_BP_UI_ItemCapture
// (NetRequest, Exec, Event, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ItemCapture_C::ExecuteUbergraph_BP_UI_ItemCapture(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.ExecuteUbergraph_BP_UI_ItemCapture");

	ABP_UI_ItemCapture_C_ExecuteUbergraph_BP_UI_ItemCapture_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

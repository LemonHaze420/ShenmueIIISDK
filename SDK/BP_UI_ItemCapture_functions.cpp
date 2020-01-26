
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

// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.ResetItemCamera
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ItemCapture_C::ResetItemCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.ResetItemCamera");

	ABP_UI_ItemCapture_C_ResetItemCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.SetupInterp
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_UI_ItemCapture_C::UpdateInterp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.UpdateInterp");

	ABP_UI_ItemCapture_C_UpdateInterp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.InputAxis_Left
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ItemCapture_C::InputAxis_Left(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.InputAxis_Left");

	ABP_UI_ItemCapture_C_InputAxis_Left_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.UpdateCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSEcond                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ItemCapture_C::UpdateCamera(float DeltaSEcond)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.UpdateCamera");

	ABP_UI_ItemCapture_C_UpdateCamera_Params params;
	params.DeltaSEcond = DeltaSEcond;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.InputAxis_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Vertical                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ItemCapture_C::InputAxis_Right(bool Vertical, float AxisValue)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ItemCapture_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.UserConstructionScript");

	ABP_UI_ItemCapture_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_UI_ItemCapture_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.ReceiveBeginPlay");

	ABP_UI_ItemCapture_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ItemCapture_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.ReceiveTick");

	ABP_UI_ItemCapture_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_UI_ItemCapture_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.ReceiveDestroyed");

	ABP_UI_ItemCapture_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ItemCapture.BP_UI_ItemCapture_C.ExecuteUbergraph_BP_UI_ItemCapture
// (HasDefaults)
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

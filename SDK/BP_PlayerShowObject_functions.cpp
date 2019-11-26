
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

// Function BP_PlayerShowObject.BP_PlayerShowObject_C.GetClothMeshComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ABP_PlayerShowObject_C::GetClothMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerShowObject.BP_PlayerShowObject_C.GetClothMeshComponent");

	ABP_PlayerShowObject_C_GetClothMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerShowObject.BP_PlayerShowObject_C.Zoom
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerShowObject_C::Zoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerShowObject.BP_PlayerShowObject_C.Zoom");

	ABP_PlayerShowObject_C_Zoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerShowObject.BP_PlayerShowObject_C.SetShowObjeectScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerShowObject_C::SetShowObjeectScale(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerShowObject.BP_PlayerShowObject_C.SetShowObjeectScale");

	ABP_PlayerShowObject_C_SetShowObjeectScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerShowObject.BP_PlayerShowObject_C.CacheFingerLocationAndRotation
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         FingerLocations                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FRotator>        FingerRotations                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 soketName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerShowObject_C::CacheFingerLocationAndRotation(const struct FString& soketName, int Length, TArray<struct FVector>* FingerLocations, TArray<struct FRotator>* FingerRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerShowObject.BP_PlayerShowObject_C.CacheFingerLocationAndRotation");

	ABP_PlayerShowObject_C_CacheFingerLocationAndRotation_Params params;
	params.soketName = soketName;
	params.Length = Length;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FingerLocations != nullptr)
		*FingerLocations = params.FingerLocations;
	if (FingerRotations != nullptr)
		*FingerRotations = params.FingerRotations;
}


// Function BP_PlayerShowObject.BP_PlayerShowObject_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerShowObject_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerShowObject.BP_PlayerShowObject_C.UserConstructionScript");

	ABP_PlayerShowObject_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerShowObject.BP_PlayerShowObject_C.SetTargetShowCamera
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerShowObject_C::SetTargetShowCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerShowObject.BP_PlayerShowObject_C.SetTargetShowCamera");

	ABP_PlayerShowObject_C_SetTargetShowCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerShowObject.BP_PlayerShowObject_C.Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewVisibility                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerShowObject_C::Reset(bool bNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerShowObject.BP_PlayerShowObject_C.Reset");

	ABP_PlayerShowObject_C_Reset_Params params;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerShowObject.BP_PlayerShowObject_C.PreviousSetTargetCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BlendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EViewTargetBlendFunction> BlendFunc                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendExp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLockOutgoing                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerShowObject_C::PreviousSetTargetCamera(float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerShowObject.BP_PlayerShowObject_C.PreviousSetTargetCamera");

	ABP_PlayerShowObject_C_PreviousSetTargetCamera_Params params;
	params.BlendTime = BlendTime;
	params.BlendFunc = BlendFunc;
	params.BlendExp = BlendExp;
	params.bLockOutgoing = bLockOutgoing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerShowObject.BP_PlayerShowObject_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerShowObject_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerShowObject.BP_PlayerShowObject_C.ReceiveTick");

	ABP_PlayerShowObject_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerShowObject.BP_PlayerShowObject_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerShowObject_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerShowObject.BP_PlayerShowObject_C.ReceiveBeginPlay");

	ABP_PlayerShowObject_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerShowObject.BP_PlayerShowObject_C.Input Wait Update
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerShowObject_C::Input_Wait_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerShowObject.BP_PlayerShowObject_C.Input Wait Update");

	ABP_PlayerShowObject_C_Input_Wait_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerShowObject.BP_PlayerShowObject_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_10
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerShowObject_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_10(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerShowObject.BP_PlayerShowObject_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_10");

	ABP_PlayerShowObject_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_10_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerShowObject.BP_PlayerShowObject_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_6
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerShowObject_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_6(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerShowObject.BP_PlayerShowObject_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_6");

	ABP_PlayerShowObject_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_6_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerShowObject.BP_PlayerShowObject_C.ExecuteUbergraph_BP_PlayerShowObject
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerShowObject_C::ExecuteUbergraph_BP_PlayerShowObject(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerShowObject.BP_PlayerShowObject_C.ExecuteUbergraph_BP_PlayerShowObject");

	ABP_PlayerShowObject_C_ExecuteUbergraph_BP_PlayerShowObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerShowObject.BP_PlayerShowObject_C.OnCalcFinishedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerShowObject_C::OnCalcFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerShowObject.BP_PlayerShowObject_C.OnCalcFinishedDispatcher__DelegateSignature");

	ABP_PlayerShowObject_C_OnCalcFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

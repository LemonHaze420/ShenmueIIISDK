
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

// Function BP_CircularLocationBuffer.BP_CircularLocationBuffer_C.GetMaxDeviationDistSqr
// (NetRequest, Exec, Native, Event, NetResponse, Private, Protected, Delegate, NetClient, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_CircularLocationBuffer_C::GetMaxDeviationDistSqr()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CircularLocationBuffer.BP_CircularLocationBuffer_C.GetMaxDeviationDistSqr");

	UBP_CircularLocationBuffer_C_GetMaxDeviationDistSqr_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CircularLocationBuffer.BP_CircularLocationBuffer_C.Update
// (NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Protected, HasOutParms, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CircularLocationBuffer_C::STATIC_Update(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CircularLocationBuffer.BP_CircularLocationBuffer_C.Update");

	UBP_CircularLocationBuffer_C_Update_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CircularLocationBuffer.BP_CircularLocationBuffer_C.Initialize
// (NetRequest, Native, Event, NetResponse, MulticastDelegate, Public, Private, Protected, NetClient, Const)
// Parameters:
// class USceneComponent*         PositionSource                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Samples                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          WindowTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CircularLocationBuffer_C::Initialize(class USceneComponent* PositionSource, int Samples, float WindowTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CircularLocationBuffer.BP_CircularLocationBuffer_C.Initialize");

	UBP_CircularLocationBuffer_C_Initialize_Params params;
	params.PositionSource = PositionSource;
	params.Samples = Samples;
	params.WindowTime = WindowTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CircularLocationBuffer.BP_CircularLocationBuffer_C.CompletedWindow
// (NetReliable, NetServer, NetClient, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_CircularLocationBuffer_C::CompletedWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CircularLocationBuffer.BP_CircularLocationBuffer_C.CompletedWindow");

	UBP_CircularLocationBuffer_C_CompletedWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CircularLocationBuffer.BP_CircularLocationBuffer_C.Reset
// (Net, NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UBP_CircularLocationBuffer_C::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CircularLocationBuffer.BP_CircularLocationBuffer_C.Reset");

	UBP_CircularLocationBuffer_C_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CircularLocationBuffer.BP_CircularLocationBuffer_C.GetAverageLocation
// (NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBP_CircularLocationBuffer_C::STATIC_GetAverageLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CircularLocationBuffer.BP_CircularLocationBuffer_C.GetAverageLocation");

	UBP_CircularLocationBuffer_C_GetAverageLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CircularLocationBuffer.BP_CircularLocationBuffer_C.OnWindowCompleted__DelegateSignature
// (NetReliable, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBP_CircularLocationBuffer_C::OnWindowCompleted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CircularLocationBuffer.BP_CircularLocationBuffer_C.OnWindowCompleted__DelegateSignature");

	UBP_CircularLocationBuffer_C_OnWindowCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

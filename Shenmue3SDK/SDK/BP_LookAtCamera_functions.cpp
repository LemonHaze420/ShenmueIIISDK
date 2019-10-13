
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

// Function BP_LookAtCamera.BP_LookAtCamera_C.GetCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        Camera                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_LookAtCamera_C::GetCamera(class UCameraComponent** Camera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtCamera.BP_LookAtCamera_C.GetCamera");

	ABP_LookAtCamera_C_GetCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Camera != nullptr)
		*Camera = params.Camera;
}


// Function BP_LookAtCamera.BP_LookAtCamera_C.HitCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LookAtCamera_C::HitCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtCamera.BP_LookAtCamera_C.HitCheck");

	ABP_LookAtCamera_C_HitCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LookAtCamera.BP_LookAtCamera_C.GetLocus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Locus                          (Parm, OutParm, ZeroConstructor)

void ABP_LookAtCamera_C::GetLocus(TArray<struct FVector>* Locus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtCamera.BP_LookAtCamera_C.GetLocus");

	ABP_LookAtCamera_C_GetLocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locus != nullptr)
		*Locus = params.Locus;
}


// Function BP_LookAtCamera.BP_LookAtCamera_C.TargetIsBehaindPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LookAtCamera_C::TargetIsBehaindPlayer(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtCamera.BP_LookAtCamera_C.TargetIsBehaindPlayer");

	ABP_LookAtCamera_C_TargetIsBehaindPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_LookAtCamera.BP_LookAtCamera_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LookAtCamera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtCamera.BP_LookAtCamera_C.UserConstructionScript");

	ABP_LookAtCamera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LookAtCamera.BP_LookAtCamera_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LookAtCamera_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtCamera.BP_LookAtCamera_C.ReceiveBeginPlay");

	ABP_LookAtCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LookAtCamera.BP_LookAtCamera_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LookAtCamera_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtCamera.BP_LookAtCamera_C.ReceiveTick");

	ABP_LookAtCamera_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LookAtCamera.BP_LookAtCamera_C.ExecuteUbergraph_BP_LookAtCamera
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LookAtCamera_C::ExecuteUbergraph_BP_LookAtCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtCamera.BP_LookAtCamera_C.ExecuteUbergraph_BP_LookAtCamera");

	ABP_LookAtCamera_C_ExecuteUbergraph_BP_LookAtCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

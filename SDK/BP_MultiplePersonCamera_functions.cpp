
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

// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.GetCamera
// (NetReliable, NetRequest, NetMulticast, Private, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCameraComponent*        Camera                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_MultiplePersonCamera_C::GetCamera(class UCameraComponent** Camera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.GetCamera");

	ABP_MultiplePersonCamera_C_GetCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Camera != nullptr)
		*Camera = params.Camera;
}


// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.SortFloat
// (Net, NetReliable, NetRequest, Native, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<float>                  inArray                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    SortedIndex                    (Parm, OutParm, ZeroConstructor)

void ABP_MultiplePersonCamera_C::SortFloat(TArray<float>* inArray, TArray<int>* SortedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.SortFloat");

	ABP_MultiplePersonCamera_C_SortFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inArray != nullptr)
		*inArray = params.inArray;
	if (SortedIndex != nullptr)
		*SortedIndex = params.SortedIndex;
}


// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.SetTargetByActorIds
// (NetReliable, NetRequest, Exec, Static, Public, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MultiplePersonCamera_C::STATIC_SetTargetByActorIds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.SetTargetByActorIds");

	ABP_MultiplePersonCamera_C_SetTargetByActorIds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.SortByAngle
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          TargetArray                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          SortedArray                    (Parm, OutParm, ZeroConstructor)

void ABP_MultiplePersonCamera_C::STATIC_SortByAngle(TArray<class AActor*>* TargetArray, TArray<class AActor*>* SortedArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.SortByAngle");

	ABP_MultiplePersonCamera_C_SortByAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;
	if (SortedArray != nullptr)
		*SortedArray = params.SortedArray;
}


// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.UpdateDistance
// (NetReliable, NetRequest, Exec, Native, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)

void ABP_MultiplePersonCamera_C::UpdateDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.UpdateDistance");

	ABP_MultiplePersonCamera_C_UpdateDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.UpdateFOV
// (NetReliable, Native, Event, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)

void ABP_MultiplePersonCamera_C::UpdateFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.UpdateFOV");

	ABP_MultiplePersonCamera_C_UpdateFOV_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.UpdateAlpha
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MultiplePersonCamera_C::STATIC_UpdateAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.UpdateAlpha");

	ABP_MultiplePersonCamera_C_UpdateAlpha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.CalcYawAndPitch
// (NetRequest, Static, Public, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_MultiplePersonCamera_C::STATIC_CalcYawAndPitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.CalcYawAndPitch");

	ABP_MultiplePersonCamera_C_CalcYawAndPitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.SortTargetsClockwise
// (NetRequest, Exec, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_MultiplePersonCamera_C::SortTargetsClockwise()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.SortTargetsClockwise");

	ABP_MultiplePersonCamera_C_SortTargetsClockwise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.CreateSprine
// (Net, NetRequest, Static, NetMulticast, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MultiplePersonCamera_C::STATIC_CreateSprine()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.CreateSprine");

	ABP_MultiplePersonCamera_C_CreateSprine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.DrawDebugNorm
// (NetRequest, Event, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_MultiplePersonCamera_C::STATIC_DrawDebugNorm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.DrawDebugNorm");

	ABP_MultiplePersonCamera_C_DrawDebugNorm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.UpdateCameraTransform
// (Net, NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Delegate, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure)

void ABP_MultiplePersonCamera_C::UpdateCameraTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.UpdateCameraTransform");

	ABP_MultiplePersonCamera_C_UpdateCameraTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.FindTargetfromID
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_MultiplePersonCamera_C::STATIC_FindTargetfromID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.FindTargetfromID");

	ABP_MultiplePersonCamera_C_FindTargetfromID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.CulcTargetPos
// (Net, NetRequest, Native, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AS3Character*>    TargetActors                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 AverageVector                  (Parm, OutParm, IsPlainOldData)

void ABP_MultiplePersonCamera_C::STATIC_CulcTargetPos(TArray<class AS3Character*>* TargetActors, struct FVector* AverageVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.CulcTargetPos");

	ABP_MultiplePersonCamera_C_CulcTargetPos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetActors != nullptr)
		*TargetActors = params.TargetActors;
	if (AverageVector != nullptr)
		*AverageVector = params.AverageVector;
}


// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.UserConstructionScript
// (Net, NetRequest, Event, NetResponse, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MultiplePersonCamera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.UserConstructionScript");

	ABP_MultiplePersonCamera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.ReceiveTick
// (Net, Exec, Event, NetResponse, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MultiplePersonCamera_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.ReceiveTick");

	ABP_MultiplePersonCamera_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.Update
// (Net, NetReliable, Native, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void ABP_MultiplePersonCamera_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.Update");

	ABP_MultiplePersonCamera_C_Update_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.Init
// (NetReliable, Native, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void ABP_MultiplePersonCamera_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.Init");

	ABP_MultiplePersonCamera_C_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.ReceiveBeginPlay
// (NetReliable, Native, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void ABP_MultiplePersonCamera_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.ReceiveBeginPlay");

	ABP_MultiplePersonCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.ChangeTarget
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Public, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          NewTarget                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          lerpTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MultiplePersonCamera_C::STATIC_ChangeTarget(TArray<class AActor*> NewTarget, float lerpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.ChangeTarget");

	ABP_MultiplePersonCamera_C_ChangeTarget_Params params;
	params.NewTarget = NewTarget;
	params.lerpTime = lerpTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.ExecuteUbergraph_BP_MultiplePersonCamera
// (Net, Exec, Native, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MultiplePersonCamera_C::ExecuteUbergraph_BP_MultiplePersonCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.ExecuteUbergraph_BP_MultiplePersonCamera");

	ABP_MultiplePersonCamera_C_ExecuteUbergraph_BP_MultiplePersonCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

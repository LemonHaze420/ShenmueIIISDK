
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

// Function BPC_AutoFocusing.BPC_AutoFocusing_C.GetDotedDistance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UbpS3CameraComp_C*       Camera                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_AutoFocusing_C::GetDotedDistance(class AActor* Actor, class UbpS3CameraComp_C* Camera, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AutoFocusing.BPC_AutoFocusing_C.GetDotedDistance");

	UBPC_AutoFocusing_C_GetDotedDistance_Params params;
	params.Actor = Actor;
	params.Camera = Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BPC_AutoFocusing.BPC_AutoFocusing_C.CullActors
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          ActorList                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UbpS3CameraComp_C*       Camera                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class AActor*>          CulledActors                   (Parm, OutParm, ZeroConstructor)

void UBPC_AutoFocusing_C::CullActors(class UbpS3CameraComp_C* Camera, TArray<class AActor*>* ActorList, TArray<class AActor*>* CulledActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AutoFocusing.BPC_AutoFocusing_C.CullActors");

	UBPC_AutoFocusing_C_CullActors_Params params;
	params.Camera = Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorList != nullptr)
		*ActorList = params.ActorList;
	if (CulledActors != nullptr)
		*CulledActors = params.CulledActors;
}


// Function BPC_AutoFocusing.BPC_AutoFocusing_C.GetNearestAndFarthestActor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          ActorList                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UbpS3CameraComp_C*       Camera                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  NearestActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  FarthestActor                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_AutoFocusing_C::GetNearestAndFarthestActor(class UbpS3CameraComp_C* Camera, TArray<class AActor*>* ActorList, class AActor** NearestActor, class AActor** FarthestActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AutoFocusing.BPC_AutoFocusing_C.GetNearestAndFarthestActor");

	UBPC_AutoFocusing_C_GetNearestAndFarthestActor_Params params;
	params.Camera = Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorList != nullptr)
		*ActorList = params.ActorList;
	if (NearestActor != nullptr)
		*NearestActor = params.NearestActor;
	if (FarthestActor != nullptr)
		*FarthestActor = params.FarthestActor;
}


// Function BPC_AutoFocusing.BPC_AutoFocusing_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_AutoFocusing_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AutoFocusing.BPC_AutoFocusing_C.ReceiveBeginPlay");

	UBPC_AutoFocusing_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_AutoFocusing.BPC_AutoFocusing_C.ChangeTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          NewTarget                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          lerpTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_AutoFocusing_C::ChangeTarget(TArray<class AActor*> NewTarget, float lerpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AutoFocusing.BPC_AutoFocusing_C.ChangeTarget");

	UBPC_AutoFocusing_C_ChangeTarget_Params params;
	params.NewTarget = NewTarget;
	params.lerpTime = lerpTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_AutoFocusing.BPC_AutoFocusing_C.Update
// (BlueprintCallable, BlueprintEvent)

void UBPC_AutoFocusing_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AutoFocusing.BPC_AutoFocusing_C.Update");

	UBPC_AutoFocusing_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_AutoFocusing.BPC_AutoFocusing_C.ExecuteUbergraph_BPC_AutoFocusing
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_AutoFocusing_C::ExecuteUbergraph_BPC_AutoFocusing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AutoFocusing.BPC_AutoFocusing_C.ExecuteUbergraph_BPC_AutoFocusing");

	UBPC_AutoFocusing_C_ExecuteUbergraph_BPC_AutoFocusing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

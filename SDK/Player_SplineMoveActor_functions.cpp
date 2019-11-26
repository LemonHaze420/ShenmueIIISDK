
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

// Function Player_SplineMoveActor.Player_SplineMoveActor_C.RegisterSteering
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  RegisterActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayer_SplineMoveActor_C::RegisterSteering(class AActor* RegisterActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_SplineMoveActor.Player_SplineMoveActor_C.RegisterSteering");

	APlayer_SplineMoveActor_C_RegisterSteering_Params params;
	params.RegisterActor = RegisterActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_SplineMoveActor.Player_SplineMoveActor_C.RegisterWithPlayer
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Register                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayer_SplineMoveActor_C::RegisterWithPlayer(bool Register)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_SplineMoveActor.Player_SplineMoveActor_C.RegisterWithPlayer");

	APlayer_SplineMoveActor_C_RegisterWithPlayer_Params params;
	params.Register = Register;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_SplineMoveActor.Player_SplineMoveActor_C.SnapPointsToGround
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayer_SplineMoveActor_C::SnapPointsToGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_SplineMoveActor.Player_SplineMoveActor_C.SnapPointsToGround");

	APlayer_SplineMoveActor_C_SnapPointsToGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_SplineMoveActor.Player_SplineMoveActor_C.EvaluateStrengthCurve
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCurveFloat*             Curve                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InTime                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Strength                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayer_SplineMoveActor_C::EvaluateStrengthCurve(class UCurveFloat* Curve, float InTime, float* Strength)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_SplineMoveActor.Player_SplineMoveActor_C.EvaluateStrengthCurve");

	APlayer_SplineMoveActor_C_EvaluateStrengthCurve_Params params;
	params.Curve = Curve;
	params.InTime = InTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Strength != nullptr)
		*Strength = params.Strength;
}


// Function Player_SplineMoveActor.Player_SplineMoveActor_C.InitSpline
// (Public, BlueprintCallable, BlueprintEvent)

void APlayer_SplineMoveActor_C::InitSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_SplineMoveActor.Player_SplineMoveActor_C.InitSpline");

	APlayer_SplineMoveActor_C_InitSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_SplineMoveActor.Player_SplineMoveActor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayer_SplineMoveActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_SplineMoveActor.Player_SplineMoveActor_C.UserConstructionScript");

	APlayer_SplineMoveActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_SplineMoveActor.Player_SplineMoveActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayer_SplineMoveActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_SplineMoveActor.Player_SplineMoveActor_C.ReceiveBeginPlay");

	APlayer_SplineMoveActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_SplineMoveActor.Player_SplineMoveActor_C.BndEvt__DefaultTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APlayer_SplineMoveActor_C::BndEvt__DefaultTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_SplineMoveActor.Player_SplineMoveActor_C.BndEvt__DefaultTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	APlayer_SplineMoveActor_C_BndEvt__DefaultTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_SplineMoveActor.Player_SplineMoveActor_C.BndEvt__DefaultTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayer_SplineMoveActor_C::BndEvt__DefaultTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_SplineMoveActor.Player_SplineMoveActor_C.BndEvt__DefaultTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	APlayer_SplineMoveActor_C_BndEvt__DefaultTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_SplineMoveActor.Player_SplineMoveActor_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayer_SplineMoveActor_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_SplineMoveActor.Player_SplineMoveActor_C.ReceiveEndPlay");

	APlayer_SplineMoveActor_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_SplineMoveActor.Player_SplineMoveActor_C.ExecuteUbergraph_Player_SplineMoveActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayer_SplineMoveActor_C::ExecuteUbergraph_Player_SplineMoveActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_SplineMoveActor.Player_SplineMoveActor_C.ExecuteUbergraph_Player_SplineMoveActor");

	APlayer_SplineMoveActor_C_ExecuteUbergraph_Player_SplineMoveActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

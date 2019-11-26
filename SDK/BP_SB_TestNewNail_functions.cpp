
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

// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.GetMiniGameValueType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_ValueType>      Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SB_TestNewNail_C::GetMiniGameValueType(TEnumAsByte<EN_ValueType>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.GetMiniGameValueType");

	ABP_SB_TestNewNail_C_GetMiniGameValueType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.GetImpulseDirection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 BallActorLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// struct FVector                 Direction                      (Parm, OutParm, IsPlainOldData)

bool ABP_SB_TestNewNail_C::GetImpulseDirection(const struct FVector& BallActorLocation, const struct FVector& NormalImpulse, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.GetImpulseDirection");

	ABP_SB_TestNewNail_C_GetImpulseDirection_Params params;
	params.BallActorLocation = BallActorLocation;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;

	return params.ReturnValue;
}


// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewNail_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.UserConstructionScript");

	ABP_SB_TestNewNail_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewNail_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.EndMiniGame");

	ABP_SB_TestNewNail_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.WinMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewNail_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.WinMiniGame");

	ABP_SB_TestNewNail_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.BndEvt__Capsule_SoundCheckCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_SB_TestNewNail_C::BndEvt__Capsule_SoundCheckCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.BndEvt__Capsule_SoundCheckCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_SB_TestNewNail_C_BndEvt__Capsule_SoundCheckCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.BndEvt__Capsule_SoundCheckCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_TestNewNail_C::BndEvt__Capsule_SoundCheckCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.BndEvt__Capsule_SoundCheckCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_SB_TestNewNail_C_BndEvt__Capsule_SoundCheckCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.EnterMiniGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          EnterTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_TestNewNail_C::EnterMiniGame(float EnterTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.EnterMiniGame");

	ABP_SB_TestNewNail_C_EnterMiniGame_Params params;
	params.EnterTime = EnterTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.RestartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewNail_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.RestartMiniGame");

	ABP_SB_TestNewNail_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewNail_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.StartMiniGame");

	ABP_SB_TestNewNail_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_SB_TestNewNail_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_SB_TestNewNail_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.FinalizeTalk
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewNail_C::FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.FinalizeTalk");

	ABP_SB_TestNewNail_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_TestNewNail_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.ReceiveTick");

	ABP_SB_TestNewNail_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.DrawMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewNail_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.DrawMiniGame");

	ABP_SB_TestNewNail_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.LoseMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewNail_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.LoseMiniGame");

	ABP_SB_TestNewNail_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.ExecuteUbergraph_BP_SB_TestNewNail
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_TestNewNail_C::ExecuteUbergraph_BP_SB_TestNewNail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.ExecuteUbergraph_BP_SB_TestNewNail");

	ABP_SB_TestNewNail_C_ExecuteUbergraph_BP_SB_TestNewNail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

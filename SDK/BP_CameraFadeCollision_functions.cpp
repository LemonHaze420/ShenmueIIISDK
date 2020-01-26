
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

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.UpdatePlayerFaderState
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CameraFadeCollision_C::UpdatePlayerFaderState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.UpdatePlayerFaderState");

	ABP_CameraFadeCollision_C_UpdatePlayerFaderState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.SelectFadeTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          NonInstant                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_CameraFadeCollision_C::SelectFadeTime(float NonInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.SelectFadeTime");

	ABP_CameraFadeCollision_C_SelectFadeTime_Params params;
	params.NonInstant = NonInstant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.ShouldAllFadesBeInstant
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CameraFadeCollision_C::ShouldAllFadesBeInstant()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.ShouldAllFadesBeInstant");

	ABP_CameraFadeCollision_C_ShouldAllFadesBeInstant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.EnableNPCFadeCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Requester                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CameraFadeCollision_C::EnableNPCFadeCollision(bool Enable, class UObject* Requester)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.EnableNPCFadeCollision");

	ABP_CameraFadeCollision_C_EnableNPCFadeCollision_Params params;
	params.Enable = Enable;
	params.Requester = Requester;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.GetCollidedDoor
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Primitive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// class AS3GimmickOpenDoor*      Door                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ABP_CameraFadeCollision_C::GetCollidedDoor(class AActor* Actor, class UPrimitiveComponent* Primitive, class AS3GimmickOpenDoor** Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.GetCollidedDoor");

	ABP_CameraFadeCollision_C_GetCollidedDoor_Params params;
	params.Actor = Actor;
	params.Primitive = Primitive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Door != nullptr)
		*Door = params.Door;

	return params.ReturnValue;
}


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.FadeDoor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3GimmickOpenDoor*      Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CameraFadeCollision_C::FadeDoor(class AS3GimmickOpenDoor* Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.FadeDoor");

	ABP_CameraFadeCollision_C_FadeDoor_Params params;
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.ShouldHideOverlappingNPCs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CameraFadeCollision_C::ShouldHideOverlappingNPCs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.ShouldHideOverlappingNPCs");

	ABP_CameraFadeCollision_C_ShouldHideOverlappingNPCs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.OverlapNPC
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3Character*            NPC                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Overlap                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CameraFadeCollision_C::OverlapNPC(class AS3Character* NPC, bool Overlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.OverlapNPC");

	ABP_CameraFadeCollision_C_OverlapNPC_Params params;
	params.NPC = NPC;
	params.Overlap = Overlap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.EnablePlayerFadeCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Requester                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CameraFadeCollision_C::EnablePlayerFadeCollision(bool Enable, class UObject* Requester)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.EnablePlayerFadeCollision");

	ABP_CameraFadeCollision_C_EnablePlayerFadeCollision_Params params;
	params.Enable = Enable;
	params.Requester = Requester;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.WantsToHidePlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CameraFadeCollision_C::WantsToHidePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.WantsToHidePlayer");

	ABP_CameraFadeCollision_C_WantsToHidePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.FadeCharacter
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3Character*            Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FadeOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CameraFadeCollision_C::FadeCharacter(class AS3Character* Character, bool FadeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.FadeCharacter");

	ABP_CameraFadeCollision_C_FadeCharacter_Params params;
	params.Character = Character;
	params.FadeOut = FadeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.IsPlayerMeshCollision
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USceneComponent*         Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CameraFadeCollision_C::IsPlayerMeshCollision(class USceneComponent* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.IsPlayerMeshCollision");

	ABP_CameraFadeCollision_C_IsPlayerMeshCollision_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CameraFadeCollision_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.UserConstructionScript");

	ABP_CameraFadeCollision_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_CameraFadeCollision_C::BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_CameraFadeCollision_C_BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CameraFadeCollision_C::BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_CameraFadeCollision_C_BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CameraFadeCollision_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.ReceiveTick");

	ABP_CameraFadeCollision_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__NPCTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_CameraFadeCollision_C::BndEvt__NPCTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__NPCTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_CameraFadeCollision_C_BndEvt__NPCTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__NPCTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CameraFadeCollision_C::BndEvt__NPCTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__NPCTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	ABP_CameraFadeCollision_C_BndEvt__NPCTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CameraFadeCollision_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.ReceiveEndPlay");

	ABP_CameraFadeCollision_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__DoorTrigger_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_CameraFadeCollision_C::BndEvt__DoorTrigger_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__DoorTrigger_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_CameraFadeCollision_C_BndEvt__DoorTrigger_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__DoorTrigger_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CameraFadeCollision_C::BndEvt__DoorTrigger_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__DoorTrigger_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature");

	ABP_CameraFadeCollision_C_BndEvt__DoorTrigger_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__DisablePlayerFade_K2Node_ComponentBoundEvent_8_OnLastRequestRemove__DelegateSignature
// (BlueprintEvent)

void ABP_CameraFadeCollision_C::BndEvt__DisablePlayerFade_K2Node_ComponentBoundEvent_8_OnLastRequestRemove__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__DisablePlayerFade_K2Node_ComponentBoundEvent_8_OnLastRequestRemove__DelegateSignature");

	ABP_CameraFadeCollision_C_BndEvt__DisablePlayerFade_K2Node_ComponentBoundEvent_8_OnLastRequestRemove__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__DisableNPCAndDoorFade_K2Node_ComponentBoundEvent_6_OnFirstRequestAdd__DelegateSignature
// (BlueprintEvent)

void ABP_CameraFadeCollision_C::BndEvt__DisableNPCAndDoorFade_K2Node_ComponentBoundEvent_6_OnFirstRequestAdd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__DisableNPCAndDoorFade_K2Node_ComponentBoundEvent_6_OnFirstRequestAdd__DelegateSignature");

	ABP_CameraFadeCollision_C_BndEvt__DisableNPCAndDoorFade_K2Node_ComponentBoundEvent_6_OnFirstRequestAdd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__DisableNPCAndDoorFade_K2Node_ComponentBoundEvent_7_OnLastRequestRemove__DelegateSignature
// (BlueprintEvent)

void ABP_CameraFadeCollision_C::BndEvt__DisableNPCAndDoorFade_K2Node_ComponentBoundEvent_7_OnLastRequestRemove__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__DisableNPCAndDoorFade_K2Node_ComponentBoundEvent_7_OnLastRequestRemove__DelegateSignature");

	ABP_CameraFadeCollision_C_BndEvt__DisableNPCAndDoorFade_K2Node_ComponentBoundEvent_7_OnLastRequestRemove__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CameraFadeCollision_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.ReceiveBeginPlay");

	ABP_CameraFadeCollision_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.ResumeNormalNPCFadeMode
// (BlueprintCallable, BlueprintEvent)

void ABP_CameraFadeCollision_C::ResumeNormalNPCFadeMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.ResumeNormalNPCFadeMode");

	ABP_CameraFadeCollision_C_ResumeNormalNPCFadeMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.StartFastNPCFadeMode
// (BlueprintCallable, BlueprintEvent)

void ABP_CameraFadeCollision_C::StartFastNPCFadeMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.StartFastNPCFadeMode");

	ABP_CameraFadeCollision_C_StartFastNPCFadeMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.ExecuteUbergraph_BP_CameraFadeCollision
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CameraFadeCollision_C::ExecuteUbergraph_BP_CameraFadeCollision(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.ExecuteUbergraph_BP_CameraFadeCollision");

	ABP_CameraFadeCollision_C_ExecuteUbergraph_BP_CameraFadeCollision_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

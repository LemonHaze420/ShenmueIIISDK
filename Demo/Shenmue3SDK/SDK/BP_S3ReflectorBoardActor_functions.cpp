
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

// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.SetActiveLight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ReflectorBoardActor_C::SetActiveLight(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.SetActiveLight");

	ABP_S3ReflectorBoardActor_C_SetActiveLight_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ToggleActive
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3ReflectorBoardActor_C::ToggleActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ToggleActive");

	ABP_S3ReflectorBoardActor_C_ToggleActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.UpdateLightActive
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_S3ReflectorBoardActor_C::UpdateLightActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.UpdateLightActive");

	ABP_S3ReflectorBoardActor_C_UpdateLightActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.CalcLightPos
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 pelvis                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ReturnPos                      (Parm, OutParm, IsPlainOldData)

void ABP_S3ReflectorBoardActor_C::CalcLightPos(const struct FVector& pelvis, struct FVector* ReturnPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.CalcLightPos");

	ABP_S3ReflectorBoardActor_C_CalcLightPos_Params params;
	params.pelvis = pelvis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnPos != nullptr)
		*ReturnPos = params.ReturnPos;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.CalcLightPosition
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3ReflectorBoardActor_C::CalcLightPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.CalcLightPosition");

	ABP_S3ReflectorBoardActor_C_CalcLightPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3ReflectorBoardActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.UserConstructionScript");

	ABP_S3ReflectorBoardActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.EndCutscene
// (BlueprintCallable, BlueprintEvent)

void ABP_S3ReflectorBoardActor_C::EndCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.EndCutscene");

	ABP_S3ReflectorBoardActor_C_EndCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.StartCutscene
// (BlueprintCallable, BlueprintEvent)

void ABP_S3ReflectorBoardActor_C::StartCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.StartCutscene");

	ABP_S3ReflectorBoardActor_C_StartCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.StartTalk
// (BlueprintCallable, BlueprintEvent)

void ABP_S3ReflectorBoardActor_C::StartTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.StartTalk");

	ABP_S3ReflectorBoardActor_C_StartTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.EndTalk
// (BlueprintCallable, BlueprintEvent)

void ABP_S3ReflectorBoardActor_C::EndTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.EndTalk");

	ABP_S3ReflectorBoardActor_C_EndTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ChangeTalkCamera
// (BlueprintCallable, BlueprintEvent)

void ABP_S3ReflectorBoardActor_C::ChangeTalkCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ChangeTalkCamera");

	ABP_S3ReflectorBoardActor_C_ChangeTalkCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.UnbindEventDispacher
// (BlueprintCallable, BlueprintEvent)

void ABP_S3ReflectorBoardActor_C::UnbindEventDispacher()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.UnbindEventDispacher");

	ABP_S3ReflectorBoardActor_C_UnbindEventDispacher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.BindEventDispatcher
// (BlueprintCallable, BlueprintEvent)

void ABP_S3ReflectorBoardActor_C::BindEventDispatcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.BindEventDispatcher");

	ABP_S3ReflectorBoardActor_C_BindEventDispatcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3ReflectorBoardActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ReceiveBeginPlay");

	ABP_S3ReflectorBoardActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ReflectorBoardActor_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ReceiveTick");

	ABP_S3ReflectorBoardActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.EndOwner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ReflectorBoardActor_C::EndOwner(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.EndOwner");

	ABP_S3ReflectorBoardActor_C_EndOwner_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ReflectorBoardActor_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ReceiveEndPlay");

	ABP_S3ReflectorBoardActor_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ExecuteUbergraph_BP_S3ReflectorBoardActor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ReflectorBoardActor_C::ExecuteUbergraph_BP_S3ReflectorBoardActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ReflectorBoardActor.BP_S3ReflectorBoardActor_C.ExecuteUbergraph_BP_S3ReflectorBoardActor");

	ABP_S3ReflectorBoardActor_C_ExecuteUbergraph_BP_S3ReflectorBoardActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

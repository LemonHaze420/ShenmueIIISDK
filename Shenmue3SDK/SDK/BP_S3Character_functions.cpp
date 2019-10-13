
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

// Function BP_S3Character.BP_S3Character_C.AddTurnAroundComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPC_TurnAround_C*       Component                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_S3Character_C::AddTurnAroundComponent(class UBPC_TurnAround_C** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.AddTurnAroundComponent");

	ABP_S3Character_C_AddTurnAroundComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


// Function BP_S3Character.BP_S3Character_C.RemoveTurnAroundComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3Character_C::RemoveTurnAroundComponent(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.RemoveTurnAroundComponent");

	ABP_S3Character_C_RemoveTurnAroundComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_S3Character.BP_S3Character_C.GetTurnAroundComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPC_TurnAround_C*       Component                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_S3Character_C::GetTurnAroundComponent(class UBPC_TurnAround_C** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.GetTurnAroundComponent");

	ABP_S3Character_C_GetTurnAroundComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


// Function BP_S3Character.BP_S3Character_C.IsInShelter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Sheltered                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3Character_C::IsInShelter(bool* Sheltered)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.IsInShelter");

	ABP_S3Character_C_IsInShelter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sheltered != nullptr)
		*Sheltered = params.Sheltered;
}


// Function BP_S3Character.BP_S3Character_C.IsTalking
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3Character_C::IsTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.IsTalking");

	ABP_S3Character_C_IsTalking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3Character.BP_S3Character_C.GetDoorActor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AS3GimmickOpenDoor*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AS3GimmickOpenDoor* ABP_S3Character_C::GetDoorActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.GetDoorActor");

	ABP_S3Character_C_GetDoorActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3Character.BP_S3Character_C.GetNearSideTargetTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ValidDoor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              TargetTransform                (Parm, OutParm, IsPlainOldData)

void ABP_S3Character_C::GetNearSideTargetTransform(bool* ValidDoor, struct FTransform* TargetTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.GetNearSideTargetTransform");

	ABP_S3Character_C_GetNearSideTargetTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidDoor != nullptr)
		*ValidDoor = params.ValidDoor;
	if (TargetTransform != nullptr)
		*TargetTransform = params.TargetTransform;
}


// Function BP_S3Character.BP_S3Character_C.GetNearSideTargetPos
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ValidDoor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 pos                            (Parm, OutParm, IsPlainOldData)

void ABP_S3Character_C::GetNearSideTargetPos(bool* ValidDoor, struct FVector* pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.GetNearSideTargetPos");

	ABP_S3Character_C_GetNearSideTargetPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidDoor != nullptr)
		*ValidDoor = params.ValidDoor;
	if (pos != nullptr)
		*pos = params.pos;
}


// Function BP_S3Character.BP_S3Character_C.GetCharaToDoorPointDiff
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 pos                            (Parm, OutParm, IsPlainOldData)
// float                          AngleDeg                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3Character_C::GetCharaToDoorPointDiff(struct FVector* pos, float* AngleDeg)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.GetCharaToDoorPointDiff");

	ABP_S3Character_C_GetCharaToDoorPointDiff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pos != nullptr)
		*pos = params.pos;
	if (AngleDeg != nullptr)
		*AngleDeg = params.AngleDeg;
}


// Function BP_S3Character.BP_S3Character_C.ChangePosition
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3Character_C::ChangePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.ChangePosition");

	ABP_S3Character_C_ChangePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Character.BP_S3Character_C.MoveDoorPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Character_C::MoveDoorPoint(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.MoveDoorPoint");

	ABP_S3Character_C_MoveDoorPoint_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Character.BP_S3Character_C.NotifyFinishNock
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3Character_C::NotifyFinishNock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.NotifyFinishNock");

	ABP_S3Character_C_NotifyFinishNock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Character.BP_S3Character_C.NotifyFinishMove
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3Character_C::NotifyFinishMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.NotifyFinishMove");

	ABP_S3Character_C_NotifyFinishMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Character.BP_S3Character_C.OpenDoor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3Character_C::OpenDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.OpenDoor");

	ABP_S3Character_C_OpenDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Character.BP_S3Character_C.CheckCanUseDoor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUseDoor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3Character_C::CheckCanUseDoor(bool* IsUseDoor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.CheckCanUseDoor");

	ABP_S3Character_C_CheckCanUseDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUseDoor != nullptr)
		*IsUseDoor = params.IsUseDoor;
}


// Function BP_S3Character.BP_S3Character_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3Character_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.UserConstructionScript");

	ABP_S3Character_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Character.BP_S3Character_C.OnTalkStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3TalkComponent**       TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_S3Character_C::OnTalkStart(class US3TalkComponent** TalkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.OnTalkStart");

	ABP_S3Character_C_OnTalkStart_Params params;
	params.TalkComponent = TalkComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Character.BP_S3Character_C.OnTalkFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3TalkComponent**       TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          interrupted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Character_C::OnTalkFinished(class US3TalkComponent** TalkComponent, bool* interrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.OnTalkFinished");

	ABP_S3Character_C_OnTalkFinished_Params params;
	params.TalkComponent = TalkComponent;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Character.BP_S3Character_C.Screen_Player
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3Character_C::Screen_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.Screen_Player");

	ABP_S3Character_C_Screen_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Character.BP_S3Character_C.Screen_NPC
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3Character_C::Screen_NPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.Screen_NPC");

	ABP_S3Character_C_Screen_NPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Character.BP_S3Character_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3Character_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.ReceiveBeginPlay");

	ABP_S3Character_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Character.BP_S3Character_C.StartNock
// (BlueprintCallable, BlueprintEvent)

void ABP_S3Character_C::StartNock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.StartNock");

	ABP_S3Character_C_StartNock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Character.BP_S3Character_C.OnDoorAreaBeginOverlap
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3GimmickOpenDoor**     Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Character_C::OnDoorAreaBeginOverlap(class AS3GimmickOpenDoor** Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.OnDoorAreaBeginOverlap");

	ABP_S3Character_C_OnDoorAreaBeginOverlap_Params params;
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Character.BP_S3Character_C.OnDoorAreaEndOverlap
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3GimmickOpenDoor**     Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Character_C::OnDoorAreaEndOverlap(class AS3GimmickOpenDoor** Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.OnDoorAreaEndOverlap");

	ABP_S3Character_C_OnDoorAreaEndOverlap_Params params;
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Character.BP_S3Character_C.OnDoorAreaOutsideBeginOverlap
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3GimmickOpenDoor**     Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Character_C::OnDoorAreaOutsideBeginOverlap(class AS3GimmickOpenDoor** Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.OnDoorAreaOutsideBeginOverlap");

	ABP_S3Character_C_OnDoorAreaOutsideBeginOverlap_Params params;
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Character.BP_S3Character_C.OnDoorAreaOutsideEndOverlap
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3GimmickOpenDoor**     Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Character_C::OnDoorAreaOutsideEndOverlap(class AS3GimmickOpenDoor** Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.OnDoorAreaOutsideEndOverlap");

	ABP_S3Character_C_OnDoorAreaOutsideEndOverlap_Params params;
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Character.BP_S3Character_C.ExecuteUbergraph_BP_S3Character
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3Character_C::ExecuteUbergraph_BP_S3Character(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.ExecuteUbergraph_BP_S3Character");

	ABP_S3Character_C_ExecuteUbergraph_BP_S3Character_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3Character.BP_S3Character_C.StartNockDoor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_S3Character_C::StartNockDoor__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3Character.BP_S3Character_C.StartNockDoor__DelegateSignature");

	ABP_S3Character_C_StartNockDoor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

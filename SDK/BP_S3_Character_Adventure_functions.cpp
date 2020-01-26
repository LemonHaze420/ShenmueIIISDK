
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

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.GetGroundFoot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_FOOT_GROUND_STATE> Grounded                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::GetGroundFoot(TEnumAsByte<EN_FOOT_GROUND_STATE>* Grounded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.GetGroundFoot");

	ABP_S3_Character_Adventure_C_GetGroundFoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Grounded != nullptr)
		*Grounded = params.Grounded;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.FootFrontLRCalc
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           flag                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::FootFrontLRCalc(bool* flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.FootFrontLRCalc");

	ABP_S3_Character_Adventure_C_FootFrontLRCalc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (flag != nullptr)
		*flag = params.flag;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.GetStairClimber
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBPC_S3PlayerStairClimber_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBPC_S3PlayerStairClimber_C* ABP_S3_Character_Adventure_C::GetStairClimber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.GetStairClimber");

	ABP_S3_Character_Adventure_C_GetStairClimber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.IsTalking
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3_Character_Adventure_C::IsTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.IsTalking");

	ABP_S3_Character_Adventure_C_IsTalking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.UpdateCollisionResponses
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECollisionChannel> JustChangedChannel             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::UpdateCollisionResponses(TEnumAsByte<ECollisionChannel> JustChangedChannel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.UpdateCollisionResponses");

	ABP_S3_Character_Adventure_C_UpdateCollisionResponses_Params params;
	params.JustChangedChannel = JustChangedChannel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.RemoveIgnoreCollisionRequests
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Requester                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::RemoveIgnoreCollisionRequests(class UObject* Requester)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.RemoveIgnoreCollisionRequests");

	ABP_S3_Character_Adventure_C_RemoveIgnoreCollisionRequests_Params params;
	params.Requester = Requester;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.HasIgnoreCollisionChannelRequest
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ECollisionChannel> Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3_Character_Adventure_C::HasIgnoreCollisionChannelRequest(TEnumAsByte<ECollisionChannel> Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.HasIgnoreCollisionChannelRequest");

	ABP_S3_Character_Adventure_C_HasIgnoreCollisionChannelRequest_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.IgnoreCollisionChannel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECollisionChannel> Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           StartIgnore                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Requester                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::IgnoreCollisionChannel(TEnumAsByte<ECollisionChannel> Channel, bool StartIgnore, class UObject* Requester)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.IgnoreCollisionChannel");

	ABP_S3_Character_Adventure_C_IgnoreCollisionChannel_Params params;
	params.Channel = Channel;
	params.StartIgnore = StartIgnore;
	params.Requester = Requester;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.GetEnableIK
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIKEnabled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::GetEnableIK(bool* bIKEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.GetEnableIK");

	ABP_S3_Character_Adventure_C_GetEnableIK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIKEnabled != nullptr)
		*bIKEnabled = params.bIKEnabled;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ReturnOutOfWorld
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3_Character_Adventure_C::ReturnOutOfWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ReturnOutOfWorld");

	ABP_S3_Character_Adventure_C_ReturnOutOfWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.GetSearchMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_PC_SearchMode>  SearchMode                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::GetSearchMode(TEnumAsByte<EN_PC_SearchMode>* SearchMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.GetSearchMode");

	ABP_S3_Character_Adventure_C_GetSearchMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SearchMode != nullptr)
		*SearchMode = params.SearchMode;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.SetSearchMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_PC_SearchMode>  Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::SetSearchMode(TEnumAsByte<EN_PC_SearchMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.SetSearchMode");

	ABP_S3_Character_Adventure_C_SetSearchMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.SetMovementMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Executor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     MovementMode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NewCustomMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::SetMovementMode(class UObject* Executor, TEnumAsByte<EMovementMode> MovementMode, unsigned char NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.SetMovementMode");

	ABP_S3_Character_Adventure_C_SetMovementMode_Params params;
	params.Executor = Executor;
	params.MovementMode = MovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ReactToTeleported
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_S3_Character_Adventure_C::ReactToTeleported()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ReactToTeleported");

	ABP_S3_Character_Adventure_C_ReactToTeleported_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.TeleportWithCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                NewRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_S3_Character_Adventure_C::TeleportWithCamera(const struct FVector& NewLocation, const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.TeleportWithCamera");

	ABP_S3_Character_Adventure_C_TeleportWithCamera_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.AddReflectorBoard
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3_Character_Adventure_C::AddReflectorBoard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.AddReflectorBoard");

	ABP_S3_Character_Adventure_C_AddReflectorBoard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.SetEnableIK
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInIKEnabled                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::SetEnableIK(bool bInIKEnabled, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.SetEnableIK");

	ABP_S3_Character_Adventure_C_SetEnableIK_Params params;
	params.bInIKEnabled = bInIKEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.UpdateDoorActor
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_S3_Character_Adventure_C::UpdateDoorActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.UpdateDoorActor");

	ABP_S3_Character_Adventure_C_UpdateDoorActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.GetClosestDoor
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3GimmickOpenDoor*      OutDoor                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::GetClosestDoor(class AS3GimmickOpenDoor** OutDoor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.GetClosestDoor");

	ABP_S3_Character_Adventure_C_GetClosestDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDoor != nullptr)
		*OutDoor = params.OutDoor;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.IsInDoorTrigger
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bInTrigger                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::IsInDoorTrigger(bool* bInTrigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.IsInDoorTrigger");

	ABP_S3_Character_Adventure_C_IsInDoorTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bInTrigger != nullptr)
		*bInTrigger = params.bInTrigger;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ExpandNPCSensorDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MinDistance                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::ExpandNPCSensorDistance(float MinDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ExpandNPCSensorDistance");

	ABP_S3_Character_Adventure_C_ExpandNPCSensorDistance_Params params;
	params.MinDistance = MinDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.UpdatePlayerFade
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_S3_Character_Adventure_C::UpdatePlayerFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.UpdatePlayerFade");

	ABP_S3_Character_Adventure_C_UpdatePlayerFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.AddTurnAroundComponent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPC_TurnAround_C*       Component                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_S3_Character_Adventure_C::AddTurnAroundComponent(class UBPC_TurnAround_C** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.AddTurnAroundComponent");

	ABP_S3_Character_Adventure_C_AddTurnAroundComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.SetActorLocationAndRotationWithCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                NewRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Sweep                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Teleport                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::SetActorLocationAndRotationWithCamera(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool Sweep, bool Teleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.SetActorLocationAndRotationWithCamera");

	ABP_S3_Character_Adventure_C_SetActorLocationAndRotationWithCamera_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;
	params.Sweep = Sweep;
	params.Teleport = Teleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ClearNotice
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3_Character_Adventure_C::ClearNotice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ClearNotice");

	ABP_S3_Character_Adventure_C_ClearNotice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.TalkStopMotion
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3_Character_Adventure_C::TalkStopMotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.TalkStopMotion");

	ABP_S3_Character_Adventure_C_TalkStopMotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.TalkPlayMotion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SitFlag                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::TalkPlayMotion(bool SitFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.TalkPlayMotion");

	ABP_S3_Character_Adventure_C_TalkPlayMotion_Params params;
	params.SitFlag = SitFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.IsDenyInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Deny                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::IsDenyInput(bool* Deny)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.IsDenyInput");

	ABP_S3_Character_Adventure_C_IsDenyInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Deny != nullptr)
		*Deny = params.Deny;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.CheckInputAxis
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWasInput                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::CheckInputAxis(float AxisValue, bool* bWasInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.CheckInputAxis");

	ABP_S3_Character_Adventure_C_CheckInputAxis_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bWasInput != nullptr)
		*bWasInput = params.bWasInput;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3_Character_Adventure_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.UserConstructionScript");

	ABP_S3_Character_Adventure_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.BindCutscene
// (BlueprintCallable, BlueprintEvent)

void ABP_S3_Character_Adventure_C::BindCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.BindCutscene");

	ABP_S3_Character_Adventure_C_BindCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.UnbindCutscene
// (BlueprintCallable, BlueprintEvent)

void ABP_S3_Character_Adventure_C::UnbindCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.UnbindCutscene");

	ABP_S3_Character_Adventure_C_UnbindCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.StartCutscene
// (BlueprintCallable, BlueprintEvent)

void ABP_S3_Character_Adventure_C::StartCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.StartCutscene");

	ABP_S3_Character_Adventure_C_StartCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.EndCutscene
// (BlueprintCallable, BlueprintEvent)

void ABP_S3_Character_Adventure_C::EndCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.EndCutscene");

	ABP_S3_Character_Adventure_C_EndCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.OnTalkStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3TalkComponent*        TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_S3_Character_Adventure_C::OnTalkStart(class US3TalkComponent* TalkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.OnTalkStart");

	ABP_S3_Character_Adventure_C_OnTalkStart_Params params;
	params.TalkComponent = TalkComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.OnTalkFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3TalkComponent*        TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           interrupted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::OnTalkFinished(class US3TalkComponent* TalkComponent, bool interrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.OnTalkFinished");

	ABP_S3_Character_Adventure_C_OnTalkFinished_Params params;
	params.TalkComponent = TalkComponent;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.Screen_Player
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3_Character_Adventure_C::Screen_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.Screen_Player");

	ABP_S3_Character_Adventure_C_Screen_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.Screen_NPC
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3_Character_Adventure_C::Screen_NPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.Screen_NPC");

	ABP_S3_Character_Adventure_C_Screen_NPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ReceiveTick");

	ABP_S3_Character_Adventure_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3_Character_Adventure_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ReceiveBeginPlay");

	ABP_S3_Character_Adventure_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::ReceivePossessed(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ReceivePossessed");

	ABP_S3_Character_Adventure_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_S3_Character_Adventure_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ReceiveDestroyed");

	ABP_S3_Character_Adventure_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.StartNock
// (BlueprintCallable, BlueprintEvent)

void ABP_S3_Character_Adventure_C::StartNock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.StartNock");

	ABP_S3_Character_Adventure_C_StartNock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.BndEvt__NPCSensor_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_S3_Character_Adventure_C::BndEvt__NPCSensor_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.BndEvt__NPCSensor_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_S3_Character_Adventure_C_BndEvt__NPCSensor_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.BndEvt__NPCSensor_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::BndEvt__NPCSensor_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.BndEvt__NPCSensor_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	ABP_S3_Character_Adventure_C_BndEvt__NPCSensor_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.OnDoorAreaBeginOverlap
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3GimmickOpenDoor*      Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::OnDoorAreaBeginOverlap(class AS3GimmickOpenDoor* Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.OnDoorAreaBeginOverlap");

	ABP_S3_Character_Adventure_C_OnDoorAreaBeginOverlap_Params params;
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.OnDoorAreaEndOverlap
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3GimmickOpenDoor*      Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::OnDoorAreaEndOverlap(class AS3GimmickOpenDoor* Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.OnDoorAreaEndOverlap");

	ABP_S3_Character_Adventure_C_OnDoorAreaEndOverlap_Params params;
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ReceiveEndPlay");

	ABP_S3_Character_Adventure_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.HandleTeleportSucceeded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsATest                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::HandleTeleportSucceeded(bool bIsATest)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.HandleTeleportSucceeded");

	ABP_S3_Character_Adventure_C_HandleTeleportSucceeded_Params params;
	params.bIsATest = bIsATest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.CleanUpNullListEntries
// (BlueprintCallable, BlueprintEvent)

void ABP_S3_Character_Adventure_C::CleanUpNullListEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.CleanUpNullListEntries");

	ABP_S3_Character_Adventure_C_CleanUpNullListEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.FinishedLevelLoad
// (BlueprintCallable, BlueprintEvent)

void ABP_S3_Character_Adventure_C::FinishedLevelLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.FinishedLevelLoad");

	ABP_S3_Character_Adventure_C_FinishedLevelLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_3_OnEndStairUse__DelegateSignature
// (BlueprintEvent)

void ABP_S3_Character_Adventure_C::BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_3_OnEndStairUse__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_3_OnEndStairUse__DelegateSignature");

	ABP_S3_Character_Adventure_C_BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_3_OnEndStairUse__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_0_OnStartStairUse__DelegateSignature
// (BlueprintEvent)

void ABP_S3_Character_Adventure_C::BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_0_OnStartStairUse__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_0_OnStartStairUse__DelegateSignature");

	ABP_S3_Character_Adventure_C_BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_0_OnStartStairUse__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.K2_OnEndViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*       PC                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::K2_OnEndViewTarget(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.K2_OnEndViewTarget");

	ABP_S3_Character_Adventure_C_K2_OnEndViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.K2_OnBecomeViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*       PC                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::K2_OnBecomeViewTarget(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.K2_OnBecomeViewTarget");

	ABP_S3_Character_Adventure_C_K2_OnBecomeViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ExecuteUbergraph_BP_S3_Character_Adventure
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3_Character_Adventure_C::ExecuteUbergraph_BP_S3_Character_Adventure(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ExecuteUbergraph_BP_S3_Character_Adventure");

	ABP_S3_Character_Adventure_C_ExecuteUbergraph_BP_S3_Character_Adventure_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

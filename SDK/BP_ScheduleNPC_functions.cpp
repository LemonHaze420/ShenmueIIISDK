
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

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetHelpPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3HelpPriority                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ES3HelpPriority ABP_ScheduleNPC_C::GetHelpPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetHelpPriority");

	ABP_ScheduleNPC_C_GetHelpPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetHelpName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_ScheduleNPC_C::GetHelpName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetHelpName");

	ABP_ScheduleNPC_C_GetHelpName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.IsActivateHelp
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ScheduleNPC_C::IsActivateHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.IsActivateHelp");

	ABP_ScheduleNPC_C_IsActivateHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.RegisterHelp
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3HelpRegisterTiming          Timing                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ScheduleNPC_C::RegisterHelp(ES3HelpRegisterTiming Timing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.RegisterHelp");

	ABP_ScheduleNPC_C_RegisterHelp_Params params;
	params.Timing = Timing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.UnregisterHelp
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3HelpRegisterTiming          Timing                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ScheduleNPC_C::UnregisterHelp(ES3HelpRegisterTiming Timing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.UnregisterHelp");

	ABP_ScheduleNPC_C_UnregisterHelp_Params params;
	params.Timing = Timing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_ScheduleNPC_C::GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetPriority");

	ABP_ScheduleNPC_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetDetectAction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_ScheduleNPC_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetDetectAction");

	ABP_ScheduleNPC_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.CheckRewardNotice
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ScheduleNPC_C::CheckRewardNotice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.CheckRewardNotice");

	ABP_ScheduleNPC_C_CheckRewardNotice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.IsDisableFootIK
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bDisable                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::IsDisableFootIK(bool* bDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.IsDisableFootIK");

	ABP_ScheduleNPC_C_IsDisableFootIK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDisable != nullptr)
		*bDisable = params.bDisable;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.DestroyCameraCollisionSub
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ScheduleNPC_C::DestroyCameraCollisionSub()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.DestroyCameraCollisionSub");

	ABP_ScheduleNPC_C_DestroyCameraCollisionSub_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.CreateCameraCollisionSub
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HalfHeight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::CreateCameraCollisionSub(float Radius, float HalfHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.CreateCameraCollisionSub");

	ABP_ScheduleNPC_C_CreateCameraCollisionSub_Params params;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.IsLookAtBody
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::IsLookAtBody(bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.IsLookAtBody");

	ABP_ScheduleNPC_C_IsLookAtBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable != nullptr)
		*Enable = params.Enable;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetLookAtBody
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::SetLookAtBody(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetLookAtBody");

	ABP_ScheduleNPC_C_SetLookAtBody_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.ResetCloseEye
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ScheduleNPC_C::ResetCloseEye()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.ResetCloseEye");

	ABP_ScheduleNPC_C_ResetCloseEye_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetCloseEye
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::SetCloseEye(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetCloseEye");

	ABP_ScheduleNPC_C_SetCloseEye_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.IsTalking
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ScheduleNPC_C::IsTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.IsTalking");

	ABP_ScheduleNPC_C_IsTalking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.StairsIgnoreCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIgnore                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::StairsIgnoreCollision(bool bIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.StairsIgnoreCollision");

	ABP_ScheduleNPC_C_StairsIgnoreCollision_Params params;
	params.bIgnore = bIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetEnableIK
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIKEnabled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::GetEnableIK(bool* bIKEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetEnableIK");

	ABP_ScheduleNPC_C_GetEnableIK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIKEnabled != nullptr)
		*bIKEnabled = params.bIKEnabled;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.CalcCharaHeight
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ScheduleNPC_C::CalcCharaHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.CalcCharaHeight");

	ABP_ScheduleNPC_C_CalcCharaHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.StairsSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsEnable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::StairsSetting(bool bIsEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.StairsSetting");

	ABP_ScheduleNPC_C_StairsSetting_Params params;
	params.bIsEnable = bIsEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.UpdateStairs
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ScheduleNPC_C::UpdateStairs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.UpdateStairs");

	ABP_ScheduleNPC_C_UpdateStairs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetupHaveItem
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ScheduleNPC_C::SetupHaveItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetupHaveItem");

	ABP_ScheduleNPC_C_SetupHaveItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetEnableIK
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInIKEnabled                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::SetEnableIK(bool bInIKEnabled, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetEnableIK");

	ABP_ScheduleNPC_C_SetEnableIK_Params params;
	params.bInIKEnabled = bInIKEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.ReturnOutOfWorld
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ScheduleNPC_C::ReturnOutOfWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.ReturnOutOfWorld");

	ABP_ScheduleNPC_C_ReturnOutOfWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.RemoveDebugTraceComponent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ScheduleNPC_C::RemoveDebugTraceComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.RemoveDebugTraceComponent");

	ABP_ScheduleNPC_C_RemoveDebugTraceComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.AddDebugTraceComponent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ScheduleNPC_C::AddDebugTraceComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.AddDebugTraceComponent");

	ABP_ScheduleNPC_C_AddDebugTraceComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.UpdateDoor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ScheduleNPC_C::UpdateDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.UpdateDoor");

	ABP_ScheduleNPC_C_UpdateDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.UpdateFootIK
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::UpdateFootIK(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.UpdateFootIK");

	ABP_ScheduleNPC_C_UpdateFootIK_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.CheckNamePlate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ScheduleNPC_C::CheckNamePlate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.CheckNamePlate");

	ABP_ScheduleNPC_C_CheckNamePlate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.UpdateDebug
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ScheduleNPC_C::UpdateDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.UpdateDebug");

	ABP_ScheduleNPC_C_UpdateDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.CheckCanUseDoor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUseDoor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::CheckCanUseDoor(bool* IsUseDoor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.CheckCanUseDoor");

	ABP_ScheduleNPC_C_CheckCanUseDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUseDoor != nullptr)
		*IsUseDoor = params.IsUseDoor;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetS3PathFollowingComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class US3PathFollowingComponent* AsS3Path_Following_Component   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ScheduleNPC_C::GetS3PathFollowingComponent(class US3PathFollowingComponent** AsS3Path_Following_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetS3PathFollowingComponent");

	ABP_ScheduleNPC_C_GetS3PathFollowingComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsS3Path_Following_Component != nullptr)
		*AsS3Path_Following_Component = params.AsS3Path_Following_Component;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.AddTurnAroundComponent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPC_TurnAround_C*       Component                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ScheduleNPC_C::AddTurnAroundComponent(class UBPC_TurnAround_C** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.AddTurnAroundComponent");

	ABP_ScheduleNPC_C_AddTurnAroundComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ScheduleNPC_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.UserConstructionScript");

	ABP_ScheduleNPC_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.ReceiveTick");

	ABP_ScheduleNPC_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OpenDoor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ScheduleNPC_C::OpenDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OpenDoor");

	ABP_ScheduleNPC_C_OpenDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ScheduleNPC_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.ReceiveBeginPlay");

	ABP_ScheduleNPC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnFinishedTurn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPC_TurnAround_C*       SelfTurnAroundComponent        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ScheduleNPC_C::OnFinishedTurn(class UBPC_TurnAround_C* SelfTurnAroundComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnFinishedTurn");

	ABP_ScheduleNPC_C_OnFinishedTurn_Params params;
	params.SelfTurnAroundComponent = SelfTurnAroundComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnNPCInitialized
// (Event, Public, BlueprintEvent)

void ABP_ScheduleNPC_C::OnNPCInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnNPCInitialized");

	ABP_ScheduleNPC_C_OnNPCInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnDoorAreaOutsideBeginOverlap
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3GimmickOpenDoor*      Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::OnDoorAreaOutsideBeginOverlap(class AS3GimmickOpenDoor* Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnDoorAreaOutsideBeginOverlap");

	ABP_ScheduleNPC_C_OnDoorAreaOutsideBeginOverlap_Params params;
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnDoorAreaOutsideEndOverlap
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3GimmickOpenDoor*      Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::OnDoorAreaOutsideEndOverlap(class AS3GimmickOpenDoor* Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnDoorAreaOutsideEndOverlap");

	ABP_ScheduleNPC_C_OnDoorAreaOutsideEndOverlap_Params params;
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnDoorAreaBeginOverlap
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3GimmickOpenDoor*      Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::OnDoorAreaBeginOverlap(class AS3GimmickOpenDoor* Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnDoorAreaBeginOverlap");

	ABP_ScheduleNPC_C_OnDoorAreaBeginOverlap_Params params;
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnFriendStop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3Character*            Me                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AS3Character*            MyFriend                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Friendliness                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::OnFriendStop(class AS3Character* Me, class AS3Character* MyFriend, float Friendliness)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnFriendStop");

	ABP_ScheduleNPC_C_OnFriendStop_Params params;
	params.Me = Me;
	params.MyFriend = MyFriend;
	params.Friendliness = Friendliness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.StartCharaFadeOut
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Executor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::StartCharaFadeOut(class AActor* Executor, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.StartCharaFadeOut");

	ABP_ScheduleNPC_C_StartCharaFadeOut_Params params;
	params.Executor = Executor;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.ReceiveEndPlay");

	ABP_ScheduleNPC_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.StartCharaFadeIn
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Executor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::StartCharaFadeIn(class AActor* Executor, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.StartCharaFadeIn");

	ABP_ScheduleNPC_C_StartCharaFadeIn_Params params;
	params.Executor = Executor;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnBeginOverlapStairs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3StaircaseBase_C*   Staircase                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::OnBeginOverlapStairs(class ABP_S3StaircaseBase_C* Staircase)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnBeginOverlapStairs");

	ABP_ScheduleNPC_C_OnBeginOverlapStairs_Params params;
	params.Staircase = Staircase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnEndOverlapStairs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3StaircaseBase_C*   Staircase                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::OnEndOverlapStairs(class ABP_S3StaircaseBase_C* Staircase)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnEndOverlapStairs");

	ABP_ScheduleNPC_C_OnEndOverlapStairs_Params params;
	params.Staircase = Staircase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.DecideDetectAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.DecideDetectAction");

	ABP_ScheduleNPC_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnNPCUninitialized
// (Event, Public, BlueprintEvent)

void ABP_ScheduleNPC_C::OnNPCUninitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnNPCUninitialized");

	ABP_ScheduleNPC_C_OnNPCUninitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnBeginStairs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3StaircaseBase_C*   Staircase                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::OnBeginStairs(class ABP_S3StaircaseBase_C* Staircase)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnBeginStairs");

	ABP_ScheduleNPC_C_OnBeginStairs_Params params;
	params.Staircase = Staircase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.StairsPreSetting
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  StairActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::StairsPreSetting(class AActor* StairActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.StairsPreSetting");

	ABP_ScheduleNPC_C_StairsPreSetting_Params params;
	params.StairActor = StairActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnEndStairs
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ScheduleNPC_C::OnEndStairs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnEndStairs");

	ABP_ScheduleNPC_C_OnEndStairs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnTalkFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3TalkComponent*        TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           interrupted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::OnTalkFinished(class US3TalkComponent* TalkComponent, bool interrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnTalkFinished");

	ABP_ScheduleNPC_C_OnTalkFinished_Params params;
	params.TalkComponent = TalkComponent;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnTalkStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3TalkComponent*        TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ScheduleNPC_C::OnTalkStart(class US3TalkComponent* TalkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnTalkStart");

	ABP_ScheduleNPC_C_OnTalkStart_Params params;
	params.TalkComponent = TalkComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnStartStairs
// (Event, Public, BlueprintEvent)

void ABP_ScheduleNPC_C::OnStartStairs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnStartStairs");

	ABP_ScheduleNPC_C_OnStartStairs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.Screen_Player
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ScheduleNPC_C::Screen_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.Screen_Player");

	ABP_ScheduleNPC_C_Screen_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.Screen_NPC
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ScheduleNPC_C::Screen_NPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.Screen_NPC");

	ABP_ScheduleNPC_C_Screen_NPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetAttachObjectHiddenInGame
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewHidden                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::SetAttachObjectHiddenInGame(bool bNewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetAttachObjectHiddenInGame");

	ABP_ScheduleNPC_C_SetAttachObjectHiddenInGame_Params params;
	params.bNewHidden = bNewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.CreateCameraCollision
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HalfHeight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::CreateCameraCollision(float Radius, float HalfHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.CreateCameraCollision");

	ABP_ScheduleNPC_C_CreateCameraCollision_Params params;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.DestroyCameraCollision
// (Event, Public, BlueprintEvent)

void ABP_ScheduleNPC_C::DestroyCameraCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.DestroyCameraCollision");

	ABP_ScheduleNPC_C_DestroyCameraCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.ExecuteUbergraph_BP_ScheduleNPC
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::ExecuteUbergraph_BP_ScheduleNPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.ExecuteUbergraph_BP_ScheduleNPC");

	ABP_ScheduleNPC_C_ExecuteUbergraph_BP_ScheduleNPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

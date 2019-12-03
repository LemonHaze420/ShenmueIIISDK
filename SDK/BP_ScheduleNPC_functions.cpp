
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

// Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetHelpPriority
// (Exec, Native, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// ES3HelpPriority                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ES3HelpPriority ABP_ScheduleNPC_C::STATIC_GetHelpPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetHelpPriority");

	ABP_ScheduleNPC_C_GetHelpPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetHelpName
// (NetReliable, NetRequest, Native, Static, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_ScheduleNPC_C::STATIC_GetHelpName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetHelpName");

	ABP_ScheduleNPC_C_GetHelpName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.IsActivateHelp
// (NetReliable, Exec, Public, Protected, Delegate, NetServer, Const)
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
// (Exec, Native, Event, NetMulticast, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// ES3HelpRegisterTiming          Timing                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ScheduleNPC_C::RegisterHelp(ES3HelpRegisterTiming Timing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.RegisterHelp");

	ABP_ScheduleNPC_C_RegisterHelp_Params params;
	params.Timing = Timing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.UnregisterHelp
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, NetClient, DLLImport)
// Parameters:
// ES3HelpRegisterTiming          Timing                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ScheduleNPC_C::STATIC_UnregisterHelp(ES3HelpRegisterTiming Timing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.UnregisterHelp");

	ABP_ScheduleNPC_C_UnregisterHelp_Params params;
	params.Timing = Timing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetPriority
// (NetReliable, Native, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_ScheduleNPC_C::STATIC_GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetPriority");

	ABP_ScheduleNPC_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetDetectAction
// (Net, NetRequest, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Exec, Native, Event, Static, MulticastDelegate, Public, NetServer)

void ABP_ScheduleNPC_C::STATIC_CheckRewardNotice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.CheckRewardNotice");

	ABP_ScheduleNPC_C_CheckRewardNotice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.IsDisableFootIK
// (Native, Event, NetMulticast, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bDisable                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::IsDisableFootIK(bool* bDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.IsDisableFootIK");

	ABP_ScheduleNPC_C_IsDisableFootIK_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDisable != nullptr)
		*bDisable = params.bDisable;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.DestroyCameraCollisionSub
// (Net, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_ScheduleNPC_C::STATIC_DestroyCameraCollisionSub()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.DestroyCameraCollisionSub");

	ABP_ScheduleNPC_C_DestroyCameraCollisionSub_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.CreateCameraCollisionSub
// (NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HalfHeight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_CreateCameraCollisionSub(float Radius, float HalfHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.CreateCameraCollisionSub");

	ABP_ScheduleNPC_C_CreateCameraCollisionSub_Params params;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.IsLookAtBody
// (NetRequest, Native, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_IsLookAtBody(bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.IsLookAtBody");

	ABP_ScheduleNPC_C_IsLookAtBody_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable != nullptr)
		*Enable = params.Enable;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetLookAtBody
// (Net, NetReliable, Native, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_SetLookAtBody(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetLookAtBody");

	ABP_ScheduleNPC_C_SetLookAtBody_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.ResetCloseEye
// (NetReliable, NetRequest, Exec, Native, Static, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_ScheduleNPC_C::STATIC_ResetCloseEye()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.ResetCloseEye");

	ABP_ScheduleNPC_C_ResetCloseEye_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetCloseEye
// (Event, Static, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_SetCloseEye(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetCloseEye");

	ABP_ScheduleNPC_C_SetCloseEye_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.IsTalking
// (Exec, Native, Event, Static, NetMulticast, Protected, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ScheduleNPC_C::STATIC_IsTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.IsTalking");

	ABP_ScheduleNPC_C_IsTalking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.StairsIgnoreCollision
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bIgnore                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_StairsIgnoreCollision(bool bIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.StairsIgnoreCollision");

	ABP_ScheduleNPC_C_StairsIgnoreCollision_Params params;
	params.bIgnore = bIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetEnableIK
// (NetReliable, Exec, Native, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIKEnabled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_GetEnableIK(bool* bIKEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetEnableIK");

	ABP_ScheduleNPC_C_GetEnableIK_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIKEnabled != nullptr)
		*bIKEnabled = params.bIKEnabled;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.CalcCharaHeight
// (Net, Exec, Native, NetResponse, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_ScheduleNPC_C::CalcCharaHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.CalcCharaHeight");

	ABP_ScheduleNPC_C_CalcCharaHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.StairsSetting
// (NetReliable, Event, Static, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bIsEnable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_StairsSetting(bool bIsEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.StairsSetting");

	ABP_ScheduleNPC_C_StairsSetting_Params params;
	params.bIsEnable = bIsEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.UpdateStairs
// (NetReliable, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void ABP_ScheduleNPC_C::UpdateStairs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.UpdateStairs");

	ABP_ScheduleNPC_C_UpdateStairs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetupHaveItem
// (NetRequest, Exec, Static, NetMulticast, Public, Protected, Delegate, NetServer, NetClient, DLLImport)

void ABP_ScheduleNPC_C::STATIC_SetupHaveItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetupHaveItem");

	ABP_ScheduleNPC_C_SetupHaveItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetEnableIK
// (Net, NetRequest, Native, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           bInIKEnabled                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_SetEnableIK(bool bInIKEnabled, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetEnableIK");

	ABP_ScheduleNPC_C_SetEnableIK_Params params;
	params.bInIKEnabled = bInIKEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.ReturnOutOfWorld
// (NetReliable, Exec, Native, NetMulticast, Public, Private, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ScheduleNPC_C::ReturnOutOfWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.ReturnOutOfWorld");

	ABP_ScheduleNPC_C_ReturnOutOfWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.RemoveDebugTraceComponent
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_ScheduleNPC_C::STATIC_RemoveDebugTraceComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.RemoveDebugTraceComponent");

	ABP_ScheduleNPC_C_RemoveDebugTraceComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.AddDebugTraceComponent
// (NetReliable, Native, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_ScheduleNPC_C::AddDebugTraceComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.AddDebugTraceComponent");

	ABP_ScheduleNPC_C_AddDebugTraceComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.UpdateDoor
// (Net, NetReliable, Event, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_ScheduleNPC_C::UpdateDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.UpdateDoor");

	ABP_ScheduleNPC_C_UpdateDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.UpdateFootIK
// (Net, NetRequest, Exec, NetResponse, NetMulticast, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
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
// (Net, NetReliable, Native, Static, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_ScheduleNPC_C::STATIC_CheckNamePlate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.CheckNamePlate");

	ABP_ScheduleNPC_C_CheckNamePlate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.UpdateDebug
// (Net, NetMulticast, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_ScheduleNPC_C::UpdateDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.UpdateDebug");

	ABP_ScheduleNPC_C_UpdateDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.CheckCanUseDoor
// (NetRequest, Native, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           IsUseDoor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_CheckCanUseDoor(bool* IsUseDoor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.CheckCanUseDoor");

	ABP_ScheduleNPC_C_CheckCanUseDoor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUseDoor != nullptr)
		*IsUseDoor = params.IsUseDoor;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.GetS3PathFollowingComponent
// (NetResponse, NetMulticast, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
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
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBPC_TurnAround_C*       Component                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_AddTurnAroundComponent(class UBPC_TurnAround_C** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.AddTurnAroundComponent");

	ABP_ScheduleNPC_C_AddTurnAroundComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.UserConstructionScript
// (NetReliable, NetRequest, Event, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_ScheduleNPC_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.UserConstructionScript");

	ABP_ScheduleNPC_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.ReceiveTick
// (NetReliable, Exec, Native, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.ReceiveTick");

	ABP_ScheduleNPC_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OpenDoor
// (Net, NetReliable, Event, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_ScheduleNPC_C::STATIC_OpenDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OpenDoor");

	ABP_ScheduleNPC_C_OpenDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.ReceiveBeginPlay
// (NetReliable, Event, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_ScheduleNPC_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.ReceiveBeginPlay");

	ABP_ScheduleNPC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnFinishedTurn
// (NetReliable, Exec, Native, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// class UBPC_TurnAround_C*       SelfTurnAroundComponent        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_OnFinishedTurn(class UBPC_TurnAround_C* SelfTurnAroundComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnFinishedTurn");

	ABP_ScheduleNPC_C_OnFinishedTurn_Params params;
	params.SelfTurnAroundComponent = SelfTurnAroundComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnNPCInitialized
// (Net, Event, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_ScheduleNPC_C::STATIC_OnNPCInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnNPCInitialized");

	ABP_ScheduleNPC_C_OnNPCInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnDoorAreaOutsideBeginOverlap
// (Net, Exec, Native, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// class AS3GimmickOpenDoor*      Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_OnDoorAreaOutsideBeginOverlap(class AS3GimmickOpenDoor* Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnDoorAreaOutsideBeginOverlap");

	ABP_ScheduleNPC_C_OnDoorAreaOutsideBeginOverlap_Params params;
	params.Door = Door;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnDoorAreaOutsideEndOverlap
// (Exec, Native, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// class AS3GimmickOpenDoor*      Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_OnDoorAreaOutsideEndOverlap(class AS3GimmickOpenDoor* Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnDoorAreaOutsideEndOverlap");

	ABP_ScheduleNPC_C_OnDoorAreaOutsideEndOverlap_Params params;
	params.Door = Door;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnDoorAreaBeginOverlap
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// class AS3GimmickOpenDoor*      Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_OnDoorAreaBeginOverlap(class AS3GimmickOpenDoor* Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnDoorAreaBeginOverlap");

	ABP_ScheduleNPC_C_OnDoorAreaBeginOverlap_Params params;
	params.Door = Door;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnFriendStop
// (NetReliable, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// class AS3Character*            Me                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AS3Character*            MyFriend                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Friendliness                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_OnFriendStop(class AS3Character* Me, class AS3Character* MyFriend, float Friendliness)
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
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, Protected, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Executor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_StartCharaFadeOut(class AActor* Executor, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.StartCharaFadeOut");

	ABP_ScheduleNPC_C_StartCharaFadeOut_Params params;
	params.Executor = Executor;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.ReceiveEndPlay
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.ReceiveEndPlay");

	ABP_ScheduleNPC_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.StartCharaFadeIn
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, Protected, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Executor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_StartCharaFadeIn(class AActor* Executor, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.StartCharaFadeIn");

	ABP_ScheduleNPC_C_StartCharaFadeIn_Params params;
	params.Executor = Executor;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnBeginOverlapStairs
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// class ABP_S3StaircaseBase_C*   Staircase                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_OnBeginOverlapStairs(class ABP_S3StaircaseBase_C* Staircase)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnBeginOverlapStairs");

	ABP_ScheduleNPC_C_OnBeginOverlapStairs_Params params;
	params.Staircase = Staircase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnEndOverlapStairs
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// class ABP_S3StaircaseBase_C*   Staircase                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_OnEndOverlapStairs(class ABP_S3StaircaseBase_C* Staircase)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnEndOverlapStairs");

	ABP_ScheduleNPC_C_OnEndOverlapStairs_Params params;
	params.Staircase = Staircase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.DecideDetectAction
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.DecideDetectAction");

	ABP_ScheduleNPC_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnNPCUninitialized
// (Net, Exec, Event, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_ScheduleNPC_C::STATIC_OnNPCUninitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnNPCUninitialized");

	ABP_ScheduleNPC_C_OnNPCUninitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnBeginStairs
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// class ABP_S3StaircaseBase_C*   Staircase                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_OnBeginStairs(class ABP_S3StaircaseBase_C* Staircase)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnBeginStairs");

	ABP_ScheduleNPC_C_OnBeginStairs_Params params;
	params.Staircase = Staircase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.StairsPreSetting
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// class AActor*                  StairActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_StairsPreSetting(class AActor* StairActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.StairsPreSetting");

	ABP_ScheduleNPC_C_StairsPreSetting_Params params;
	params.StairActor = StairActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnEndStairs
// (Exec, Event, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_ScheduleNPC_C::STATIC_OnEndStairs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnEndStairs");

	ABP_ScheduleNPC_C_OnEndStairs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnTalkFinished
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, Protected, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class US3TalkComponent*        TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           interrupted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_OnTalkFinished(class US3TalkComponent* TalkComponent, bool interrupted)
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
// (NetRequest, Exec, Native, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// class US3TalkComponent*        TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_OnTalkStart(class US3TalkComponent* TalkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnTalkStart");

	ABP_ScheduleNPC_C_OnTalkStart_Params params;
	params.TalkComponent = TalkComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnStartStairs
// (NetReliable, NetRequest, Event, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_ScheduleNPC_C::STATIC_OnStartStairs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.OnStartStairs");

	ABP_ScheduleNPC_C_OnStartStairs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.Screen_Player
// (NetReliable, NetRequest, Event, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_ScheduleNPC_C::STATIC_Screen_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.Screen_Player");

	ABP_ScheduleNPC_C_Screen_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.Screen_NPC
// (Net, NetRequest, Event, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_ScheduleNPC_C::STATIC_Screen_NPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.Screen_NPC");

	ABP_ScheduleNPC_C_Screen_NPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetAttachObjectHiddenInGame
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           bNewHidden                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_SetAttachObjectHiddenInGame(bool bNewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.SetAttachObjectHiddenInGame");

	ABP_ScheduleNPC_C_SetAttachObjectHiddenInGame_Params params;
	params.bNewHidden = bNewHidden;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.CreateCameraCollision
// (Net, NetRequest, Native, Event, Static, NetMulticast, Protected, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HalfHeight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScheduleNPC_C::STATIC_CreateCameraCollision(float Radius, float HalfHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.CreateCameraCollision");

	ABP_ScheduleNPC_C_CreateCameraCollision_Params params;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.DestroyCameraCollision
// (NetRequest, Event, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_ScheduleNPC_C::STATIC_DestroyCameraCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScheduleNPC.BP_ScheduleNPC_C.DestroyCameraCollision");

	ABP_ScheduleNPC_C_DestroyCameraCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScheduleNPC.BP_ScheduleNPC_C.ExecuteUbergraph_BP_ScheduleNPC
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
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


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

// Function BP_SearchArea.BP_SearchArea_C.GetHelpName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_SearchArea_C::GetHelpName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.GetHelpName");

	ABP_SearchArea_C_GetHelpName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SearchArea.BP_SearchArea_C.GetHelpPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3HelpPriority                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ES3HelpPriority ABP_SearchArea_C::GetHelpPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.GetHelpPriority");

	ABP_SearchArea_C_GetHelpPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SearchArea.BP_SearchArea_C.IsActivateHelp
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_SearchArea_C::IsActivateHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.IsActivateHelp");

	ABP_SearchArea_C_IsActivateHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SearchArea.BP_SearchArea_C.RegisterHelp
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3HelpRegisterTiming          Timing                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_SearchArea_C::RegisterHelp(ES3HelpRegisterTiming Timing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.RegisterHelp");

	ABP_SearchArea_C_RegisterHelp_Params params;
	params.Timing = Timing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SearchArea.BP_SearchArea_C.UnregisterHelp
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3HelpRegisterTiming          Timing                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_SearchArea_C::UnregisterHelp(ES3HelpRegisterTiming Timing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.UnregisterHelp");

	ABP_SearchArea_C_UnregisterHelp_Params params;
	params.Timing = Timing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SearchArea.BP_SearchArea_C.GetPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_SearchArea_C::GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.GetPriority");

	ABP_SearchArea_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SearchArea.BP_SearchArea_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_SearchArea_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.GetDetectAction");

	ABP_SearchArea_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SearchArea.BP_SearchArea_C.SetEventBehavior
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::SetEventBehavior(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.SetEventBehavior");

	ABP_SearchArea_C_SetEventBehavior_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.SetSearchBehavior
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::SetSearchBehavior(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.SetSearchBehavior");

	ABP_SearchArea_C_SetSearchBehavior_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.ForceUpdateSearchCollisionOverlap
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::ForceUpdateSearchCollisionOverlap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.ForceUpdateSearchCollisionOverlap");

	ABP_SearchArea_C_ForceUpdateSearchCollisionOverlap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.IsEnabledSearchCollisionCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::IsEnabledSearchCollisionCheck(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.IsEnabledSearchCollisionCheck");

	ABP_SearchArea_C_IsEnabledSearchCollisionCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function BP_SearchArea.BP_SearchArea_C.GetPathTypeFromLabel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Str                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// ES3TextPathType                LabelType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::GetPathTypeFromLabel(const struct FString& Str, ES3TextPathType* LabelType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.GetPathTypeFromLabel");

	ABP_SearchArea_C_GetPathTypeFromLabel_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LabelType != nullptr)
		*LabelType = params.LabelType;
}


// Function BP_SearchArea.BP_SearchArea_C.GetDisabledInputOnPlayingLabel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Disabled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::GetDisabledInputOnPlayingLabel(bool* Disabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.GetDisabledInputOnPlayingLabel");

	ABP_SearchArea_C_GetDisabledInputOnPlayingLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Disabled != nullptr)
		*Disabled = params.Disabled;
}


// Function BP_SearchArea.BP_SearchArea_C.IsSubtitleVoicePlaying
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_SearchArea_C::IsSubtitleVoicePlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.IsSubtitleVoicePlaying");

	ABP_SearchArea_C_IsSubtitleVoicePlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SearchArea.BP_SearchArea_C.InitializeLimitItem
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::InitializeLimitItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.InitializeLimitItem");

	ABP_SearchArea_C_InitializeLimitItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.IsLookingSeachComponent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3SearchComponent*      SearchComp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Look                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::IsLookingSeachComponent(class US3SearchComponent* SearchComp, bool* Look)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.IsLookingSeachComponent");

	ABP_SearchArea_C_IsLookingSeachComponent_Params params;
	params.SearchComp = SearchComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Look != nullptr)
		*Look = params.Look;
}


// Function BP_SearchArea.BP_SearchArea_C.SetBottomTransparent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::SetBottomTransparent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.SetBottomTransparent");

	ABP_SearchArea_C_SetBottomTransparent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.CheckCollisionCondition
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::CheckCollisionCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.CheckCollisionCondition");

	ABP_SearchArea_C_CheckCollisionCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.SetUseActorVisibleControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUse                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::SetUseActorVisibleControl(bool bUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.SetUseActorVisibleControl");

	ABP_SearchArea_C_SetUseActorVisibleControl_Params params;
	params.bUse = bUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.SetActorVisibleControl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::SetActorVisibleControl(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.SetActorVisibleControl");

	ABP_SearchArea_C_SetActorVisibleControl_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.FinalizeItemSpawnerSetting
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::FinalizeItemSpawnerSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.FinalizeItemSpawnerSetting");

	ABP_SearchArea_C_FinalizeItemSpawnerSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.InitializeItemSpawnerSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayOnlyLookScript             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::InitializeItemSpawnerSetting(bool PlayOnlyLookScript)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.InitializeItemSpawnerSetting");

	ABP_SearchArea_C_InitializeItemSpawnerSetting_Params params;
	params.PlayOnlyLookScript = PlayOnlyLookScript;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.CheckEndForActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OtherComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SearchArea_C::CheckEndForActor(class UPrimitiveComponent* OtherComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.CheckEndForActor");

	ABP_SearchArea_C_CheckEndForActor_Params params;
	params.OtherComponent = OtherComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.CheckStartForActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SearchArea_C::CheckStartForActor(class UPrimitiveComponent* OtherComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.CheckStartForActor");

	ABP_SearchArea_C_CheckStartForActor_Params params;
	params.OtherComp = OtherComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.SetSearchThisArea
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Search                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::SetSearchThisArea(bool Search)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.SetSearchThisArea");

	ABP_SearchArea_C_SetSearchThisArea_Params params;
	params.Search = Search;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.InitAsyncLoad
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::InitAsyncLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.InitAsyncLoad");

	ABP_SearchArea_C_InitAsyncLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.InitializeMoveSuspendTime
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::InitializeMoveSuspendTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.InitializeMoveSuspendTime");

	ABP_SearchArea_C_InitializeMoveSuspendTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.SyncMoveMotionTime
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::SyncMoveMotionTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.SyncMoveMotionTime");

	ABP_SearchArea_C_SyncMoveMotionTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.AddMoveMotionValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AddTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::AddMoveMotionValue(float AddTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.AddMoveMotionValue");

	ABP_SearchArea_C_AddMoveMotionValue_Params params;
	params.AddTime = AddTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.ActivateMoveMotionFlag
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::ActivateMoveMotionFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.ActivateMoveMotionFlag");

	ABP_SearchArea_C_ActivateMoveMotionFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.UpdateMoveMotionTime
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::UpdateMoveMotionTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.UpdateMoveMotionTime");

	ABP_SearchArea_C_UpdateMoveMotionTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.GetMoveMotionValue
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bReturnMode                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_SearchArea_C::GetMoveMotionValue(bool bReturnMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.GetMoveMotionValue");

	ABP_SearchArea_C_GetMoveMotionValue_Params params;
	params.bReturnMode = bReturnMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SearchArea.BP_SearchArea_C.StopBGM
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::StopBGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.StopBGM");

	ABP_SearchArea_C_StopBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.InitializeTargetVector
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::InitializeTargetVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.InitializeTargetVector");

	ABP_SearchArea_C_InitializeTargetVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.UpdateCameraMode
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::UpdateCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.UpdateCameraMode");

	ABP_SearchArea_C_UpdateCameraMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.SetForceActionLocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForceActionLocked             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::SetForceActionLocked(bool bForceActionLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.SetForceActionLocked");

	ABP_SearchArea_C_SetForceActionLocked_Params params;
	params.bForceActionLocked = bForceActionLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.IsUpdateForceExitSearch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_SearchArea_C::IsUpdateForceExitSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.IsUpdateForceExitSearch");

	ABP_SearchArea_C_IsUpdateForceExitSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SearchArea.BP_SearchArea_C.UpdateAttachGrabActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::UpdateAttachGrabActor(bool Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.UpdateAttachGrabActor");

	ABP_SearchArea_C_UpdateAttachGrabActor_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.InitializeGrab
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::InitializeGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.InitializeGrab");

	ABP_SearchArea_C_InitializeGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.GetFingerColliders
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPrimitiveComponent*> Colliders                      (Parm, OutParm, ZeroConstructor)

void ABP_SearchArea_C::GetFingerColliders(TArray<class UPrimitiveComponent*>* Colliders)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.GetFingerColliders");

	ABP_SearchArea_C_GetFingerColliders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Colliders != nullptr)
		*Colliders = params.Colliders;
}


// Function BP_SearchArea.BP_SearchArea_C.InitializeGatherObject
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::InitializeGatherObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.InitializeGatherObject");

	ABP_SearchArea_C_InitializeGatherObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.StopGameTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StopTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::StopGameTime(bool StopTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.StopGameTime");

	ABP_SearchArea_C_StopGameTime_Params params;
	params.StopTime = StopTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.CheckBGM
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::CheckBGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.CheckBGM");

	ABP_SearchArea_C_CheckBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.DestroySubTitlePlayer
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::DestroySubTitlePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.DestroySubTitlePlayer");

	ABP_SearchArea_C_DestroySubTitlePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.GetCharacterAdventure
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_S3_Character_Adventure_C* AsBP_S3_Character_Adventure    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::GetCharacterAdventure(class ABP_S3_Character_Adventure_C** AsBP_S3_Character_Adventure, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.GetCharacterAdventure");

	ABP_SearchArea_C_GetCharacterAdventure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsBP_S3_Character_Adventure != nullptr)
		*AsBP_S3_Character_Adventure = params.AsBP_S3_Character_Adventure;
	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_SearchArea.BP_SearchArea_C.GetLockOnBasePosition
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D ABP_SearchArea_C::GetLockOnBasePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.GetLockOnBasePosition");

	ABP_SearchArea_C_GetLockOnBasePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SearchArea.BP_SearchArea_C.CalcCenterPosition
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               CenterPosition                 (Parm, OutParm, IsPlainOldData)

void ABP_SearchArea_C::CalcCenterPosition(struct FVector2D* CenterPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.CalcCenterPosition");

	ABP_SearchArea_C_CalcCenterPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CenterPosition != nullptr)
		*CenterPosition = params.CenterPosition;
}


// Function BP_SearchArea.BP_SearchArea_C.CalcScreenLocation
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               CenterPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               ScreenLocation                 (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_SearchArea_C::CalcScreenLocation(const struct FVector& WorldLocation, const struct FVector2D& CenterPosition, struct FVector2D* ScreenLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.CalcScreenLocation");

	ABP_SearchArea_C_CalcScreenLocation_Params params;
	params.WorldLocation = WorldLocation;
	params.CenterPosition = CenterPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScreenLocation != nullptr)
		*ScreenLocation = params.ScreenLocation;

	return params.ReturnValue;
}


// Function BP_SearchArea.BP_SearchArea_C.LockOnChange
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Vertical_Axis                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Horizontal_Axis                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::LockOnChange(float Vertical_Axis, float Horizontal_Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.LockOnChange");

	ABP_SearchArea_C_LockOnChange_Params params;
	params.Vertical_Axis = Vertical_Axis;
	params.Horizontal_Axis = Horizontal_Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.GetNextDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          V                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          H                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESearchAreaDirection> Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::GetNextDirection(float V, float H, TEnumAsByte<ESearchAreaDirection>* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.GetNextDirection");

	ABP_SearchArea_C_GetNextDirection_Params params;
	params.V = V;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function BP_SearchArea.BP_SearchArea_C.SearchLockOnChangeTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESearchAreaDirection> Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3SearchComponent*      NewTarget                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SearchArea_C::SearchLockOnChangeTarget(TEnumAsByte<ESearchAreaDirection> Direction, class US3SearchComponent** NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.SearchLockOnChangeTarget");

	ABP_SearchArea_C_SearchLockOnChangeTarget_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewTarget != nullptr)
		*NewTarget = params.NewTarget;
}


// Function BP_SearchArea.BP_SearchArea_C.TestNewSearchExit
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::TestNewSearchExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.TestNewSearchExit");

	ABP_SearchArea_C_TestNewSearchExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.TestNewSearchMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::TestNewSearchMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.TestNewSearchMode");

	ABP_SearchArea_C_TestNewSearchMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.StartNewSearchMode
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::StartNewSearchMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.StartNewSearchMode");

	ABP_SearchArea_C_StartNewSearchMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.UpdateLockOnChange
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta_Seconds                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::UpdateLockOnChange(float Delta_Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.UpdateLockOnChange");

	ABP_SearchArea_C_UpdateLockOnChange_Params params;
	params.Delta_Seconds = Delta_Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.GetCurrentTarget
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3SearchComponent*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// bool                           IsCurrentFocus                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

class US3SearchComponent* ABP_SearchArea_C::GetCurrentTarget(bool* IsCurrentFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.GetCurrentTarget");

	ABP_SearchArea_C_GetCurrentTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCurrentFocus != nullptr)
		*IsCurrentFocus = params.IsCurrentFocus;

	return params.ReturnValue;
}


// Function BP_SearchArea.BP_SearchArea_C.OverlappingCheck
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::OverlappingCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.OverlappingCheck");

	ABP_SearchArea_C_OverlappingCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.ContinueSearch
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::ContinueSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.ContinueSearch");

	ABP_SearchArea_C_ContinueSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.InterruptSearch
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::InterruptSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.InterruptSearch");

	ABP_SearchArea_C_InterruptSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.TestLockOnChange
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Vertical_Axis                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Horizontal_Axis                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::TestLockOnChange(float Vertical_Axis, float Horizontal_Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.TestLockOnChange");

	ABP_SearchArea_C_TestLockOnChange_Params params;
	params.Vertical_Axis = Vertical_Axis;
	params.Horizontal_Axis = Horizontal_Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.CrouchAction
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::CrouchAction(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.CrouchAction");

	ABP_SearchArea_C_CrouchAction_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.SetForbiddenAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Forbidden                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::SetForbiddenAction(bool Forbidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.SetForbiddenAction");

	ABP_SearchArea_C_SetForbiddenAction_Params params;
	params.Forbidden = Forbidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.SetFreeLockMode
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::SetFreeLockMode(bool Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.SetFreeLockMode");

	ABP_SearchArea_C_SetFreeLockMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.ForceFind
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3SearchComponent*      SearchComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ChangeTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ContinuationFlag               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::ForceFind(class US3SearchComponent* SearchComponent, bool ChangeTarget, bool ContinuationFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.ForceFind");

	ABP_SearchArea_C_ForceFind_Params params;
	params.SearchComponent = SearchComponent;
	params.ChangeTarget = ChangeTarget;
	params.ContinuationFlag = ContinuationFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.EndForActor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::EndForActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.EndForActor");

	ABP_SearchArea_C_EndForActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.StartForActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::StartForActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.StartForActor");

	ABP_SearchArea_C_StartForActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.GetDoor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 DoorName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class ABP_Gimmick_OpenDoor_Template_C* Door                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::GetDoor(const struct FString& DoorName, class ABP_Gimmick_OpenDoor_Template_C** Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.GetDoor");

	ABP_SearchArea_C_GetDoor_Params params;
	params.DoorName = DoorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Door != nullptr)
		*Door = params.Door;
}


// Function BP_SearchArea.BP_SearchArea_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.Initialize");

	ABP_SearchArea_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.ShowMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::ShowMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.ShowMessage");

	ABP_SearchArea_C_ShowMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.PlayGetSE
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::PlayGetSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.PlayGetSE");

	ABP_SearchArea_C_PlayGetSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.LookAtTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3SearchComponent*      Search                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            StartPointType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::LookAtTarget(class US3SearchComponent* Search, int StartPointType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.LookAtTarget");

	ABP_SearchArea_C_LookAtTarget_Params params;
	params.Search = Search;
	params.StartPointType = StartPointType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.ExecBackButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              IconType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::ExecBackButton(ES3ActionIconType IconType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.ExecBackButton");

	ABP_SearchArea_C_ExecBackButton_Params params;
	params.IconType = IconType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.ExecActionButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              IconType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::ExecActionButton(ES3ActionIconType IconType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.ExecActionButton");

	ABP_SearchArea_C_ExecActionButton_Params params;
	params.IconType = IconType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.UpdateButton
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::UpdateButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.UpdateButton");

	ABP_SearchArea_C_UpdateButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.BeginDetectAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::BeginDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.BeginDetectAction");

	ABP_SearchArea_C_BeginDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.DestroyEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3SearchComponent*      SearchComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SearchArea_C::DestroyEffect(class US3SearchComponent* SearchComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.DestroyEffect");

	ABP_SearchArea_C_DestroyEffect_Params params;
	params.SearchComponent = SearchComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.SpawnEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3SearchComponent*      SearchComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SearchArea_C::SpawnEffect(class US3SearchComponent* SearchComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.SpawnEffect");

	ABP_SearchArea_C_SpawnEffect_Params params;
	params.SearchComponent = SearchComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.UpdateEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::UpdateEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.UpdateEffect");

	ABP_SearchArea_C_UpdateEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.UserConstructionScript");

	ABP_SearchArea_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.BindChangeTimeEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::BindChangeTimeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.BindChangeTimeEvent");

	ABP_SearchArea_C_BindChangeTimeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.ChangeGameTimeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3DayTimeEvent                EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::ChangeGameTimeEvent(ES3DayTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.ChangeGameTimeEvent");

	ABP_SearchArea_C_ChangeGameTimeEvent_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.UnbindChangeTimeEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::UnbindChangeTimeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.UnbindChangeTimeEvent");

	ABP_SearchArea_C_UnbindChangeTimeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.ReceiveTick");

	ABP_SearchArea_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.OnStartSearch
// (Event, Public, BlueprintEvent)

void ABP_SearchArea_C::OnStartSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.OnStartSearch");

	ABP_SearchArea_C_OnStartSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.OnStopSearch
// (Event, Public, BlueprintEvent)

void ABP_SearchArea_C::OnStopSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.OnStopSearch");

	ABP_SearchArea_C_OnStopSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_SearchArea_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.ReceiveDestroyed");

	ABP_SearchArea_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SearchArea_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.ReceiveBeginPlay");

	ABP_SearchArea_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.DestroyEffectAll
// (BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::DestroyEffectAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.DestroyEffectAll");

	ABP_SearchArea_C_DestroyEffectAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.UnbindDetect
// (BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::UnbindDetect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.UnbindDetect");

	ABP_SearchArea_C_UnbindDetect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.PlayGetSound
// (Event, Public, BlueprintEvent)

void ABP_SearchArea_C::PlayGetSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.PlayGetSound");

	ABP_SearchArea_C_PlayGetSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.PlayCutscene
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::PlayCutscene(const struct FName& CutsceneId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.PlayCutscene");

	ABP_SearchArea_C_PlayCutscene_Params params;
	params.CutsceneId = CutsceneId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.EndCutscene
// (BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::EndCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.EndCutscene");

	ABP_SearchArea_C_EndCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.ForceEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::ForceEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.ForceEnd");

	ABP_SearchArea_C_ForceEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.DoorComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Gimmick_OpenDoor_Template_C* Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Front                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::DoorComplete(class ABP_Gimmick_OpenDoor_Template_C* Door, bool Front)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.DoorComplete");

	ABP_SearchArea_C_DoorComplete_Params params;
	params.Door = Door;
	params.Front = Front;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.FinishedSearchPoint
// (Event, Public, BlueprintEvent)

void ABP_SearchArea_C::FinishedSearchPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.FinishedSearchPoint");

	ABP_SearchArea_C_FinishedSearchPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.FreeSearchLock
// (Event, Public, BlueprintEvent)

void ABP_SearchArea_C::FreeSearchLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.FreeSearchLock");

	ABP_SearchArea_C_FreeSearchLock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.InpAxisEvt_ZoomPanVertical_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::InpAxisEvt_ZoomPanVertical_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.InpAxisEvt_ZoomPanVertical_K2Node_InputAxisEvent_1");

	ABP_SearchArea_C_InpAxisEvt_ZoomPanVertical_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.GetItem
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::GetItem(const struct FName& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.GetItem");

	ABP_SearchArea_C_GetItem_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.DecideDetectAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.DecideDetectAction");

	ABP_SearchArea_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.InpAxisEvt_ZoomPanHorizontal_K2Node_InputAxisEvent_27
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::InpAxisEvt_ZoomPanHorizontal_K2Node_InputAxisEvent_27(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.InpAxisEvt_ZoomPanHorizontal_K2Node_InputAxisEvent_27");

	ABP_SearchArea_C_InpAxisEvt_ZoomPanHorizontal_K2Node_InputAxisEvent_27_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.ReceiveEndPlay");

	ABP_SearchArea_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.onCutsceneEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::onCutsceneEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.onCutsceneEnd");

	ABP_SearchArea_C_onCutsceneEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.onCutsceneStart
// (BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::onCutsceneStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.onCutsceneStart");

	ABP_SearchArea_C_onCutsceneStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.ExitSearchMode
// (Event, Public, BlueprintEvent)

void ABP_SearchArea_C::ExitSearchMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.ExitSearchMode");

	ABP_SearchArea_C_ExitSearchMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.StartACEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTalkScript*             ACEventScript                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::StartACEvent(class UTalkScript* ACEventScript)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.StartACEvent");

	ABP_SearchArea_C_StartACEvent_Params params;
	params.ACEventScript = ACEventScript;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.Event_DestroyGrabActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3SearchComponent*      SearchComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SearchArea_C::Event_DestroyGrabActor(class US3SearchComponent* SearchComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.Event_DestroyGrabActor");

	ABP_SearchArea_C_Event_DestroyGrabActor_Params params;
	params.SearchComponent = SearchComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.StartGrabSubAnim
// (Event, Public, BlueprintEvent)

void ABP_SearchArea_C::StartGrabSubAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.StartGrabSubAnim");

	ABP_SearchArea_C_StartGrabSubAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.EndGrabSubAnim
// (Event, Public, BlueprintEvent)

void ABP_SearchArea_C::EndGrabSubAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.EndGrabSubAnim");

	ABP_SearchArea_C_EndGrabSubAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.ExitSearch
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::ExitSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.ExitSearch");

	ABP_SearchArea_C_ExitSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.ChangeToFreeState
// (BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::ChangeToFreeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.ChangeToFreeState");

	ABP_SearchArea_C_ChangeToFreeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.UpdateForceExitSearch
// (BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::UpdateForceExitSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.UpdateForceExitSearch");

	ABP_SearchArea_C_UpdateForceExitSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.OnFinishedFadeCutScene
// (BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::OnFinishedFadeCutScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.OnFinishedFadeCutScene");

	ABP_SearchArea_C_OnFinishedFadeCutScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.Event_SetPlayerVisibleEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::Event_SetPlayerVisibleEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.Event_SetPlayerVisibleEnabled");

	ABP_SearchArea_C_Event_SetPlayerVisibleEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.OnChangeClothes
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class US3ClothInterface> Interface                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::OnChangeClothes(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.OnChangeClothes");

	ABP_SearchArea_C_OnChangeClothes_Params params;
	params.Interface = Interface;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.SearchCollisionBeginOverlap
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_SearchArea_C::SearchCollisionBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.SearchCollisionBeginOverlap");

	ABP_SearchArea_C_SearchCollisionBeginOverlap_Params params;
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


// Function BP_SearchArea.BP_SearchArea_C.SeachCollisionEndOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::SeachCollisionEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.SeachCollisionEndOverlap");

	ABP_SearchArea_C_SeachCollisionEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.ExecuteUbergraph_BP_SearchArea
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::ExecuteUbergraph_BP_SearchArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.ExecuteUbergraph_BP_SearchArea");

	ABP_SearchArea_C_ExecuteUbergraph_BP_SearchArea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.OnActionDispacher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::OnActionDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.OnActionDispacher__DelegateSignature");

	ABP_SearchArea_C_OnActionDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.OnChangeToFreeStateDispacher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::OnChangeToFreeStateDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.OnChangeToFreeStateDispacher__DelegateSignature");

	ABP_SearchArea_C_OnChangeToFreeStateDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.OnEndCutscene__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SearchArea_C::OnEndCutscene__DelegateSignature(const struct FName& CutsceneId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.OnEndCutscene__DelegateSignature");

	ABP_SearchArea_C_OnEndCutscene__DelegateSignature_Params params;
	params.CutsceneId = CutsceneId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SearchArea.BP_SearchArea_C.OnFinishedInitialize__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_SearchArea_C::OnFinishedInitialize__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SearchArea.BP_SearchArea_C.OnFinishedInitialize__DelegateSignature");

	ABP_SearchArea_C_OnFinishedInitialize__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

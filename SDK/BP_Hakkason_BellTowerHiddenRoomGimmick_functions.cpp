
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

// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.GetPriority
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.GetPriority");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.GetDetectAction
// (NetReliable, Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_Hakkason_BellTowerHiddenRoomGimmick_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.GetDetectAction");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.SetupCharaChangeClothes
// (NetReliable, Event, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::SetupCharaChangeClothes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.SetupCharaChangeClothes");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_SetupCharaChangeClothes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.SetAllHideTargetActorHidden
// (NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, Private, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           InHidden                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_SetAllHideTargetActorHidden(bool InHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.SetAllHideTargetActorHidden");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_SetAllHideTargetActorHidden_Params params;
	params.InHidden = InHidden;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.SetPlayerCharacterHidden
// (NetReliable, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InHidden                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_SetPlayerCharacterHidden(bool InHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.SetPlayerCharacterHidden");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_SetPlayerCharacterHidden_Params params;
	params.InHidden = InHidden;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.GetClothMeshComponent
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_GetClothMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.GetClothMeshComponent");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_GetClothMeshComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.UpdateSevenStarSword
// (Net, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_UpdateSevenStarSword()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.UpdateSevenStarSword");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_UpdateSevenStarSword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.SetupSevenStarSword
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::SetupSevenStarSword()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.SetupSevenStarSword");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_SetupSevenStarSword_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.SetCharaIdleState
// (Net, NetRequest, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           InIdleState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_SetCharaIdleState(bool InIdleState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.SetCharaIdleState");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_SetCharaIdleState_Params params;
	params.InIdleState = InIdleState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.PermitOtherUI
// (NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_PermitOtherUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.PermitOtherUI");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_PermitOtherUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.ForbidOtherUI
// (NetReliable, NetRequest, NetResponse, Static, Public, NetServer, HasOutParms, NetClient, DLLImport)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_ForbidOtherUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.ForbidOtherUI");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_ForbidOtherUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.SetDispGimmickHint
// (Net, NetReliable, Exec, Native, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// bool                           bDisp                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::SetDispGimmickHint(bool bDisp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.SetDispGimmickHint");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_SetDispGimmickHint_Params params;
	params.bDisp = bDisp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.SetGimmickHintVisible
// (Native, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_SetGimmickHintVisible(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.SetGimmickHintVisible");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_SetGimmickHintVisible_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.FinalizeGimmickHint
// (Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::FinalizeGimmickHint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.FinalizeGimmickHint");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_FinalizeGimmickHint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.InitializeGimmickHint
// (NetRequest, Exec, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::InitializeGimmickHint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.InitializeGimmickHint");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_InitializeGimmickHint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.IsRotateCountReachedFailedFinishCount
// (Native, Event, NetResponse, NetMulticast, Public, Private, NetServer, NetClient, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Hakkason_BellTowerHiddenRoomGimmick_C::IsRotateCountReachedFailedFinishCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.IsRotateCountReachedFailedFinishCount");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_IsRotateCountReachedFailedFinishCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.IsCanceled
// (Net, NetRequest, Native, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Hakkason_BellTowerHiddenRoomGimmick_C::IsCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.IsCanceled");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_IsCanceled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.OnFinishedCancelDialog
// (NetRequest, Native, Event, NetResponse, MulticastDelegate, Private, Protected, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::OnFinishedCancelDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.OnFinishedCancelDialog");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_OnFinishedCancelDialog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.StartCancelDialog
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_StartCancelDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.StartCancelDialog");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_StartCancelDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.FinalizeCancelDialog
// (Net, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::FinalizeCancelDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.FinalizeCancelDialog");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_FinalizeCancelDialog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.InitializeCancelDialog
// (Net, Exec, Event, Static, MulticastDelegate, Public, Private, HasDefaults, NetClient, DLLImport)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_InitializeCancelDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.InitializeCancelDialog");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_InitializeCancelDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.OnFinishedIntroduction
// (NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_OnFinishedIntroduction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.OnFinishedIntroduction");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_OnFinishedIntroduction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.OnFinishedIntroSequencer
// (Native, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::OnFinishedIntroSequencer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.OnFinishedIntroSequencer");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_OnFinishedIntroSequencer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.PlayIntroSequencer
// (Native, Event, NetResponse, Static, NetMulticast, Public, Private, NetServer, Const)
// Parameters:
// bool                           IsSucceeded                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_PlayIntroSequencer(bool* IsSucceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.PlayIntroSequencer");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_PlayIntroSequencer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSucceeded != nullptr)
		*IsSucceeded = params.IsSucceeded;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.SetCharaParentRotation
// (NetRequest, Exec, Event, Public, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::SetCharaParentRotation(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.SetCharaParentRotation");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_SetCharaParentRotation_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.UpdateCharaRotateAnimation
// (NetReliable, Event, NetResponse, MulticastDelegate, Private, Protected, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RotateRate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::UpdateCharaRotateAnimation(float RotateRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.UpdateCharaRotateAnimation");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_UpdateCharaRotateAnimation_Params params;
	params.RotateRate = RotateRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.PlayCharaRotateAnimation
// (Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_PlayCharaRotateAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.PlayCharaRotateAnimation");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_PlayCharaRotateAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.SetCharaVisibility
// (Net, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           NewVisibility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_SetCharaVisibility(bool NewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.SetCharaVisibility");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_SetCharaVisibility_Params params;
	params.NewVisibility = NewVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.InitializeChara
// (NetReliable, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_InitializeChara()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.InitializeChara");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_InitializeChara_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.IsCompleteCorrect
// (Net, Exec, Native, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Hakkason_BellTowerHiddenRoomGimmick_C::IsCompleteCorrect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.IsCompleteCorrect");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_IsCompleteCorrect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.IsCurrentRotateCorrect
// (Exec, Event, NetResponse, NetMulticast, Public, Private, NetServer, NetClient, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Hakkason_BellTowerHiddenRoomGimmick_C::IsCurrentRotateCorrect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.IsCurrentRotateCorrect");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_IsCurrentRotateCorrect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.JudgeItemSelect
// (NetReliable, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, Private, HasDefaults, NetClient, DLLImport)
// Parameters:
// TArray<int>                    SelectItemNo                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_JudgeItemSelect(TArray<int>* SelectItemNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.JudgeItemSelect");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_JudgeItemSelect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectItemNo != nullptr)
		*SelectItemNo = params.SelectItemNo;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.ResetRotateActor
// (Net, Exec, Native, Event, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::ResetRotateActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.ResetRotateActor");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_ResetRotateActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.SetupRotate
// (Net, NetRequest, Native, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bRight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::SetupRotate(bool bRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.SetupRotate");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_SetupRotate_Params params;
	params.bRight = bRight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.UpdateTargetCoverOpen
// (NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Private, Protected, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OpenRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::UpdateTargetCoverOpen(float OpenRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.UpdateTargetCoverOpen");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_UpdateTargetCoverOpen_Params params;
	params.OpenRate = OpenRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.UpdateRotateHandle
// (Exec, Event, NetResponse, MulticastDelegate, Private, Protected, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::UpdateRotateHandle(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.UpdateRotateHandle");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_UpdateRotateHandle_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.Finalize
// (NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.Finalize");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.FinalizeEvent
// (Net, NetRequest, Exec, Native, Static, MulticastDelegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_FinalizeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.FinalizeEvent");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_FinalizeEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.InitializeEvent
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Private, NetServer, Const)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_InitializeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.InitializeEvent");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_InitializeEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.InitializeRotateActor
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::InitializeRotateActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.InitializeRotateActor");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_InitializeRotateActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.Initialize
// (Native, Event, Static, MulticastDelegate, Public, Private, HasDefaults, NetClient, DLLImport)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.Initialize");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.UserConstructionScript
// (Net, NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.UserConstructionScript");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.TimelineRotateHandle__FinishedFunc
// (NetReliable, NetRequest, Exec, Native, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::TimelineRotateHandle__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.TimelineRotateHandle__FinishedFunc");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_TimelineRotateHandle__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.TimelineRotateHandle__UpdateFunc
// (Net, Exec, Native, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::TimelineRotateHandle__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.TimelineRotateHandle__UpdateFunc");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_TimelineRotateHandle__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.InpActEvt_Interruption_K2Node_InputActionEvent_2
// (Net, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_InpActEvt_Interruption_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.InpActEvt_Interruption_K2Node_InputActionEvent_2");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_InpActEvt_Interruption_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.StartRotateHandle
// (Exec, Native, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::StartRotateHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.StartRotateHandle");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_StartRotateHandle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.StartGimmickEvent
// (NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForceFailed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_StartGimmickEvent(bool bForceFailed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.StartGimmickEvent");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_StartGimmickEvent_Params params;
	params.bForceFailed = bForceFailed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.StartReverseAndRotateHandle
// (Net, NetReliable, NetRequest, Native, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::StartReverseAndRotateHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.StartReverseAndRotateHandle");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_StartReverseAndRotateHandle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.DecideDetectAction
// (NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.DecideDetectAction");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.StartFailedFinish
// (NetReliable, NetRequest, Native, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::StartFailedFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.StartFailedFinish");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_StartFailedFinish_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.RenewalActorCount
// (NetReliable, Native, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_MainFlowActorID> ActorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  RenewalCounter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::RenewalActorCount(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.RenewalActorCount");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_RenewalActorCount_Params params;
	params.ActorId = ActorId;
	params.RenewalCounter = RenewalCounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.TickChangeCheckKill
// (Net, NetRequest, Exec, Native, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::TickChangeCheckKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.TickChangeCheckKill");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_TickChangeCheckKill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.ExecuteUbergraph_BP_Hakkason_BellTowerHiddenRoomGimmick
// (NetReliable, Exec, Event, Static, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_ExecuteUbergraph_BP_Hakkason_BellTowerHiddenRoomGimmick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.ExecuteUbergraph_BP_Hakkason_BellTowerHiddenRoomGimmick");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_ExecuteUbergraph_BP_Hakkason_BellTowerHiddenRoomGimmick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.OnEndItemSelect__DelegateSignature
// (NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SelectItemNo                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_OnEndItemSelect__DelegateSignature(bool bSuccess, int SelectItemNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.OnEndItemSelect__DelegateSignature");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_OnEndItemSelect__DelegateSignature_Params params;
	params.bSuccess = bSuccess;
	params.SelectItemNo = SelectItemNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.OnEndGimmickEvent__DelegateSignature
// (Net, NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BellTowerHiddenRoomGimmick_C::STATIC_OnEndGimmickEvent__DelegateSignature(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C.OnEndGimmickEvent__DelegateSignature");

	ABP_Hakkason_BellTowerHiddenRoomGimmick_C_OnEndGimmickEvent__DelegateSignature_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

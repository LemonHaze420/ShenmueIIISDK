
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

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_Hakkason_FindSecretRoom_C::GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetPriority");

	ABP_Hakkason_FindSecretRoom_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_Hakkason_FindSecretRoom_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetDetectAction");

	ABP_Hakkason_FindSecretRoom_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetClothMeshComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ABP_Hakkason_FindSecretRoom_C::GetClothMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetClothMeshComponent");

	ABP_Hakkason_FindSecretRoom_C_GetClothMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetUseItemWidgetCrossButtonInputableVisible
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::SetUseItemWidgetCrossButtonInputableVisible(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetUseItemWidgetCrossButtonInputableVisible");

	ABP_Hakkason_FindSecretRoom_C_SetUseItemWidgetCrossButtonInputableVisible_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedFadeOutBeforeFinishUseItem
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::OnFinishedFadeOutBeforeFinishUseItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedFadeOutBeforeFinishUseItem");

	ABP_Hakkason_FindSecretRoom_C_OnFinishedFadeOutBeforeFinishUseItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartFadeOutBeforeFinishUseItem
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::StartFadeOutBeforeFinishUseItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartFadeOutBeforeFinishUseItem");

	ABP_Hakkason_FindSecretRoom_C_StartFadeOutBeforeFinishUseItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetupPillarInputStart
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::SetupPillarInputStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetupPillarInputStart");

	ABP_Hakkason_FindSecretRoom_C_SetupPillarInputStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedPillarKeyActorDrawOutPerformance
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::OnFinishedPillarKeyActorDrawOutPerformance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedPillarKeyActorDrawOutPerformance");

	ABP_Hakkason_FindSecretRoom_C_OnFinishedPillarKeyActorDrawOutPerformance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdatePillarKeyActorDrawOutPerformance
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InLocationRate                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::UpdatePillarKeyActorDrawOutPerformance(float InLocationRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdatePillarKeyActorDrawOutPerformance");

	ABP_Hakkason_FindSecretRoom_C_UpdatePillarKeyActorDrawOutPerformance_Params params;
	params.InLocationRate = InLocationRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartPillarKeyActorDrawOutPerformance
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::StartPillarKeyActorDrawOutPerformance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartPillarKeyActorDrawOutPerformance");

	ABP_Hakkason_FindSecretRoom_C_StartPillarKeyActorDrawOutPerformance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetKeyDirectionEffectVisible
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsVisible                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::SetKeyDirectionEffectVisible(bool InIsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetKeyDirectionEffectVisible");

	ABP_Hakkason_FindSecretRoom_C_SetKeyDirectionEffectVisible_Params params;
	params.InIsVisible = InIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdateKeyDirectionEffect
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::UpdateKeyDirectionEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdateKeyDirectionEffect");

	ABP_Hakkason_FindSecretRoom_C_UpdateKeyDirectionEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.FinalizeKeyDirectionEffect
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::FinalizeKeyDirectionEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.FinalizeKeyDirectionEffect");

	ABP_Hakkason_FindSecretRoom_C_FinalizeKeyDirectionEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InitializeKeyDirectionEffect
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::InitializeKeyDirectionEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InitializeKeyDirectionEffect");

	ABP_Hakkason_FindSecretRoom_C_InitializeKeyDirectionEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetHiddenPlayerCharacter
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHidden                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::SetHiddenPlayerCharacter(bool IsHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetHiddenPlayerCharacter");

	ABP_Hakkason_FindSecretRoom_C_SetHiddenPlayerCharacter_Params params;
	params.IsHidden = IsHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedPillarKeyActorReturnPerformance
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::OnFinishedPillarKeyActorReturnPerformance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedPillarKeyActorReturnPerformance");

	ABP_Hakkason_FindSecretRoom_C_OnFinishedPillarKeyActorReturnPerformance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdatePillarKeyActorReturnPerformance
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InLocationRate                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::UpdatePillarKeyActorReturnPerformance(float InLocationRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdatePillarKeyActorReturnPerformance");

	ABP_Hakkason_FindSecretRoom_C_UpdatePillarKeyActorReturnPerformance_Params params;
	params.InLocationRate = InLocationRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartPillarKeyActorReturnPerformance
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::StartPillarKeyActorReturnPerformance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartPillarKeyActorReturnPerformance");

	ABP_Hakkason_FindSecretRoom_C_StartPillarKeyActorReturnPerformance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.MoveFloatingKeyActorToCorrectPillar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::MoveFloatingKeyActorToCorrectPillar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.MoveFloatingKeyActorToCorrectPillar");

	ABP_Hakkason_FindSecretRoom_C_MoveFloatingKeyActorToCorrectPillar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.AddItemNum
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InItemId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InNum                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::AddItemNum(const struct FName& InItemId, int InNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.AddItemNum");

	ABP_Hakkason_FindSecretRoom_C_AddItemNum_Params params;
	params.InItemId = InItemId;
	params.InNum = InNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetupPillarStatusCameraTransform
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::SetupPillarStatusCameraTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetupPillarStatusCameraTransform");

	ABP_Hakkason_FindSecretRoom_C_SetupPillarStatusCameraTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetupPillarStatusAttentionComponent
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::SetupPillarStatusAttentionComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetupPillarStatusAttentionComponent");

	ABP_Hakkason_FindSecretRoom_C_SetupPillarStatusAttentionComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetPillarUsedItemID
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InItemId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::SetPillarUsedItemID(int InIndex, const struct FName& InItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetPillarUsedItemID");

	ABP_Hakkason_FindSecretRoom_C_SetPillarUsedItemID_Params params;
	params.InIndex = InIndex;
	params.InItemId = InItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetCurrentPillarStatus
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FST_BellTowerPillarStatus ReturnValue                    (Parm, OutParm, ReturnParm)

struct FST_BellTowerPillarStatus ABP_Hakkason_FindSecretRoom_C::GetCurrentPillarStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetCurrentPillarStatus");

	ABP_Hakkason_FindSecretRoom_C_GetCurrentPillarStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetPillarStatus
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_BellTowerPillarStatus ReturnValue                    (Parm, OutParm, ReturnParm)

struct FST_BellTowerPillarStatus ABP_Hakkason_FindSecretRoom_C::GetPillarStatus(int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetPillarStatus");

	ABP_Hakkason_FindSecretRoom_C_GetPillarStatus_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetPillarData
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   InActorTag                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_BellTowerPillarData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FST_BellTowerPillarData ABP_Hakkason_FindSecretRoom_C::GetPillarData(const struct FName& InActorTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetPillarData");

	ABP_Hakkason_FindSecretRoom_C_GetPillarData_Params params;
	params.InActorTag = InActorTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnInputCancel
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::OnInputCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnInputCancel");

	ABP_Hakkason_FindSecretRoom_C_OnInputCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetUseItemWidgetVisible
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::SetUseItemWidgetVisible(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetUseItemWidgetVisible");

	ABP_Hakkason_FindSecretRoom_C_SetUseItemWidgetVisible_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.DrawItemFromPillar
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::DrawItemFromPillar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.DrawItemFromPillar");

	ABP_Hakkason_FindSecretRoom_C_DrawItemFromPillar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UseItemToPillar
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::UseItemToPillar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UseItemToPillar");

	ABP_Hakkason_FindSecretRoom_C_UseItemToPillar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnInputActionToPillar
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::OnInputActionToPillar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnInputActionToPillar");

	ABP_Hakkason_FindSecretRoom_C_OnInputActionToPillar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.RegisterDetectAction
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InUnregister                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::RegisterDetectAction(bool InUnregister)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.RegisterDetectAction");

	ABP_Hakkason_FindSecretRoom_C_RegisterDetectAction_Params params;
	params.InUnregister = InUnregister;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnInputMoveToNextPillar
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsRight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::OnInputMoveToNextPillar(bool IsRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnInputMoveToNextPillar");

	ABP_Hakkason_FindSecretRoom_C_OnInputMoveToNextPillar_Params params;
	params.IsRight = IsRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetCurrentSelectedUsableItemID
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_Hakkason_FindSecretRoom_C::GetCurrentSelectedUsableItemID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetCurrentSelectedUsableItemID");

	ABP_Hakkason_FindSecretRoom_C_GetCurrentSelectedUsableItemID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnInputMoveItemSelection
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsRight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::OnInputMoveItemSelection(bool IsRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnInputMoveItemSelection");

	ABP_Hakkason_FindSecretRoom_C_OnInputMoveItemSelection_Params params;
	params.IsRight = IsRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.IsCurrentPillarUsedItem
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Hakkason_FindSecretRoom_C::IsCurrentPillarUsedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.IsCurrentPillarUsedItem");

	ABP_Hakkason_FindSecretRoom_C_IsCurrentPillarUsedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetUseItemInputable
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewInputable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::SetUseItemInputable(bool NewInputable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetUseItemInputable");

	ABP_Hakkason_FindSecretRoom_C_SetUseItemInputable_Params params;
	params.NewInputable = NewInputable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PermitOtherUI
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::PermitOtherUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PermitOtherUI");

	ABP_Hakkason_FindSecretRoom_C_PermitOtherUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.ForbidOtherUI
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::ForbidOtherUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.ForbidOtherUI");

	ABP_Hakkason_FindSecretRoom_C_ForbidOtherUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetupUseItemInsertSkeletalMesh
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::SetupUseItemInsertSkeletalMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetupUseItemInsertSkeletalMesh");

	ABP_Hakkason_FindSecretRoom_C_SetupUseItemInsertSkeletalMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedUseItemInsertStartFadeOut
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::OnFinishedUseItemInsertStartFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedUseItemInsertStartFadeOut");

	ABP_Hakkason_FindSecretRoom_C_OnFinishedUseItemInsertStartFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdatePillarKeyActorDecideShakePerformance
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InShakeRate                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::UpdatePillarKeyActorDecideShakePerformance(float InShakeRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdatePillarKeyActorDecideShakePerformance");

	ABP_Hakkason_FindSecretRoom_C_UpdatePillarKeyActorDecideShakePerformance_Params params;
	params.InShakeRate = InShakeRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedPillarKeyActorMoveSelect
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::OnFinishedPillarKeyActorMoveSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedPillarKeyActorMoveSelect");

	ABP_Hakkason_FindSecretRoom_C_OnFinishedPillarKeyActorMoveSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdatePillarKeyParentActorMoveSelect
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InMoveRate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::UpdatePillarKeyParentActorMoveSelect(float InMoveRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdatePillarKeyParentActorMoveSelect");

	ABP_Hakkason_FindSecretRoom_C_UpdatePillarKeyParentActorMoveSelect_Params params;
	params.InMoveRate = InMoveRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SelectCenterUsableItem
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::SelectCenterUsableItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SelectCenterUsableItem");

	ABP_Hakkason_FindSecretRoom_C_SelectCenterUsableItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdatePillarKeyActorDecidePerformance
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InSelectedLocationRate         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InOthersLocationRate           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::UpdatePillarKeyActorDecidePerformance(float InSelectedLocationRate, float InOthersLocationRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdatePillarKeyActorDecidePerformance");

	ABP_Hakkason_FindSecretRoom_C_UpdatePillarKeyActorDecidePerformance_Params params;
	params.InSelectedLocationRate = InSelectedLocationRate;
	params.InOthersLocationRate = InOthersLocationRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedPillarKeyActorDecidePerformance
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::OnFinishedPillarKeyActorDecidePerformance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedPillarKeyActorDecidePerformance");

	ABP_Hakkason_FindSecretRoom_C_OnFinishedPillarKeyActorDecidePerformance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartPillarKeyActorDecidePerformance
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::StartPillarKeyActorDecidePerformance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartPillarKeyActorDecidePerformance");

	ABP_Hakkason_FindSecretRoom_C_StartPillarKeyActorDecidePerformance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.CheckAllPillarUsedItem
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAllUsed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsAllSucceeded                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::CheckAllPillarUsedItem(bool* IsAllUsed, bool* IsAllSucceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.CheckAllPillarUsedItem");

	ABP_Hakkason_FindSecretRoom_C_CheckAllPillarUsedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAllUsed != nullptr)
		*IsAllUsed = params.IsAllUsed;
	if (IsAllSucceeded != nullptr)
		*IsAllSucceeded = params.IsAllSucceeded;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdatePillarKeySelectEffectActorFromItemID
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::UpdatePillarKeySelectEffectActorFromItemID(const struct FName& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdatePillarKeySelectEffectActorFromItemID");

	ABP_Hakkason_FindSecretRoom_C_UpdatePillarKeySelectEffectActorFromItemID_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetHiddenPillarKeySelectEffectActor
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewHidden                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::SetHiddenPillarKeySelectEffectActor(bool NewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetHiddenPillarKeySelectEffectActor");

	ABP_Hakkason_FindSecretRoom_C_SetHiddenPillarKeySelectEffectActor_Params params;
	params.NewHidden = NewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.FinalizePillarKeyActor
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::FinalizePillarKeyActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.FinalizePillarKeyActor");

	ABP_Hakkason_FindSecretRoom_C_FinalizePillarKeyActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedPillarKeyActorAppear
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::OnFinishedPillarKeyActorAppear()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedPillarKeyActorAppear");

	ABP_Hakkason_FindSecretRoom_C_OnFinishedPillarKeyActorAppear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdatePillarKeyPlaceRootActor
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InSpecifiedIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InRotationRate                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InLocationRate                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::UpdatePillarKeyPlaceRootActor(int InSpecifiedIndex, float InRotationRate, float InLocationRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdatePillarKeyPlaceRootActor");

	ABP_Hakkason_FindSecretRoom_C_UpdatePillarKeyPlaceRootActor_Params params;
	params.InSpecifiedIndex = InSpecifiedIndex;
	params.InRotationRate = InRotationRate;
	params.InLocationRate = InLocationRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdatePillarKeyParentActorAppear
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InLocationRate                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::UpdatePillarKeyParentActorAppear(float InLocationRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdatePillarKeyParentActorAppear");

	ABP_Hakkason_FindSecretRoom_C_UpdatePillarKeyParentActorAppear_Params params;
	params.InLocationRate = InLocationRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetHiddenAllUsableKeyActor
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewHidden                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::SetHiddenAllUsableKeyActor(bool NewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetHiddenAllUsableKeyActor");

	ABP_Hakkason_FindSecretRoom_C_SetHiddenAllUsableKeyActor_Params params;
	params.NewHidden = NewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdateCurrentUsableItemIDList
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::UpdateCurrentUsableItemIDList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdateCurrentUsableItemIDList");

	ABP_Hakkason_FindSecretRoom_C_UpdateCurrentUsableItemIDList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartSelectedPillarKeyActorDisappear
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InItemId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::StartSelectedPillarKeyActorDisappear(const struct FName& InItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartSelectedPillarKeyActorDisappear");

	ABP_Hakkason_FindSecretRoom_C_StartSelectedPillarKeyActorDisappear_Params params;
	params.InItemId = InItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartPillarKeyActorAppear
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInstant                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::StartPillarKeyActorAppear(bool bInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartPillarKeyActorAppear");

	ABP_Hakkason_FindSecretRoom_C_StartPillarKeyActorAppear_Params params;
	params.bInstant = bInstant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetPillarLightVisibile
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::SetPillarLightVisibile(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetPillarLightVisibile");

	ABP_Hakkason_FindSecretRoom_C_SetPillarLightVisibile_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InitPillarLight
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::InitPillarLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InitPillarLight");

	ABP_Hakkason_FindSecretRoom_C_InitPillarLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.IsUseSmoothInsertAnimation
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Hakkason_FindSecretRoom_C::IsUseSmoothInsertAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.IsUseSmoothInsertAnimation");

	ABP_Hakkason_FindSecretRoom_C_IsUseSmoothInsertAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnChangedAttentionTargetForFirstHelp
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::OnChangedAttentionTargetForFirstHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnChangedAttentionTargetForFirstHelp");

	ABP_Hakkason_FindSecretRoom_C_OnChangedAttentionTargetForFirstHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.RemoveHelp
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::RemoveHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.RemoveHelp");

	ABP_Hakkason_FindSecretRoom_C_RemoveHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.AddHelp
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::AddHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.AddHelp");

	ABP_Hakkason_FindSecretRoom_C_AddHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.FinalizeHideNPC
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::FinalizeHideNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.FinalizeHideNPC");

	ABP_Hakkason_FindSecretRoom_C_FinalizeHideNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InitializeHideNPC
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::InitializeHideNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InitializeHideNPC");

	ABP_Hakkason_FindSecretRoom_C_InitializeHideNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetCurrentPillarUsedKeyActor
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ABP_Hakkason_FindSecretRoom_C::GetCurrentPillarUsedKeyActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetCurrentPillarUsedKeyActor");

	ABP_Hakkason_FindSecretRoom_C_GetCurrentPillarUsedKeyActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetPillarKeyActorFromItemID
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   InItemId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ABP_Hakkason_FindSecretRoom_C::GetPillarKeyActorFromItemID(const struct FName& InItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetPillarKeyActorFromItemID");

	ABP_Hakkason_FindSecretRoom_C_GetPillarKeyActorFromItemID_Params params;
	params.InItemId = InItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedUseItemDrawOutFadeIn
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::OnFinishedUseItemDrawOutFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedUseItemDrawOutFadeIn");

	ABP_Hakkason_FindSecretRoom_C_OnFinishedUseItemDrawOutFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedWaitBeforeUseItemDrawOutFadeIn
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::OnFinishedWaitBeforeUseItemDrawOutFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedWaitBeforeUseItemDrawOutFadeIn");

	ABP_Hakkason_FindSecretRoom_C_OnFinishedWaitBeforeUseItemDrawOutFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedUseItemDrawOutFadeOut
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::OnFinishedUseItemDrawOutFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedUseItemDrawOutFadeOut");

	ABP_Hakkason_FindSecretRoom_C_OnFinishedUseItemDrawOutFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.RestoreAttentionForceEventScriptEnabled
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::RestoreAttentionForceEventScriptEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.RestoreAttentionForceEventScriptEnabled");

	ABP_Hakkason_FindSecretRoom_C_RestoreAttentionForceEventScriptEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetPillarAttentionForceEventScript
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_Hakkason_FindSecretRoom_C::GetPillarAttentionForceEventScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetPillarAttentionForceEventScript");

	ABP_Hakkason_FindSecretRoom_C_GetPillarAttentionForceEventScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnChangedAttentionTarget
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::OnChangedAttentionTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnChangedAttentionTarget");

	ABP_Hakkason_FindSecretRoom_C_OnChangedAttentionTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetPillarAttentionComponentFromActorTag
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   InActorTag                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3AttentionComponent*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class US3AttentionComponent* ABP_Hakkason_FindSecretRoom_C::GetPillarAttentionComponentFromActorTag(const struct FName& InActorTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetPillarAttentionComponentFromActorTag");

	ABP_Hakkason_FindSecretRoom_C_GetPillarAttentionComponentFromActorTag_Params params;
	params.InActorTag = InActorTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PlayUseItemInsertAnimation
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::PlayUseItemInsertAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PlayUseItemInsertAnimation");

	ABP_Hakkason_FindSecretRoom_C_PlayUseItemInsertAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedUseItemInsertCameraMove
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::OnFinishedUseItemInsertCameraMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedUseItemInsertCameraMove");

	ABP_Hakkason_FindSecretRoom_C_OnFinishedUseItemInsertCameraMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartAttentionToPillar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::StartAttentionToPillar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartAttentionToPillar");

	ABP_Hakkason_FindSecretRoom_C_StartAttentionToPillar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedUseItemInsertItemAnimation
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           interrupted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::OnFinishedUseItemInsertItemAnimation(class UAnimMontage* Montage, bool interrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedUseItemInsertItemAnimation");

	ABP_Hakkason_FindSecretRoom_C_OnFinishedUseItemInsertItemAnimation_Params params;
	params.Montage = Montage;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartUseItemInsertItem
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::StartUseItemInsertItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartUseItemInsertItem");

	ABP_Hakkason_FindSecretRoom_C_StartUseItemInsertItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedUseItemInsertItem
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::OnFinishedUseItemInsertItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedUseItemInsertItem");

	ABP_Hakkason_FindSecretRoom_C_OnFinishedUseItemInsertItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnNotifyReleasedItem
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::OnNotifyReleasedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnNotifyReleasedItem");

	ABP_Hakkason_FindSecretRoom_C_OnNotifyReleasedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InitPillarKeyActor
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::InitPillarKeyActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InitPillarKeyActor");

	ABP_Hakkason_FindSecretRoom_C_InitPillarKeyActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetUseItemResultFailedMessage
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            InPillarIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_Hakkason_FindSecretRoom_C::GetUseItemResultFailedMessage(int InPillarIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetUseItemResultFailedMessage");

	ABP_Hakkason_FindSecretRoom_C_GetUseItemResultFailedMessage_Params params;
	params.InPillarIndex = InPillarIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetPillarIndexFromComponent
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class US3AttentionComponent*   InComponent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_Hakkason_FindSecretRoom_C::GetPillarIndexFromComponent(class US3AttentionComponent* InComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetPillarIndexFromComponent");

	ABP_Hakkason_FindSecretRoom_C_GetPillarIndexFromComponent_Params params;
	params.InComponent = InComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.FinishUseItem
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::FinishUseItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.FinishUseItem");

	ABP_Hakkason_FindSecretRoom_C_FinishUseItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedWaitBeforeUseItemWidgetStart
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::OnFinishedWaitBeforeUseItemWidgetStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedWaitBeforeUseItemWidgetStart");

	ABP_Hakkason_FindSecretRoom_C_OnFinishedWaitBeforeUseItemWidgetStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartUseItem
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::StartUseItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartUseItem");

	ABP_Hakkason_FindSecretRoom_C_StartUseItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.ClearUseItemEventTimerHandle
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::ClearUseItemEventTimerHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.ClearUseItemEventTimerHandle");

	ABP_Hakkason_FindSecretRoom_C_ClearUseItemEventTimerHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedMoveToNextPillar
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::OnFinishedMoveToNextPillar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedMoveToNextPillar");

	ABP_Hakkason_FindSecretRoom_C_OnFinishedMoveToNextPillar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.MoveToNextPillar
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsRight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::MoveToNextPillar(bool IsRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.MoveToNextPillar");

	ABP_Hakkason_FindSecretRoom_C_MoveToNextPillar_Params params;
	params.IsRight = IsRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.ResetPillar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::ResetPillar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.ResetPillar");

	ABP_Hakkason_FindSecretRoom_C_ResetPillar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InitPillar
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::InitPillar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InitPillar");

	ABP_Hakkason_FindSecretRoom_C_InitPillar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.EndAttention
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::EndAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.EndAttention");

	ABP_Hakkason_FindSecretRoom_C_EndAttention_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetAttentionInputActionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::SetAttentionInputActionEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetAttentionInputActionEnabled");

	ABP_Hakkason_FindSecretRoom_C_SetAttentionInputActionEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.JudgePillarDecide
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsPillarDecided                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::JudgePillarDecide(const struct FString& EventId, bool* IsPillarDecided)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.JudgePillarDecide");

	ABP_Hakkason_FindSecretRoom_C_JudgePillarDecide_Params params;
	params.EventId = EventId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPillarDecided != nullptr)
		*IsPillarDecided = params.IsPillarDecided;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InitSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InventoryEnd                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::InitSet(bool InventoryEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InitSet");

	ABP_Hakkason_FindSecretRoom_C_InitSet_Params params;
	params.InventoryEnd = InventoryEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UserConstructionScript");

	ABP_Hakkason_FindSecretRoom_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_DecidePerformance__FinishedFunc
// (BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::Timeline_PillarKeyActor_DecidePerformance__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_DecidePerformance__FinishedFunc");

	ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_DecidePerformance__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_DecidePerformance__UpdateFunc
// (BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::Timeline_PillarKeyActor_DecidePerformance__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_DecidePerformance__UpdateFunc");

	ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_DecidePerformance__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_MoveSelect__FinishedFunc
// (BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::Timeline_PillarKeyActor_MoveSelect__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_MoveSelect__FinishedFunc");

	ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_MoveSelect__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_MoveSelect__UpdateFunc
// (BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::Timeline_PillarKeyActor_MoveSelect__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_MoveSelect__UpdateFunc");

	ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_MoveSelect__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_DecideShakePerformance__FinishedFunc
// (BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::Timeline_PillarKeyActor_DecideShakePerformance__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_DecideShakePerformance__FinishedFunc");

	ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_DecideShakePerformance__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_DecideShakePerformance__UpdateFunc
// (BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::Timeline_PillarKeyActor_DecideShakePerformance__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_DecideShakePerformance__UpdateFunc");

	ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_DecideShakePerformance__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_PlaceMove__FinishedFunc
// (BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::Timeline_PillarKeyActor_PlaceMove__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_PlaceMove__FinishedFunc");

	ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_PlaceMove__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_PlaceMove__UpdateFunc
// (BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::Timeline_PillarKeyActor_PlaceMove__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_PlaceMove__UpdateFunc");

	ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_PlaceMove__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_ReturnPerformance__FinishedFunc
// (BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::Timeline_PillarKeyActor_ReturnPerformance__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_ReturnPerformance__FinishedFunc");

	ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_ReturnPerformance__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_ReturnPerformance__UpdateFunc
// (BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::Timeline_PillarKeyActor_ReturnPerformance__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_ReturnPerformance__UpdateFunc");

	ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_ReturnPerformance__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_DrawOutPerformance__FinishedFunc
// (BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::Timeline_PillarKeyActor_DrawOutPerformance__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_DrawOutPerformance__FinishedFunc");

	ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_DrawOutPerformance__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_DrawOutPerformance__UpdateFunc
// (BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::Timeline_PillarKeyActor_DrawOutPerformance__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_DrawOutPerformance__UpdateFunc");

	ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_DrawOutPerformance__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_MoveIn__FinishedFunc
// (BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::Timeline_PillarKeyActor_MoveIn__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_MoveIn__FinishedFunc");

	ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_MoveIn__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_MoveIn__UpdateFunc
// (BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::Timeline_PillarKeyActor_MoveIn__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_MoveIn__UpdateFunc");

	ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_MoveIn__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Hakkason_FindSecretRoom_C::InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8");

	ABP_Hakkason_FindSecretRoom_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Hakkason_FindSecretRoom_C::InpActEvt_SearchRightSelect_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_7");

	ABP_Hakkason_FindSecretRoom_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InpActEvt_LeftTrigger_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Hakkason_FindSecretRoom_C::InpActEvt_LeftTrigger_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InpActEvt_LeftTrigger_K2Node_InputActionEvent_6");

	ABP_Hakkason_FindSecretRoom_C_InpActEvt_LeftTrigger_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InpActEvt_RightTrigger_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Hakkason_FindSecretRoom_C::InpActEvt_RightTrigger_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InpActEvt_RightTrigger_K2Node_InputActionEvent_5");

	ABP_Hakkason_FindSecretRoom_C_InpActEvt_RightTrigger_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PillarKeyActor_DelayAppear
// (BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::PillarKeyActor_DelayAppear()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PillarKeyActor_DelayAppear");

	ABP_Hakkason_FindSecretRoom_C_PillarKeyActor_DelayAppear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PillarKeyActor_DecidePerformance
// (BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::PillarKeyActor_DecidePerformance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PillarKeyActor_DecidePerformance");

	ABP_Hakkason_FindSecretRoom_C_PillarKeyActor_DecidePerformance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PillarKeyActor_MoveSelect
// (BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::PillarKeyActor_MoveSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PillarKeyActor_MoveSelect");

	ABP_Hakkason_FindSecretRoom_C_PillarKeyActor_MoveSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PillarKeyActor_DecideShakePerformance
// (BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::PillarKeyActor_DecideShakePerformance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PillarKeyActor_DecideShakePerformance");

	ABP_Hakkason_FindSecretRoom_C_PillarKeyActor_DecideShakePerformance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PillarKeyActor_ReturnPerformance
// (BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::PillarKeyActor_ReturnPerformance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PillarKeyActor_ReturnPerformance");

	ABP_Hakkason_FindSecretRoom_C_PillarKeyActor_ReturnPerformance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PillarKeyActor_DrawOutPerformance
// (BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::PillarKeyActor_DrawOutPerformance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PillarKeyActor_DrawOutPerformance");

	ABP_Hakkason_FindSecretRoom_C_PillarKeyActor_DrawOutPerformance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.ReceiveTick");

	ABP_Hakkason_FindSecretRoom_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PillarKeyActor_Appear
// (BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::PillarKeyActor_Appear()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PillarKeyActor_Appear");

	ABP_Hakkason_FindSecretRoom_C_PillarKeyActor_Appear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.RenewalActorCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_MainFlowActorID> ActorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  RenewalCounter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::RenewalActorCount(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.RenewalActorCount");

	ABP_Hakkason_FindSecretRoom_C_RenewalActorCount_Params params;
	params.ActorId = ActorId;
	params.RenewalCounter = RenewalCounter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.TickChangeCheckKill
// (BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::TickChangeCheckKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.TickChangeCheckKill");

	ABP_Hakkason_FindSecretRoom_C_TickChangeCheckKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.AttentionOnAccord
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_Hakkason_FindSecretRoom_C::AttentionOnAccord(const struct FString& EventId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.AttentionOnAccord");

	ABP_Hakkason_FindSecretRoom_C_AttentionOnAccord_Params params;
	params.EventId = EventId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.DecideDetectAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.DecideDetectAction");

	ABP_Hakkason_FindSecretRoom_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartAttention
// (BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_FindSecretRoom_C::StartAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartAttention");

	ABP_Hakkason_FindSecretRoom_C_StartAttention_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.ExecuteUbergraph_BP_Hakkason_FindSecretRoom
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_FindSecretRoom_C::ExecuteUbergraph_BP_Hakkason_FindSecretRoom(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.ExecuteUbergraph_BP_Hakkason_FindSecretRoom");

	ABP_Hakkason_FindSecretRoom_C_ExecuteUbergraph_BP_Hakkason_FindSecretRoom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

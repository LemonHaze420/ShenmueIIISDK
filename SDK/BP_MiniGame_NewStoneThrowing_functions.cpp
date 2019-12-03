
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

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.RotateUpdate
// (Exec, Native, NetResponse, Static, Private, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_NewStoneThrowing_C::STATIC_RotateUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.RotateUpdate");

	ABP_MiniGame_NewStoneThrowing_C_RotateUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ClacArmPower
// (NetReliable, Exec, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_MiniGame_NewStoneThrowing_C::ClacArmPower(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ClacArmPower");

	ABP_MiniGame_NewStoneThrowing_C_ClacArmPower_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.GetMiniGameBGMID
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::STATIC_GetMiniGameBGMID(struct FName* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.GetMiniGameBGMID");

	ABP_MiniGame_NewStoneThrowing_C_GetMiniGameBGMID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.GetDetectAction
// (Net, NetReliable, NetRequest, Event, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_MiniGame_NewStoneThrowing_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.GetDetectAction");

	ABP_MiniGame_NewStoneThrowing_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetBlockingVolume
// (Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, DLLImport, Const)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::SetBlockingVolume(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetBlockingVolume");

	ABP_MiniGame_NewStoneThrowing_C_SetBlockingVolume_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.GetMiniGameHelpName
// (Net, NetReliable, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void ABP_MiniGame_NewStoneThrowing_C::GetMiniGameHelpName(struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.GetMiniGameHelpName");

	ABP_MiniGame_NewStoneThrowing_C_GetMiniGameHelpName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetBoardInfo
// (Native, NetMulticast, Public, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_MiniGame_NewStoneThrowing_C::SetBoardInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetBoardInfo");

	ABP_MiniGame_NewStoneThrowing_C_SetBoardInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.InitializeArrow
// (NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_NewStoneThrowing_C::InitializeArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.InitializeArrow");

	ABP_MiniGame_NewStoneThrowing_C_InitializeArrow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetAndInterpHandRotate
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsInterp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::STATIC_SetAndInterpHandRotate(bool IsInterp, float Target, float DeltaTime, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetAndInterpHandRotate");

	ABP_MiniGame_NewStoneThrowing_C_SetAndInterpHandRotate_Params params;
	params.IsInterp = IsInterp;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.IsChangePowerAngle
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGame_NewStoneThrowing_C::IsChangePowerAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.IsChangePowerAngle");

	ABP_MiniGame_NewStoneThrowing_C_IsChangePowerAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.GetInputPowerLength
// (Native, Static, Protected, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_MiniGame_NewStoneThrowing_C::STATIC_GetInputPowerLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.GetInputPowerLength");

	ABP_MiniGame_NewStoneThrowing_C_GetInputPowerLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.AddItem
// (Native, Static, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ItemCount                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::STATIC_AddItem(int* ItemCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.AddItem");

	ABP_MiniGame_NewStoneThrowing_C_AddItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemCount != nullptr)
		*ItemCount = params.ItemCount;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.AddGiftList
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, Const)
// Parameters:
// struct FName                   GiftName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::STATIC_AddGiftList(const struct FName& GiftName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.AddGiftList");

	ABP_MiniGame_NewStoneThrowing_C_AddGiftList_Params params;
	params.GiftName = GiftName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.UpdateArrow
// (Net, NetRequest, Static, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::STATIC_UpdateArrow(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.UpdateArrow");

	ABP_MiniGame_NewStoneThrowing_C_UpdateArrow_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.UpdateShaking
// (Net, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::UpdateShaking(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.UpdateShaking");

	ABP_MiniGame_NewStoneThrowing_C_UpdateShaking_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.InitializeValue
// (Net, NetRequest, Exec, Native, NetResponse, Public, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_NewStoneThrowing_C::InitializeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.InitializeValue");

	ABP_MiniGame_NewStoneThrowing_C_InitializeValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.CameraUpdate
// (NetReliable, NetResponse, Static, MulticastDelegate, Private, Delegate, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::STATIC_CameraUpdate(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.CameraUpdate");

	ABP_MiniGame_NewStoneThrowing_C_CameraUpdate_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetRightAxisY
// (NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::SetRightAxisY(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetRightAxisY");

	ABP_MiniGame_NewStoneThrowing_C_SetRightAxisY_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetRightAxisX
// (Net, NetRequest, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::SetRightAxisX(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetRightAxisX");

	ABP_MiniGame_NewStoneThrowing_C_SetRightAxisX_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.HideUI
// (Net, NetReliable, NetRequest, NetResponse, NetMulticast, Private, Protected, Delegate, HasOutParms, Const)

void ABP_MiniGame_NewStoneThrowing_C::HideUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.HideUI");

	ABP_MiniGame_NewStoneThrowing_C_HideUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SpawnInputControlActor
// (Net, Native, NetResponse, Static, Private, Delegate, NetServer)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_MiniGame_NewStoneThrowing_C::STATIC_SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SpawnInputControlActor");

	ABP_MiniGame_NewStoneThrowing_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ShowUIThrowResult
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Public, Private, Delegate, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsSuccess                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::STATIC_ShowUIThrowResult(bool IsSuccess, int Point, bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ShowUIThrowResult");

	ABP_MiniGame_NewStoneThrowing_C_ShowUIThrowResult_Params params;
	params.IsSuccess = IsSuccess;
	params.Point = Point;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ShowUIGameResult
// (Net, Native, Event, NetMulticast, Private, Protected, Delegate, HasOutParms, Const)

void ABP_MiniGame_NewStoneThrowing_C::ShowUIGameResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ShowUIGameResult");

	ABP_MiniGame_NewStoneThrowing_C_ShowUIGameResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetUIScore
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, Const)
// Parameters:
// int                            InScore                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::STATIC_SetUIScore(int InScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetUIScore");

	ABP_MiniGame_NewStoneThrowing_C_SetUIScore_Params params;
	params.InScore = InScore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetUIThrowCount
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, Const)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::STATIC_SetUIThrowCount(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetUIThrowCount");

	ABP_MiniGame_NewStoneThrowing_C_SetUIThrowCount_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.UserConstructionScript
// (Exec, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_MiniGame_NewStoneThrowing_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.UserConstructionScript");

	ABP_MiniGame_NewStoneThrowing_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_Arm__FinishedFunc
// (NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_NewStoneThrowing_C::Timeline_Arm__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_Arm__FinishedFunc");

	ABP_MiniGame_NewStoneThrowing_C_Timeline_Arm__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_Arm__UpdateFunc
// (NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_NewStoneThrowing_C::Timeline_Arm__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_Arm__UpdateFunc");

	ABP_MiniGame_NewStoneThrowing_C_Timeline_Arm__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_2__FinishedFunc
// (Net, NetReliable, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_NewStoneThrowing_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_2__FinishedFunc");

	ABP_MiniGame_NewStoneThrowing_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_2__UpdateFunc
// (Net, NetReliable, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_NewStoneThrowing_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_2__UpdateFunc");

	ABP_MiniGame_NewStoneThrowing_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_0__FinishedFunc
// (NetReliable, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_NewStoneThrowing_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_0__FinishedFunc");

	ABP_MiniGame_NewStoneThrowing_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_0__UpdateFunc
// (NetReliable, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_NewStoneThrowing_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_0__UpdateFunc");

	ABP_MiniGame_NewStoneThrowing_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ReceiveTick
// (NetReliable, NetRequest, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ReceiveTick");

	ABP_MiniGame_NewStoneThrowing_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.StartTakeOut
// (Net, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_NewStoneThrowing_C::StartTakeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.StartTakeOut");

	ABP_MiniGame_NewStoneThrowing_C_StartTakeOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnFinishedTakeOutAnim
// (Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_NewStoneThrowing_C::OnFinishedTakeOutAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnFinishedTakeOutAnim");

	ABP_MiniGame_NewStoneThrowing_C_OnFinishedTakeOutAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.PlayArmUpDown
// (Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_NewStoneThrowing_C::PlayArmUpDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.PlayArmUpDown");

	ABP_MiniGame_NewStoneThrowing_C_PlayArmUpDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.StopArmUpDown
// (Net, NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_NewStoneThrowing_C::StopArmUpDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.StopArmUpDown");

	ABP_MiniGame_NewStoneThrowing_C_StopArmUpDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnThorwObject
// (Net, NetRequest, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_NewStoneThrowing_C::OnThorwObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnThorwObject");

	ABP_MiniGame_NewStoneThrowing_C_OnThorwObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnFinishedFade
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_NewStoneThrowing_C::OnFinishedFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnFinishedFade");

	ABP_MiniGame_NewStoneThrowing_C_OnFinishedFade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.DrawMiniGame
// (NetRequest, Exec, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_NewStoneThrowing_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.DrawMiniGame");

	ABP_MiniGame_NewStoneThrowing_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.RestartMiniGame
// (Net, NetReliable, Exec, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_NewStoneThrowing_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.RestartMiniGame");

	ABP_MiniGame_NewStoneThrowing_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnDecideThrowingResult
// (Net, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, DLLImport, Const)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   GiftName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSpecial                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundAtomCue*           SuccessSound                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::OnDecideThrowingResult(bool bSuccess, int Point, const struct FName& GiftName, bool IsSpecial, class USoundAtomCue* SuccessSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnDecideThrowingResult");

	ABP_MiniGame_NewStoneThrowing_C_OnDecideThrowingResult_Params params;
	params.bSuccess = bSuccess;
	params.Point = Point;
	params.GiftName = GiftName;
	params.IsSpecial = IsSpecial;
	params.SuccessSound = SuccessSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.LoseMiniGame
// (Net, NetReliable, Exec, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_NewStoneThrowing_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.LoseMiniGame");

	ABP_MiniGame_NewStoneThrowing_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.WinMiniGame
// (NetReliable, Exec, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_NewStoneThrowing_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.WinMiniGame");

	ABP_MiniGame_NewStoneThrowing_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.EndMiniGame
// (NetReliable, Exec, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_NewStoneThrowing_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.EndMiniGame");

	ABP_MiniGame_NewStoneThrowing_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.StartMiniGame
// (Net, Exec, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_NewStoneThrowing_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.StartMiniGame");

	ABP_MiniGame_NewStoneThrowing_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ReceiveBeginPlay
// (Net, Exec, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_NewStoneThrowing_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ReceiveBeginPlay");

	ABP_MiniGame_NewStoneThrowing_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnTalkScriptEvent
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::STATIC_OnTalkScriptEvent(int EventNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnTalkScriptEvent");

	ABP_MiniGame_NewStoneThrowing_C_OnTalkScriptEvent_Params params;
	params.EventNumber = EventNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
// (NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_NewStoneThrowing_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature");

	ABP_MiniGame_NewStoneThrowing_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
// (NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_NewStoneThrowing_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature");

	ABP_MiniGame_NewStoneThrowing_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ResumeMiniGame
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ResumeKeyword                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MiniGame_NewStoneThrowing_C::STATIC_ResumeMiniGame(const struct FString& ResumeKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ResumeMiniGame");

	ABP_MiniGame_NewStoneThrowing_C_ResumeMiniGame_Params params;
	params.ResumeKeyword = ResumeKeyword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.EndGame
// (Net, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_NewStoneThrowing_C::EndGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.EndGame");

	ABP_MiniGame_NewStoneThrowing_C_EndGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnFinishedFadeEndGame
// (Net, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_NewStoneThrowing_C::OnFinishedFadeEndGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnFinishedFadeEndGame");

	ABP_MiniGame_NewStoneThrowing_C_OnFinishedFadeEndGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ConsumeGamblePrice
// (Net, NetRequest, Exec, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_NewStoneThrowing_C::ConsumeGamblePrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ConsumeGamblePrice");

	ABP_MiniGame_NewStoneThrowing_C_ConsumeGamblePrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnStopped
// (Net, NetReliable, NetRequest, Exec, Event, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bResult                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   GiftName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSpecial                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundAtomCue*           SuccessSound                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsGameCenter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::OnStopped(bool bResult, int Score, const struct FName& GiftName, bool IsSpecial, class USoundAtomCue* SuccessSound, bool IsGameCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnStopped");

	ABP_MiniGame_NewStoneThrowing_C_OnStopped_Params params;
	params.bResult = bResult;
	params.Score = Score;
	params.GiftName = GiftName;
	params.IsSpecial = IsSpecial;
	params.SuccessSound = SuccessSound;
	params.IsGameCenter = IsGameCenter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.FinalizeTalk
// (Net, NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_NewStoneThrowing_C::FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.FinalizeTalk");

	ABP_MiniGame_NewStoneThrowing_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ExecuteUbergraph_BP_MiniGame_NewStoneThrowing
// (Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::ExecuteUbergraph_BP_MiniGame_NewStoneThrowing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ExecuteUbergraph_BP_MiniGame_NewStoneThrowing");

	ABP_MiniGame_NewStoneThrowing_C_ExecuteUbergraph_BP_MiniGame_NewStoneThrowing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

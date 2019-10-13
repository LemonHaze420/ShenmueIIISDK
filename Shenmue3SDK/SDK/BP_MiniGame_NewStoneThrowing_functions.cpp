
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

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.RotateUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::RotateUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.RotateUpdate");

	ABP_MiniGame_NewStoneThrowing_C_RotateUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ClacArmPower
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_MiniGame_NewStoneThrowing_C::ClacArmPower(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ClacArmPower");

	ABP_MiniGame_NewStoneThrowing_C_ClacArmPower_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.GetMiniGameBGMID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::GetMiniGameBGMID(struct FName* ID)
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
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void ABP_MiniGame_NewStoneThrowing_C::GetMiniGameHelpName(struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.GetMiniGameHelpName");

	ABP_MiniGame_NewStoneThrowing_C_GetMiniGameHelpName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetBoardInfo
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::SetBoardInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetBoardInfo");

	ABP_MiniGame_NewStoneThrowing_C_SetBoardInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.InitializeArrow
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::InitializeArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.InitializeArrow");

	ABP_MiniGame_NewStoneThrowing_C_InitializeArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetAndInterpHandRotate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInterp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::SetAndInterpHandRotate(bool IsInterp, float Target, float DeltaTime, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetAndInterpHandRotate");

	ABP_MiniGame_NewStoneThrowing_C_SetAndInterpHandRotate_Params params;
	params.IsInterp = IsInterp;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.IsChangePowerAngle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_MiniGame_NewStoneThrowing_C::GetInputPowerLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.GetInputPowerLength");

	ABP_MiniGame_NewStoneThrowing_C_GetInputPowerLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.AddItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemCount                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::AddItem(int* ItemCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.AddItem");

	ABP_MiniGame_NewStoneThrowing_C_AddItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemCount != nullptr)
		*ItemCount = params.ItemCount;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.AddGiftList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   GiftName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::AddGiftList(const struct FName& GiftName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.AddGiftList");

	ABP_MiniGame_NewStoneThrowing_C_AddGiftList_Params params;
	params.GiftName = GiftName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.UpdateArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::UpdateArrow(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.UpdateArrow");

	ABP_MiniGame_NewStoneThrowing_C_UpdateArrow_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ChangeArrowLength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::ChangeArrowLength(bool Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ChangeArrowLength");

	ABP_MiniGame_NewStoneThrowing_C_ChangeArrowLength_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.UpdateShaking
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::UpdateShaking(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.UpdateShaking");

	ABP_MiniGame_NewStoneThrowing_C_UpdateShaking_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.InitializeValue
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::InitializeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.InitializeValue");

	ABP_MiniGame_NewStoneThrowing_C_InitializeValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.CameraUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::CameraUpdate(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.CameraUpdate");

	ABP_MiniGame_NewStoneThrowing_C_CameraUpdate_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::SetRightAxisY(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetRightAxisY");

	ABP_MiniGame_NewStoneThrowing_C_SetRightAxisY_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::SetRightAxisX(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetRightAxisX");

	ABP_MiniGame_NewStoneThrowing_C_SetRightAxisX_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.HideUI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::HideUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.HideUI");

	ABP_MiniGame_NewStoneThrowing_C_HideUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SpawnInputControlActor
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_MiniGame_NewStoneThrowing_C::SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SpawnInputControlActor");

	ABP_MiniGame_NewStoneThrowing_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ShowUIThrowResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::ShowUIThrowResult(bool IsSuccess, int Point, bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ShowUIThrowResult");

	ABP_MiniGame_NewStoneThrowing_C_ShowUIThrowResult_Params params;
	params.IsSuccess = IsSuccess;
	params.Point = Point;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ShowUIGameResult
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::ShowUIGameResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ShowUIGameResult");

	ABP_MiniGame_NewStoneThrowing_C_ShowUIGameResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetUIScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InScore                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::SetUIScore(int InScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetUIScore");

	ABP_MiniGame_NewStoneThrowing_C_SetUIScore_Params params;
	params.InScore = InScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetUIThrowCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::SetUIThrowCount(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetUIThrowCount");

	ABP_MiniGame_NewStoneThrowing_C_SetUIThrowCount_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.UserConstructionScript");

	ABP_MiniGame_NewStoneThrowing_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_Arm__FinishedFunc
// (BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::Timeline_Arm__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_Arm__FinishedFunc");

	ABP_MiniGame_NewStoneThrowing_C_Timeline_Arm__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_Arm__UpdateFunc
// (BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::Timeline_Arm__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_Arm__UpdateFunc");

	ABP_MiniGame_NewStoneThrowing_C_Timeline_Arm__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_2__FinishedFunc");

	ABP_MiniGame_NewStoneThrowing_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_2__UpdateFunc");

	ABP_MiniGame_NewStoneThrowing_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_0__FinishedFunc");

	ABP_MiniGame_NewStoneThrowing_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_0__UpdateFunc");

	ABP_MiniGame_NewStoneThrowing_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.FinalizeTalk
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.FinalizeTalk");

	ABP_MiniGame_NewStoneThrowing_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ReceiveTick");

	ABP_MiniGame_NewStoneThrowing_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.StartTakeOut
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::StartTakeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.StartTakeOut");

	ABP_MiniGame_NewStoneThrowing_C_StartTakeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnFinishedFade
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::OnFinishedFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnFinishedFade");

	ABP_MiniGame_NewStoneThrowing_C_OnFinishedFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnFinishedTakeOutAnim
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::OnFinishedTakeOutAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnFinishedTakeOutAnim");

	ABP_MiniGame_NewStoneThrowing_C_OnFinishedTakeOutAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.PlayArmUpDown
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::PlayArmUpDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.PlayArmUpDown");

	ABP_MiniGame_NewStoneThrowing_C_PlayArmUpDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.StopArmUpDown
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::StopArmUpDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.StopArmUpDown");

	ABP_MiniGame_NewStoneThrowing_C_StopArmUpDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnThorwObject
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::OnThorwObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnThorwObject");

	ABP_MiniGame_NewStoneThrowing_C_OnThorwObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnDecideThrowingResult
// (BlueprintCallable, BlueprintEvent)
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


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.DrawMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.DrawMiniGame");

	ABP_MiniGame_NewStoneThrowing_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ReceiveBeginPlay");

	ABP_MiniGame_NewStoneThrowing_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.LoseMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.LoseMiniGame");

	ABP_MiniGame_NewStoneThrowing_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.WinMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.WinMiniGame");

	ABP_MiniGame_NewStoneThrowing_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.EndMiniGame");

	ABP_MiniGame_NewStoneThrowing_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.StartMiniGame");

	ABP_MiniGame_NewStoneThrowing_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnTalkScriptEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_NewStoneThrowing_C::OnTalkScriptEvent(int* EventNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnTalkScriptEvent");

	ABP_MiniGame_NewStoneThrowing_C_OnTalkScriptEvent_Params params;
	params.EventNumber = EventNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
// (BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature");

	ABP_MiniGame_NewStoneThrowing_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
// (BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature");

	ABP_MiniGame_NewStoneThrowing_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ResumeMiniGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                ResumeKeyword                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MiniGame_NewStoneThrowing_C::ResumeMiniGame(struct FString* ResumeKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ResumeMiniGame");

	ABP_MiniGame_NewStoneThrowing_C_ResumeMiniGame_Params params;
	params.ResumeKeyword = ResumeKeyword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.EndGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::EndGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.EndGame");

	ABP_MiniGame_NewStoneThrowing_C_EndGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnFinishedFadeEndGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::OnFinishedFadeEndGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnFinishedFadeEndGame");

	ABP_MiniGame_NewStoneThrowing_C_OnFinishedFadeEndGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.RestartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.RestartMiniGame");

	ABP_MiniGame_NewStoneThrowing_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ConsumeGamblePrice
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_NewStoneThrowing_C::ConsumeGamblePrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ConsumeGamblePrice");

	ABP_MiniGame_NewStoneThrowing_C_ConsumeGamblePrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnStopped
// (BlueprintCallable, BlueprintEvent)
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


// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ExecuteUbergraph_BP_MiniGame_NewStoneThrowing
// (HasDefaults)
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

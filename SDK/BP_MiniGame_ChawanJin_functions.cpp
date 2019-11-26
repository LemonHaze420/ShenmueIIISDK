
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

// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ChangeHelpButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::ChangeHelpButton(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ChangeHelpButton");

	ABP_MiniGame_ChawanJin_C_ChangeHelpButton_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.MiniGameDataCheckWinData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           EnableSaveData                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::MiniGameDataCheckWinData(bool* EnableSaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.MiniGameDataCheckWinData");

	ABP_MiniGame_ChawanJin_C_MiniGameDataCheckWinData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnableSaveData != nullptr)
		*EnableSaveData = params.EnableSaveData;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CulcCupmoveCoefficient
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AdjustDistance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::CulcCupmoveCoefficient(float Distance, float* AdjustDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CulcCupmoveCoefficient");

	ABP_MiniGame_ChawanJin_C_CulcCupmoveCoefficient_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AdjustDistance != nullptr)
		*AdjustDistance = params.AdjustDistance;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.SetOffsetMotionMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::SetOffsetMotionMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.SetOffsetMotionMesh");

	ABP_MiniGame_ChawanJin_C_SetOffsetMotionMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.PlayMoveSe
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::PlayMoveSe()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.PlayMoveSe");

	ABP_MiniGame_ChawanJin_C_PlayMoveSe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ResetForcedCancelDisable
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::ResetForcedCancelDisable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ResetForcedCancelDisable");

	ABP_MiniGame_ChawanJin_C_ResetForcedCancelDisable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.SetForcedCancelDisable
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::SetForcedCancelDisable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.SetForcedCancelDisable");

	ABP_MiniGame_ChawanJin_C_SetForcedCancelDisable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Set_IndicateBS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Cup_No                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::Set_IndicateBS(unsigned char Cup_No)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Set_IndicateBS");

	ABP_MiniGame_ChawanJin_C_Set_IndicateBS_Params params;
	params.Cup_No = Cup_No;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Attach_CupMoveR
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FMH_Pos                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::Attach_CupMoveR(float FMH_Pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Attach_CupMoveR");

	ABP_MiniGame_ChawanJin_C_Attach_CupMoveR_Params params;
	params.FMH_Pos = FMH_Pos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.WaitSceneCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::WaitSceneCamera(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.WaitSceneCamera");

	ABP_MiniGame_ChawanJin_C_WaitSceneCamera_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.SetVisibleButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::SetVisibleButton(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.SetVisibleButton");

	ABP_MiniGame_ChawanJin_C_SetVisibleButton_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_MiniGame_ChawanJin_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.GetDetectAction");

	ABP_MiniGame_ChawanJin_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CulcSeqPosAdjust
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Adjust                         (Parm, OutParm, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::CulcSeqPosAdjust(struct FVector* Adjust)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CulcSeqPosAdjust");

	ABP_MiniGame_ChawanJin_C_CulcSeqPosAdjust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Adjust != nullptr)
		*Adjust = params.Adjust;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Get_MoveMotionAdjust
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Mul_Value                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::Get_MoveMotionAdjust(float* Mul_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Get_MoveMotionAdjust");

	ABP_MiniGame_ChawanJin_C_Get_MoveMotionAdjust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mul_Value != nullptr)
		*Mul_Value = params.Mul_Value;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Get_AnimInstaceBS
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UABP_MiniGame_CJ_RyoBS_C* AsABP_Mini_Game_CJ_Ryo         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::Get_AnimInstaceBS(class UABP_MiniGame_CJ_RyoBS_C** AsABP_Mini_Game_CJ_Ryo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Get_AnimInstaceBS");

	ABP_MiniGame_ChawanJin_C_Get_AnimInstaceBS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsABP_Mini_Game_CJ_Ryo != nullptr)
		*AsABP_Mini_Game_CJ_Ryo = params.AsABP_Mini_Game_CJ_Ryo;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Get_TargetMovePosID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_CJ_CupPos>      CurrentPosID                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::Get_TargetMovePosID(TEnumAsByte<EN_CJ_CupPos>* CurrentPosID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Get_TargetMovePosID");

	ABP_MiniGame_ChawanJin_C_Get_TargetMovePosID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentPosID != nullptr)
		*CurrentPosID = params.CurrentPosID;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.TestSet
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::TestSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.TestSet");

	ABP_MiniGame_ChawanJin_C_TestSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CtlTrophy_TotalPlayTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Changed_from_before            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Trophy_Get                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::CtlTrophy_TotalPlayTime(bool* Changed_from_before, bool* Trophy_Get)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CtlTrophy_TotalPlayTime");

	ABP_MiniGame_ChawanJin_C_CtlTrophy_TotalPlayTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Changed_from_before != nullptr)
		*Changed_from_before = params.Changed_from_before;
	if (Trophy_Get != nullptr)
		*Trophy_Get = params.Trophy_Get;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CtlTrophy_SaveGameTime
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::CtlTrophy_SaveGameTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CtlTrophy_SaveGameTime");

	ABP_MiniGame_ChawanJin_C_CtlTrophy_SaveGameTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CtlTrophy_PlayHistory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Changed_from_before            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Trophy_Get                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::CtlTrophy_PlayHistory(bool* Changed_from_before, bool* Trophy_Get)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CtlTrophy_PlayHistory");

	ABP_MiniGame_ChawanJin_C_CtlTrophy_PlayHistory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Changed_from_before != nullptr)
		*Changed_from_before = params.Changed_from_before;
	if (Trophy_Get != nullptr)
		*Trophy_Get = params.Trophy_Get;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CheckDLC
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::CheckDLC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CheckDLC");

	ABP_MiniGame_ChawanJin_C_CheckDLC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ChangeMenoButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::ChangeMenoButton(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ChangeMenoButton");

	ABP_MiniGame_ChawanJin_C_ChangeMenoButton_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ChangeClockVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::ChangeClockVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ChangeClockVisible");

	ABP_MiniGame_ChawanJin_C_ChangeClockVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.GameCancelPostProcess
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::GameCancelPostProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.GameCancelPostProcess");

	ABP_MiniGame_ChawanJin_C_GameCancelPostProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CheckInterruptible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::CheckInterruptible(bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CheckInterruptible");

	ABP_MiniGame_ChawanJin_C_CheckInterruptible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable != nullptr)
		*Enable = params.Enable;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CheckItemAcquisition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            FlagID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AlreadyAcquired                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::CheckItemAcquisition(int FlagID, bool* AlreadyAcquired)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CheckItemAcquisition");

	ABP_MiniGame_ChawanJin_C_CheckItemAcquisition_Params params;
	params.FlagID = FlagID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AlreadyAcquired != nullptr)
		*AlreadyAcquired = params.AlreadyAcquired;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.MakeMemoPage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            SelectPage                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::MakeMemoPage(int* SelectPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.MakeMemoPage");

	ABP_MiniGame_ChawanJin_C_MakeMemoPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectPage != nullptr)
		*SelectPage = params.SelectPage;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.IsActivateHelp
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGame_ChawanJin_C::IsActivateHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.IsActivateHelp");

	ABP_MiniGame_ChawanJin_C_IsActivateHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Make_Memo
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::Make_Memo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Make_Memo");

	ABP_MiniGame_ChawanJin_C_Make_Memo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.MakeWonInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WonFlag                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::MakeWonInfo(bool* WonFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.MakeWonInfo");

	ABP_MiniGame_ChawanJin_C_MakeWonInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WonFlag != nullptr)
		*WonFlag = params.WonFlag;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.GetCupRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                Rotator                        (Parm, OutParm, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::GetCupRotation(struct FRotator* Rotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.GetCupRotation");

	ABP_MiniGame_ChawanJin_C_GetCupRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rotator != nullptr)
		*Rotator = params.Rotator;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CheckItemKind
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Item_ID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::CheckItemKind(const struct FString& Item_ID, int* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CheckItemKind");

	ABP_MiniGame_ChawanJin_C_CheckItemKind_Params params;
	params.Item_ID = Item_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CheckReset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FlagEnable                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::CheckReset(bool FlagEnable, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CheckReset");

	ABP_MiniGame_ChawanJin_C_CheckReset_Params params;
	params.FlagEnable = FlagEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CheckWinSaveData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int>                    WinTable                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::CheckWinSaveData(TArray<int>* WinTable, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CheckWinSaveData");

	ABP_MiniGame_ChawanJin_C_CheckWinSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WinTable != nullptr)
		*WinTable = params.WinTable;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.SetWinSaveData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Cipher_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WinFlag                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Progress_Quest                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           Forced_Faile                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::SetWinSaveData(int Cipher_Index, bool WinFlag, bool Forced_Faile, bool* Progress_Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.SetWinSaveData");

	ABP_MiniGame_ChawanJin_C_SetWinSaveData_Params params;
	params.Cipher_Index = Cipher_Index;
	params.WinFlag = WinFlag;
	params.Forced_Faile = Forced_Faile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Progress_Quest != nullptr)
		*Progress_Quest = params.Progress_Quest;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ResetWinSaveData
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::ResetWinSaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ResetWinSaveData");

	ABP_MiniGame_ChawanJin_C_ResetWinSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CallTest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Loaded_End                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::CallTest(bool* Loaded_End)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CallTest");

	ABP_MiniGame_ChawanJin_C_CallTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loaded_End != nullptr)
		*Loaded_End = params.Loaded_End;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.StartMeshOff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::StartMeshOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.StartMeshOff");

	ABP_MiniGame_ChawanJin_C_StartMeshOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.GetCupLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::GetCupLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.GetCupLocation");

	ABP_MiniGame_ChawanJin_C_GetCupLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CheckMiniGameEnable
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           GameEnable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::CheckMiniGameEnable(bool* GameEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CheckMiniGameEnable");

	ABP_MiniGame_ChawanJin_C_CheckMiniGameEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameEnable != nullptr)
		*GameEnable = params.GameEnable;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CreateWinCountKey
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EMiniGamePurpose>  Purpose                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Key                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::CreateWinCountKey(TEnumAsByte<EMiniGamePurpose> Purpose, struct FName* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CreateWinCountKey");

	ABP_MiniGame_ChawanJin_C_CreateWinCountKey_Params params;
	params.Purpose = Purpose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CipherFlagCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            FlagID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForcedFailure                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::CipherFlagCheck(int FlagID, int Min, int Max, bool ForcedFailure, bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CipherFlagCheck");

	ABP_MiniGame_ChawanJin_C_CipherFlagCheck_Params params;
	params.FlagID = FlagID;
	params.Min = Min;
	params.Max = Max;
	params.ForcedFailure = ForcedFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable != nullptr)
		*Enable = params.Enable;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.IkRot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          add_h                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          add_v                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::IkRot(float add_h, float add_v)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.IkRot");

	ABP_MiniGame_ChawanJin_C_IkRot_Params params;
	params.add_h = add_h;
	params.add_v = add_v;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CulcSocket
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 newParam                       (Parm, OutParm, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::CulcSocket(struct FVector* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CulcSocket");

	ABP_MiniGame_ChawanJin_C_CulcSocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.IkMoveBall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          add_h                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          add_v                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::IkMoveBall(float add_h, float add_v)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.IkMoveBall");

	ABP_MiniGame_ChawanJin_C_IkMoveBall_Params params;
	params.add_h = add_h;
	params.add_v = add_v;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.GetClothMeshComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ABP_MiniGame_ChawanJin_C::GetClothMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.GetClothMeshComponent");

	ABP_MiniGame_ChawanJin_C_GetClothMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Culc_CupMoveWidth_Rot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Add_Width                      (Parm, OutParm, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::Culc_CupMoveWidth_Rot(struct FVector* Add_Width)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Culc_CupMoveWidth_Rot");

	ABP_MiniGame_ChawanJin_C_Culc_CupMoveWidth_Rot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Add_Width != nullptr)
		*Add_Width = params.Add_Width;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.SetField
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::SetField(float Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.SetField");

	ABP_MiniGame_ChawanJin_C_SetField_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.RefreshSaveData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LoadData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::RefreshSaveData(int LoadData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.RefreshSaveData");

	ABP_MiniGame_ChawanJin_C_RefreshSaveData_Params params;
	params.LoadData = LoadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.MiniGameDataSaveLoad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Save                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Won                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::MiniGameDataSaveLoad(bool Save, bool* Result, int* Value, bool* Won)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.MiniGameDataSaveLoad");

	ABP_MiniGame_ChawanJin_C_MiniGameDataSaveLoad_Params params;
	params.Save = Save;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (Value != nullptr)
		*Value = params.Value;
	if (Won != nullptr)
		*Won = params.Won;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.MakeSaveData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            SaveCode                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::MakeSaveData(int* SaveCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.MakeSaveData");

	ABP_MiniGame_ChawanJin_C_MakeSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SaveCode != nullptr)
		*SaveCode = params.SaveCode;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CheckResult
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Win                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ItemId                         (Parm, OutParm, ZeroConstructor)
// bool                           QuestProgress                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           FocedFailure                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           AlreadyGameWon                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ItemAcquisitionFlagID          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_CJ_ItemGiveingPerson> ItemGiveingPerson              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::CheckResult(bool* Win, struct FString* ItemId, bool* QuestProgress, bool* FocedFailure, bool* AlreadyGameWon, int* ItemAcquisitionFlagID, TEnumAsByte<EN_CJ_ItemGiveingPerson>* ItemGiveingPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.CheckResult");

	ABP_MiniGame_ChawanJin_C_CheckResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Win != nullptr)
		*Win = params.Win;
	if (ItemId != nullptr)
		*ItemId = params.ItemId;
	if (QuestProgress != nullptr)
		*QuestProgress = params.QuestProgress;
	if (FocedFailure != nullptr)
		*FocedFailure = params.FocedFailure;
	if (AlreadyGameWon != nullptr)
		*AlreadyGameWon = params.AlreadyGameWon;
	if (ItemAcquisitionFlagID != nullptr)
		*ItemAcquisitionFlagID = params.ItemAcquisitionFlagID;
	if (ItemGiveingPerson != nullptr)
		*ItemGiveingPerson = params.ItemGiveingPerson;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.InitWork
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::InitWork()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.InitWork");

	ABP_MiniGame_ChawanJin_C_InitWork_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Make_Ks
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::Make_Ks()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Make_Ks");

	ABP_MiniGame_ChawanJin_C_Make_Ks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Attach_CupMove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AttachPos                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::Attach_CupMove(const struct FVector& AttachPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Attach_CupMove");

	ABP_MiniGame_ChawanJin_C_Attach_CupMove_Params params;
	params.AttachPos = AttachPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Culc_CupMoveWidth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Add_Width                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::Culc_CupMoveWidth(float* Add_Width)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Culc_CupMoveWidth");

	ABP_MiniGame_ChawanJin_C_Culc_CupMoveWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Add_Width != nullptr)
		*Add_Width = params.Add_Width;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Change_TargetToCurrent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::Change_TargetToCurrent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Change_TargetToCurrent");

	ABP_MiniGame_ChawanJin_C_Change_TargetToCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Get_CurrentMovePosID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_CJ_CupPos>      CurrentPosID                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::Get_CurrentMovePosID(TEnumAsByte<EN_CJ_CupPos>* CurrentPosID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Get_CurrentMovePosID");

	ABP_MiniGame_ChawanJin_C_Get_CurrentMovePosID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentPosID != nullptr)
		*CurrentPosID = params.CurrentPosID;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Get_AnimInstace
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UABP_MiniGame_CJ_Ryo_C*  AsABP_Mini_Game_CJ_Ryo         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::Get_AnimInstace(class UABP_MiniGame_CJ_Ryo_C** AsABP_Mini_Game_CJ_Ryo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Get_AnimInstace");

	ABP_MiniGame_ChawanJin_C_Get_AnimInstace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsABP_Mini_Game_CJ_Ryo != nullptr)
		*AsABP_Mini_Game_CJ_Ryo = params.AsABP_Mini_Game_CJ_Ryo;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Get_CupPos
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   CurOrTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CupPos                         (Parm, OutParm, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::Get_CupPos(const struct FName& CurOrTarget, struct FVector* CupPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Get_CupPos");

	ABP_MiniGame_ChawanJin_C_Get_CupPos_Params params;
	params.CurOrTarget = CurOrTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CupPos != nullptr)
		*CupPos = params.CupPos;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.InitAsyncLoad
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::InitAsyncLoad(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.InitAsyncLoad");

	ABP_MiniGame_ChawanJin_C_InitAsyncLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.SpawnInputControlActor
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_MiniGame_ChawanJin_C::SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.SpawnInputControlActor");

	ABP_MiniGame_ChawanJin_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.UserConstructionScript");

	ABP_MiniGame_ChawanJin_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.OnLoaded_63E0AA844D10E66D96C45D962DD44D81
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::OnLoaded_63E0AA844D10E66D96C45D962DD44D81(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.OnLoaded_63E0AA844D10E66D96C45D962DD44D81");

	ABP_MiniGame_ChawanJin_C_OnLoaded_63E0AA844D10E66D96C45D962DD44D81_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.OnLoaded_26E38CB8452D0B1C77E25596A4C7F2F4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::OnLoaded_26E38CB8452D0B1C77E25596A4C7F2F4(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.OnLoaded_26E38CB8452D0B1C77E25596A4C7F2F4");

	ABP_MiniGame_ChawanJin_C_OnLoaded_26E38CB8452D0B1C77E25596A4C7F2F4_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.OnLoaded_4E68A4D94FD541AE2BC143A8853313EC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::OnLoaded_4E68A4D94FD541AE2BC143A8853313EC(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.OnLoaded_4E68A4D94FD541AE2BC143A8853313EC");

	ABP_MiniGame_ChawanJin_C_OnLoaded_4E68A4D94FD541AE2BC143A8853313EC_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.StartMiniGame");

	ABP_MiniGame_ChawanJin_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.EndMiniGame");

	ABP_MiniGame_ChawanJin_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.RestartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.RestartMiniGame");

	ABP_MiniGame_ChawanJin_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.WinMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.WinMiniGame");

	ABP_MiniGame_ChawanJin_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.LoseMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.LoseMiniGame");

	ABP_MiniGame_ChawanJin_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Event_EndMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::Event_EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Event_EndMiniGame");

	ABP_MiniGame_ChawanJin_C_Event_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ReceiveBeginPlay");

	ABP_MiniGame_ChawanJin_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ReceiveTick");

	ABP_MiniGame_ChawanJin_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
// (BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature");

	ABP_MiniGame_ChawanJin_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
// (BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature");

	ABP_MiniGame_ChawanJin_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ResumeMiniGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ResumeKeyword                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MiniGame_ChawanJin_C::ResumeMiniGame(const struct FString& ResumeKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ResumeMiniGame");

	ABP_MiniGame_ChawanJin_C_ResumeMiniGame_Params params;
	params.ResumeKeyword = ResumeKeyword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.OnTalkScriptEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::OnTalkScriptEvent(int EventNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.OnTalkScriptEvent");

	ABP_MiniGame_ChawanJin_C_OnTalkScriptEvent_Params params;
	params.EventNumber = EventNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ReceiveEndPlay");

	ABP_MiniGame_ChawanJin_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Evt_CursolChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::Evt_CursolChange(const struct FName& Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Evt_CursolChange");

	ABP_MiniGame_ChawanJin_C_Evt_CursolChange_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Evt_MoveEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::Evt_MoveEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Evt_MoveEnd");

	ABP_MiniGame_ChawanJin_C_Evt_MoveEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Evt_KsModuleEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::Evt_KsModuleEnd(const struct FName& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Evt_KsModuleEnd");

	ABP_MiniGame_ChawanJin_C_Evt_KsModuleEnd_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.EvtFlagChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::EvtFlagChange(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.EvtFlagChange");

	ABP_MiniGame_ChawanJin_C_EvtFlagChange_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.FlagChg_Refresh
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::FlagChg_Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.FlagChg_Refresh");

	ABP_MiniGame_ChawanJin_C_FlagChg_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Evt_MemoFinish
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::Evt_MemoFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Evt_MemoFinish");

	ABP_MiniGame_ChawanJin_C_Evt_MemoFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Evt_GameCancel
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::Evt_GameCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Evt_GameCancel");

	ABP_MiniGame_ChawanJin_C_Evt_GameCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.DelayedInitialize
// (Event, Public, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::DelayedInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.DelayedInitialize");

	ABP_MiniGame_ChawanJin_C_DelayedInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.WinScene_End
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::WinScene_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.WinScene_End");

	ABP_MiniGame_ChawanJin_C_WinScene_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.WinScene_EndSeq
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::WinScene_EndSeq()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.WinScene_EndSeq");

	ABP_MiniGame_ChawanJin_C_WinScene_EndSeq_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.WinScene_StartSeq
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::WinScene_StartSeq()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.WinScene_StartSeq");

	ABP_MiniGame_ChawanJin_C_WinScene_StartSeq_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.LookItem
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::LookItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.LookItem");

	ABP_MiniGame_ChawanJin_C_LookItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Scene_ItemLook
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::Scene_ItemLook()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.Scene_ItemLook");

	ABP_MiniGame_ChawanJin_C_Scene_ItemLook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.SeqEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_ChawanJin_C::SeqEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.SeqEnd");

	ABP_MiniGame_ChawanJin_C_SeqEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ExecuteUbergraph_BP_MiniGame_ChawanJin
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ChawanJin_C::ExecuteUbergraph_BP_MiniGame_ChawanJin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ChawanJin.BP_MiniGame_ChawanJin_C.ExecuteUbergraph_BP_MiniGame_ChawanJin");

	ABP_MiniGame_ChawanJin_C_ExecuteUbergraph_BP_MiniGame_ChawanJin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

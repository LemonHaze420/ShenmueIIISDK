
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

// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.SetExperienceAdjustRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGame_KungFuFlow_C::SetExperienceAdjustRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.SetExperienceAdjustRate");

	UBPC_MiniGame_KungFuFlow_C_SetExperienceAdjustRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.IsShowingResultScreen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_MiniGame_KungFuFlow_C::IsShowingResultScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.IsShowingResultScreen");

	UBPC_MiniGame_KungFuFlow_C_IsShowingResultScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.ShowResultScreen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGame_KungFuFlow_C::ShowResultScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.ShowResultScreen");

	UBPC_MiniGame_KungFuFlow_C_ShowResultScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.SetEnabledMasterImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGame_KungFuFlow_C::SetEnabledMasterImage(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.SetEnabledMasterImage");

	UBPC_MiniGame_KungFuFlow_C_SetEnabledMasterImage_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.PlayMaxLevelMasteredAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGame_KungFuFlow_C::PlayMaxLevelMasteredAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.PlayMaxLevelMasteredAnim");

	UBPC_MiniGame_KungFuFlow_C_PlayMaxLevelMasteredAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.UpdateUIKungFuLevelInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGame_KungFuFlow_C::UpdateUIKungFuLevelInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.UpdateUIKungFuLevelInfo");

	UBPC_MiniGame_KungFuFlow_C_UpdateUIKungFuLevelInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.GetCurrentLimitLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBPC_MiniGame_KungFuFlow_C::GetCurrentLimitLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.GetCurrentLimitLevel");

	UBPC_MiniGame_KungFuFlow_C_GetCurrentLimitLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.ChangeKungFuNameToNext
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGame_KungFuFlow_C::ChangeKungFuNameToNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.ChangeKungFuNameToNext");

	UBPC_MiniGame_KungFuFlow_C_ChangeKungFuNameToNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.BindEventSkillCountMax
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPC_MiniGame_KungFuFlow_C::BindEventSkillCountMax(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.BindEventSkillCountMax");

	UBPC_MiniGame_KungFuFlow_C_BindEventSkillCountMax_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.SetTimerCurrentRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGame_KungFuFlow_C::SetTimerCurrentRate(float TimeRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.SetTimerCurrentRate");

	UBPC_MiniGame_KungFuFlow_C_SetTimerCurrentRate_Params params;
	params.TimeRate = TimeRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.AddSkillCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AddCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGame_KungFuFlow_C::AddSkillCount(int AddCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.AddSkillCount");

	UBPC_MiniGame_KungFuFlow_C_AddSkillCount_Params params;
	params.AddCount = AddCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.GetKungFuLocalizedName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGame_KungFuType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutString                      (Parm, OutParm, ZeroConstructor)

void UBPC_MiniGame_KungFuFlow_C::GetKungFuLocalizedName(TEnumAsByte<E_MiniGame_KungFuType> Type, int Level, struct FString* OutString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.GetKungFuLocalizedName");

	UBPC_MiniGame_KungFuFlow_C_GetKungFuLocalizedName_Params params;
	params.Type = Type;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutString != nullptr)
		*OutString = params.OutString;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.SetWidgetArrowSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          moveSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MoveTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          IntervalTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGame_KungFuFlow_C::SetWidgetArrowSettings(float moveSpeed, float MoveTime, float IntervalTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.SetWidgetArrowSettings");

	UBPC_MiniGame_KungFuFlow_C_SetWidgetArrowSettings_Params params;
	params.moveSpeed = moveSpeed;
	params.MoveTime = MoveTime;
	params.IntervalTime = IntervalTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.EnabledButtonIconUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGame_KungFuFlow_C::EnabledButtonIconUI(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.EnabledButtonIconUI");

	UBPC_MiniGame_KungFuFlow_C_EnabledButtonIconUI_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.Finalize
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGame_KungFuFlow_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.Finalize");

	UBPC_MiniGame_KungFuFlow_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.UpdateAccumulation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGame_KungFuFlow_C::UpdateAccumulation(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.UpdateAccumulation");

	UBPC_MiniGame_KungFuFlow_C_UpdateAccumulation_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.BindEventTimeUp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPC_MiniGame_KungFuFlow_C::BindEventTimeUp(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.BindEventTimeUp");

	UBPC_MiniGame_KungFuFlow_C_BindEventTimeUp_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUseButtonIcon                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFlashButtonAnimIcon           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_MiniGame_KungFuType> KungFuType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            KungFuLevel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MiniLevel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              CameraTrans                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_MiniGame_KungFuFlow_C::Initialize(bool bUseButtonIcon, bool bFlashButtonAnimIcon, TEnumAsByte<E_MiniGame_KungFuType> KungFuType, int KungFuLevel, int MiniLevel, const struct FTransform& CameraTrans)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.Initialize");

	UBPC_MiniGame_KungFuFlow_C_Initialize_Params params;
	params.bUseButtonIcon = bUseButtonIcon;
	params.bFlashButtonAnimIcon = bFlashButtonAnimIcon;
	params.KungFuType = KungFuType;
	params.KungFuLevel = KungFuLevel;
	params.MiniLevel = MiniLevel;
	params.CameraTrans = CameraTrans;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGame_KungFuFlow_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.ReceiveTick");

	UBPC_MiniGame_KungFuFlow_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.CallSkillCountMax
// (BlueprintCallable, BlueprintEvent)

void UBPC_MiniGame_KungFuFlow_C::CallSkillCountMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.CallSkillCountMax");

	UBPC_MiniGame_KungFuFlow_C_CallSkillCountMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.OnResultScreenClose
// (BlueprintCallable, BlueprintEvent)

void UBPC_MiniGame_KungFuFlow_C::OnResultScreenClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.OnResultScreenClose");

	UBPC_MiniGame_KungFuFlow_C_OnResultScreenClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGame_KungFuFlow_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.ReceiveEndPlay");

	UBPC_MiniGame_KungFuFlow_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.ExecuteUbergraph_BPC_MiniGame_KungFuFlow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGame_KungFuFlow_C::ExecuteUbergraph_BPC_MiniGame_KungFuFlow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.ExecuteUbergraph_BPC_MiniGame_KungFuFlow");

	UBPC_MiniGame_KungFuFlow_C_ExecuteUbergraph_BPC_MiniGame_KungFuFlow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.ResultEndDispacher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGame_KungFuFlow_C::ResultEndDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.ResultEndDispacher__DelegateSignature");

	UBPC_MiniGame_KungFuFlow_C_ResultEndDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.SkillCountMaxDispacher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGame_KungFuFlow_C::SkillCountMaxDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.SkillCountMaxDispacher__DelegateSignature");

	UBPC_MiniGame_KungFuFlow_C_SkillCountMaxDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.TimeUpDispacher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGame_KungFuFlow_C::TimeUpDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C.TimeUpDispacher__DelegateSignature");

	UBPC_MiniGame_KungFuFlow_C_TimeUpDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

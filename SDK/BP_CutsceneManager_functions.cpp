
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

// Function BP_CutsceneManager.BP_CutsceneManager_C.SkipToEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Debug                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneManager_C::SkipToEnd(bool Debug)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.SkipToEnd");

	ABP_CutsceneManager_C_SkipToEnd_Params params;
	params.Debug = Debug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.OnFinishedUnloadCutsceneLevelWithBattleLevelStreaming
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InId                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneManager_C::OnFinishedUnloadCutsceneLevelWithBattleLevelStreaming(const struct FName& InId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.OnFinishedUnloadCutsceneLevelWithBattleLevelStreaming");

	ABP_CutsceneManager_C_OnFinishedUnloadCutsceneLevelWithBattleLevelStreaming_Params params;
	params.InId = InId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.OnFinishedLoadCutsceneLevelWithBattleLevelStreaming
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InId                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneManager_C::OnFinishedLoadCutsceneLevelWithBattleLevelStreaming(const struct FName& InId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.OnFinishedLoadCutsceneLevelWithBattleLevelStreaming");

	ABP_CutsceneManager_C_OnFinishedLoadCutsceneLevelWithBattleLevelStreaming_Params params;
	params.InId = InId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.RequestUnloadCurrentCutsceneLevel
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::RequestUnloadCurrentCutsceneLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.RequestUnloadCurrentCutsceneLevel");

	ABP_CutsceneManager_C_RequestUnloadCurrentCutsceneLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.RequestLoadCurrentCutsceneLevel
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::RequestLoadCurrentCutsceneLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.RequestLoadCurrentCutsceneLevel");

	ABP_CutsceneManager_C_RequestLoadCurrentCutsceneLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugGetIsQTEForceSuccess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::DebugGetIsQTEForceSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DebugGetIsQTEForceSuccess");

	ABP_CutsceneManager_C_DebugGetIsQTEForceSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugSetIsQTEForceSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForceSuccess                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneManager_C::DebugSetIsQTEForceSuccess(bool bForceSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DebugSetIsQTEForceSuccess");

	ABP_CutsceneManager_C_DebugSetIsQTEForceSuccess_Params params;
	params.bForceSuccess = bForceSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateFinishingFinishLoadingScreen
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::UpdateFinishingFinishLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateFinishingFinishLoadingScreen");

	ABP_CutsceneManager_C_UpdateFinishingFinishLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateFinishingWaitLevelStreamingLoadLevel
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::UpdateFinishingWaitLevelStreamingLoadLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateFinishingWaitLevelStreamingLoadLevel");

	ABP_CutsceneManager_C_UpdateFinishingWaitLevelStreamingLoadLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateFinishingUnloadLevel
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::UpdateFinishingUnloadLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateFinishingUnloadLevel");

	ABP_CutsceneManager_C_UpdateFinishingUnloadLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.SetupCurrentCutscenePlayerEndFadeInfo
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::SetupCurrentCutscenePlayerEndFadeInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.SetupCurrentCutscenePlayerEndFadeInfo");

	ABP_CutsceneManager_C_SetupCurrentCutscenePlayerEndFadeInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.ResumeGameTime
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::ResumeGameTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.ResumeGameTime");

	ABP_CutsceneManager_C_ResumeGameTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.StopGameTime
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::StopGameTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.StopGameTime");

	ABP_CutsceneManager_C_StopGameTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateStartingFinishLoadingScreen
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::UpdateStartingFinishLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateStartingFinishLoadingScreen");

	ABP_CutsceneManager_C_UpdateStartingFinishLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateStartingLoadOther
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::UpdateStartingLoadOther()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateStartingLoadOther");

	ABP_CutsceneManager_C_UpdateStartingLoadOther_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateStartingLoadLevel
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::UpdateStartingLoadLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateStartingLoadLevel");

	ABP_CutsceneManager_C_UpdateStartingLoadLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateStartingFadeOut
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::UpdateStartingFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateStartingFadeOut");

	ABP_CutsceneManager_C_UpdateStartingFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.GetRequiredUnloadLevelList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> ABP_CutsceneManager_C::GetRequiredUnloadLevelList(const struct FName& CutsceneId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.GetRequiredUnloadLevelList");

	ABP_CutsceneManager_C_GetRequiredUnloadLevelList_Params params;
	params.CutsceneId = CutsceneId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.CheckLoadLevelTarget
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InLevelName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::CheckLoadLevelTarget(const struct FName& InLevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.CheckLoadLevelTarget");

	ABP_CutsceneManager_C_CheckLoadLevelTarget_Params params;
	params.InLevelName = InLevelName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.GetLastCutsceneCharaReplaceRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ABP_CutsceneManager_C::GetLastCutsceneCharaReplaceRotation(const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.GetLastCutsceneCharaReplaceRotation");

	ABP_CutsceneManager_C_GetLastCutsceneCharaReplaceRotation_Params params;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.GetLastCutsceneCharaReplaceLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_CutsceneManager_C::GetLastCutsceneCharaReplaceLocation(const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.GetLastCutsceneCharaReplaceLocation");

	ABP_CutsceneManager_C_GetLastCutsceneCharaReplaceLocation_Params params;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.GetLastCutsceneCharaReplaceTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ABP_CutsceneManager_C::GetLastCutsceneCharaReplaceTransform(const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.GetLastCutsceneCharaReplaceTransform");

	ABP_CutsceneManager_C_GetLastCutsceneCharaReplaceTransform_Params params;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DoesLastCutsceneCharaReplaceInfoExist
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::DoesLastCutsceneCharaReplaceInfoExist(const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DoesLastCutsceneCharaReplaceInfoExist");

	ABP_CutsceneManager_C_DoesLastCutsceneCharaReplaceInfoExist_Params params;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateLastCutsceneCharaReplaceInfo
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::UpdateLastCutsceneCharaReplaceInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateLastCutsceneCharaReplaceInfo");

	ABP_CutsceneManager_C_UpdateLastCutsceneCharaReplaceInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.HideLoadingScreen
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::HideLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.HideLoadingScreen");

	ABP_CutsceneManager_C_HideLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.ShowLoadingScreen
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::ShowLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.ShowLoadingScreen");

	ABP_CutsceneManager_C_ShowLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.OnFinishedLoadLevelAfterPlayerFinished
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::OnFinishedLoadLevelAfterPlayerFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.OnFinishedLoadLevelAfterPlayerFinished");

	ABP_CutsceneManager_C_OnFinishedLoadLevelAfterPlayerFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.OnCutscenePlayerStartSequence
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::OnCutscenePlayerStartSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.OnCutscenePlayerStartSequence");

	ABP_CutsceneManager_C_OnCutscenePlayerStartSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.OnFinishLoadingScreen
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::OnFinishLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.OnFinishLoadingScreen");

	ABP_CutsceneManager_C_OnFinishLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.SetupFadeData
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::SetupFadeData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.SetupFadeData");

	ABP_CutsceneManager_C_SetupFadeData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.StartCutscene
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseFadeOut                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::StartCutscene(const struct FName& CutsceneId, bool UseFadeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.StartCutscene");

	ABP_CutsceneManager_C_StartCutscene_Params params;
	params.CutsceneId = CutsceneId;
	params.UseFadeOut = UseFadeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.IsUsingForceWeather
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::IsUsingForceWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.IsUsingForceWeather");

	ABP_CutsceneManager_C_IsUsingForceWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.GetRequiredLoadLevelList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> ABP_CutsceneManager_C::GetRequiredLoadLevelList(const struct FName& CutsceneId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.GetRequiredLoadLevelList");

	ABP_CutsceneManager_C_GetRequiredLoadLevelList_Params params;
	params.CutsceneId = CutsceneId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.IsExistLevelData
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::IsExistLevelData(const struct FName& CutsceneId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.IsExistLevelData");

	ABP_CutsceneManager_C_IsExistLevelData_Params params;
	params.CutsceneId = CutsceneId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.ExecuteOnFinishedUnloadCutsceneLevel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::ExecuteOnFinishedUnloadCutsceneLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.ExecuteOnFinishedUnloadCutsceneLevel");

	ABP_CutsceneManager_C_ExecuteOnFinishedUnloadCutsceneLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugGetUseAnotherShenfa
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::DebugGetUseAnotherShenfa()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DebugGetUseAnotherShenfa");

	ABP_CutsceneManager_C_DebugGetUseAnotherShenfa_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugGetAnotherShenfaMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkeletalMesh*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USkeletalMesh* ABP_CutsceneManager_C::DebugGetAnotherShenfaMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DebugGetAnotherShenfaMesh");

	ABP_CutsceneManager_C_DebugGetAnotherShenfaMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugSetAnotherShenfaMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneManager_C::DebugSetAnotherShenfaMesh(class USkeletalMesh* Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DebugSetAnotherShenfaMesh");

	ABP_CutsceneManager_C_DebugSetAnotherShenfaMesh_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugSetupAnotherShenfa
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::DebugSetupAnotherShenfa()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DebugSetupAnotherShenfa");

	ABP_CutsceneManager_C_DebugSetupAnotherShenfa_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugGetIsUseAnotherShenfa
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::DebugGetIsUseAnotherShenfa()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DebugGetIsUseAnotherShenfa");

	ABP_CutsceneManager_C_DebugGetIsUseAnotherShenfa_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugSetIsUseAnotherShenfa
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUse                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneManager_C::DebugSetIsUseAnotherShenfa(bool bUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DebugSetIsUseAnotherShenfa");

	ABP_CutsceneManager_C_DebugSetIsUseAnotherShenfa_Params params;
	params.bUse = bUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.TmpGetSkyForceTimeOfDayValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_CutsceneManager_C::TmpGetSkyForceTimeOfDayValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.TmpGetSkyForceTimeOfDayValue");

	ABP_CutsceneManager_C_TmpGetSkyForceTimeOfDayValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.GetForceTimeOfDayValue
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_CutsceneManager_C::GetForceTimeOfDayValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.GetForceTimeOfDayValue");

	ABP_CutsceneManager_C_GetForceTimeOfDayValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.IsUsingForceTimeOfDay
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::IsUsingForceTimeOfDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.IsUsingForceTimeOfDay");

	ABP_CutsceneManager_C_IsUsingForceTimeOfDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugToggleDispSkeletalMeshInfo
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::DebugToggleDispSkeletalMeshInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DebugToggleDispSkeletalMeshInfo");

	ABP_CutsceneManager_C_DebugToggleDispSkeletalMeshInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugIsFormalMesh
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 MeshName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::DebugIsFormalMesh(const struct FString& MeshName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DebugIsFormalMesh");

	ABP_CutsceneManager_C_DebugIsFormalMesh_Params params;
	params.MeshName = MeshName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugIsFormalSkeleton
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 SkeletonName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::DebugIsFormalSkeleton(const struct FString& SkeletonName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DebugIsFormalSkeleton");

	ABP_CutsceneManager_C_DebugIsFormalSkeleton_Params params;
	params.SkeletonName = SkeletonName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugDispSkeletalMeshInfo
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::DebugDispSkeletalMeshInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DebugDispSkeletalMeshInfo");

	ABP_CutsceneManager_C_DebugDispSkeletalMeshInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DisableReplacePlayer
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::DisableReplacePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DisableReplacePlayer");

	ABP_CutsceneManager_C_DisableReplacePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateLastCutsceneQTEResult
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::UpdateLastCutsceneQTEResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateLastCutsceneQTEResult");

	ABP_CutsceneManager_C_UpdateLastCutsceneQTEResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.getLevelData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3CutsceneLevelData*    LevelData                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneManager_C::getLevelData(const struct FName& CutsceneId, class US3CutsceneLevelData** LevelData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.getLevelData");

	ABP_CutsceneManager_C_getLevelData_Params params;
	params.CutsceneId = CutsceneId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelData != nullptr)
		*LevelData = params.LevelData;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.ExecuteOnFinishedCutscenePlayer
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::ExecuteOnFinishedCutscenePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.ExecuteOnFinishedCutscenePlayer");

	ABP_CutsceneManager_C_ExecuteOnFinishedCutscenePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.ExecuteOnFinishedLoadCutsceneLevel
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::ExecuteOnFinishedLoadCutsceneLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.ExecuteOnFinishedLoadCutsceneLevel");

	ABP_CutsceneManager_C_ExecuteOnFinishedLoadCutsceneLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.GetCurrentCutscenePlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_CutscenePlayer_C*    CutscenePlayer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneManager_C::GetCurrentCutscenePlayer(class ABP_CutscenePlayer_C** CutscenePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.GetCurrentCutscenePlayer");

	ABP_CutsceneManager_C_GetCurrentCutscenePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CutscenePlayer != nullptr)
		*CutscenePlayer = params.CutscenePlayer;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.GetCurrentCutscene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Cutscene                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneManager_C::GetCurrentCutscene(struct FName* Cutscene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.GetCurrentCutscene");

	ABP_CutsceneManager_C_GetCurrentCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cutscene != nullptr)
		*Cutscene = params.Cutscene;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.IsWaitingFinishFadeOut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::IsWaitingFinishFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.IsWaitingFinishFadeOut");

	ABP_CutsceneManager_C_IsWaitingFinishFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.IsLoadCompleted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::IsLoadCompleted(const struct FName& CutsceneId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.IsLoadCompleted");

	ABP_CutsceneManager_C_IsLoadCompleted_Params params;
	params.CutsceneId = CutsceneId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.FindCutscenePlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isFound                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABP_CutscenePlayer_C*    FoundPlayer                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneManager_C::FindCutscenePlayer(const struct FName& CutsceneId, bool* isFound, class ABP_CutscenePlayer_C** FoundPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.FindCutscenePlayer");

	ABP_CutsceneManager_C_FindCutscenePlayer_Params params;
	params.CutsceneId = CutsceneId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isFound != nullptr)
		*isFound = params.isFound;
	if (FoundPlayer != nullptr)
		*FoundPlayer = params.FoundPlayer;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.SetPlayInfos
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_CutscenePlayInfo> newParam                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_CutsceneManager_C::SetPlayInfos(TArray<struct FST_CutscenePlayInfo>* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.SetPlayInfos");

	ABP_CutsceneManager_C_SetPlayInfos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.SetPlayInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           LoadLevels                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           InvisibleLevels                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_CutsceneManager_C::SetPlayInfo(const struct FName& CutsceneId, TArray<struct FName>* LoadLevels, TArray<struct FName>* InvisibleLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.SetPlayInfo");

	ABP_CutsceneManager_C_SetPlayInfo_Params params;
	params.CutsceneId = CutsceneId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LoadLevels != nullptr)
		*LoadLevels = params.LoadLevels;
	if (InvisibleLevels != nullptr)
		*InvisibleLevels = params.InvisibleLevels;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.FindPlayInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isFound                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneManager_C::FindPlayInfo(const struct FName& CutsceneId, bool* isFound, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.FindPlayInfo");

	ABP_CutsceneManager_C_FindPlayInfo_Params params;
	params.CutsceneId = CutsceneId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isFound != nullptr)
		*isFound = params.isFound;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.UserConstructionScript");

	ABP_CutsceneManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.ReceiveTick");

	ABP_CutsceneManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.OnFinishedCutscenePlayer
// (BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::OnFinishedCutscenePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.OnFinishedCutscenePlayer");

	ABP_CutsceneManager_C_OnFinishedCutscenePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.BindOnFinishedCutscenePlayerEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::BindOnFinishedCutscenePlayerEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.BindOnFinishedCutscenePlayerEvent");

	ABP_CutsceneManager_C_BindOnFinishedCutscenePlayerEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.UnbindOnFinishedCutscenePlayerEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_CutsceneManager_C::UnbindOnFinishedCutscenePlayerEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.UnbindOnFinishedCutscenePlayerEvent");

	ABP_CutsceneManager_C_UnbindOnFinishedCutscenePlayerEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CutsceneManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.ReceiveBeginPlay");

	ABP_CutsceneManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.ExecuteUbergraph_BP_CutsceneManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneManager_C::ExecuteUbergraph_BP_CutsceneManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.ExecuteUbergraph_BP_CutsceneManager");

	ABP_CutsceneManager_C_ExecuteUbergraph_BP_CutsceneManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

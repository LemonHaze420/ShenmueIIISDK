
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

// Function BP_CutsceneManager.BP_CutsceneManager_C.SkipToEnd
// (Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, Const)
// Parameters:
// bool                           DEBUG                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneManager_C::STATIC_SkipToEnd(bool DEBUG)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.SkipToEnd");

	ABP_CutsceneManager_C_SkipToEnd_Params params;
	params.DEBUG = DEBUG;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.OnFinishedUnloadCutsceneLevelWithBattleLevelStreaming
// (NetReliable, NetRequest, Exec, MulticastDelegate, Public, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
// (NetReliable, Native, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   InId                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneManager_C::STATIC_OnFinishedLoadCutsceneLevelWithBattleLevelStreaming(const struct FName& InId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.OnFinishedLoadCutsceneLevelWithBattleLevelStreaming");

	ABP_CutsceneManager_C_OnFinishedLoadCutsceneLevelWithBattleLevelStreaming_Params params;
	params.InId = InId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.RequestUnloadCurrentCutsceneLevel
// (Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, Const)

void ABP_CutsceneManager_C::STATIC_RequestUnloadCurrentCutsceneLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.RequestUnloadCurrentCutsceneLevel");

	ABP_CutsceneManager_C_RequestUnloadCurrentCutsceneLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.RequestLoadCurrentCutsceneLevel
// (NetReliable, NetRequest, Event, Static, Delegate, NetServer, NetClient, Const)

void ABP_CutsceneManager_C::STATIC_RequestLoadCurrentCutsceneLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.RequestLoadCurrentCutsceneLevel");

	ABP_CutsceneManager_C_RequestLoadCurrentCutsceneLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugGetIsQTEForceSuccess
// (Net, NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::STATIC_DebugGetIsQTEForceSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DebugGetIsQTEForceSuccess");

	ABP_CutsceneManager_C_DebugGetIsQTEForceSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugSetIsQTEForceSuccess
// (Event, Public, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Exec, Native, Event, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_CutsceneManager_C::UpdateFinishingFinishLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateFinishingFinishLoadingScreen");

	ABP_CutsceneManager_C_UpdateFinishingFinishLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateFinishingWaitLevelStreamingLoadLevel
// (NetReliable, Event, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, Const)

void ABP_CutsceneManager_C::UpdateFinishingWaitLevelStreamingLoadLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateFinishingWaitLevelStreamingLoadLevel");

	ABP_CutsceneManager_C_UpdateFinishingWaitLevelStreamingLoadLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateFinishingUnloadLevel
// (MulticastDelegate, Public, NetServer, NetClient, Const)

void ABP_CutsceneManager_C::UpdateFinishingUnloadLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateFinishingUnloadLevel");

	ABP_CutsceneManager_C_UpdateFinishingUnloadLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.SetupCurrentCutscenePlayerEndFadeInfo
// (Net, NetRequest, Exec, Native, Public, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_CutsceneManager_C::SetupCurrentCutscenePlayerEndFadeInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.SetupCurrentCutscenePlayerEndFadeInfo");

	ABP_CutsceneManager_C_SetupCurrentCutscenePlayerEndFadeInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.ResumeGameTime
// (NetReliable, NetRequest, Event, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, Const)

void ABP_CutsceneManager_C::ResumeGameTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.ResumeGameTime");

	ABP_CutsceneManager_C_ResumeGameTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.StopGameTime
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)

void ABP_CutsceneManager_C::STATIC_StopGameTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.StopGameTime");

	ABP_CutsceneManager_C_StopGameTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateStartingFinishLoadingScreen
// (Net, Native, Event, Static, Delegate, NetServer, NetClient, Const)

void ABP_CutsceneManager_C::STATIC_UpdateStartingFinishLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateStartingFinishLoadingScreen");

	ABP_CutsceneManager_C_UpdateStartingFinishLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateStartingLoadOther
// (Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, Const)

void ABP_CutsceneManager_C::STATIC_UpdateStartingLoadOther()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateStartingLoadOther");

	ABP_CutsceneManager_C_UpdateStartingLoadOther_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateStartingLoadLevel
// (NetRequest, Exec, Native, Event, NetResponse, Static, Public, Delegate, HasOutParms, HasDefaults, Const)

void ABP_CutsceneManager_C::STATIC_UpdateStartingLoadLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateStartingLoadLevel");

	ABP_CutsceneManager_C_UpdateStartingLoadLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateStartingFadeOut
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, Const)

void ABP_CutsceneManager_C::UpdateStartingFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateStartingFadeOut");

	ABP_CutsceneManager_C_UpdateStartingFadeOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.GetRequiredUnloadLevelList
// (Net, Exec, Event, NetMulticast, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
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
// (Exec, Native, Event, Static, MulticastDelegate, Public, Private, Delegate, HasOutParms, NetClient, Const)
// Parameters:
// struct FName                   InLevelName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::STATIC_CheckLoadLevelTarget(const struct FName& InLevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.CheckLoadLevelTarget");

	ABP_CutsceneManager_C_CheckLoadLevelTarget_Params params;
	params.InLevelName = InLevelName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.GetLastCutsceneCharaReplaceRotation
// (Exec, Event, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, Const)
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
// (NetRequest, Event, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, Const)
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
// (NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Private, NetServer, NetClient, Const)
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
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, Private, Protected, Delegate, Const)
// Parameters:
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::STATIC_DoesLastCutsceneCharaReplaceInfoExist(const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DoesLastCutsceneCharaReplaceInfoExist");

	ABP_CutsceneManager_C_DoesLastCutsceneCharaReplaceInfoExist_Params params;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateLastCutsceneCharaReplaceInfo
// (NetRequest, Exec, NetMulticast, Public, Delegate, HasOutParms, HasDefaults, Const)

void ABP_CutsceneManager_C::UpdateLastCutsceneCharaReplaceInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateLastCutsceneCharaReplaceInfo");

	ABP_CutsceneManager_C_UpdateLastCutsceneCharaReplaceInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.HideLoadingScreen
// (Net, NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, NetClient, Const)

void ABP_CutsceneManager_C::STATIC_HideLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.HideLoadingScreen");

	ABP_CutsceneManager_C_HideLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.ShowLoadingScreen
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_CutsceneManager_C::STATIC_ShowLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.ShowLoadingScreen");

	ABP_CutsceneManager_C_ShowLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.OnFinishedLoadLevelAfterPlayerFinished
// (Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, Const)

void ABP_CutsceneManager_C::STATIC_OnFinishedLoadLevelAfterPlayerFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.OnFinishedLoadLevelAfterPlayerFinished");

	ABP_CutsceneManager_C_OnFinishedLoadLevelAfterPlayerFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.OnCutscenePlayerStartSequence
// (NetReliable, MulticastDelegate, Public, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_CutsceneManager_C::OnCutscenePlayerStartSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.OnCutscenePlayerStartSequence");

	ABP_CutsceneManager_C_OnCutscenePlayerStartSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.OnFinishLoadingScreen
// (NetRequest, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, Const)

void ABP_CutsceneManager_C::STATIC_OnFinishLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.OnFinishLoadingScreen");

	ABP_CutsceneManager_C_OnFinishLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.SetupFadeData
// (Net, NetRequest, Exec, Native, Event, NetResponse, Private, Protected, Delegate, NetClient, Const)

void ABP_CutsceneManager_C::SetupFadeData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.SetupFadeData");

	ABP_CutsceneManager_C_SetupFadeData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.StartCutscene
// (NetReliable, NetRequest, Exec, Event, MulticastDelegate, Public, Private, Delegate, DLLImport, Const)
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
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetClient, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::IsUsingForceWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.IsUsingForceWeather");

	ABP_CutsceneManager_C_IsUsingForceWeather_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.GetRequiredLoadLevelList
// (NetRequest, Native, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> ABP_CutsceneManager_C::GetRequiredLoadLevelList(const struct FName& CutsceneId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.GetRequiredLoadLevelList");

	ABP_CutsceneManager_C_GetRequiredLoadLevelList_Params params;
	params.CutsceneId = CutsceneId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.IsExistLevelData
// (NetRequest, Native, MulticastDelegate, Public, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::IsExistLevelData(const struct FName& CutsceneId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.IsExistLevelData");

	ABP_CutsceneManager_C_IsExistLevelData_Params params;
	params.CutsceneId = CutsceneId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.ExecuteOnFinishedUnloadCutsceneLevel
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, NetServer, NetClient)

void ABP_CutsceneManager_C::STATIC_ExecuteOnFinishedUnloadCutsceneLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.ExecuteOnFinishedUnloadCutsceneLevel");

	ABP_CutsceneManager_C_ExecuteOnFinishedUnloadCutsceneLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugGetUseAnotherShenfa
// (Net, NetRequest, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::STATIC_DebugGetUseAnotherShenfa()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DebugGetUseAnotherShenfa");

	ABP_CutsceneManager_C_DebugGetUseAnotherShenfa_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugGetAnotherShenfaMesh
// (NetRequest, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// class USkeletalMesh*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USkeletalMesh* ABP_CutsceneManager_C::STATIC_DebugGetAnotherShenfaMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DebugGetAnotherShenfaMesh");

	ABP_CutsceneManager_C_DebugGetAnotherShenfaMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugSetAnotherShenfaMesh
// (Net, NetReliable, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// class USkeletalMesh*           Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneManager_C::STATIC_DebugSetAnotherShenfaMesh(class USkeletalMesh* Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DebugSetAnotherShenfaMesh");

	ABP_CutsceneManager_C_DebugSetAnotherShenfaMesh_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugSetupAnotherShenfa
// (NetReliable, NetRequest, NetResponse, Static, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_CutsceneManager_C::STATIC_DebugSetupAnotherShenfa()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DebugSetupAnotherShenfa");

	ABP_CutsceneManager_C_DebugSetupAnotherShenfa_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugGetIsUseAnotherShenfa
// (NetReliable, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::STATIC_DebugGetIsUseAnotherShenfa()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DebugGetIsUseAnotherShenfa");

	ABP_CutsceneManager_C_DebugGetIsUseAnotherShenfa_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugSetIsUseAnotherShenfa
// (Net, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// bool                           bUse                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneManager_C::STATIC_DebugSetIsUseAnotherShenfa(bool bUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DebugSetIsUseAnotherShenfa");

	ABP_CutsceneManager_C_DebugSetIsUseAnotherShenfa_Params params;
	params.bUse = bUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.TmpGetSkyForceTimeOfDayValue
// (NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_CutsceneManager_C::STATIC_TmpGetSkyForceTimeOfDayValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.TmpGetSkyForceTimeOfDayValue");

	ABP_CutsceneManager_C_TmpGetSkyForceTimeOfDayValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.GetForceTimeOfDayValue
// (Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_CutsceneManager_C::STATIC_GetForceTimeOfDayValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.GetForceTimeOfDayValue");

	ABP_CutsceneManager_C_GetForceTimeOfDayValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.IsUsingForceTimeOfDay
// (Net, NetReliable, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetClient, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::STATIC_IsUsingForceTimeOfDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.IsUsingForceTimeOfDay");

	ABP_CutsceneManager_C_IsUsingForceTimeOfDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugToggleDispSkeletalMeshInfo
// (Net, NetRequest, Exec, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_CutsceneManager_C::STATIC_DebugToggleDispSkeletalMeshInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DebugToggleDispSkeletalMeshInfo");

	ABP_CutsceneManager_C_DebugToggleDispSkeletalMeshInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugIsFormalMesh
// (NetRequest, Exec, NetResponse, Static, Public, Private, NetServer, NetClient, Const)
// Parameters:
// struct FString                 MeshName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::STATIC_DebugIsFormalMesh(const struct FString& MeshName)
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
// (Exec, Native, Event, NetResponse, Static, NetMulticast, NetServer, NetClient)
// Parameters:
// struct FString                 SkeletonName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::STATIC_DebugIsFormalSkeleton(const struct FString& SkeletonName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DebugIsFormalSkeleton");

	ABP_CutsceneManager_C_DebugIsFormalSkeleton_Params params;
	params.SkeletonName = SkeletonName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugDispSkeletalMeshInfo
// (NetReliable, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, NetClient, Const)

void ABP_CutsceneManager_C::STATIC_DebugDispSkeletalMeshInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DebugDispSkeletalMeshInfo");

	ABP_CutsceneManager_C_DebugDispSkeletalMeshInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.DisableReplacePlayer
// (Net, NetReliable, Event, Static, MulticastDelegate, Public, Private, NetServer, HasOutParms, NetClient, Const)

void ABP_CutsceneManager_C::STATIC_DisableReplacePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.DisableReplacePlayer");

	ABP_CutsceneManager_C_DisableReplacePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateLastCutsceneQTEResult
// (NetReliable, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Const)

void ABP_CutsceneManager_C::STATIC_UpdateLastCutsceneQTEResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateLastCutsceneQTEResult");

	ABP_CutsceneManager_C_UpdateLastCutsceneQTEResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.getLevelData
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3CutsceneLevelData*    LevelData                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneManager_C::STATIC_getLevelData(const struct FName& CutsceneId, class US3CutsceneLevelData** LevelData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.getLevelData");

	ABP_CutsceneManager_C_getLevelData_Params params;
	params.CutsceneId = CutsceneId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelData != nullptr)
		*LevelData = params.LevelData;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.ExecuteOnFinishedCutscenePlayer
// (Exec, MulticastDelegate, Public, NetServer, NetClient, Const)

void ABP_CutsceneManager_C::ExecuteOnFinishedCutscenePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.ExecuteOnFinishedCutscenePlayer");

	ABP_CutsceneManager_C_ExecuteOnFinishedCutscenePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.ExecuteOnFinishedLoadCutsceneLevel
// (NetReliable, Exec, Event, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, Const)

void ABP_CutsceneManager_C::ExecuteOnFinishedLoadCutsceneLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.ExecuteOnFinishedLoadCutsceneLevel");

	ABP_CutsceneManager_C_ExecuteOnFinishedLoadCutsceneLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.GetCurrentCutscenePlayer
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, Private, Protected, Delegate, Const)
// Parameters:
// class ABP_CutscenePlayer_C*    CutscenePlayer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneManager_C::STATIC_GetCurrentCutscenePlayer(class ABP_CutscenePlayer_C** CutscenePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.GetCurrentCutscenePlayer");

	ABP_CutsceneManager_C_GetCurrentCutscenePlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CutscenePlayer != nullptr)
		*CutscenePlayer = params.CutscenePlayer;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.GetCurrentCutscene
// (Net, Exec, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// struct FName                   Cutscene                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneManager_C::STATIC_GetCurrentCutscene(struct FName* Cutscene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.GetCurrentCutscene");

	ABP_CutsceneManager_C_GetCurrentCutscene_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cutscene != nullptr)
		*Cutscene = params.Cutscene;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.IsWaitingFinishFadeOut
// (Net, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::STATIC_IsWaitingFinishFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.IsWaitingFinishFadeOut");

	ABP_CutsceneManager_C_IsWaitingFinishFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.IsLoadCompleted
// (Net, NetReliable, Exec, Native, Event, Static, MulticastDelegate, Public, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// struct FName                   CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneManager_C::STATIC_IsLoadCompleted(const struct FName& CutsceneId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.IsLoadCompleted");

	ABP_CutsceneManager_C_IsLoadCompleted_Params params;
	params.CutsceneId = CutsceneId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.FindCutscenePlayer
// (NetRequest, Exec, Native, Event, Static, Delegate, NetServer, NetClient, Const)
// Parameters:
// struct FName                   CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFound                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABP_CutscenePlayer_C*    FoundPlayer                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneManager_C::STATIC_FindCutscenePlayer(const struct FName& CutsceneId, bool* IsFound, class ABP_CutscenePlayer_C** FoundPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.FindCutscenePlayer");

	ABP_CutsceneManager_C_FindCutscenePlayer_Params params;
	params.CutsceneId = CutsceneId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFound != nullptr)
		*IsFound = params.IsFound;
	if (FoundPlayer != nullptr)
		*FoundPlayer = params.FoundPlayer;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.SetPlayInfos
// (NetRequest, Event, MulticastDelegate, Public, Delegate, NetServer, NetClient, Const)
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
// (Native, MulticastDelegate, Public, NetServer, NetClient, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LoadLevels != nullptr)
		*LoadLevels = params.LoadLevels;
	if (InvisibleLevels != nullptr)
		*InvisibleLevels = params.InvisibleLevels;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.FindPlayInfo
// (NetReliable, NetRequest, Native, NetResponse, Static, Public, Private, NetServer, NetClient, Const)
// Parameters:
// struct FName                   CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFound                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneManager_C::STATIC_FindPlayInfo(const struct FName& CutsceneId, bool* IsFound, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.FindPlayInfo");

	ABP_CutsceneManager_C_FindPlayInfo_Params params;
	params.CutsceneId = CutsceneId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFound != nullptr)
		*IsFound = params.IsFound;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.UserConstructionScript
// (Net, Native, NetResponse, Static, NetMulticast, Public, Private, Protected, NetClient, Const)

void ABP_CutsceneManager_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.UserConstructionScript");

	ABP_CutsceneManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.ReceiveTick
// (Net, NetReliable, Exec, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.ReceiveTick");

	ABP_CutsceneManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.OnFinishedCutscenePlayer
// (Exec, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_CutsceneManager_C::STATIC_OnFinishedCutscenePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.OnFinishedCutscenePlayer");

	ABP_CutsceneManager_C_OnFinishedCutscenePlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.BindOnFinishedCutscenePlayerEvent
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_CutsceneManager_C::STATIC_BindOnFinishedCutscenePlayerEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.BindOnFinishedCutscenePlayerEvent");

	ABP_CutsceneManager_C_BindOnFinishedCutscenePlayerEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.UnbindOnFinishedCutscenePlayerEvent
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_CutsceneManager_C::STATIC_UnbindOnFinishedCutscenePlayerEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.UnbindOnFinishedCutscenePlayerEvent");

	ABP_CutsceneManager_C_UnbindOnFinishedCutscenePlayerEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_CutsceneManager_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneManager.BP_CutsceneManager_C.ReceiveBeginPlay");

	ABP_CutsceneManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneManager.BP_CutsceneManager_C.ExecuteUbergraph_BP_CutsceneManager
// (Net, Static, Protected, NetServer, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneManager_C::STATIC_ExecuteUbergraph_BP_CutsceneManager(int EntryPoint)
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

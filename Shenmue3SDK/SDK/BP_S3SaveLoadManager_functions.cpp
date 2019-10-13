
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

// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.JudgeLoadingType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EventStep                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3LoadingType                 Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3SaveLoadManager_C::JudgeLoadingType(int EventStep, ES3LoadingType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.JudgeLoadingType");

	UBP_S3SaveLoadManager_C_JudgeLoadingType_Params params;
	params.EventStep = EventStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.ExecRetrySave
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_S3SaveLoadManager_C::ExecRetrySave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.ExecRetrySave");

	UBP_S3SaveLoadManager_C_ExecRetrySave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.ExecLoadRetrySaveData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class US3SaveGame*             SaveData                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3SaveLoadManager_C::ExecLoadRetrySaveData(bool* Success, class US3SaveGame** SaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.ExecLoadRetrySaveData");

	UBP_S3SaveLoadManager_C_ExecLoadRetrySaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (SaveData != nullptr)
		*SaveData = params.SaveData;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.OpenIgnoreDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3SaveLoadManager_C::OpenIgnoreDialog(const struct FName& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.OpenIgnoreDialog");

	UBP_S3SaveLoadManager_C_OpenIgnoreDialog_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.OpenSaveLoadTestWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3SaveLoadManager_C::OpenSaveLoadTestWidget(const struct FName& Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.OpenSaveLoadTestWidget");

	UBP_S3SaveLoadManager_C_OpenSaveLoadTestWidget_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.ResetSaveData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_S3SaveLoadManager_C::ResetSaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.ResetSaveData");

	UBP_S3SaveLoadManager_C_ResetSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.OpenLevel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3Where*                      LocationId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           EventStep                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_S3SaveLoadManager_C::OpenLevel(ES3Where* LocationId, int* EventStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.OpenLevel");

	UBP_S3SaveLoadManager_C_OpenLevel_Params params;
	params.LocationId = LocationId;
	params.EventStep = EventStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.ExecLoadAutoSaveData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class US3SaveGame*             SaveData                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_S3SaveLoadManager_C::ExecLoadAutoSaveData(bool* Success, class US3SaveGame** SaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.ExecLoadAutoSaveData");

	UBP_S3SaveLoadManager_C_ExecLoadAutoSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (SaveData != nullptr)
		*SaveData = params.SaveData;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.OpenLoadWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_S3SaveLoadManager_C::OpenLoadWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.OpenLoadWidget");

	UBP_S3SaveLoadManager_C_OpenLoadWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.OpenSaveWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_S3SaveLoadManager_C::OpenSaveWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.OpenSaveWidget");

	UBP_S3SaveLoadManager_C_OpenSaveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.UserConstructionScript
// (BlueprintCallable, BlueprintEvent)

void UBP_S3SaveLoadManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.UserConstructionScript");

	UBP_S3SaveLoadManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UBP_S3SaveLoadManager_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.CustomEvent_1");

	UBP_S3SaveLoadManager_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UBP_S3SaveLoadManager_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.CustomEvent_2");

	UBP_S3SaveLoadManager_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)

void UBP_S3SaveLoadManager_C::CustomEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.CustomEvent_3");

	UBP_S3SaveLoadManager_C_CustomEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.OpenLoadWidgetImpl
// (BlueprintCallable, BlueprintEvent)

void UBP_S3SaveLoadManager_C::OpenLoadWidgetImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.OpenLoadWidgetImpl");

	UBP_S3SaveLoadManager_C_OpenLoadWidgetImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.OpenSaveWidgetImpl
// (BlueprintCallable, BlueprintEvent)

void UBP_S3SaveLoadManager_C::OpenSaveWidgetImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.OpenSaveWidgetImpl");

	UBP_S3SaveLoadManager_C_OpenSaveWidgetImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)

void UBP_S3SaveLoadManager_C::CustomEvent_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.CustomEvent_4");

	UBP_S3SaveLoadManager_C_CustomEvent_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.BeginLoadData
// (Event, Public, BlueprintEvent)
// Parameters:
// class US3SaveGame**            SaveGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRetryData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3SaveLoadManager_C::BeginLoadData(class US3SaveGame** SaveGame, bool* bRetryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.BeginLoadData");

	UBP_S3SaveLoadManager_C_BeginLoadData_Params params;
	params.SaveGame = SaveGame;
	params.bRetryData = bRetryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.CloseIgnoreDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3SaveLoadManager_C::CloseIgnoreDialog(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.CloseIgnoreDialog");

	UBP_S3SaveLoadManager_C_CloseIgnoreDialog_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.ConfirmClearData
// (BlueprintCallable, BlueprintEvent)

void UBP_S3SaveLoadManager_C::ConfirmClearData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.ConfirmClearData");

	UBP_S3SaveLoadManager_C_ConfirmClearData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.SelectLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3SaveLoadManager_C::SelectLevel(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.SelectLevel");

	UBP_S3SaveLoadManager_C_SelectLevel_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.SelectChobu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3SaveLoadManager_C::SelectChobu(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.SelectChobu");

	UBP_S3SaveLoadManager_C_SelectChobu_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.SelectHakkason
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3SaveLoadManager_C::SelectHakkason(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.SelectHakkason");

	UBP_S3SaveLoadManager_C_SelectHakkason_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.StartClearData
// (BlueprintCallable, BlueprintEvent)

void UBP_S3SaveLoadManager_C::StartClearData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.StartClearData");

	UBP_S3SaveLoadManager_C_StartClearData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.WidgetClosed
// (BlueprintCallable, BlueprintEvent)

void UBP_S3SaveLoadManager_C::WidgetClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.WidgetClosed");

	UBP_S3SaveLoadManager_C_WidgetClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.OpenSaveLoadWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_S3SaveLoadManager_C::OpenSaveLoadWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.OpenSaveLoadWidget");

	UBP_S3SaveLoadManager_C_OpenSaveLoadWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.ShowNotInstallDLCDialog
// (Event, Public, BlueprintEvent)

void UBP_S3SaveLoadManager_C::ShowNotInstallDLCDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.ShowNotInstallDLCDialog");

	UBP_S3SaveLoadManager_C_ShowNotInstallDLCDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.CloseNotInstallDLC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3SaveLoadManager_C::CloseNotInstallDLC(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.CloseNotInstallDLC");

	UBP_S3SaveLoadManager_C_CloseNotInstallDLC_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.ExecuteUbergraph_BP_S3SaveLoadManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_S3SaveLoadManager_C::ExecuteUbergraph_BP_S3SaveLoadManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3SaveLoadManager.BP_S3SaveLoadManager_C.ExecuteUbergraph_BP_S3SaveLoadManager");

	UBP_S3SaveLoadManager_C_ExecuteUbergraph_BP_S3SaveLoadManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

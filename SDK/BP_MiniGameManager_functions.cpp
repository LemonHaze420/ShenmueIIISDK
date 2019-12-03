
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

// Function BP_MiniGameManager.BP_MiniGameManager_C.AddFortuneCount
// (Exec, Native, Event, NetResponse, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_MiniGameManager_C::AddFortuneCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.AddFortuneCount");

	ABP_MiniGameManager_C_AddFortuneCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.DisableCheckFishingSuspendTime
// (Native, Event, Static, NetMulticast, Public, NetServer, DLLImport, Const)

void ABP_MiniGameManager_C::STATIC_DisableCheckFishingSuspendTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.DisableCheckFishingSuspendTime");

	ABP_MiniGameManager_C_DisableCheckFishingSuspendTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.SetEnabledPlayFishing
// (NetReliable, Native, Event, Static, NetMulticast, MulticastDelegate, NetServer, DLLImport, Const)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_SetEnabledPlayFishing(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.SetEnabledPlayFishing");

	ABP_MiniGameManager_C_SetEnabledPlayFishing_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetEnabledPlayFishing
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// bool                           bEnabled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_GetEnabledPlayFishing(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetEnabledPlayFishing");

	ABP_MiniGameManager_C_GetEnabledPlayFishing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnabled != nullptr)
		*bEnabled = params.bEnabled;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.DestroyChooseActor
// (Net, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Private, HasDefaults, NetClient, BlueprintPure)

void ABP_MiniGameManager_C::DestroyChooseActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.DestroyChooseActor");

	ABP_MiniGameManager_C_DestroyChooseActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.InitializeMiniGameProgress
// (NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGameManager_C::STATIC_InitializeMiniGameProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.InitializeMiniGameProgress");

	ABP_MiniGameManager_C_InitializeMiniGameProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.SetCurrentMiniGame
// (Net, NetReliable, NetRequest, Native, Event, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, Const)
// Parameters:
// class ABP_MiniGameBase_C*      MiniGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::SetCurrentMiniGame(class ABP_MiniGameBase_C* MiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.SetCurrentMiniGame");

	ABP_MiniGameManager_C_SetCurrentMiniGame_Params params;
	params.MiniGame = MiniGame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetForkMovePlaceFlag
// (Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_GetForkMovePlaceFlag(int* OutValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetForkMovePlaceFlag");

	ABP_MiniGameManager_C_GetForkMovePlaceFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.ToggleForkCCBMovePlace
// (Exec, Native, Event, NetResponse, MulticastDelegate, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameManager_C::ToggleForkCCBMovePlace()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.ToggleForkCCBMovePlace");

	ABP_MiniGameManager_C_ToggleForkCCBMovePlace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetForkNextProgress
// (Exec, Native, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<E_MiniGame_ForkJobResult> Job                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::GetForkNextProgress(TEnumAsByte<E_MiniGame_ForkJobResult> Job, int* OutValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetForkNextProgress");

	ABP_MiniGameManager_C_GetForkNextProgress_Params params;
	params.Job = Job;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetDailyAppearCCBNum
// (NetReliable, Event, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::GetDailyAppearCCBNum(int* OutValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetDailyAppearCCBNum");

	ABP_MiniGameManager_C_GetDailyAppearCCBNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.AddDailyAppearCCBNum
// (NetReliable, NetRequest, Static, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            AddNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_AddDailyAppearCCBNum(int AddNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.AddDailyAppearCCBNum");

	ABP_MiniGameManager_C_AddDailyAppearCCBNum_Params params;
	params.AddNum = AddNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetCCBGameData
// (NetRequest, Exec, Native, NetResponse, Static, Private, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGame_ForkJobResult> Job                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Data                           (Parm, OutParm, ZeroConstructor)

void ABP_MiniGameManager_C::STATIC_GetCCBGameData(TEnumAsByte<E_MiniGame_ForkJobResult> Job, TArray<int>* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetCCBGameData");

	ABP_MiniGameManager_C_GetCCBGameData_Params params;
	params.Job = Job;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetAvailableCCBGameDataNum
// (NetRequest, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGame_ForkJobResult> Job                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            IgnoreNum                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAvailable                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::GetAvailableCCBGameDataNum(TEnumAsByte<E_MiniGame_ForkJobResult> Job, int IgnoreNum, bool* IsAvailable, int* Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetAvailableCCBGameDataNum");

	ABP_MiniGameManager_C_GetAvailableCCBGameDataNum_Params params;
	params.Job = Job;
	params.IgnoreNum = IgnoreNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAvailable != nullptr)
		*IsAvailable = params.IsAvailable;
	if (Num != nullptr)
		*Num = params.Num;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetCCBGameDataNum
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGameCCBattlePlace> Place                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CabinetNumber                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DataNum                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::GetCCBGameDataNum(TEnumAsByte<E_MiniGameCCBattlePlace> Place, int CabinetNumber, int* DataNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetCCBGameDataNum");

	ABP_MiniGameManager_C_GetCCBGameDataNum_Params params;
	params.Place = Place;
	params.CabinetNumber = CabinetNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataNum != nullptr)
		*DataNum = params.DataNum;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.SetCCBGameDataNum
// (Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<E_MiniGame_ForkJobResult> Job                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GameDataNum                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    DataList                       (Parm, OutParm, ZeroConstructor)

void ABP_MiniGameManager_C::STATIC_SetCCBGameDataNum(TEnumAsByte<E_MiniGame_ForkJobResult> Job, int GameDataNum, int SetIndex, TArray<int>* DataList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.SetCCBGameDataNum");

	ABP_MiniGameManager_C_SetCCBGameDataNum_Params params;
	params.Job = Job;
	params.GameDataNum = GameDataNum;
	params.SetIndex = SetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataList != nullptr)
		*DataList = params.DataList;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetWinCount
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient)
// Parameters:
// ES3MiniGameCategory            Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMiniGamePurpose>  Purpose                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::GetWinCount(ES3MiniGameCategory Category, TEnumAsByte<EMiniGamePurpose> Purpose, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetWinCount");

	ABP_MiniGameManager_C_GetWinCount_Params params;
	params.Category = Category;
	params.Purpose = Purpose;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetSpecialPlayerMesh
// (Net, NetReliable, NetRequest, Exec, Native, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// class USkeletalMesh*           Mesh                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::GetSpecialPlayerMesh(class USkeletalMesh** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetSpecialPlayerMesh");

	ABP_MiniGameManager_C_GetSpecialPlayerMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.SetSpecialPlayerMesh
// (Native, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMesh*           SpecialPlayerMesh              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           Mesh                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::SetSpecialPlayerMesh(class USkeletalMesh* SpecialPlayerMesh, class USkeletalMesh** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.SetSpecialPlayerMesh");

	ABP_MiniGameManager_C_SetSpecialPlayerMesh_Params params;
	params.SpecialPlayerMesh = SpecialPlayerMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.StopBGM
// (NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, NetServer, DLLImport, Const)

void ABP_MiniGameManager_C::STATIC_StopBGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.StopBGM");

	ABP_MiniGameManager_C_StopBGM_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetCCBTargetNumList
// (Static, MulticastDelegate, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<E_MiniGameCCBattlePlace> Place                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    OutValues                      (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGameManager_C::STATIC_GetCCBTargetNumList(TEnumAsByte<E_MiniGameCCBattlePlace> Place, TArray<int>* OutValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetCCBTargetNumList");

	ABP_MiniGameManager_C_GetCCBTargetNumList_Params params;
	params.Place = Place;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutValues != nullptr)
		*OutValues = params.OutValues;

	return params.ReturnValue;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetDayCount
// (Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_GetDayCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetDayCount");

	ABP_MiniGameManager_C_GetDayCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateDayCount
// (NetReliable, Native, NetMulticast, Private, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Change                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::UpdateDayCount(bool* Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateDayCount");

	ABP_MiniGameManager_C_UpdateDayCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Change != nullptr)
		*Change = params.Change;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateCCBattleResult
// (NetReliable, NetRequest, Exec, NetResponse, Static, Protected, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGameCCBattlePlace> CheckPlace                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ClearNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Clear                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_UpdateCCBattleResult(TEnumAsByte<E_MiniGameCCBattlePlace> CheckPlace, int ClearNumber, bool* Clear)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateCCBattleResult");

	ABP_MiniGameManager_C_UpdateCCBattleResult_Params params;
	params.CheckPlace = CheckPlace;
	params.ClearNumber = ClearNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Clear != nullptr)
		*Clear = params.Clear;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateCCBattleSettings
// (NetReliable, NetRequest, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGameCCBattlePlace> Place                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::UpdateCCBattleSettings(TEnumAsByte<E_MiniGameCCBattlePlace> Place)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateCCBattleSettings");

	ABP_MiniGameManager_C_UpdateCCBattleSettings_Params params;
	params.Place = Place;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.AddMiniGameProgress
// (Net, NetReliable, Exec, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient)
// Parameters:
// struct FName                   Key                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            AddValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3MiniGameCategory            Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_AddMiniGameProgress(const struct FName& Key, int AddValue, ES3MiniGameCategory Category, int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.AddMiniGameProgress");

	ABP_MiniGameManager_C_AddMiniGameProgress_Params params;
	params.Key = Key;
	params.AddValue = AddValue;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.AddForkNextProgress
// (NetRequest, Native, Event, NetResponse, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGame_ForkJobResult> JobType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AddValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::AddForkNextProgress(TEnumAsByte<E_MiniGame_ForkJobResult> JobType, int AddValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.AddForkNextProgress");

	ABP_MiniGameManager_C_AddForkNextProgress_Params params;
	params.JobType = JobType;
	params.AddValue = AddValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateForkLiftResult
// (Net, NetRequest, Exec, Native, Static, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintPure)

void ABP_MiniGameManager_C::STATIC_UpdateForkLiftResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateForkLiftResult");

	ABP_MiniGameManager_C_UpdateForkLiftResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateWinRate
// (NetRequest, Event, NetResponse, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)

void ABP_MiniGameManager_C::UpdateWinRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateWinRate");

	ABP_MiniGameManager_C_UpdateWinRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameAllWinRate
// (Event, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGameGambleType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Fortune                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Min                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Current                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::GetMiniGameAllWinRate(TEnumAsByte<E_MiniGameGambleType> Type, bool Fortune, float* Min, float* Max, float* Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameAllWinRate");

	ABP_MiniGameManager_C_GetMiniGameAllWinRate_Params params;
	params.Type = Type;
	params.Fortune = Fortune;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Min != nullptr)
		*Min = params.Min;
	if (Max != nullptr)
		*Max = params.Max;
	if (Current != nullptr)
		*Current = params.Current;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetGambleKifudaAccumulate
// (Net, NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_MiniGameManager_C::STATIC_GetGambleKifudaAccumulate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetGambleKifudaAccumulate");

	ABP_MiniGameManager_C_GetGambleKifudaAccumulate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.AddGambleKifudaAccumulate
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int                            AddValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::AddGambleKifudaAccumulate(int AddValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.AddGambleKifudaAccumulate");

	ABP_MiniGameManager_C_AddGambleKifudaAccumulate_Params params;
	params.AddValue = AddValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameWinRate
// (Static, NetMulticast, Public, Private, Protected, Delegate)
// Parameters:
// TEnumAsByte<E_MiniGameGambleType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Fortune                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_MiniGameGambleWinRate> RateType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_GetMiniGameWinRate(TEnumAsByte<E_MiniGameGambleType> Type, bool Fortune, TEnumAsByte<E_MiniGameGambleWinRate> RateType, float* Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameWinRate");

	ABP_MiniGameManager_C_GetMiniGameWinRate_Params params;
	params.Type = Type;
	params.Fortune = Fortune;
	params.RateType = RateType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rate != nullptr)
		*Rate = params.Rate;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.SetMiniGameWinRate
// (Net, NetRequest, Event, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGameGambleType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Fotune                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_MiniGameGambleWinRate> RateType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::SetMiniGameWinRate(TEnumAsByte<E_MiniGameGambleType> Type, float Rate, bool Fotune, TEnumAsByte<E_MiniGameGambleWinRate> RateType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.SetMiniGameWinRate");

	ABP_MiniGameManager_C_SetMiniGameWinRate_Params params;
	params.Type = Type;
	params.Rate = Rate;
	params.Fotune = Fotune;
	params.RateType = RateType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateMiniGameGlobalFlag
// (Native, Event, Static, Private, Protected, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameManager_C::STATIC_UpdateMiniGameGlobalFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateMiniGameGlobalFlag");

	ABP_MiniGameManager_C_UpdateMiniGameGlobalFlag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateFortuneProgress
// (NetRequest, NetResponse, Static, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           IsNumberFortune                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnabledFortune               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            FortuneNum                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_UpdateFortuneProgress(bool IsNumberFortune, bool* IsEnabledFortune, int* FortuneNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateFortuneProgress");

	ABP_MiniGameManager_C_UpdateFortuneProgress_Params params;
	params.IsNumberFortune = IsNumberFortune;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnabledFortune != nullptr)
		*IsEnabledFortune = params.IsEnabledFortune;
	if (FortuneNum != nullptr)
		*FortuneNum = params.FortuneNum;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.IsEnabledFortune
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, Private, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsNumberFortune                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnabled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            FlagIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            FortuneNum                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_IsEnabledFortune(bool IsNumberFortune, bool* IsEnabled, int* FlagIndex, int* FortuneNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.IsEnabledFortune");

	ABP_MiniGameManager_C_IsEnabledFortune_Params params;
	params.IsNumberFortune = IsNumberFortune;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;
	if (FlagIndex != nullptr)
		*FlagIndex = params.FlagIndex;
	if (FortuneNum != nullptr)
		*FortuneNum = params.FortuneNum;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.PlayBGM
// (NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   BGMID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Play                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_PlayBGM(const struct FName& BGMID, bool* Play)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.PlayBGM");

	ABP_MiniGameManager_C_PlayBGM_Params params;
	params.BGMID = BGMID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Play != nullptr)
		*Play = params.Play;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.StartFishingShopResult
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, NetServer, DLLImport, Const)
// Parameters:
// TArray<struct FST_Fishing_ResultFishData> result_fish_array              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MiniGameManager_C::STATIC_StartFishingShopResult(TArray<struct FST_Fishing_ResultFishData>* result_fish_array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.StartFishingShopResult");

	ABP_MiniGameManager_C_StartFishingShopResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (result_fish_array != nullptr)
		*result_fish_array = params.result_fish_array;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.InitializeFishing
// (NetReliable, NetRequest, Exec, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::InitializeFishing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.InitializeFishing");

	ABP_MiniGameManager_C_InitializeFishing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.FinalizeFishing
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, NetServer, DLLImport, Const)

void ABP_MiniGameManager_C::STATIC_FinalizeFishing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.FinalizeFishing");

	ABP_MiniGameManager_C_FinalizeFishing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.CreateFishingManager
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, NetClient, DLLImport)
// Parameters:
// TArray<int>                    RentalItemID                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MiniGameManager_C::CreateFishingManager(TArray<int>* RentalItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.CreateFishingManager");

	ABP_MiniGameManager_C_CreateFishingManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RentalItemID != nullptr)
		*RentalItemID = params.RentalItemID;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.CheckBGM
// (Exec, Static, NetMulticast, MulticastDelegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGameManager_C::STATIC_CheckBGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.CheckBGM");

	ABP_MiniGameManager_C_CheckBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameActorID
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_GetMiniGameActorID(struct FName* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameActorID");

	ABP_MiniGameManager_C_GetMiniGameActorID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.CheckFishing
// (Net, Exec, Event, Static, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Jump                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_CheckFishing(bool Jump)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.CheckFishing");

	ABP_MiniGameManager_C_CheckFishing_Params params;
	params.Jump = Jump;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateFortuneTellingFlag
// (NetMulticast, Private, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGameManager_C::UpdateFortuneTellingFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateFortuneTellingFlag");

	ABP_MiniGameManager_C_UpdateFortuneTellingFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameGachaID
// (NetReliable, NetRequest, Exec, Event, Static, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   PlayGachaID                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_GetMiniGameGachaID(struct FName* PlayGachaID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameGachaID");

	ABP_MiniGameManager_C_GetMiniGameGachaID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayGachaID != nullptr)
		*PlayGachaID = params.PlayGachaID;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetCurrentMiniGameValueType
// (Exec, NetMulticast, MulticastDelegate, Public, Private, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_ValueType>      Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::GetCurrentMiniGameValueType(TEnumAsByte<EN_ValueType>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetCurrentMiniGameValueType");

	ABP_MiniGameManager_C_GetCurrentMiniGameValueType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.ExecuteMiniGameResultEvent
// (NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, NetServer, DLLImport, Const)
// Parameters:
// TEnumAsByte<E_MiniGameResult>  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_ExecuteMiniGameResultEvent(TEnumAsByte<E_MiniGameResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.ExecuteMiniGameResultEvent");

	ABP_MiniGameManager_C_ExecuteMiniGameResultEvent_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.CanvertMiniGameCategory
// (NetReliable, Static, NetMulticast, MulticastDelegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3MiniGameCategory            Category                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_CanvertMiniGameCategory(int Index, ES3MiniGameCategory* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.CanvertMiniGameCategory");

	ABP_MiniGameManager_C_CanvertMiniGameCategory_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Category != nullptr)
		*Category = params.Category;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.FinalizeTalkMiniGame
// (Event, NetResponse, Static, NetMulticast, Private, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::STATIC_FinalizeTalkMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.FinalizeTalkMiniGame");

	ABP_MiniGameManager_C_FinalizeTalkMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameControlledByMiniGame
// (Net, Exec, Native, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameBase_C*      MiniGameBase                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::GetMiniGameControlledByMiniGame(class ABP_MiniGameBase_C** MiniGameBase, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameControlledByMiniGame");

	ABP_MiniGameManager_C_GetMiniGameControlledByMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MiniGameBase != nullptr)
		*MiniGameBase = params.MiniGameBase;
	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameControlledByActor
// (Native, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::GetMiniGameControlledByActor(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameControlledByActor");

	ABP_MiniGameManager_C_GetMiniGameControlledByActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetMinGamePrice
// (Net, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            MinPrice                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABP_MiniGameBase_C*      Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::GetMinGamePrice(int* MinPrice, class ABP_MiniGameBase_C** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetMinGamePrice");

	ABP_MiniGameManager_C_GetMinGamePrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinPrice != nullptr)
		*MinPrice = params.MinPrice;
	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.ResetValue
// (Net, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, NetClient, DLLImport)

void ABP_MiniGameManager_C::ResetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.ResetValue");

	ABP_MiniGameManager_C_ResetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.IsProcessingMiniGame
// (NetRequest, Event, Static, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bProcessing                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_IsProcessingMiniGame(bool* bProcessing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.IsProcessingMiniGame");

	ABP_MiniGameManager_C_IsProcessingMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bProcessing != nullptr)
		*bProcessing = params.bProcessing;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.InitializeTalkMiniGame
// (Net, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_MiniGameManager_C::InitializeTalkMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.InitializeTalkMiniGame");

	ABP_MiniGameManager_C_InitializeTalkMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.SpawnMiniGameChooseActor
// (NetReliable, Exec, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient)
// Parameters:
// bool                           ManualCamera                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_MiniGameChoose_C*    ChooseActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_SpawnMiniGameChooseActor(bool ManualCamera, class ABP_MiniGameChoose_C** ChooseActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.SpawnMiniGameChooseActor");

	ABP_MiniGameManager_C_SpawnMiniGameChooseActor_Params params;
	params.ManualCamera = ManualCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChooseActor != nullptr)
		*ChooseActor = params.ChooseActor;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.UserConstructionScript
// (Net, NetReliable, Exec, Native, Event, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGameManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.UserConstructionScript");

	ABP_MiniGameManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnDestroyedChooseActor
// (Net, Native, Event, NetResponse, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_OnDestroyedChooseActor(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnDestroyedChooseActor");

	ABP_MiniGameManager_C_OnDestroyedChooseActor_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.BindChooseActor
// (Native, Event, NetResponse, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// class ABP_MiniGameChoose_C*    MiniGameChoose                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_BindChooseActor(class ABP_MiniGameChoose_C* MiniGameChoose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.BindChooseActor");

	ABP_MiniGameManager_C_BindChooseActor_Params params;
	params.MiniGameChoose = MiniGameChoose;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnChangedFlag
// (NetReliable, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_OnChangedFlag(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnChangedFlag");

	ABP_MiniGameManager_C_OnChangedFlag_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.BindGameInstanceFlagEvent
// (Net, NetReliable, Event, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGameManager_C::BindGameInstanceFlagEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.BindGameInstanceFlagEvent");

	ABP_MiniGameManager_C_BindGameInstanceFlagEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.UnbindGameInstanceFlagEvent
// (Net, NetReliable, Event, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGameManager_C::UnbindGameInstanceFlagEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.UnbindGameInstanceFlagEvent");

	ABP_MiniGameManager_C_UnbindGameInstanceFlagEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnCancelChooseMiniGame
// (NetReliable, Event, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGameManager_C::OnCancelChooseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnCancelChooseMiniGame");

	ABP_MiniGameManager_C_OnCancelChooseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnChooseMiniGame
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// class AActor*                  ChooseActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_OnChooseMiniGame(class AActor* ChooseActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnChooseMiniGame");

	ABP_MiniGameManager_C_OnChooseMiniGame_Params params;
	params.ChooseActor = ChooseActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.ReceiveBeginPlay
// (Net, Event, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGameManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.ReceiveBeginPlay");

	ABP_MiniGameManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnTalkStartEvent
// (Net, Event, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGameManager_C::OnTalkStartEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnTalkStartEvent");

	ABP_MiniGameManager_C_OnTalkStartEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnTalkEndEvent
// (Event, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGameManager_C::OnTalkEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnTalkEndEvent");

	ABP_MiniGameManager_C_OnTalkEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnScriptResumeMiniGame
// (Net, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// struct FString                 ResumeKeydword                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MiniGameManager_C::STATIC_OnScriptResumeMiniGame(const struct FString& ResumeKeydword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnScriptResumeMiniGame");

	ABP_MiniGameManager_C_OnScriptResumeMiniGame_Params params;
	params.ResumeKeydword = ResumeKeydword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnStartMiniGame
// (NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// int                            MiniGameRuleIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_OnStartMiniGame(int MiniGameRuleIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnStartMiniGame");

	ABP_MiniGameManager_C_OnStartMiniGame_Params params;
	params.MiniGameRuleIndex = MiniGameRuleIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.TimeJump
// (Net, NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// float                          jumpTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_TimeJump(float jumpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.TimeJump");

	ABP_MiniGameManager_C_TimeJump_Params params;
	params.jumpTime = jumpTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.PlayFishingShopAC
// (NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// int                            ResultRank                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_PlayFishingShopAC(int ResultRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.PlayFishingShopAC");

	ABP_MiniGameManager_C_PlayFishingShopAC_Params params;
	params.ResultRank = ResultRank;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.ResetFishingTimeLimit
// (Net, NetReliable, NetRequest, Event, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGameManager_C::ResetFishingTimeLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.ResetFishingTimeLimit");

	ABP_MiniGameManager_C_ResetFishingTimeLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.FinishLoad
// (Net, NetReliable, NetRequest, Event, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGameManager_C::FinishLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.FinishLoad");

	ABP_MiniGameManager_C_FinishLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnEndMiniGame
// (NetReliable, NetRequest, Event, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGameManager_C::OnEndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnEndMiniGame");

	ABP_MiniGameManager_C_OnEndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.LoadedCueSheet
// (NetReliable, NetRequest, Event, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGameManager_C::LoadedCueSheet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.LoadedCueSheet");

	ABP_MiniGameManager_C_LoadedCueSheet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.ReceiveEndPlay
// (NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.ReceiveEndPlay");

	ABP_MiniGameManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateMiniGameWinRate
// (Net, NetRequest, Event, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGameManager_C::UpdateMiniGameWinRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateMiniGameWinRate");

	ABP_MiniGameManager_C_UpdateMiniGameWinRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.ExecuteUbergraph_BP_MiniGameManager
// (Exec, Native, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::ExecuteUbergraph_BP_MiniGameManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.ExecuteUbergraph_BP_MiniGameManager");

	ABP_MiniGameManager_C_ExecuteUbergraph_BP_MiniGameManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnChangeDay__DelegateSignature
// (NetRequest, Exec, Native, Event, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGameManager_C::OnChangeDay__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnChangeDay__DelegateSignature");

	ABP_MiniGameManager_C_OnChangeDay__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnClearCCB__DelegateSignature
// (NetRequest, Exec, Native, Event, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// TEnumAsByte<E_MiniGameCCBattlePlace> Place                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::OnClearCCB__DelegateSignature(TEnumAsByte<E_MiniGameCCBattlePlace> Place)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnClearCCB__DelegateSignature");

	ABP_MiniGameManager_C_OnClearCCB__DelegateSignature_Params params;
	params.Place = Place;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnChangeMiniGameFlags__DelegateSignature
// (Net, NetReliable, Exec, Native, Event, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_MiniGameManager_C::OnChangeMiniGameFlags__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnChangeMiniGameFlags__DelegateSignature");

	ABP_MiniGameManager_C_OnChangeMiniGameFlags__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

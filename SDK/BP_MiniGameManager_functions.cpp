
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

// Function BP_MiniGameManager.BP_MiniGameManager_C.AddFortuneCount
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::AddFortuneCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.AddFortuneCount");

	ABP_MiniGameManager_C_AddFortuneCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.DisableCheckFishingSuspendTime
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::DisableCheckFishingSuspendTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.DisableCheckFishingSuspendTime");

	ABP_MiniGameManager_C_DisableCheckFishingSuspendTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.SetEnabledPlayFishing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::SetEnabledPlayFishing(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.SetEnabledPlayFishing");

	ABP_MiniGameManager_C_SetEnabledPlayFishing_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetEnabledPlayFishing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bEnabled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::GetEnabledPlayFishing(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetEnabledPlayFishing");

	ABP_MiniGameManager_C_GetEnabledPlayFishing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnabled != nullptr)
		*bEnabled = params.bEnabled;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.DestroyChooseActor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::DestroyChooseActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.DestroyChooseActor");

	ABP_MiniGameManager_C_DestroyChooseActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.InitializeMiniGameProgress
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::InitializeMiniGameProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.InitializeMiniGameProgress");

	ABP_MiniGameManager_C_InitializeMiniGameProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.SetCurrentMiniGame
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameBase_C*      MiniGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::SetCurrentMiniGame(class ABP_MiniGameBase_C* MiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.SetCurrentMiniGame");

	ABP_MiniGameManager_C_SetCurrentMiniGame_Params params;
	params.MiniGame = MiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetForkMovePlaceFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::GetForkMovePlaceFlag(int* OutValue)
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
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::ToggleForkCCBMovePlace()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.ToggleForkCCBMovePlace");

	ABP_MiniGameManager_C_ToggleForkCCBMovePlace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetForkNextProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGame_ForkJobResult> Job                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::GetForkNextProgress(TEnumAsByte<E_MiniGame_ForkJobResult> Job, int* OutValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetForkNextProgress");

	ABP_MiniGameManager_C_GetForkNextProgress_Params params;
	params.Job = Job;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetDailyAppearCCBNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AddNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::AddDailyAppearCCBNum(int AddNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.AddDailyAppearCCBNum");

	ABP_MiniGameManager_C_AddDailyAppearCCBNum_Params params;
	params.AddNum = AddNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetCCBGameData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGame_ForkJobResult> Job                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Data                           (Parm, OutParm, ZeroConstructor)

void ABP_MiniGameManager_C::GetCCBGameData(TEnumAsByte<E_MiniGame_ForkJobResult> Job, TArray<int>* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetCCBGameData");

	ABP_MiniGameManager_C_GetCCBGameData_Params params;
	params.Job = Job;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetAvailableCCBGameDataNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataNum != nullptr)
		*DataNum = params.DataNum;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.SetCCBGameDataNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGame_ForkJobResult> Job                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GameDataNum                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    DataList                       (Parm, OutParm, ZeroConstructor)

void ABP_MiniGameManager_C::SetCCBGameDataNum(TEnumAsByte<E_MiniGame_ForkJobResult> Job, int GameDataNum, int SetIndex, TArray<int>* DataList)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetSpecialPlayerMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           Mesh                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::GetSpecialPlayerMesh(class USkeletalMesh** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetSpecialPlayerMesh");

	ABP_MiniGameManager_C_GetSpecialPlayerMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.SetSpecialPlayerMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           SpecialPlayerMesh              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           Mesh                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::SetSpecialPlayerMesh(class USkeletalMesh* SpecialPlayerMesh, class USkeletalMesh** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.SetSpecialPlayerMesh");

	ABP_MiniGameManager_C_SetSpecialPlayerMesh_Params params;
	params.SpecialPlayerMesh = SpecialPlayerMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.StopBGM
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::StopBGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.StopBGM");

	ABP_MiniGameManager_C_StopBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetCCBTargetNumList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGameCCBattlePlace> Place                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    OutValues                      (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGameManager_C::GetCCBTargetNumList(TEnumAsByte<E_MiniGameCCBattlePlace> Place, TArray<int>* OutValues)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::GetDayCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetDayCount");

	ABP_MiniGameManager_C_GetDayCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateDayCount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Change                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::UpdateDayCount(bool* Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateDayCount");

	ABP_MiniGameManager_C_UpdateDayCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Change != nullptr)
		*Change = params.Change;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateCCBattleResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGameCCBattlePlace> CheckPlace                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ClearNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Clear                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::UpdateCCBattleResult(TEnumAsByte<E_MiniGameCCBattlePlace> CheckPlace, int ClearNumber, bool* Clear)
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
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            AddValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3MiniGameCategory            Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::AddMiniGameProgress(const struct FName& Key, int AddValue, ES3MiniGameCategory Category, int* Value)
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
// (Public, BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateForkLiftResult
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::UpdateForkLiftResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateForkLiftResult");

	ABP_MiniGameManager_C_UpdateForkLiftResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateWinRate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::UpdateWinRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateWinRate");

	ABP_MiniGameManager_C_UpdateWinRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameAllWinRate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_MiniGameManager_C::GetGambleKifudaAccumulate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetGambleKifudaAccumulate");

	ABP_MiniGameManager_C_GetGambleKifudaAccumulate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.AddGambleKifudaAccumulate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AddValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::AddGambleKifudaAccumulate(int AddValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.AddGambleKifudaAccumulate");

	ABP_MiniGameManager_C_AddGambleKifudaAccumulate_Params params;
	params.AddValue = AddValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameWinRate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGameGambleType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Fortune                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_MiniGameGambleWinRate> RateType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::GetMiniGameWinRate(TEnumAsByte<E_MiniGameGambleType> Type, bool Fortune, TEnumAsByte<E_MiniGameGambleWinRate> RateType, float* Rate)
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
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::UpdateMiniGameGlobalFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateMiniGameGlobalFlag");

	ABP_MiniGameManager_C_UpdateMiniGameGlobalFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateFortuneProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsNumberFortune                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnabledFortune               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            FortuneNum                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::UpdateFortuneProgress(bool IsNumberFortune, bool* IsEnabledFortune, int* FortuneNum)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsNumberFortune                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnabled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            FlagIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            FortuneNum                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::IsEnabledFortune(bool IsNumberFortune, bool* IsEnabled, int* FlagIndex, int* FortuneNum)
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
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   BGMID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Play                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::PlayBGM(const struct FName& BGMID, bool* Play)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_Fishing_ResultFishData> result_fish_array              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MiniGameManager_C::StartFishingShopResult(TArray<struct FST_Fishing_ResultFishData>* result_fish_array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.StartFishingShopResult");

	ABP_MiniGameManager_C_StartFishingShopResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (result_fish_array != nullptr)
		*result_fish_array = params.result_fish_array;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.InitializeFishing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::InitializeFishing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.InitializeFishing");

	ABP_MiniGameManager_C_InitializeFishing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.FinalizeFishing
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::FinalizeFishing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.FinalizeFishing");

	ABP_MiniGameManager_C_FinalizeFishing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.CreateFishingManager
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    RentalItemID                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MiniGameManager_C::CreateFishingManager(TArray<int>* RentalItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.CreateFishingManager");

	ABP_MiniGameManager_C_CreateFishingManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RentalItemID != nullptr)
		*RentalItemID = params.RentalItemID;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.CheckBGM
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::CheckBGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.CheckBGM");

	ABP_MiniGameManager_C_CheckBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameActorID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::GetMiniGameActorID(struct FName* ID)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Jump                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::CheckFishing(bool Jump)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.CheckFishing");

	ABP_MiniGameManager_C_CheckFishing_Params params;
	params.Jump = Jump;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateFortuneTellingFlag
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::UpdateFortuneTellingFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateFortuneTellingFlag");

	ABP_MiniGameManager_C_UpdateFortuneTellingFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameGachaID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   PlayGachaID                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::GetMiniGameGachaID(struct FName* PlayGachaID)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGameResult>  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::ExecuteMiniGameResultEvent(TEnumAsByte<E_MiniGameResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.ExecuteMiniGameResultEvent");

	ABP_MiniGameManager_C_ExecuteMiniGameResultEvent_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.CanvertMiniGameCategory
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3MiniGameCategory            Category                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::CanvertMiniGameCategory(int Index, ES3MiniGameCategory* Category)
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
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::FinalizeTalkMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.FinalizeTalkMiniGame");

	ABP_MiniGameManager_C_FinalizeTalkMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameControlledByMiniGame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_MiniGameBase_C*      MiniGameBase                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::GetMiniGameControlledByMiniGame(class ABP_MiniGameBase_C** MiniGameBase, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameControlledByMiniGame");

	ABP_MiniGameManager_C_GetMiniGameControlledByMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MiniGameBase != nullptr)
		*MiniGameBase = params.MiniGameBase;
	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameControlledByActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::GetMiniGameControlledByActor(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetMiniGameControlledByActor");

	ABP_MiniGameManager_C_GetMiniGameControlledByActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetMinGamePrice
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::ResetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.ResetValue");

	ABP_MiniGameManager_C_ResetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.IsProcessingMiniGame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bProcessing                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::IsProcessingMiniGame(bool* bProcessing)
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
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::InitializeTalkMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.InitializeTalkMiniGame");

	ABP_MiniGameManager_C_InitializeTalkMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.SpawnMiniGameChooseActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ManualCamera                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_MiniGameChoose_C*    ChooseActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::SpawnMiniGameChooseActor(bool ManualCamera, class ABP_MiniGameChoose_C** ChooseActor)
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
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.UserConstructionScript");

	ABP_MiniGameManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnDestroyedChooseActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::OnDestroyedChooseActor(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnDestroyedChooseActor");

	ABP_MiniGameManager_C_OnDestroyedChooseActor_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.BindChooseActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameChoose_C*    MiniGameChoose                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::BindChooseActor(class ABP_MiniGameChoose_C* MiniGameChoose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.BindChooseActor");

	ABP_MiniGameManager_C_BindChooseActor_Params params;
	params.MiniGameChoose = MiniGameChoose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnChangedFlag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::OnChangedFlag(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnChangedFlag");

	ABP_MiniGameManager_C_OnChangedFlag_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.BindGameInstanceFlagEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::BindGameInstanceFlagEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.BindGameInstanceFlagEvent");

	ABP_MiniGameManager_C_BindGameInstanceFlagEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.UnbindGameInstanceFlagEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::UnbindGameInstanceFlagEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.UnbindGameInstanceFlagEvent");

	ABP_MiniGameManager_C_UnbindGameInstanceFlagEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnCancelChooseMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::OnCancelChooseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnCancelChooseMiniGame");

	ABP_MiniGameManager_C_OnCancelChooseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnChooseMiniGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ChooseActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::OnChooseMiniGame(class AActor* ChooseActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnChooseMiniGame");

	ABP_MiniGameManager_C_OnChooseMiniGame_Params params;
	params.ChooseActor = ChooseActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGameManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.ReceiveBeginPlay");

	ABP_MiniGameManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnTalkStartEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::OnTalkStartEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnTalkStartEvent");

	ABP_MiniGameManager_C_OnTalkStartEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnTalkEndEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::OnTalkEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnTalkEndEvent");

	ABP_MiniGameManager_C_OnTalkEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnScriptResumeMiniGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ResumeKeydword                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MiniGameManager_C::OnScriptResumeMiniGame(const struct FString& ResumeKeydword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnScriptResumeMiniGame");

	ABP_MiniGameManager_C_OnScriptResumeMiniGame_Params params;
	params.ResumeKeydword = ResumeKeydword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnStartMiniGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MiniGameRuleIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::OnStartMiniGame(int MiniGameRuleIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnStartMiniGame");

	ABP_MiniGameManager_C_OnStartMiniGame_Params params;
	params.MiniGameRuleIndex = MiniGameRuleIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.TimeJump
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          jumpTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::TimeJump(float jumpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.TimeJump");

	ABP_MiniGameManager_C_TimeJump_Params params;
	params.jumpTime = jumpTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.PlayFishingShopAC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ResultRank                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::PlayFishingShopAC(int ResultRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.PlayFishingShopAC");

	ABP_MiniGameManager_C_PlayFishingShopAC_Params params;
	params.ResultRank = ResultRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.ResetFishingTimeLimit
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::ResetFishingTimeLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.ResetFishingTimeLimit");

	ABP_MiniGameManager_C_ResetFishingTimeLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.FinishLoad
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::FinishLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.FinishLoad");

	ABP_MiniGameManager_C_FinishLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnEndMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::OnEndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnEndMiniGame");

	ABP_MiniGameManager_C_OnEndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.LoadedCueSheet
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::LoadedCueSheet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.LoadedCueSheet");

	ABP_MiniGameManager_C_LoadedCueSheet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.ReceiveEndPlay");

	ABP_MiniGameManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateMiniGameWinRate
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::UpdateMiniGameWinRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.UpdateMiniGameWinRate");

	ABP_MiniGameManager_C_UpdateMiniGameWinRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.ExecuteUbergraph_BP_MiniGameManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::ExecuteUbergraph_BP_MiniGameManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.ExecuteUbergraph_BP_MiniGameManager");

	ABP_MiniGameManager_C_ExecuteUbergraph_BP_MiniGameManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnChangeDay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::OnChangeDay__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnChangeDay__DelegateSignature");

	ABP_MiniGameManager_C_OnChangeDay__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnClearCCB__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGameCCBattlePlace> Place                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::OnClearCCB__DelegateSignature(TEnumAsByte<E_MiniGameCCBattlePlace> Place)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnClearCCB__DelegateSignature");

	ABP_MiniGameManager_C_OnClearCCB__DelegateSignature_Params params;
	params.Place = Place;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnChangeMiniGameFlags__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::OnChangeMiniGameFlags__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnChangeMiniGameFlags__DelegateSignature");

	ABP_MiniGameManager_C_OnChangeMiniGameFlags__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

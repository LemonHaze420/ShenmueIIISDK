
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

// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.TmpGetManualUnloadLevelList
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_DbgCutsceneListPlayer_C::TmpGetManualUnloadLevelList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.TmpGetManualUnloadLevelList");

	ABP_DbgCutsceneListPlayer_C_TmpGetManualUnloadLevelList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.SetPlayInfoListFromDataTable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*              InfoDataTable                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DbgCutsceneListPlayer_C::SetPlayInfoListFromDataTable(class UDataTable* InfoDataTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.SetPlayInfoListFromDataTable");

	ABP_DbgCutsceneListPlayer_C_SetPlayInfoListFromDataTable_Params params;
	params.InfoDataTable = InfoDataTable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.ExecuteCutsceneEndCommon
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_DbgCutsceneListPlayer_C::ExecuteCutsceneEndCommon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.ExecuteCutsceneEndCommon");

	ABP_DbgCutsceneListPlayer_C_ExecuteCutsceneEndCommon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.StartCutscene
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DbgCutsceneListPlayer_C::StartCutscene(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.StartCutscene");

	ABP_DbgCutsceneListPlayer_C_StartCutscene_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.GetPlayInfoNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Num                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DbgCutsceneListPlayer_C::GetPlayInfoNum(int* Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.GetPlayInfoNum");

	ABP_DbgCutsceneListPlayer_C_GetPlayInfoNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Num != nullptr)
		*Num = params.Num;
}


// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.GetPlayInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFound                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FST_DbgCutscenePlayInfo ResultInfo                     (Parm, OutParm)

void ABP_DbgCutsceneListPlayer_C::GetPlayInfo(int Index, bool* bFound, struct FST_DbgCutscenePlayInfo* ResultInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.GetPlayInfo");

	ABP_DbgCutsceneListPlayer_C_GetPlayInfo_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFound != nullptr)
		*bFound = params.bFound;
	if (ResultInfo != nullptr)
		*ResultInfo = params.ResultInfo;
}


// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.HasPlayInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// int                            FoundIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ABP_DbgCutsceneListPlayer_C::HasPlayInfo(const struct FString& CutsceneId, int* FoundIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.HasPlayInfo");

	ABP_DbgCutsceneListPlayer_C_HasPlayInfo_Params params;
	params.CutsceneId = CutsceneId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundIndex != nullptr)
		*FoundIndex = params.FoundIndex;

	return params.ReturnValue;
}


// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.SetPlayInfoList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_DbgCutscenePlayInfo> InfoList                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_DbgCutsceneListPlayer_C::SetPlayInfoList(TArray<struct FST_DbgCutscenePlayInfo>* InfoList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.SetPlayInfoList");

	ABP_DbgCutsceneListPlayer_C_SetPlayInfoList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InfoList != nullptr)
		*InfoList = params.InfoList;
}


// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.SetPlayInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_DbgCutscenePlayInfo Info                           (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DbgCutsceneListPlayer_C::SetPlayInfo(const struct FST_DbgCutscenePlayInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.SetPlayInfo");

	ABP_DbgCutsceneListPlayer_C_SetPlayInfo_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DbgCutsceneListPlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.UserConstructionScript");

	ABP_DbgCutsceneListPlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.TmpManualUnloadCutsceneLevel
// (BlueprintCallable, BlueprintEvent)

void ABP_DbgCutsceneListPlayer_C::TmpManualUnloadCutsceneLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.TmpManualUnloadCutsceneLevel");

	ABP_DbgCutsceneListPlayer_C_TmpManualUnloadCutsceneLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.DebugOnStartCutscenePlayer
// (BlueprintCallable, BlueprintEvent)

void ABP_DbgCutsceneListPlayer_C::DebugOnStartCutscenePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.DebugOnStartCutscenePlayer");

	ABP_DbgCutsceneListPlayer_C_DebugOnStartCutscenePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.DebugOnCutsceneEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_DbgCutsceneListPlayer_C::DebugOnCutsceneEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.DebugOnCutsceneEnd");

	ABP_DbgCutsceneListPlayer_C_DebugOnCutsceneEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C._BindDebugOnStartCutscenePlayer
// (BlueprintCallable, BlueprintEvent)

void ABP_DbgCutsceneListPlayer_C::_BindDebugOnStartCutscenePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C._BindDebugOnStartCutscenePlayer");

	ABP_DbgCutsceneListPlayer_C__BindDebugOnStartCutscenePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C._BindDebugOnCutsceneEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_DbgCutsceneListPlayer_C::_BindDebugOnCutsceneEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C._BindDebugOnCutsceneEnd");

	ABP_DbgCutsceneListPlayer_C__BindDebugOnCutsceneEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.ExecuteUbergraph_BP_DbgCutsceneListPlayer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DbgCutsceneListPlayer_C::ExecuteUbergraph_BP_DbgCutsceneListPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.ExecuteUbergraph_BP_DbgCutsceneListPlayer");

	ABP_DbgCutsceneListPlayer_C_ExecuteUbergraph_BP_DbgCutsceneListPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.OnCutsceneEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DbgCutsceneListPlayer_C::OnCutsceneEnd__DelegateSignature(const struct FName& CutsceneId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.OnCutsceneEnd__DelegateSignature");

	ABP_DbgCutsceneListPlayer_C_OnCutsceneEnd__DelegateSignature_Params params;
	params.CutsceneId = CutsceneId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.OnStartCutscenePlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CutsceneId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DbgCutsceneListPlayer_C::OnStartCutscenePlayer__DelegateSignature(const struct FName& CutsceneId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C.OnStartCutscenePlayer__DelegateSignature");

	ABP_DbgCutsceneListPlayer_C_OnStartCutscenePlayer__DelegateSignature_Params params;
	params.CutsceneId = CutsceneId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

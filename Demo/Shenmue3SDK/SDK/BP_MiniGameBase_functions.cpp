
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

// Function BP_MiniGameBase.BP_MiniGameBase_C.GetHelpPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3HelpPriority                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ES3HelpPriority ABP_MiniGameBase_C::GetHelpPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.GetHelpPriority");

	ABP_MiniGameBase_C_GetHelpPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.GetHelpName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_MiniGameBase_C::GetHelpName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.GetHelpName");

	ABP_MiniGameBase_C_GetHelpName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.IsActivateHelp
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGameBase_C::IsActivateHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.IsActivateHelp");

	ABP_MiniGameBase_C_IsActivateHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.RegisterHelp
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3HelpRegisterTiming          Timing                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGameBase_C::RegisterHelp(ES3HelpRegisterTiming Timing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.RegisterHelp");

	ABP_MiniGameBase_C_RegisterHelp_Params params;
	params.Timing = Timing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.UnregisterHelp
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3HelpRegisterTiming          Timing                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGameBase_C::UnregisterHelp(ES3HelpRegisterTiming Timing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.UnregisterHelp");

	ABP_MiniGameBase_C_UnregisterHelp_Params params;
	params.Timing = Timing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.IsTalking
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGameBase_C::IsTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.IsTalking");

	ABP_MiniGameBase_C_IsTalking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.GetPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_MiniGameBase_C::GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.GetPriority");

	ABP_MiniGameBase_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.GetDetectAction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_MiniGameBase_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.GetDetectAction");

	ABP_MiniGameBase_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.GetMiniGameValueType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_ValueType>      Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::GetMiniGameValueType(TEnumAsByte<EN_ValueType>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.GetMiniGameValueType");

	ABP_MiniGameBase_C_GetMiniGameValueType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.GetTalkCameraCalculationLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_MiniGameBase_C::GetTalkCameraCalculationLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.GetTalkCameraCalculationLocation");

	ABP_MiniGameBase_C_GetTalkCameraCalculationLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.GetDistanceToLeaveForCheckMiniGame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_MiniGameBase_C::GetDistanceToLeaveForCheckMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.GetDistanceToLeaveForCheckMiniGame");

	ABP_MiniGameBase_C_GetDistanceToLeaveForCheckMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.GetMiniGameBGMID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::GetMiniGameBGMID(struct FName* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.GetMiniGameBGMID");

	ABP_MiniGameBase_C_GetMiniGameBGMID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.IsNeedDistanceToLeaveForCheckMiniGame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGameBase_C::IsNeedDistanceToLeaveForCheckMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.IsNeedDistanceToLeaveForCheckMiniGame");

	ABP_MiniGameBase_C_IsNeedDistanceToLeaveForCheckMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.GetWinCount
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EMiniGamePurpose>  Purpose                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::GetWinCount(TEnumAsByte<EMiniGamePurpose> Purpose, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.GetWinCount");

	ABP_MiniGameBase_C_GetWinCount_Params params;
	params.Purpose = Purpose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.IncrementWinCount
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBase_C::IncrementWinCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.IncrementWinCount");

	ABP_MiniGameBase_C_IncrementWinCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.CreateWinCountKey
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EMiniGamePurpose>  Purpose                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Key                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::CreateWinCountKey(TEnumAsByte<EMiniGamePurpose> Purpose, struct FName* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.CreateWinCountKey");

	ABP_MiniGameBase_C_CreateWinCountKey_Params params;
	params.Purpose = Purpose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.SetBottomsTransparent
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBase_C::SetBottomsTransparent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.SetBottomsTransparent");

	ABP_MiniGameBase_C_SetBottomsTransparent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.GetUseCoinSequence
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ULevelSequence*          Sequence                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::GetUseCoinSequence(class ULevelSequence** Sequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.GetUseCoinSequence");

	ABP_MiniGameBase_C_GetUseCoinSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sequence != nullptr)
		*Sequence = params.Sequence;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.FindLoadSequence
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence*          Sequence                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::FindLoadSequence(const struct FName& ID, class ULevelSequence** Sequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.FindLoadSequence");

	ABP_MiniGameBase_C_FindLoadSequence_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sequence != nullptr)
		*Sequence = params.Sequence;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.GetCommonSequence
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGameCommonSequence> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence*          Sequence                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::GetCommonSequence(TEnumAsByte<E_MiniGameCommonSequence> Type, class ULevelSequence** Sequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.GetCommonSequence");

	ABP_MiniGameBase_C_GetCommonSequence_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sequence != nullptr)
		*Sequence = params.Sequence;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.AddLoadObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::AddLoadObject(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.AddLoadObject");

	ABP_MiniGameBase_C_AddLoadObject_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.DestroyLoadObject
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::DestroyLoadObject(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.DestroyLoadObject");

	ABP_MiniGameBase_C_DestroyLoadObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.FindLoadObject
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Object                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::FindLoadObject(const struct FName& ID, class UObject** Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.FindLoadObject");

	ABP_MiniGameBase_C_FindLoadObject_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Object != nullptr)
		*Object = params.Object;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.InitAsyncLoad
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::InitAsyncLoad(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.InitAsyncLoad");

	ABP_MiniGameBase_C_InitAsyncLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.ForceEndMiniGame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SuccessEnd                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::ForceEndMiniGame(bool* SuccessEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.ForceEndMiniGame");

	ABP_MiniGameBase_C_ForceEndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SuccessEnd != nullptr)
		*SuccessEnd = params.SuccessEnd;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.StopBGM
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBase_C::StopBGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.StopBGM");

	ABP_MiniGameBase_C_StopBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.GetSightCheckLocation
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_MiniGameBase_C::GetSightCheckLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.GetSightCheckLocation");

	ABP_MiniGameBase_C_GetSightCheckLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.UnBindEventToSequenceFinished
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         񍯐�0�0                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MiniGameBase_C::UnBindEventToSequenceFinished(const struct FScriptDelegate& UnknownVar01)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.UnBindEventToSequenceFinished");

	ABP_MiniGameBase_C_UnBindEventToSequenceFinished_Params params;
	params.UnknownVar01 = UnknownVar01;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.SetMeshUpdateEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  SkeltalMesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_MiniGameBase_C::SetMeshUpdateEnabled(bool Enabled, class USkeletalMeshComponent* SkeltalMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.SetMeshUpdateEnabled");

	ABP_MiniGameBase_C_SetMeshUpdateEnabled_Params params;
	params.Enabled = Enabled;
	params.SkeltalMesh = SkeltalMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.BindEventToSequenceFinished
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequencePlayer*    SequencePlayer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         񍯐�0�0                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MiniGameBase_C::BindEventToSequenceFinished(class ULevelSequencePlayer* SequencePlayer, const struct FScriptDelegate& UnknownVar01)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.BindEventToSequenceFinished");

	ABP_MiniGameBase_C_BindEventToSequenceFinished_Params params;
	params.SequencePlayer = SequencePlayer;
	params.UnknownVar01 = UnknownVar01;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.GetMiniGameHelpName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void ABP_MiniGameBase_C::GetMiniGameHelpName(struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.GetMiniGameHelpName");

	ABP_MiniGameBase_C_GetMiniGameHelpName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.SetMiniGameCategory
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3MiniGameCategory            MiniGameCategory               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::SetMiniGameCategory(ES3MiniGameCategory MiniGameCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.SetMiniGameCategory");

	ABP_MiniGameBase_C_SetMiniGameCategory_Params params;
	params.MiniGameCategory = MiniGameCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.IsDebugScriptMode
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bDebugMode                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::IsDebugScriptMode(bool* bDebugMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.IsDebugScriptMode");

	ABP_MiniGameBase_C_IsDebugScriptMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDebugMode != nullptr)
		*bDebugMode = params.bDebugMode;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.ExecuteMiniGameResultEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGameResult>  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::ExecuteMiniGameResultEvent(TEnumAsByte<E_MiniGameResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.ExecuteMiniGameResultEvent");

	ABP_MiniGameBase_C_ExecuteMiniGameResultEvent_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.IsPlayMiniGame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGameBase_C::IsPlayMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.IsPlayMiniGame");

	ABP_MiniGameBase_C_IsPlayMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.IsDebugMiniGameDisplayLog
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGameBase_C::IsDebugMiniGameDisplayLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.IsDebugMiniGameDisplayLog");

	ABP_MiniGameBase_C_IsDebugMiniGameDisplayLog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.GetMiniGameId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   MiniGameId                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::GetMiniGameId(struct FName* MiniGameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.GetMiniGameId");

	ABP_MiniGameBase_C_GetMiniGameId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MiniGameId != nullptr)
		*MiniGameId = params.MiniGameId;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.DestroyInputControlActor
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::DestroyInputControlActor(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.DestroyInputControlActor");

	ABP_MiniGameBase_C_DestroyInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.SpawnInputControlActor
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_MiniGameBase_C::SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.SpawnInputControlActor");

	ABP_MiniGameBase_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.UserConstructionScript");

	ABP_MiniGameBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnLoaded_0E4495544C0CD96838AD9C8CE3CF930B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::OnLoaded_0E4495544C0CD96838AD9C8CE3CF930B(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnLoaded_0E4495544C0CD96838AD9C8CE3CF930B");

	ABP_MiniGameBase_C_OnLoaded_0E4495544C0CD96838AD9C8CE3CF930B_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBase_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.StartMiniGame");

	ABP_MiniGameBase_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBase_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.EndMiniGame");

	ABP_MiniGameBase_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.WinMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBase_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.WinMiniGame");

	ABP_MiniGameBase_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.LoseMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBase_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.LoseMiniGame");

	ABP_MiniGameBase_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.DrawMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBase_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.DrawMiniGame");

	ABP_MiniGameBase_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.EnterMiniGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          EnterTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::EnterMiniGame(float EnterTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.EnterMiniGame");

	ABP_MiniGameBase_C_EnterMiniGame_Params params;
	params.EnterTime = EnterTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.RestartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBase_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.RestartMiniGame");

	ABP_MiniGameBase_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.FinalizeTalk
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBase_C::FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.FinalizeTalk");

	ABP_MiniGameBase_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.DecideDetectAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.DecideDetectAction");

	ABP_MiniGameBase_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnTalkStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3TalkComponent*        TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_MiniGameBase_C::OnTalkStart(class US3TalkComponent* TalkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnTalkStart");

	ABP_MiniGameBase_C_OnTalkStart_Params params;
	params.TalkComponent = TalkComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnTalkFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3TalkComponent*        TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           interrupted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::OnTalkFinished(class US3TalkComponent* TalkComponent, bool interrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnTalkFinished");

	ABP_MiniGameBase_C_OnTalkFinished_Params params;
	params.TalkComponent = TalkComponent;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.Screen_Player
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBase_C::Screen_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.Screen_Player");

	ABP_MiniGameBase_C_Screen_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.Screen_NPC
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBase_C::Screen_NPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.Screen_NPC");

	ABP_MiniGameBase_C_Screen_NPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.SuspendMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBase_C::SuspendMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.SuspendMiniGame");

	ABP_MiniGameBase_C_SuspendMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.ResumeMiniGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ResumeKeyword                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MiniGameBase_C::ResumeMiniGame(const struct FString& ResumeKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.ResumeMiniGame");

	ABP_MiniGameBase_C_ResumeMiniGame_Params params;
	params.ResumeKeyword = ResumeKeyword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnTalkScriptEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::OnTalkScriptEvent(int EventNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnTalkScriptEvent");

	ABP_MiniGameBase_C_OnTalkScriptEvent_Params params;
	params.EventNumber = EventNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGameBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.ReceiveBeginPlay");

	ABP_MiniGameBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.CancelMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBase_C::CancelMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.CancelMiniGame");

	ABP_MiniGameBase_C_CancelMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.Event_BindSequencePlayerFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequencePlayer*    RefSequencePlayer              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::Event_BindSequencePlayerFinished(class ULevelSequencePlayer* RefSequencePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.Event_BindSequencePlayerFinished");

	ABP_MiniGameBase_C_Event_BindSequencePlayerFinished_Params params;
	params.RefSequencePlayer = RefSequencePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnFinishedSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequencePlayer*    LevelSequencePlayer            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::OnFinishedSequence(class ULevelSequencePlayer* LevelSequencePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnFinishedSequence");

	ABP_MiniGameBase_C_OnFinishedSequence_Params params;
	params.LevelSequencePlayer = LevelSequencePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.StopSequenceOnCancel
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBase_C::StopSequenceOnCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.StopSequenceOnCancel");

	ABP_MiniGameBase_C_StopSequenceOnCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.Event_EndMiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBase_C::Event_EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.Event_EndMiniGame");

	ABP_MiniGameBase_C_Event_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.Event_RemoveTimerEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBase_C::Event_RemoveTimerEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.Event_RemoveTimerEvent");

	ABP_MiniGameBase_C_Event_RemoveTimerEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.SetInputControlEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::SetInputControlEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.SetInputControlEnabled");

	ABP_MiniGameBase_C_SetInputControlEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.SetEnabledPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::SetEnabledPlayer(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.SetEnabledPlayer");

	ABP_MiniGameBase_C_SetEnabledPlayer_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.ReceiveEndPlay");

	ABP_MiniGameBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.Event_SetEnabledStreamingVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::Event_SetEnabledStreamingVolume(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.Event_SetEnabledStreamingVolume");

	ABP_MiniGameBase_C_Event_SetEnabledStreamingVolume_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.Event_OpenHelp
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBase_C::Event_OpenHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.Event_OpenHelp");

	ABP_MiniGameBase_C_Event_OpenHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.Event_SetPlayerVisibleEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::Event_SetPlayerVisibleEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.Event_SetPlayerVisibleEnabled");

	ABP_MiniGameBase_C_Event_SetPlayerVisibleEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.ConsumeGamblePrice
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBase_C::ConsumeGamblePrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.ConsumeGamblePrice");

	ABP_MiniGameBase_C_ConsumeGamblePrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.StartAsyncLoad
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBase_C::StartAsyncLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.StartAsyncLoad");

	ABP_MiniGameBase_C_StartAsyncLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.ChangedClothes
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class US3ClothInterface> Interface                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::ChangedClothes(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.ChangedClothes");

	ABP_MiniGameBase_C_ChangedClothes_Params params;
	params.Interface = Interface;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.ApplyClothWet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class US3ClothInterface> Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Wetness                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::ApplyClothWet(const TScriptInterface<class US3ClothInterface>& Target, float Wetness)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.ApplyClothWet");

	ABP_MiniGameBase_C_ApplyClothWet_Params params;
	params.Target = Target;
	params.Wetness = Wetness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.ApplyClothWetCurrentPlayerValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class US3ClothInterface> Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::ApplyClothWetCurrentPlayerValue(const TScriptInterface<class US3ClothInterface>& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.ApplyClothWetCurrentPlayerValue");

	ABP_MiniGameBase_C_ApplyClothWetCurrentPlayerValue_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.ExecuteUbergraph_BP_MiniGameBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::ExecuteUbergraph_BP_MiniGameBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.ExecuteUbergraph_BP_MiniGameBase");

	ABP_MiniGameBase_C_ExecuteUbergraph_BP_MiniGameBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnFinishedAsyncLoad__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBase_C::OnFinishedAsyncLoad__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnFinishedAsyncLoad__DelegateSignature");

	ABP_MiniGameBase_C_OnFinishedAsyncLoad__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnSequencePlayerFinishedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBase_C::OnSequencePlayerFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnSequencePlayerFinishedDispatcher__DelegateSignature");

	ABP_MiniGameBase_C_OnSequencePlayerFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnScriptEventMiniGameDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::OnScriptEventMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame, int EventNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnScriptEventMiniGameDispatcher__DelegateSignature");

	ABP_MiniGameBase_C_OnScriptEventMiniGameDispatcher__DelegateSignature_Params params;
	params.SelfMiniGame = SelfMiniGame;
	params.EventNumber = EventNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnRestartMiniGameDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::OnRestartMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnRestartMiniGameDispatcher__DelegateSignature");

	ABP_MiniGameBase_C_OnRestartMiniGameDispatcher__DelegateSignature_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnFinishedEnterMiniGameDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::OnFinishedEnterMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnFinishedEnterMiniGameDispatcher__DelegateSignature");

	ABP_MiniGameBase_C_OnFinishedEnterMiniGameDispatcher__DelegateSignature_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnEnterMiniGameDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::OnEnterMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnEnterMiniGameDispatcher__DelegateSignature");

	ABP_MiniGameBase_C_OnEnterMiniGameDispatcher__DelegateSignature_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnDrawMiniGameDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::OnDrawMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnDrawMiniGameDispatcher__DelegateSignature");

	ABP_MiniGameBase_C_OnDrawMiniGameDispatcher__DelegateSignature_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnLoseMiniGameDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::OnLoseMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnLoseMiniGameDispatcher__DelegateSignature");

	ABP_MiniGameBase_C_OnLoseMiniGameDispatcher__DelegateSignature_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnWinMiniGameDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::OnWinMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnWinMiniGameDispatcher__DelegateSignature");

	ABP_MiniGameBase_C_OnWinMiniGameDispatcher__DelegateSignature_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnEndMiniGameDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::OnEndMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnEndMiniGameDispatcher__DelegateSignature");

	ABP_MiniGameBase_C_OnEndMiniGameDispatcher__DelegateSignature_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnStartMiniGameDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::OnStartMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnStartMiniGameDispatcher__DelegateSignature");

	ABP_MiniGameBase_C_OnStartMiniGameDispatcher__DelegateSignature_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

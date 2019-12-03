
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

// Function BP_MiniGameBase.BP_MiniGameBase_C.GetHelpPriority
// (Exec, Native, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3HelpPriority                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ES3HelpPriority ABP_MiniGameBase_C::STATIC_GetHelpPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.GetHelpPriority");

	ABP_MiniGameBase_C_GetHelpPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.GetHelpName
// (Exec, Event, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_MiniGameBase_C::STATIC_GetHelpName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.GetHelpName");

	ABP_MiniGameBase_C_GetHelpName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.IsActivateHelp
// (NetRequest, Event, NetResponse, Static, NetMulticast, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGameBase_C::STATIC_IsActivateHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.IsActivateHelp");

	ABP_MiniGameBase_C_IsActivateHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.RegisterHelp
// (NetRequest, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Net, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ES3HelpRegisterTiming          Timing                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGameBase_C::STATIC_UnregisterHelp(ES3HelpRegisterTiming Timing)
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
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGameBase_C::STATIC_IsTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.IsTalking");

	ABP_MiniGameBase_C_IsTalking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.GetPriority
// (NetReliable, Exec, Event, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_MiniGameBase_C::STATIC_GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.GetPriority");

	ABP_MiniGameBase_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.GetDetectAction
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_MiniGameBase_C::STATIC_GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.GetDetectAction");

	ABP_MiniGameBase_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.GetMiniGameValueType
// (Net, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_ValueType>      Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_GetMiniGameValueType(TEnumAsByte<EN_ValueType>* Type)
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
// (NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Protected, Delegate, DLLImport, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_MiniGameBase_C::GetTalkCameraCalculationLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.GetTalkCameraCalculationLocation");

	ABP_MiniGameBase_C_GetTalkCameraCalculationLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.GetDistanceToLeaveForCheckMiniGame
// (Net, NetReliable, Exec, Event, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_MiniGameBase_C::STATIC_GetDistanceToLeaveForCheckMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.GetDistanceToLeaveForCheckMiniGame");

	ABP_MiniGameBase_C_GetDistanceToLeaveForCheckMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.GetMiniGameBGMID
// (Net, Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGameBase_C::STATIC_IsNeedDistanceToLeaveForCheckMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.IsNeedDistanceToLeaveForCheckMiniGame");

	ABP_MiniGameBase_C_IsNeedDistanceToLeaveForCheckMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.GetWinCount
// (NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
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
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, Private, Protected, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameBase_C::STATIC_IncrementWinCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.IncrementWinCount");

	ABP_MiniGameBase_C_IncrementWinCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.CreateWinCountKey
// (Exec, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
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
// (NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_MiniGameBase_C::STATIC_SetBottomsTransparent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.SetBottomsTransparent");

	ABP_MiniGameBase_C_SetBottomsTransparent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.GetUseCoinSequence
// (NetReliable, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (NetReliable, NetRequest, Event, Static, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence*          Sequence                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_FindLoadSequence(const struct FName& ID, class ULevelSequence** Sequence)
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
// (Net, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<E_MiniGameCommonSequence> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence*          Sequence                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_GetCommonSequence(TEnumAsByte<E_MiniGameCommonSequence> Type, class ULevelSequence** Sequence)
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
// (Net, NetReliable, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_AddLoadObject(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.AddLoadObject");

	ABP_MiniGameBase_C_AddLoadObject_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.DestroyLoadObject
// (Native, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::DestroyLoadObject(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.DestroyLoadObject");

	ABP_MiniGameBase_C_DestroyLoadObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.FindLoadObject
// (Exec, NetResponse, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (Native, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_InitAsyncLoad(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.InitAsyncLoad");

	ABP_MiniGameBase_C_InitAsyncLoad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.ForceEndMiniGame
// (NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
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
// (Net, NetReliable, NetRequest, Exec, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameBase_C::StopBGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.StopBGM");

	ABP_MiniGameBase_C_StopBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.GetSightCheckLocation
// (Net, Exec, Native, NetResponse, MulticastDelegate, Public, Protected, Delegate, DLLImport, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_MiniGameBase_C::GetSightCheckLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.GetSightCheckLocation");

	ABP_MiniGameBase_C_GetSightCheckLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.UnBindEventToSequenceFinished
// (Net, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FScriptDelegate         _񍯐�0�0                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MiniGameBase_C::STATIC_UnBindEventToSequenceFinished(const struct FScriptDelegate& UnknownVar01)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.UnBindEventToSequenceFinished");

	ABP_MiniGameBase_C_UnBindEventToSequenceFinished_Params params;
	params.UnknownVar01 = UnknownVar01;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.SetMeshUpdateEnabled
// (Exec, Event, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  SkeltalMesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_SetMeshUpdateEnabled(bool Enabled, class USkeletalMeshComponent* SkeltalMesh)
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
// (NetReliable, Exec, Native, Event, Static, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ULevelSequencePlayer*    SequencePlayer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         _񍯐�0�0                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MiniGameBase_C::STATIC_BindEventToSequenceFinished(class ULevelSequencePlayer* SequencePlayer, const struct FScriptDelegate& UnknownVar01)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.BindEventToSequenceFinished");

	ABP_MiniGameBase_C_BindEventToSequenceFinished_Params params;
	params.SequencePlayer = SequencePlayer;
	params.UnknownVar01 = UnknownVar01;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.GetMiniGameHelpName
// (Net, NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void ABP_MiniGameBase_C::GetMiniGameHelpName(struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.GetMiniGameHelpName");

	ABP_MiniGameBase_C_GetMiniGameHelpName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.SetMiniGameCategory
// (NetReliable, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3MiniGameCategory            MiniGameCategory               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_SetMiniGameCategory(ES3MiniGameCategory MiniGameCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.SetMiniGameCategory");

	ABP_MiniGameBase_C_SetMiniGameCategory_Params params;
	params.MiniGameCategory = MiniGameCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.IsDebugScriptMode
// (NetReliable, Exec, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (NetRequest, Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<E_MiniGameResult>  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_ExecuteMiniGameResultEvent(TEnumAsByte<E_MiniGameResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.ExecuteMiniGameResultEvent");

	ABP_MiniGameBase_C_ExecuteMiniGameResultEvent_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.IsPlayMiniGame
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGameBase_C::STATIC_IsPlayMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.IsPlayMiniGame");

	ABP_MiniGameBase_C_IsPlayMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.IsDebugMiniGameDisplayLog
// (NetReliable, NetResponse, Static, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniGameBase_C::STATIC_IsDebugMiniGameDisplayLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.IsDebugMiniGameDisplayLog");

	ABP_MiniGameBase_C_IsDebugMiniGameDisplayLog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.GetMiniGameId
// (Net, NetRequest, NetResponse, Static, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   MiniGameId                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_GetMiniGameId(struct FName* MiniGameId)
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
// (Net, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_DestroyInputControlActor(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.DestroyInputControlActor");

	ABP_MiniGameBase_C_DestroyInputControlActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.SpawnInputControlActor
// (NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ABP_MiniGameInputBase_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_MiniGameInputBase_C* ABP_MiniGameBase_C::STATIC_SpawnInputControlActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.SpawnInputControlActor");

	ABP_MiniGameBase_C_SpawnInputControlActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.UserConstructionScript
// (Net, NetReliable, Exec, Event, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameBase_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.UserConstructionScript");

	ABP_MiniGameBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnLoaded_0E4495544C0CD96838AD9C8CE3CF930B
// (Net, NetReliable, Exec, Event, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_OnLoaded_0E4495544C0CD96838AD9C8CE3CF930B(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnLoaded_0E4495544C0CD96838AD9C8CE3CF930B");

	ABP_MiniGameBase_C_OnLoaded_0E4495544C0CD96838AD9C8CE3CF930B_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.StartMiniGame
// (Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameBase_C::STATIC_StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.StartMiniGame");

	ABP_MiniGameBase_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.EndMiniGame
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameBase_C::STATIC_EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.EndMiniGame");

	ABP_MiniGameBase_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.WinMiniGame
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameBase_C::STATIC_WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.WinMiniGame");

	ABP_MiniGameBase_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.LoseMiniGame
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameBase_C::STATIC_LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.LoseMiniGame");

	ABP_MiniGameBase_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.DrawMiniGame
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameBase_C::STATIC_DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.DrawMiniGame");

	ABP_MiniGameBase_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.EnterMiniGame
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          EnterTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_EnterMiniGame(float EnterTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.EnterMiniGame");

	ABP_MiniGameBase_C_EnterMiniGame_Params params;
	params.EnterTime = EnterTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.RestartMiniGame
// (Net, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameBase_C::STATIC_RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.RestartMiniGame");

	ABP_MiniGameBase_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.FinalizeTalk
// (Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameBase_C::STATIC_FinalizeTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.FinalizeTalk");

	ABP_MiniGameBase_C_FinalizeTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.DecideDetectAction
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.DecideDetectAction");

	ABP_MiniGameBase_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnTalkStart
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class US3TalkComponent*        TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_OnTalkStart(class US3TalkComponent* TalkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnTalkStart");

	ABP_MiniGameBase_C_OnTalkStart_Params params;
	params.TalkComponent = TalkComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnTalkFinished
// (Net, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class US3TalkComponent*        TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           interrupted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_OnTalkFinished(class US3TalkComponent* TalkComponent, bool interrupted)
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
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameBase_C::STATIC_Screen_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.Screen_Player");

	ABP_MiniGameBase_C_Screen_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.Screen_NPC
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameBase_C::STATIC_Screen_NPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.Screen_NPC");

	ABP_MiniGameBase_C_Screen_NPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.SuspendMiniGame
// (Net, NetRequest, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameBase_C::STATIC_SuspendMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.SuspendMiniGame");

	ABP_MiniGameBase_C_SuspendMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.ResumeMiniGame
// (Net, NetRequest, Exec, Event, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ResumeKeyword                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MiniGameBase_C::STATIC_ResumeMiniGame(const struct FString& ResumeKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.ResumeMiniGame");

	ABP_MiniGameBase_C_ResumeMiniGame_Params params;
	params.ResumeKeyword = ResumeKeyword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnTalkScriptEvent
// (NetRequest, Exec, Event, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_OnTalkScriptEvent(int EventNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnTalkScriptEvent");

	ABP_MiniGameBase_C_OnTalkScriptEvent_Params params;
	params.EventNumber = EventNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.ReceiveBeginPlay
// (NetRequest, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameBase_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.ReceiveBeginPlay");

	ABP_MiniGameBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.CancelMiniGame
// (Net, NetReliable, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameBase_C::STATIC_CancelMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.CancelMiniGame");

	ABP_MiniGameBase_C_CancelMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.Event_BindSequencePlayerFinished
// (NetRequest, Native, Event, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ULevelSequencePlayer*    RefSequencePlayer              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_Event_BindSequencePlayerFinished(class ULevelSequencePlayer* RefSequencePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.Event_BindSequencePlayerFinished");

	ABP_MiniGameBase_C_Event_BindSequencePlayerFinished_Params params;
	params.RefSequencePlayer = RefSequencePlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnFinishedSequence
// (NetRequest, Native, Event, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ULevelSequencePlayer*    LevelSequencePlayer            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_OnFinishedSequence(class ULevelSequencePlayer* LevelSequencePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnFinishedSequence");

	ABP_MiniGameBase_C_OnFinishedSequence_Params params;
	params.LevelSequencePlayer = LevelSequencePlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.StopSequenceOnCancel
// (Net, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameBase_C::STATIC_StopSequenceOnCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.StopSequenceOnCancel");

	ABP_MiniGameBase_C_StopSequenceOnCancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.Event_EndMiniGame
// (Native, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameBase_C::STATIC_Event_EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.Event_EndMiniGame");

	ABP_MiniGameBase_C_Event_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.Event_RemoveTimerEvent
// (Native, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameBase_C::STATIC_Event_RemoveTimerEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.Event_RemoveTimerEvent");

	ABP_MiniGameBase_C_Event_RemoveTimerEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.SetInputControlEnabled
// (Net, NetReliable, Native, Event, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_SetInputControlEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.SetInputControlEnabled");

	ABP_MiniGameBase_C_SetInputControlEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.SetEnabledPlayer
// (NetReliable, Native, Event, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_SetEnabledPlayer(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.SetEnabledPlayer");

	ABP_MiniGameBase_C_SetEnabledPlayer_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.ReceiveEndPlay
// (Net, Native, Event, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.ReceiveEndPlay");

	ABP_MiniGameBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.Event_SetEnabledStreamingVolume
// (Net, Native, Event, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_Event_SetEnabledStreamingVolume(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.Event_SetEnabledStreamingVolume");

	ABP_MiniGameBase_C_Event_SetEnabledStreamingVolume_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.Event_OpenHelp
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameBase_C::STATIC_Event_OpenHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.Event_OpenHelp");

	ABP_MiniGameBase_C_Event_OpenHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.Event_SetPlayerVisibleEnabled
// (Native, Event, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_Event_SetPlayerVisibleEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.Event_SetPlayerVisibleEnabled");

	ABP_MiniGameBase_C_Event_SetPlayerVisibleEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.ConsumeGamblePrice
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameBase_C::STATIC_ConsumeGamblePrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.ConsumeGamblePrice");

	ABP_MiniGameBase_C_ConsumeGamblePrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.StartAsyncLoad
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameBase_C::STATIC_StartAsyncLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.StartAsyncLoad");

	ABP_MiniGameBase_C_StartAsyncLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.ChangedClothes
// (NetRequest, Native, NetResponse, Static, Public, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class US3ClothInterface> Interface                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_ChangedClothes(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.ChangedClothes");

	ABP_MiniGameBase_C_ChangedClothes_Params params;
	params.Interface = Interface;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.ApplyClothWet
// (NetReliable, NetRequest, Native, NetResponse, Static, Public, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class US3ClothInterface> Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Wetness                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_ApplyClothWet(const TScriptInterface<class US3ClothInterface>& Target, float Wetness)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.ApplyClothWet");

	ABP_MiniGameBase_C_ApplyClothWet_Params params;
	params.Target = Target;
	params.Wetness = Wetness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.ApplyClothWetCurrentPlayerValue
// (Net, NetRequest, Native, Event, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class US3ClothInterface> Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_ApplyClothWetCurrentPlayerValue(const TScriptInterface<class US3ClothInterface>& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.ApplyClothWetCurrentPlayerValue");

	ABP_MiniGameBase_C_ApplyClothWetCurrentPlayerValue_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.ExecuteUbergraph_BP_MiniGameBase
// (Net, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_ExecuteUbergraph_BP_MiniGameBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.ExecuteUbergraph_BP_MiniGameBase");

	ABP_MiniGameBase_C_ExecuteUbergraph_BP_MiniGameBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnFinishedAsyncLoad__DelegateSignature
// (NetReliable, NetRequest, NetResponse, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameBase_C::STATIC_OnFinishedAsyncLoad__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnFinishedAsyncLoad__DelegateSignature");

	ABP_MiniGameBase_C_OnFinishedAsyncLoad__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnSequencePlayerFinishedDispatcher__DelegateSignature
// (NetReliable, NetRequest, NetResponse, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameBase_C::STATIC_OnSequencePlayerFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnSequencePlayerFinishedDispatcher__DelegateSignature");

	ABP_MiniGameBase_C_OnSequencePlayerFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnScriptEventMiniGameDispatcher__DelegateSignature
// (NetReliable, NetRequest, NetResponse, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_OnScriptEventMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame, int EventNumber)
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
// (Net, NetRequest, NetResponse, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_OnRestartMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnRestartMiniGameDispatcher__DelegateSignature");

	ABP_MiniGameBase_C_OnRestartMiniGameDispatcher__DelegateSignature_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnFinishedEnterMiniGameDispatcher__DelegateSignature
// (Net, NetRequest, NetResponse, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_OnFinishedEnterMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnFinishedEnterMiniGameDispatcher__DelegateSignature");

	ABP_MiniGameBase_C_OnFinishedEnterMiniGameDispatcher__DelegateSignature_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnEnterMiniGameDispatcher__DelegateSignature
// (Net, NetRequest, NetResponse, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_OnEnterMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnEnterMiniGameDispatcher__DelegateSignature");

	ABP_MiniGameBase_C_OnEnterMiniGameDispatcher__DelegateSignature_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnDrawMiniGameDispatcher__DelegateSignature
// (Net, NetRequest, NetResponse, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_OnDrawMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnDrawMiniGameDispatcher__DelegateSignature");

	ABP_MiniGameBase_C_OnDrawMiniGameDispatcher__DelegateSignature_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnLoseMiniGameDispatcher__DelegateSignature
// (NetRequest, NetResponse, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_OnLoseMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnLoseMiniGameDispatcher__DelegateSignature");

	ABP_MiniGameBase_C_OnLoseMiniGameDispatcher__DelegateSignature_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnWinMiniGameDispatcher__DelegateSignature
// (NetRequest, NetResponse, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_OnWinMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnWinMiniGameDispatcher__DelegateSignature");

	ABP_MiniGameBase_C_OnWinMiniGameDispatcher__DelegateSignature_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnEndMiniGameDispatcher__DelegateSignature
// (NetRequest, NetResponse, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_OnEndMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBase.BP_MiniGameBase_C.OnEndMiniGameDispatcher__DelegateSignature");

	ABP_MiniGameBase_C_OnEndMiniGameDispatcher__DelegateSignature_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBase.BP_MiniGameBase_C.OnStartMiniGameDispatcher__DelegateSignature
// (NetRequest, NetResponse, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBase_C::STATIC_OnStartMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame)
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

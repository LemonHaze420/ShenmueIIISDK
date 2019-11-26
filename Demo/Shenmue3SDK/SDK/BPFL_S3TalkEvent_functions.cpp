
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

// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.GetEventStartIndex
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3TalkEvent_C::STATIC_GetEventStartIndex(class UObject* __WorldContext, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.GetEventStartIndex");

	UBPFL_S3TalkEvent_C_GetEventStartIndex_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.InRange
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FInt32Range             intRange                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isInRange                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3TalkEvent_C::STATIC_InRange(int InValue, const struct FInt32Range& intRange, class UObject* __WorldContext, bool* isInRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.InRange");

	UBPFL_S3TalkEvent_C_InRange_Params params;
	params.InValue = InValue;
	params.intRange = intRange;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isInRange != nullptr)
		*isInRange = params.isInRange;
}


// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.SetBsEnable
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TargetCharaId                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3TalkEvent_C::STATIC_SetBsEnable(const struct FName& TargetCharaId, bool Enable, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.SetBsEnable");

	UBPFL_S3TalkEvent_C_SetBsEnable_Params params;
	params.TargetCharaId = TargetCharaId;
	params.Enable = Enable;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.SetBsCount
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TargetCharaId                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EventCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3TalkEvent_C::STATIC_SetBsCount(const struct FName& TargetCharaId, int EventCount, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.SetBsCount");

	UBPFL_S3TalkEvent_C_SetBsCount_Params params;
	params.TargetCharaId = TargetCharaId;
	params.EventCount = EventCount;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.IsCheckTalkSitMotion
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOutputLog                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPlaySit                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3TalkEvent_C::STATIC_IsCheckTalkSitMotion(class AActor* SitActor, class AActor* TargetActor, bool bOutputLog, class UObject* __WorldContext, bool* bPlaySit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.IsCheckTalkSitMotion");

	UBPFL_S3TalkEvent_C_IsCheckTalkSitMotion_Params params;
	params.SitActor = SitActor;
	params.TargetActor = TargetActor;
	params.bOutputLog = bOutputLog;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPlaySit != nullptr)
		*bPlaySit = params.bPlaySit;
}


// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.GetTalkStartIndex
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3TalkEvent_C::STATIC_GetTalkStartIndex(class UObject* __WorldContext, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.GetTalkStartIndex");

	UBPFL_S3TalkEvent_C_GetTalkStartIndex_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.HintTalkStart
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TalkTargetNPC                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTalkScript*             TalkScript                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  CurrentTargetActor             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Error                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3TalkEvent_C::STATIC_HintTalkStart(class AActor* TalkTargetNPC, class UTalkScript* TalkScript, class AActor* CurrentTargetActor, class UObject* __WorldContext, bool* Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.HintTalkStart");

	UBPFL_S3TalkEvent_C_HintTalkStart_Params params;
	params.TalkTargetNPC = TalkTargetNPC;
	params.TalkScript = TalkScript;
	params.CurrentTargetActor = CurrentTargetActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Error != nullptr)
		*Error = params.Error;
}


// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.AC_StartFromScript
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTalkScript*             TalkScript                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3TalkEvent_C::STATIC_AC_StartFromScript(class UTalkScript* TalkScript, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.AC_StartFromScript");

	UBPFL_S3TalkEvent_C_AC_StartFromScript_Params params;
	params.TalkScript = TalkScript;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.TryTalkStartByActor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3TalkEvent_C::STATIC_TryTalkStartByActor(class AActor* TargetActor, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.TryTalkStartByActor");

	UBPFL_S3TalkEvent_C_TryTalkStartByActor_Params params;
	params.TargetActor = TargetActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.IsLineSight
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacter*              Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3TalkEvent_C::STATIC_IsLineSight(class ACharacter* Player, class ACharacter* NPC, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.IsLineSight");

	UBPFL_S3TalkEvent_C_IsLineSight_Params params;
	params.Player = Player;
	params.NPC = NPC;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.IsEjectFromTalkCamera
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3TalkEvent_C::STATIC_IsEjectFromTalkCamera(class UObject* __WorldContext, bool* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.IsEjectFromTalkCamera");

	UBPFL_S3TalkEvent_C_IsEjectFromTalkCamera_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.PossessTalkCamera
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3TalkEvent_C::STATIC_PossessTalkCamera(class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.PossessTalkCamera");

	UBPFL_S3TalkEvent_C_PossessTalkCamera_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.EjectFromTalkCamera
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3TalkEvent_C::STATIC_EjectFromTalkCamera(class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.EjectFromTalkCamera");

	UBPFL_S3TalkEvent_C_EjectFromTalkCamera_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.RunTalkEvent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NpcActors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isBS                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTalkScript*             TalkScript                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBPC_S3_TalkComponent_C* TalkComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ENPCTalkState                  TalkState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_S3TalkEvent_C::STATIC_RunTalkEvent(class AActor* NpcActors, bool isBS, class UTalkScript* TalkScript, class UBPC_S3_TalkComponent_C* TalkComponent, ENPCTalkState TalkState, class UObject* __WorldContext, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_S3TalkEvent.BPFL_S3TalkEvent_C.RunTalkEvent");

	UBPFL_S3TalkEvent_C_RunTalkEvent_Params params;
	params.NpcActors = NpcActors;
	params.isBS = isBS;
	params.TalkScript = TalkScript;
	params.TalkComponent = TalkComponent;
	params.TalkState = TalkState;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

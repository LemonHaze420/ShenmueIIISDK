
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

// Function BPF_Talk.BPF_Talk_C.IsCharacterReadyAC
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReady                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Talk_C::STATIC_IsCharacterReadyAC(class AActor* TargetCharacter, class UObject* __WorldContext, bool* bReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Talk.BPF_Talk_C.IsCharacterReadyAC");

	UBPF_Talk_C_IsCharacterReadyAC_Params params;
	params.TargetCharacter = TargetCharacter;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bReady != nullptr)
		*bReady = params.bReady;
}


// Function BPF_Talk.BPF_Talk_C.IsCharacterReadyTalk
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TalkTo                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReady                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Talk_C::STATIC_IsCharacterReadyTalk(class AActor* TargetCharacter, class AActor* TalkTo, class UObject* __WorldContext, bool* bReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Talk.BPF_Talk_C.IsCharacterReadyTalk");

	UBPF_Talk_C_IsCharacterReadyTalk_Params params;
	params.TargetCharacter = TargetCharacter;
	params.TalkTo = TalkTo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bReady != nullptr)
		*bReady = params.bReady;
}


// Function BPF_Talk.BPF_Talk_C.getS3TalkEventManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_TalkEventManager_C*  TalkEventManager               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Talk_C::STATIC_getS3TalkEventManager(class UObject* __WorldContext, class ABP_TalkEventManager_C** TalkEventManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Talk.BPF_Talk_C.getS3TalkEventManager");

	UBPF_Talk_C_getS3TalkEventManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TalkEventManager != nullptr)
		*TalkEventManager = params.TalkEventManager;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

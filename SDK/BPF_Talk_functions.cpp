
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

// Function BPF_Talk.BPF_Talk_C.IsCharacterReadyAC
// (Exec, NetResponse, Public, Private, Delegate, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  TargetCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReady                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Talk_C::IsCharacterReadyAC(class AActor* TargetCharacter, class UObject* __WorldContext, bool* bReady)
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
// (Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bReady != nullptr)
		*bReady = params.bReady;
}


// Function BPF_Talk.BPF_Talk_C.getS3TalkEventManager
// (NetReliable, NetRequest, Event, NetMulticast, Delegate, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_TalkEventManager_C*  TalkEventManager               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Talk_C::getS3TalkEventManager(class UObject* __WorldContext, class ABP_TalkEventManager_C** TalkEventManager)
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

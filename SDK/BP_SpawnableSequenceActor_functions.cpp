
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

// Function BP_SpawnableSequenceActor.BP_SpawnableSequenceActor_C.UserConstructionScript
// (NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_SpawnableSequenceActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnableSequenceActor.BP_SpawnableSequenceActor_C.UserConstructionScript");

	ABP_SpawnableSequenceActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnableSequenceActor.BP_SpawnableSequenceActor_C.PlaySequenece
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bRestart                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawnableSequenceActor_C::STATIC_PlaySequenece(bool bRestart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnableSequenceActor.BP_SpawnableSequenceActor_C.PlaySequenece");

	ABP_SpawnableSequenceActor_C_PlaySequenece_Params params;
	params.bRestart = bRestart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnableSequenceActor.BP_SpawnableSequenceActor_C.PlayLoopingSequenece
// (NetReliable, NetRequest, Native, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bRestart                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoops                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawnableSequenceActor_C::PlayLoopingSequenece(bool bRestart, int NumLoops)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnableSequenceActor.BP_SpawnableSequenceActor_C.PlayLoopingSequenece");

	ABP_SpawnableSequenceActor_C_PlayLoopingSequenece_Params params;
	params.bRestart = bRestart;
	params.NumLoops = NumLoops;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnableSequenceActor.BP_SpawnableSequenceActor_C.StopSequenece
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, HasDefaults, DLLImport, BlueprintEvent)

void ABP_SpawnableSequenceActor_C::STATIC_StopSequenece()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnableSequenceActor.BP_SpawnableSequenceActor_C.StopSequenece");

	ABP_SpawnableSequenceActor_C_StopSequenece_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnableSequenceActor.BP_SpawnableSequenceActor_C.PauseSequence
// (Net, NetReliable, NetRequest, Exec, Native, Public, Private, HasDefaults, DLLImport, BlueprintEvent)

void ABP_SpawnableSequenceActor_C::PauseSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnableSequenceActor.BP_SpawnableSequenceActor_C.PauseSequence");

	ABP_SpawnableSequenceActor_C_PauseSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnableSequenceActor.BP_SpawnableSequenceActor_C.ExecuteUbergraph_BP_SpawnableSequenceActor
// (Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawnableSequenceActor_C::STATIC_ExecuteUbergraph_BP_SpawnableSequenceActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnableSequenceActor.BP_SpawnableSequenceActor_C.ExecuteUbergraph_BP_SpawnableSequenceActor");

	ABP_SpawnableSequenceActor_C_ExecuteUbergraph_BP_SpawnableSequenceActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.GetRandomScript
// (NetResponse, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_S3ChobuChanSpawner_C::GetRandomScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.GetRandomScript");

	ABP_S3ChobuChanSpawner_C_GetRandomScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.IsLooking
// (NetRequest, Event, NetResponse, Static, MulticastDelegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Look                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ChobuChanSpawner_C::STATIC_IsLooking(bool* Look)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.IsLooking");

	ABP_S3ChobuChanSpawner_C_IsLooking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Look != nullptr)
		*Look = params.Look;
}


// Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.UserConstructionScript
// (NetReliable, NetMulticast, MulticastDelegate, Private, Protected, Delegate)

void ABP_S3ChobuChanSpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.UserConstructionScript");

	ABP_S3ChobuChanSpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.UniqueActionOnFind
// (NetReliable, NetRequest, Exec, Native, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_S3ChobuChanSpawner_C::UniqueActionOnFind()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.UniqueActionOnFind");

	ABP_S3ChobuChanSpawner_C_UniqueActionOnFind_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.ForceFindSelf
// (Net, NetRequest, Exec, Native, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_S3ChobuChanSpawner_C::ForceFindSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.ForceFindSelf");

	ABP_S3ChobuChanSpawner_C_ForceFindSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.SetEnabledHelp
// (Net, NetReliable, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ChobuChanSpawner_C::STATIC_SetEnabledHelp(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.SetEnabledHelp");

	ABP_S3ChobuChanSpawner_C_SetEnabledHelp_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.UpdateEffect
// (NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Current                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ChobuChanSpawner_C::UpdateEffect(float Value, bool Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.UpdateEffect");

	ABP_S3ChobuChanSpawner_C_UpdateEffect_Params params;
	params.Value = Value;
	params.Current = Current;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.CreateEffect
// (NetRequest, Exec, Native, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_S3ChobuChanSpawner_C::CreateEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.CreateEffect");

	ABP_S3ChobuChanSpawner_C_CreateEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.ReceiveBeginPlay
// (Net, NetReliable, Exec, Native, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_S3ChobuChanSpawner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.ReceiveBeginPlay");

	ABP_S3ChobuChanSpawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.FindEvent
// (Net, NetReliable, Exec, Native, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_S3ChobuChanSpawner_C::FindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.FindEvent");

	ABP_S3ChobuChanSpawner_C_FindEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.ExecuteUbergraph_BP_S3ChobuChanSpawner
// (Native, NetMulticast, Public, Private, Protected, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ChobuChanSpawner_C::ExecuteUbergraph_BP_S3ChobuChanSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.ExecuteUbergraph_BP_S3ChobuChanSpawner");

	ABP_S3ChobuChanSpawner_C_ExecuteUbergraph_BP_S3ChobuChanSpawner_Params params;
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

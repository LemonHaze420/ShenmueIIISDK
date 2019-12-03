
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

// Function BP_ACProcessActor.BP_ACProcessActor_C.CheckPrepare
// (Net, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Private, Protected, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Complete                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ACProcessActor_C::CheckPrepare(bool* Complete)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACProcessActor.BP_ACProcessActor_C.CheckPrepare");

	ABP_ACProcessActor_C_CheckPrepare_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Complete != nullptr)
		*Complete = params.Complete;
}


// Function BP_ACProcessActor.BP_ACProcessActor_C.Finalize
// (NetRequest, Exec, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, Const)

void ABP_ACProcessActor_C::STATIC_Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACProcessActor.BP_ACProcessActor_C.Finalize");

	ABP_ACProcessActor_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACProcessActor.BP_ACProcessActor_C.CheckLeadCharacter
// (Net, NetRequest, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, Const)

void ABP_ACProcessActor_C::STATIC_CheckLeadCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACProcessActor.BP_ACProcessActor_C.CheckLeadCharacter");

	ABP_ACProcessActor_C_CheckLeadCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACProcessActor.BP_ACProcessActor_C.LoadLevels
// (Net, NetMulticast, MulticastDelegate, Private, Protected, NetClient, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ACProcessActor_C::LoadLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACProcessActor.BP_ACProcessActor_C.LoadLevels");

	ABP_ACProcessActor_C_LoadLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ACProcessActor.BP_ACProcessActor_C.UserConstructionScript
// (Exec, Event, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_ACProcessActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACProcessActor.BP_ACProcessActor_C.UserConstructionScript");

	ABP_ACProcessActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACProcessActor.BP_ACProcessActor_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_ACProcessActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACProcessActor.BP_ACProcessActor_C.ReceiveBeginPlay");

	ABP_ACProcessActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACProcessActor.BP_ACProcessActor_C.ReceiveTick
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ACProcessActor_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACProcessActor.BP_ACProcessActor_C.ReceiveTick");

	ABP_ACProcessActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACProcessActor.BP_ACProcessActor_C.ReceiveEndPlay
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ACProcessActor_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACProcessActor.BP_ACProcessActor_C.ReceiveEndPlay");

	ABP_ACProcessActor_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACProcessActor.BP_ACProcessActor_C.HideLoading
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_ACProcessActor_C::HideLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACProcessActor.BP_ACProcessActor_C.HideLoading");

	ABP_ACProcessActor_C_HideLoading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACProcessActor.BP_ACProcessActor_C.LevelLoaded
// (NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ACProcessActor_C::LevelLoaded(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACProcessActor.BP_ACProcessActor_C.LevelLoaded");

	ABP_ACProcessActor_C_LevelLoaded_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACProcessActor.BP_ACProcessActor_C.ExecuteUbergraph_BP_ACProcessActor
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ACProcessActor_C::STATIC_ExecuteUbergraph_BP_ACProcessActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACProcessActor.BP_ACProcessActor_C.ExecuteUbergraph_BP_ACProcessActor");

	ABP_ACProcessActor_C_ExecuteUbergraph_BP_ACProcessActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACProcessActor.BP_ACProcessActor_C.OnStartPlay__DelegateSignature
// (Exec, Event, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_ACProcessActor_C::OnStartPlay__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACProcessActor.BP_ACProcessActor_C.OnStartPlay__DelegateSignature");

	ABP_ACProcessActor_C_OnStartPlay__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function BP_ACProcessActor.BP_ACProcessActor_C.CheckPrepare
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Complete                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ACProcessActor_C::CheckPrepare(bool* Complete)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACProcessActor.BP_ACProcessActor_C.CheckPrepare");

	ABP_ACProcessActor_C_CheckPrepare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Complete != nullptr)
		*Complete = params.Complete;
}


// Function BP_ACProcessActor.BP_ACProcessActor_C.Finalize
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_ACProcessActor_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACProcessActor.BP_ACProcessActor_C.Finalize");

	ABP_ACProcessActor_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACProcessActor.BP_ACProcessActor_C.CheckLeadCharacter
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_ACProcessActor_C::CheckLeadCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACProcessActor.BP_ACProcessActor_C.CheckLeadCharacter");

	ABP_ACProcessActor_C_CheckLeadCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACProcessActor.BP_ACProcessActor_C.LoadLevels
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ACProcessActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACProcessActor.BP_ACProcessActor_C.UserConstructionScript");

	ABP_ACProcessActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACProcessActor.BP_ACProcessActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ACProcessActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACProcessActor.BP_ACProcessActor_C.ReceiveBeginPlay");

	ABP_ACProcessActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACProcessActor.BP_ACProcessActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ACProcessActor_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACProcessActor.BP_ACProcessActor_C.ReceiveTick");

	ABP_ACProcessActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACProcessActor.BP_ACProcessActor_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ACProcessActor_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACProcessActor.BP_ACProcessActor_C.ReceiveEndPlay");

	ABP_ACProcessActor_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACProcessActor.BP_ACProcessActor_C.HideLoading
// (BlueprintCallable, BlueprintEvent)

void ABP_ACProcessActor_C::HideLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACProcessActor.BP_ACProcessActor_C.HideLoading");

	ABP_ACProcessActor_C_HideLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACProcessActor.BP_ACProcessActor_C.LevelLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ACProcessActor_C::LevelLoaded(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACProcessActor.BP_ACProcessActor_C.LevelLoaded");

	ABP_ACProcessActor_C_LevelLoaded_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACProcessActor.BP_ACProcessActor_C.ExecuteUbergraph_BP_ACProcessActor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ACProcessActor_C::ExecuteUbergraph_BP_ACProcessActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACProcessActor.BP_ACProcessActor_C.ExecuteUbergraph_BP_ACProcessActor");

	ABP_ACProcessActor_C_ExecuteUbergraph_BP_ACProcessActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ACProcessActor.BP_ACProcessActor_C.OnStartPlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

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


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

// Function BP_HideActorByCondition.BP_HideActorByCondition_C.UpdateCondition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHideActorConditions> ConditionsType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 IdMin                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 IdMax                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HideActorByCondition_C::UpdateCondition(TEnumAsByte<EHideActorConditions> ConditionsType, const struct FString& IdMin, const struct FString& IdMax, int Option, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideActorByCondition.BP_HideActorByCondition_C.UpdateCondition");

	UBP_HideActorByCondition_C_UpdateCondition_Params params;
	params.ConditionsType = ConditionsType;
	params.IdMin = IdMin;
	params.IdMax = IdMax;
	params.Option = Option;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideActorByCondition.BP_HideActorByCondition_C.SetupEventStep
// (Protected, BlueprintCallable, BlueprintEvent)

void UBP_HideActorByCondition_C::SetupEventStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideActorByCondition.BP_HideActorByCondition_C.SetupEventStep");

	UBP_HideActorByCondition_C_SetupEventStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideActorByCondition.BP_HideActorByCondition_C.HideMyOwner
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HideActorByCondition_C::HideMyOwner(bool Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideActorByCondition.BP_HideActorByCondition_C.HideMyOwner");

	UBP_HideActorByCondition_C_HideMyOwner_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideActorByCondition.BP_HideActorByCondition_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_HideActorByCondition_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideActorByCondition.BP_HideActorByCondition_C.ReceiveBeginPlay");

	UBP_HideActorByCondition_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideActorByCondition.BP_HideActorByCondition_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HideActorByCondition_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideActorByCondition.BP_HideActorByCondition_C.ReceiveTick");

	UBP_HideActorByCondition_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideActorByCondition.BP_HideActorByCondition_C.ChangeStep
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SetSteps                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HideActorByCondition_C::ChangeStep(int SetSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideActorByCondition.BP_HideActorByCondition_C.ChangeStep");

	UBP_HideActorByCondition_C_ChangeStep_Params params;
	params.SetSteps = SetSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideActorByCondition.BP_HideActorByCondition_C.ChangeItemNum
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HideActorByCondition_C::ChangeItemNum(const struct FName& ItemId, int NewNum, int OldNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideActorByCondition.BP_HideActorByCondition_C.ChangeItemNum");

	UBP_HideActorByCondition_C_ChangeItemNum_Params params;
	params.ItemId = ItemId;
	params.NewNum = NewNum;
	params.OldNum = OldNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideActorByCondition.BP_HideActorByCondition_C.ChangeFlag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HideActorByCondition_C::ChangeFlag(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideActorByCondition.BP_HideActorByCondition_C.ChangeFlag");

	UBP_HideActorByCondition_C_ChangeFlag_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideActorByCondition.BP_HideActorByCondition_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HideActorByCondition_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideActorByCondition.BP_HideActorByCondition_C.ReceiveEndPlay");

	UBP_HideActorByCondition_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideActorByCondition.BP_HideActorByCondition_C.UnbindEvent
// (BlueprintCallable, BlueprintEvent)

void UBP_HideActorByCondition_C::UnbindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideActorByCondition.BP_HideActorByCondition_C.UnbindEvent");

	UBP_HideActorByCondition_C_UnbindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideActorByCondition.BP_HideActorByCondition_C.SetUpEvent
// (BlueprintCallable, BlueprintEvent)

void UBP_HideActorByCondition_C::SetUpEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideActorByCondition.BP_HideActorByCondition_C.SetUpEvent");

	UBP_HideActorByCondition_C_SetUpEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HideActorByCondition.BP_HideActorByCondition_C.ExecuteUbergraph_BP_HideActorByCondition
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HideActorByCondition_C::ExecuteUbergraph_BP_HideActorByCondition(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HideActorByCondition.BP_HideActorByCondition_C.ExecuteUbergraph_BP_HideActorByCondition");

	UBP_HideActorByCondition_C_ExecuteUbergraph_BP_HideActorByCondition_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

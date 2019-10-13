
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

// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.ShouldSetPlayerBehavior
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_FoodTutorialEvent_C::ShouldSetPlayerBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.ShouldSetPlayerBehavior");

	ABP_FoodTutorialEvent_C_ShouldSetPlayerBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FoodTutorialEvent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.UserConstructionScript");

	ABP_FoodTutorialEvent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FoodTutorialEvent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.ReceiveBeginPlay");

	ABP_FoodTutorialEvent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FoodTutorialEvent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.ReceiveEndPlay");

	ABP_FoodTutorialEvent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.EnablePlayerInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FoodTutorialEvent_C::EnablePlayerInput(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.EnablePlayerInput");

	ABP_FoodTutorialEvent_C_EnablePlayerInput_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.BindDIalogFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Bind                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FoodTutorialEvent_C::BindDIalogFinish(bool Bind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.BindDIalogFinish");

	ABP_FoodTutorialEvent_C_BindDIalogFinish_Params params;
	params.Bind = Bind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.StartPause
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Pause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FoodTutorialEvent_C::StartPause(bool Pause)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.StartPause");

	ABP_FoodTutorialEvent_C_StartPause_Params params;
	params.Pause = Pause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.OnDialogClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FoodTutorialEvent_C::OnDialogClose(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.OnDialogClose");

	ABP_FoodTutorialEvent_C_OnDialogClose_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.ExecuteUbergraph_BP_FoodTutorialEvent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FoodTutorialEvent_C::ExecuteUbergraph_BP_FoodTutorialEvent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.ExecuteUbergraph_BP_FoodTutorialEvent");

	ABP_FoodTutorialEvent_C_ExecuteUbergraph_BP_FoodTutorialEvent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.ShouldSetPlayerBehavior
// (NetReliable, Exec, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_FoodTutorialEvent_C::STATIC_ShouldSetPlayerBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.ShouldSetPlayerBehavior");

	ABP_FoodTutorialEvent_C_ShouldSetPlayerBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.UserConstructionScript
// (Net, NetReliable, Native, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_FoodTutorialEvent_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.UserConstructionScript");

	ABP_FoodTutorialEvent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.ReceiveBeginPlay
// (NetReliable, Event, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_FoodTutorialEvent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.ReceiveBeginPlay");

	ABP_FoodTutorialEvent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.ReceiveEndPlay
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FoodTutorialEvent_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.ReceiveEndPlay");

	ABP_FoodTutorialEvent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.EnablePlayerInput
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FoodTutorialEvent_C::STATIC_EnablePlayerInput(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.EnablePlayerInput");

	ABP_FoodTutorialEvent_C_EnablePlayerInput_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.BindDIalogFinish
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           Bind                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FoodTutorialEvent_C::STATIC_BindDIalogFinish(bool Bind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.BindDIalogFinish");

	ABP_FoodTutorialEvent_C_BindDIalogFinish_Params params;
	params.Bind = Bind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.StartPause
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           Pause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FoodTutorialEvent_C::STATIC_StartPause(bool Pause)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.StartPause");

	ABP_FoodTutorialEvent_C_StartPause_Params params;
	params.Pause = Pause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.OnDialogClose
// (Net, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FoodTutorialEvent_C::STATIC_OnDialogClose(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.OnDialogClose");

	ABP_FoodTutorialEvent_C_OnDialogClose_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FoodTutorialEvent.BP_FoodTutorialEvent_C.ExecuteUbergraph_BP_FoodTutorialEvent
// (NetReliable, Static, NetMulticast, MulticastDelegate, Protected, NetServer, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FoodTutorialEvent_C::STATIC_ExecuteUbergraph_BP_FoodTutorialEvent(int EntryPoint)
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

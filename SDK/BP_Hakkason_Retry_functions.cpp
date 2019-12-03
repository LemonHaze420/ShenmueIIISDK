
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

// Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.StopSetGameTime
// (Net, NetRequest, Exec, Event, Public, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_Hakkason_Retry_C::StopSetGameTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.StopSetGameTime");

	ABP_Hakkason_Retry_C_StopSetGameTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.InitSet
// (Exec, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           Need_EndFade                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Qte_Retry                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Battle_Start_Energy            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Battle_ID_Name                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FilterID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_Retry_C::InitSet(bool Need_EndFade, bool Qte_Retry, float Battle_Start_Energy, const struct FName& Battle_ID_Name, const struct FName& FilterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.InitSet");

	ABP_Hakkason_Retry_C_InitSet_Params params;
	params.Need_EndFade = Need_EndFade;
	params.Qte_Retry = Qte_Retry;
	params.Battle_Start_Energy = Battle_Start_Energy;
	params.Battle_ID_Name = Battle_ID_Name;
	params.FilterID = FilterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.UserConstructionScript
// (Net, NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Hakkason_Retry_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.UserConstructionScript");

	ABP_Hakkason_Retry_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.InpActEvt_SearchTopButton_K2Node_InputActionEvent_8
// (Net, NetReliable, NetRequest, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Hakkason_Retry_C::STATIC_InpActEvt_SearchTopButton_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.InpActEvt_SearchTopButton_K2Node_InputActionEvent_8");

	ABP_Hakkason_Retry_C_InpActEvt_SearchTopButton_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.InpActEvt_SearchLeftButton_K2Node_InputActionEvent_7
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Hakkason_Retry_C::STATIC_InpActEvt_SearchLeftButton_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.InpActEvt_SearchLeftButton_K2Node_InputActionEvent_7");

	ABP_Hakkason_Retry_C_InpActEvt_SearchLeftButton_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_6
// (Net, NetRequest, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Hakkason_Retry_C::STATIC_InpActEvt_SearchRightButton_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_6");

	ABP_Hakkason_Retry_C_InpActEvt_SearchRightButton_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_5
// (Net, NetReliable, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Hakkason_Retry_C::STATIC_InpActEvt_SearchBottomButton_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_5");

	ABP_Hakkason_Retry_C_InpActEvt_SearchBottomButton_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.ReceiveTick
// (Net, NetReliable, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_Retry_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.ReceiveTick");

	ABP_Hakkason_Retry_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.RenewalActorCount
// (Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_MainFlowActorID> ActorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  RenewalCounter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_Retry_C::STATIC_RenewalActorCount(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.RenewalActorCount");

	ABP_Hakkason_Retry_C_RenewalActorCount_Params params;
	params.ActorId = ActorId;
	params.RenewalCounter = RenewalCounter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.TickChangeCheckKill
// (Net, Exec, Event, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_Hakkason_Retry_C::TickChangeCheckKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.TickChangeCheckKill");

	ABP_Hakkason_Retry_C_TickChangeCheckKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.ExecuteUbergraph_BP_Hakkason_Retry
// (Exec, Native, NetResponse, Static, Private, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_Retry_C::STATIC_ExecuteUbergraph_BP_Hakkason_Retry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_Retry.BP_Hakkason_Retry_C.ExecuteUbergraph_BP_Hakkason_Retry");

	ABP_Hakkason_Retry_C_ExecuteUbergraph_BP_Hakkason_Retry_Params params;
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

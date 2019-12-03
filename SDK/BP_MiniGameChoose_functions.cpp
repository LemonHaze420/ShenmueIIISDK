
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

// Function BP_MiniGameChoose.BP_MiniGameChoose_C.GetPriority
// (Net, NetRequest, Exec, Native, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_MiniGameChoose_C::GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.GetPriority");

	ABP_MiniGameChoose_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameChoose.BP_MiniGameChoose_C.GetDetectAction
// (Net, NetReliable, NetRequest, Native, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_MiniGameChoose_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.GetDetectAction");

	ABP_MiniGameChoose_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameChoose.BP_MiniGameChoose_C.FinalizeMoneyInfo
// (NetResponse, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGameChoose_C::FinalizeMoneyInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.FinalizeMoneyInfo");

	ABP_MiniGameChoose_C_FinalizeMoneyInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose.BP_MiniGameChoose_C.InitializeMoneyInfo
// (Net, NetReliable, Exec, Event, NetResponse, NetMulticast, Public, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGameChoose_C::InitializeMoneyInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.InitializeMoneyInfo");

	ABP_MiniGameChoose_C_InitializeMoneyInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose.BP_MiniGameChoose_C.UpdateOnePriceInfo
// (NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameChoose_C::UpdateOnePriceInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.UpdateOnePriceInfo");

	ABP_MiniGameChoose_C_UpdateOnePriceInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose.BP_MiniGameChoose_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Exec, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameChoose_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.UserConstructionScript");

	ABP_MiniGameChoose_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose.BP_MiniGameChoose_C.DecideDetectAction
// (Net, NetReliable, NetRequest, Exec, Native, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChoose_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.DecideDetectAction");

	ABP_MiniGameChoose_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose.BP_MiniGameChoose_C.ReceiveBeginPlay
// (Exec, Native, Event, NetResponse, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameChoose_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.ReceiveBeginPlay");

	ABP_MiniGameChoose_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose.BP_MiniGameChoose_C.ReceiveTick
// (Net, NetReliable, NetRequest, Exec, Native, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChoose_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.ReceiveTick");

	ABP_MiniGameChoose_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose.BP_MiniGameChoose_C.ReceiveEndPlay
// (NetReliable, NetRequest, Exec, Native, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChoose_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.ReceiveEndPlay");

	ABP_MiniGameChoose_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose.BP_MiniGameChoose_C.ExecuteUbergraph_BP_MiniGameChoose
// (Net, NetResponse, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChoose_C::ExecuteUbergraph_BP_MiniGameChoose(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.ExecuteUbergraph_BP_MiniGameChoose");

	ABP_MiniGameChoose_C_ExecuteUbergraph_BP_MiniGameChoose_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose.BP_MiniGameChoose_C.OnCancelMiniGameDispatcher__DelegateSignature
// (Native, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameChoose_C::STATIC_OnCancelMiniGameDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.OnCancelMiniGameDispatcher__DelegateSignature");

	ABP_MiniGameChoose_C_OnCancelMiniGameDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose.BP_MiniGameChoose_C.OnChooseMiniGameDispatcher__DelegateSignature
// (Native, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  ChooseActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChoose_C::STATIC_OnChooseMiniGameDispatcher__DelegateSignature(class AActor* ChooseActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.OnChooseMiniGameDispatcher__DelegateSignature");

	ABP_MiniGameChoose_C_OnChooseMiniGameDispatcher__DelegateSignature_Params params;
	params.ChooseActor = ChooseActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

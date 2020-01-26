
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

// Function BP_MiniGameChoose.BP_MiniGameChoose_C.GetPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_MiniGameChoose_C::GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.GetPriority");

	ABP_MiniGameChoose_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameChoose.BP_MiniGameChoose_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_MiniGameChoose_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.GetDetectAction");

	ABP_MiniGameChoose_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameChoose.BP_MiniGameChoose_C.FinalizeMoneyInfo
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameChoose_C::FinalizeMoneyInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.FinalizeMoneyInfo");

	ABP_MiniGameChoose_C_FinalizeMoneyInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose.BP_MiniGameChoose_C.InitializeMoneyInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameChoose_C::InitializeMoneyInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.InitializeMoneyInfo");

	ABP_MiniGameChoose_C_InitializeMoneyInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose.BP_MiniGameChoose_C.UpdateOnePriceInfo
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameChoose_C::UpdateOnePriceInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.UpdateOnePriceInfo");

	ABP_MiniGameChoose_C_UpdateOnePriceInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose.BP_MiniGameChoose_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameChoose_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.UserConstructionScript");

	ABP_MiniGameChoose_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose.BP_MiniGameChoose_C.DecideDetectAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChoose_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.DecideDetectAction");

	ABP_MiniGameChoose_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose.BP_MiniGameChoose_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGameChoose_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.ReceiveBeginPlay");

	ABP_MiniGameChoose_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose.BP_MiniGameChoose_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChoose_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.ReceiveTick");

	ABP_MiniGameChoose_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose.BP_MiniGameChoose_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChoose_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.ReceiveEndPlay");

	ABP_MiniGameChoose_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose.BP_MiniGameChoose_C.ExecuteUbergraph_BP_MiniGameChoose
// (HasDefaults)
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
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameChoose_C::OnCancelMiniGameDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.OnCancelMiniGameDispatcher__DelegateSignature");

	ABP_MiniGameChoose_C_OnCancelMiniGameDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChoose.BP_MiniGameChoose_C.OnChooseMiniGameDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ChooseActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChoose_C::OnChooseMiniGameDispatcher__DelegateSignature(class AActor* ChooseActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChoose.BP_MiniGameChoose_C.OnChooseMiniGameDispatcher__DelegateSignature");

	ABP_MiniGameChoose_C_OnChooseMiniGameDispatcher__DelegateSignature_Params params;
	params.ChooseActor = ChooseActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.GetPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_BetMoneyManager_C::GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BetMoneyManager.BP_BetMoneyManager_C.GetPriority");

	ABP_BetMoneyManager_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BetMoneyManager.BP_BetMoneyManager_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_BetMoneyManager_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BetMoneyManager.BP_BetMoneyManager_C.GetDetectAction");

	ABP_BetMoneyManager_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BetMoneyManager.BP_BetMoneyManager_C.GetPlayCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            PlayCount                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BetMoneyManager_C::GetPlayCount(int* PlayCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BetMoneyManager.BP_BetMoneyManager_C.GetPlayCount");

	ABP_BetMoneyManager_C_GetPlayCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayCount != nullptr)
		*PlayCount = params.PlayCount;
}


// Function BP_BetMoneyManager.BP_BetMoneyManager_C.GetBetMoney
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            BetMoney                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BetMoneyManager_C::GetBetMoney(int* BetMoney)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BetMoneyManager.BP_BetMoneyManager_C.GetBetMoney");

	ABP_BetMoneyManager_C_GetBetMoney_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BetMoney != nullptr)
		*BetMoney = params.BetMoney;
}


// Function BP_BetMoneyManager.BP_BetMoneyManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BetMoneyManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BetMoneyManager.BP_BetMoneyManager_C.UserConstructionScript");

	ABP_BetMoneyManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BetMoneyManager.BP_BetMoneyManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BetMoneyManager_C::InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BetMoneyManager.BP_BetMoneyManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8");

	ABP_BetMoneyManager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BetMoneyManager.BP_BetMoneyManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BetMoneyManager_C::InpActEvt_SearchRightSelect_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BetMoneyManager.BP_BetMoneyManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_7");

	ABP_BetMoneyManager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BetMoneyManager.BP_BetMoneyManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BetMoneyManager_C::InpActEvt_SearchUpSelect_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BetMoneyManager.BP_BetMoneyManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_6");

	ABP_BetMoneyManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BetMoneyManager.BP_BetMoneyManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BetMoneyManager_C::InpActEvt_SearchDownSelect_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BetMoneyManager.BP_BetMoneyManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_5");

	ABP_BetMoneyManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BetMoneyManager.BP_BetMoneyManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BetMoneyManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BetMoneyManager.BP_BetMoneyManager_C.ReceiveBeginPlay");

	ABP_BetMoneyManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BetMoneyManager.BP_BetMoneyManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BetMoneyManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BetMoneyManager.BP_BetMoneyManager_C.ReceiveTick");

	ABP_BetMoneyManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BetMoneyManager.BP_BetMoneyManager_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BetMoneyManager_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BetMoneyManager.BP_BetMoneyManager_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1");

	ABP_BetMoneyManager_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BetMoneyManager.BP_BetMoneyManager_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BetMoneyManager_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BetMoneyManager.BP_BetMoneyManager_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3");

	ABP_BetMoneyManager_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BetMoneyManager.BP_BetMoneyManager_C.DecideDetectAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BetMoneyManager_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BetMoneyManager.BP_BetMoneyManager_C.DecideDetectAction");

	ABP_BetMoneyManager_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BetMoneyManager.BP_BetMoneyManager_C.EndBet
// (BlueprintCallable, BlueprintEvent)

void ABP_BetMoneyManager_C::EndBet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BetMoneyManager.BP_BetMoneyManager_C.EndBet");

	ABP_BetMoneyManager_C_EndBet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BetMoneyManager.BP_BetMoneyManager_C.ExecuteUbergraph_BP_BetMoneyManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BetMoneyManager_C::ExecuteUbergraph_BP_BetMoneyManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BetMoneyManager.BP_BetMoneyManager_C.ExecuteUbergraph_BP_BetMoneyManager");

	ABP_BetMoneyManager_C_ExecuteUbergraph_BP_BetMoneyManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BetMoneyManager.BP_BetMoneyManager_C.ED_PreDecideReturn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_BetMoneyManager_C::ED_PreDecideReturn__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BetMoneyManager.BP_BetMoneyManager_C.ED_PreDecideReturn__DelegateSignature");

	ABP_BetMoneyManager_C_ED_PreDecideReturn__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BetMoneyManager.BP_BetMoneyManager_C.ED_PreDecideBet__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_BetMoneyManager_C::ED_PreDecideBet__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BetMoneyManager.BP_BetMoneyManager_C.ED_PreDecideBet__DelegateSignature");

	ABP_BetMoneyManager_C_ED_PreDecideBet__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BetMoneyManager.BP_BetMoneyManager_C.ED_PostDecideReturn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_BetMoneyManager_C::ED_PostDecideReturn__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BetMoneyManager.BP_BetMoneyManager_C.ED_PostDecideReturn__DelegateSignature");

	ABP_BetMoneyManager_C_ED_PostDecideReturn__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BetMoneyManager.BP_BetMoneyManager_C.ED_PostDecideBet__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_BetMoneyManager_C::ED_PostDecideBet__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BetMoneyManager.BP_BetMoneyManager_C.ED_PostDecideBet__DelegateSignature");

	ABP_BetMoneyManager_C_ED_PostDecideBet__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BetMoneyManager.BP_BetMoneyManager_C.ED_DecideCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_BetMoneyManager_C::ED_DecideCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BetMoneyManager.BP_BetMoneyManager_C.ED_DecideCancel__DelegateSignature");

	ABP_BetMoneyManager_C_ED_DecideCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BetMoneyManager.BP_BetMoneyManager_C.ED_DecideMaxBet__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_BetMoneyManager_C::ED_DecideMaxBet__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BetMoneyManager.BP_BetMoneyManager_C.ED_DecideMaxBet__DelegateSignature");

	ABP_BetMoneyManager_C_ED_DecideMaxBet__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BetMoneyManager.BP_BetMoneyManager_C.ED_DecideBetDown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_BetMoneyManager_C::ED_DecideBetDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BetMoneyManager.BP_BetMoneyManager_C.ED_DecideBetDown__DelegateSignature");

	ABP_BetMoneyManager_C_ED_DecideBetDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BetMoneyManager.BP_BetMoneyManager_C.ED_DecideBetUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_BetMoneyManager_C::ED_DecideBetUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BetMoneyManager.BP_BetMoneyManager_C.ED_DecideBetUp__DelegateSignature");

	ABP_BetMoneyManager_C_ED_DecideBetUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.GetPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_S3BetMoneyManager_C::GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.GetPriority");

	ABP_S3BetMoneyManager_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_S3BetMoneyManager_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.GetDetectAction");

	ABP_S3BetMoneyManager_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.CalcPrice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BetMoneyManager_C::CalcPrice(int Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.CalcPrice");

	ABP_S3BetMoneyManager_C_CalcPrice_Params params;
	params.Price = Price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.PressButton
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3BetMoneyManager_C::PressButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.PressButton");

	ABP_S3BetMoneyManager_C_PressButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.UpdCurrentNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3BetMoneyManager_C::UpdCurrentNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.UpdCurrentNum");

	ABP_S3BetMoneyManager_C_UpdCurrentNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.AllDestroy
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3BetMoneyManager_C::AllDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.AllDestroy");

	ABP_S3BetMoneyManager_C_AllDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.ReturnStatus
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3BetMoneyManager_C::ReturnStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.ReturnStatus");

	ABP_S3BetMoneyManager_C_ReturnStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.ChangeStatus
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3BetMoneyManager_C::ChangeStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.ChangeStatus");

	ABP_S3BetMoneyManager_C_ChangeStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3BetMoneyManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.UserConstructionScript");

	ABP_S3BetMoneyManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3BetMoneyManager_C::InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16");

	ABP_S3BetMoneyManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3BetMoneyManager_C::InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15");

	ABP_S3BetMoneyManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3BetMoneyManager_C::InpActEvt_SearchDownSelect_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_14");

	ABP_S3BetMoneyManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3BetMoneyManager_C::InpActEvt_SearchDownSelect_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_13");

	ABP_S3BetMoneyManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3BetMoneyManager_C::InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_12");

	ABP_S3BetMoneyManager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3BetMoneyManager_C::InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_11");

	ABP_S3BetMoneyManager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3BetMoneyManager_C::InpActEvt_SearchRightSelect_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_10");

	ABP_S3BetMoneyManager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3BetMoneyManager_C::InpActEvt_SearchRightSelect_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_9");

	ABP_S3BetMoneyManager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3BetMoneyManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.ReceiveBeginPlay");

	ABP_S3BetMoneyManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BetMoneyManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.ReceiveTick");

	ABP_S3BetMoneyManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.DecideDetectAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BetMoneyManager_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.DecideDetectAction");

	ABP_S3BetMoneyManager_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.PushAnimFinish
// (BlueprintCallable, BlueprintEvent)

void ABP_S3BetMoneyManager_C::PushAnimFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.PushAnimFinish");

	ABP_S3BetMoneyManager_C_PushAnimFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.Dialog_Cancel
// (BlueprintCallable, BlueprintEvent)

void ABP_S3BetMoneyManager_C::Dialog_Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.Dialog_Cancel");

	ABP_S3BetMoneyManager_C_Dialog_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.Dialog_Decide
// (BlueprintCallable, BlueprintEvent)

void ABP_S3BetMoneyManager_C::Dialog_Decide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.Dialog_Decide");

	ABP_S3BetMoneyManager_C_Dialog_Decide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.o
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BetMoneyManager_C::o(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.o");

	ABP_S3BetMoneyManager_C_o_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.ExecuteUbergraph_BP_S3BetMoneyManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BetMoneyManager_C::ExecuteUbergraph_BP_S3BetMoneyManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.ExecuteUbergraph_BP_S3BetMoneyManager");

	ABP_S3BetMoneyManager_C_ExecuteUbergraph_BP_S3BetMoneyManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.buyEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_S3BetMoneyManager_C::buyEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.buyEnd__DelegateSignature");

	ABP_S3BetMoneyManager_C_buyEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.noBuyEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_S3BetMoneyManager_C::noBuyEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.noBuyEnd__DelegateSignature");

	ABP_S3BetMoneyManager_C_noBuyEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

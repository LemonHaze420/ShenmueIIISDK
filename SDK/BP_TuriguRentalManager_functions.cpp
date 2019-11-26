
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

// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.GetPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_TuriguRentalManager_C::GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.GetPriority");

	ABP_TuriguRentalManager_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_TuriguRentalManager_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.GetDetectAction");

	ABP_TuriguRentalManager_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.IsHaveVipCard
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHaveVipCard                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TuriguRentalManager_C::IsHaveVipCard(bool* IsHaveVipCard)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.IsHaveVipCard");

	ABP_TuriguRentalManager_C_IsHaveVipCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsHaveVipCard != nullptr)
		*IsHaveVipCard = params.IsHaveVipCard;
}


// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.CheckPayButton
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TuriguRentalManager_C::CheckPayButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.CheckPayButton");

	ABP_TuriguRentalManager_C_CheckPayButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.EndFlow
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TuriguRentalManager_C::EndFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.EndFlow");

	ABP_TuriguRentalManager_C_EndFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.UpdNowSelSet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_TuriguRentalManager_C::UpdNowSelSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.UpdNowSelSet");

	ABP_TuriguRentalManager_C_UpdNowSelSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.PlaySE
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_ShopSE_List>    SE                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TuriguRentalManager_C::PlaySE(TEnumAsByte<EN_ShopSE_List> SE)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.PlaySE");

	ABP_TuriguRentalManager_C_PlaySE_Params params;
	params.SE = SE;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.GetItemID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            item_no                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ret                            (Parm, OutParm)

void ABP_TuriguRentalManager_C::GetItemID(int item_no, struct FText* ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.GetItemID");

	ABP_TuriguRentalManager_C_GetItemID_Params params;
	params.item_no = item_no;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ret != nullptr)
		*ret = params.ret;
}


// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TuriguRentalManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.UserConstructionScript");

	ABP_TuriguRentalManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_TuriguRentalManager_C::InpActEvt_SearchBottomButton_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_12");

	ABP_TuriguRentalManager_C_InpActEvt_SearchBottomButton_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_TuriguRentalManager_C::InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_11");

	ABP_TuriguRentalManager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_TuriguRentalManager_C::InpActEvt_SearchRightSelect_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_10");

	ABP_TuriguRentalManager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.InpActEvt_SearchTopButton_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_TuriguRentalManager_C::InpActEvt_SearchTopButton_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.InpActEvt_SearchTopButton_K2Node_InputActionEvent_9");

	ABP_TuriguRentalManager_C_InpActEvt_SearchTopButton_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_TuriguRentalManager_C::InpActEvt_SearchUpSelect_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_8");

	ABP_TuriguRentalManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_TuriguRentalManager_C::InpActEvt_SearchDownSelect_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_7");

	ABP_TuriguRentalManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TuriguRentalManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.ReceiveBeginPlay");

	ABP_TuriguRentalManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TuriguRentalManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.ReceiveTick");

	ABP_TuriguRentalManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TuriguRentalManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.ReceiveEndPlay");

	ABP_TuriguRentalManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.DecideDetectAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TuriguRentalManager_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.DecideDetectAction");

	ABP_TuriguRentalManager_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.ExecuteUbergraph_BP_TuriguRentalManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TuriguRentalManager_C::ExecuteUbergraph_BP_TuriguRentalManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.ExecuteUbergraph_BP_TuriguRentalManager");

	ABP_TuriguRentalManager_C_ExecuteUbergraph_BP_TuriguRentalManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.onNoBuyEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_TuriguRentalManager_C::onNoBuyEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.onNoBuyEnd__DelegateSignature");

	ABP_TuriguRentalManager_C_onNoBuyEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.onBuyEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_TuriguRentalManager_C::onBuyEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TuriguRentalManager.BP_TuriguRentalManager_C.onBuyEnd__DelegateSignature");

	ABP_TuriguRentalManager_C_onBuyEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

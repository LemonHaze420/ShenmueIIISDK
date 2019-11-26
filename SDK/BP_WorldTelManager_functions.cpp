
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

// Function BP_WorldTelManager.BP_WorldTelManager_C.CheckCursorMove
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               BeforPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_WorldTelManager_C::CheckCursorMove(const struct FVector2D& BeforPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTelManager.BP_WorldTelManager_C.CheckCursorMove");

	ABP_WorldTelManager_C_CheckCursorMove_Params params;
	params.BeforPos = BeforPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WorldTelManager.BP_WorldTelManager_C.SetAddressBook
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AddressBook_C*       AddressBook                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldTelManager_C::SetAddressBook(class ABP_AddressBook_C* AddressBook)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTelManager.BP_WorldTelManager_C.SetAddressBook");

	ABP_WorldTelManager_C_SetAddressBook_Params params;
	params.AddressBook = AddressBook;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldTelManager.BP_WorldTelManager_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreateMemoTexture_C* newParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldTelManager_C::SetData(class ABP_CreateMemoTexture_C* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTelManager.BP_WorldTelManager_C.SetData");

	ABP_WorldTelManager_C_SetData_Params params;
	params.newParam = newParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldTelManager.BP_WorldTelManager_C.GetUseManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           UseManager                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WorldTelManager_C::GetUseManager(bool* UseManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTelManager.BP_WorldTelManager_C.GetUseManager");

	ABP_WorldTelManager_C_GetUseManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UseManager != nullptr)
		*UseManager = params.UseManager;
}


// Function BP_WorldTelManager.BP_WorldTelManager_C.SetUseManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseManager                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldTelManager_C::SetUseManager(bool UseManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTelManager.BP_WorldTelManager_C.SetUseManager");

	ABP_WorldTelManager_C_SetUseManager_Params params;
	params.UseManager = UseManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldTelManager.BP_WorldTelManager_C.SetAddressBookPageWidgetR
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uwgt_AddressPage_1_C*    AddressBookPageWidgetR         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_WorldTelManager_C::SetAddressBookPageWidgetR(class Uwgt_AddressPage_1_C* AddressBookPageWidgetR)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTelManager.BP_WorldTelManager_C.SetAddressBookPageWidgetR");

	ABP_WorldTelManager_C_SetAddressBookPageWidgetR_Params params;
	params.AddressBookPageWidgetR = AddressBookPageWidgetR;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldTelManager.BP_WorldTelManager_C.SetEnableInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnableInput                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldTelManager_C::SetEnableInput(bool bEnableInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTelManager.BP_WorldTelManager_C.SetEnableInput");

	ABP_WorldTelManager_C_SetEnableInput_Params params;
	params.bEnableInput = bEnableInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldTelManager.BP_WorldTelManager_C.SetAddressBookPageWidgetF
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uwgt_AddressPage_0_C*    AddressBookPageWidgetF         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_WorldTelManager_C::SetAddressBookPageWidgetF(class Uwgt_AddressPage_0_C* AddressBookPageWidgetF)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTelManager.BP_WorldTelManager_C.SetAddressBookPageWidgetF");

	ABP_WorldTelManager_C_SetAddressBookPageWidgetF_Params params;
	params.AddressBookPageWidgetF = AddressBookPageWidgetF;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldTelManager.BP_WorldTelManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WorldTelManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTelManager.BP_WorldTelManager_C.UserConstructionScript");

	ABP_WorldTelManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldTelManager.BP_WorldTelManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WorldTelManager_C::InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTelManager.BP_WorldTelManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8");

	ABP_WorldTelManager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldTelManager.BP_WorldTelManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WorldTelManager_C::InpActEvt_SearchUpSelect_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTelManager.BP_WorldTelManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_7");

	ABP_WorldTelManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldTelManager.BP_WorldTelManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WorldTelManager_C::InpActEvt_SearchDownSelect_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTelManager.BP_WorldTelManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_6");

	ABP_WorldTelManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldTelManager.BP_WorldTelManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WorldTelManager_C::InpActEvt_SearchRightSelect_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTelManager.BP_WorldTelManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_5");

	ABP_WorldTelManager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldTelManager.BP_WorldTelManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldTelManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTelManager.BP_WorldTelManager_C.ReceiveTick");

	ABP_WorldTelManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldTelManager.BP_WorldTelManager_C.ChangeSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_WorldTelManager_C::ChangeSelection(const struct FVector2D& Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTelManager.BP_WorldTelManager_C.ChangeSelection");

	ABP_WorldTelManager_C_ChangeSelection_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldTelManager.BP_WorldTelManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldTelManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTelManager.BP_WorldTelManager_C.ReceiveEndPlay");

	ABP_WorldTelManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldTelManager.BP_WorldTelManager_C.SetSelectionWithSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               NewPos                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_WorldTelManager_C::SetSelectionWithSound(const struct FVector2D& NewPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTelManager.BP_WorldTelManager_C.SetSelectionWithSound");

	ABP_WorldTelManager_C_SetSelectionWithSound_Params params;
	params.NewPos = NewPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldTelManager.BP_WorldTelManager_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldTelManager_C::InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTelManager.BP_WorldTelManager_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_1");

	ABP_WorldTelManager_C_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldTelManager.BP_WorldTelManager_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldTelManager_C::InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_2(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTelManager.BP_WorldTelManager_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_2");

	ABP_WorldTelManager_C_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldTelManager.BP_WorldTelManager_C.ExecuteUbergraph_BP_WorldTelManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldTelManager_C::ExecuteUbergraph_BP_WorldTelManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTelManager.BP_WorldTelManager_C.ExecuteUbergraph_BP_WorldTelManager");

	ABP_WorldTelManager_C_ExecuteUbergraph_BP_WorldTelManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

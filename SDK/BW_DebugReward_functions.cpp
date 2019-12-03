
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

// Function BW_DebugReward.BW_DebugReward_C.UpdateRewardState
// (NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, DLLImport, BlueprintEvent)

void UBW_DebugReward_C::UpdateRewardState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.UpdateRewardState");

	UBW_DebugReward_C_UpdateRewardState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.ChangeCheck
// (NetReliable, Exec, Native, NetResponse, Static, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UCheckBox*               CheckBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBW_DebugReward_C::STATIC_ChangeCheck(class UCheckBox* CheckBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.ChangeCheck");

	UBW_DebugReward_C_ChangeCheck_Params params;
	params.CheckBox = CheckBox;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.SetBackerId
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, Public, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugReward_C::SetBackerId(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.SetBackerId");

	UBW_DebugReward_C_SetBackerId_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.ShowBackerId
// (Exec, Native, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_DebugReward_C::ShowBackerId()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.ShowBackerId");

	UBW_DebugReward_C_ShowBackerId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__BackerTextBox_K2Node_ComponentBoundEvent_133_OnEditableTextBoxCommittedEvent__DelegateSignature
// (NetReliable, Event, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugReward_C::BndEvt__BackerTextBox_K2Node_ComponentBoundEvent_133_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__BackerTextBox_K2Node_ComponentBoundEvent_133_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__BackerTextBox_K2Node_ComponentBoundEvent_133_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__PresetId_K2Node_ComponentBoundEvent_101_OnEditableTextBoxCommittedEvent__DelegateSignature
// (Net, NetReliable, Exec, Static, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugReward_C::STATIC_BndEvt__PresetId_K2Node_ComponentBoundEvent_101_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__PresetId_K2Node_ComponentBoundEvent_101_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__PresetId_K2Node_ComponentBoundEvent_101_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.Construct
// (Net, NetReliable, NetRequest, Exec, Native, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.Construct");

	UBW_DebugReward_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__S3Button_0_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Native, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__S3Button_0_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__S3Button_0_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__S3Button_0_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__JacketButton_K2Node_ComponentBoundEvent_1139_OnButtonClickedEvent__DelegateSignature
// (NetReliable, NetRequest, Exec, Native, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__JacketButton_K2Node_ComponentBoundEvent_1139_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__JacketButton_K2Node_ComponentBoundEvent_1139_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__JacketButton_K2Node_ComponentBoundEvent_1139_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__GachaButton_K2Node_ComponentBoundEvent_1188_OnButtonClickedEvent__DelegateSignature
// (NetReliable, NetRequest, Exec, Native, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__GachaButton_K2Node_ComponentBoundEvent_1188_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__GachaButton_K2Node_ComponentBoundEvent_1188_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__GachaButton_K2Node_ComponentBoundEvent_1188_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__Toy1Button_K2Node_ComponentBoundEvent_1237_OnButtonClickedEvent__DelegateSignature
// (Net, NetRequest, Exec, Native, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__Toy1Button_K2Node_ComponentBoundEvent_1237_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__Toy1Button_K2Node_ComponentBoundEvent_1237_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__Toy1Button_K2Node_ComponentBoundEvent_1237_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__ToyAllButton_K2Node_ComponentBoundEvent_1286_OnButtonClickedEvent__DelegateSignature
// (Net, NetRequest, Exec, Native, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__ToyAllButton_K2Node_ComponentBoundEvent_1286_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__ToyAllButton_K2Node_ComponentBoundEvent_1286_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__ToyAllButton_K2Node_ComponentBoundEvent_1286_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__AdvanceButton_K2Node_ComponentBoundEvent_1362_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, Exec, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__AdvanceButton_K2Node_ComponentBoundEvent_1362_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__AdvanceButton_K2Node_ComponentBoundEvent_1362_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__AdvanceButton_K2Node_ComponentBoundEvent_1362_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__SpecialPButton_K2Node_ComponentBoundEvent_1411_OnButtonClickedEvent__DelegateSignature
// (NetReliable, Exec, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__SpecialPButton_K2Node_ComponentBoundEvent_1411_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__SpecialPButton_K2Node_ComponentBoundEvent_1411_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__SpecialPButton_K2Node_ComponentBoundEvent_1411_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__SpecialHButton_K2Node_ComponentBoundEvent_1460_OnButtonClickedEvent__DelegateSignature
// (NetReliable, Exec, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__SpecialHButton_K2Node_ComponentBoundEvent_1460_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__SpecialHButton_K2Node_ComponentBoundEvent_1460_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__SpecialHButton_K2Node_ComponentBoundEvent_1460_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__ArcaneButton_K2Node_ComponentBoundEvent_1509_OnButtonClickedEvent__DelegateSignature
// (Net, Exec, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__ArcaneButton_K2Node_ComponentBoundEvent_1509_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__ArcaneButton_K2Node_ComponentBoundEvent_1509_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__ArcaneButton_K2Node_ComponentBoundEvent_1509_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__RodButton_K2Node_ComponentBoundEvent_1558_OnButtonClickedEvent__DelegateSignature
// (Net, Exec, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__RodButton_K2Node_ComponentBoundEvent_1558_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__RodButton_K2Node_ComponentBoundEvent_1558_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__RodButton_K2Node_ComponentBoundEvent_1558_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__PictureButton_K2Node_ComponentBoundEvent_1607_OnButtonClickedEvent__DelegateSignature
// (Exec, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__PictureButton_K2Node_ComponentBoundEvent_1607_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__PictureButton_K2Node_ComponentBoundEvent_1607_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__PictureButton_K2Node_ComponentBoundEvent_1607_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__OtoshidamaButton_K2Node_ComponentBoundEvent_1656_OnButtonClickedEvent__DelegateSignature
// (Exec, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__OtoshidamaButton_K2Node_ComponentBoundEvent_1656_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__OtoshidamaButton_K2Node_ComponentBoundEvent_1656_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__OtoshidamaButton_K2Node_ComponentBoundEvent_1656_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__FlowerButton_K2Node_ComponentBoundEvent_1705_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, NetRequest, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__FlowerButton_K2Node_ComponentBoundEvent_1705_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__FlowerButton_K2Node_ComponentBoundEvent_1705_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__FlowerButton_K2Node_ComponentBoundEvent_1705_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__FudaButton_K2Node_ComponentBoundEvent_1754_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, NetRequest, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__FudaButton_K2Node_ComponentBoundEvent_1754_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__FudaButton_K2Node_ComponentBoundEvent_1754_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__FudaButton_K2Node_ComponentBoundEvent_1754_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__DiceButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (NetReliable, NetRequest, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__DiceButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__DiceButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__DiceButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__ChibiButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (NetReliable, NetRequest, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__ChibiButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__ChibiButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__ChibiButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__Chibi2Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (Net, NetRequest, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__Chibi2Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__Chibi2Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__Chibi2Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__HandButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (Net, NetRequest, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__HandButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__HandButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__HandButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__GuestButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (NetRequest, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__GuestButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__GuestButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__GuestButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__FreeButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (NetRequest, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__FreeButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__FreeButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__FreeButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__TravellerButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__TravellerButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__TravellerButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__TravellerButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__BattleButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__BattleButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__BattleButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__BattleButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__YataiButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (NetReliable, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__YataiButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__YataiButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__YataiButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__FaceButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (NetReliable, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__FaceButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__FaceButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__FaceButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (Net, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugReward_C::STATIC_BndEvt__ResetButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugReward_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugReward.BW_DebugReward_C.ExecuteUbergraph_BW_DebugReward
// (Exec, Native, NetResponse, NetMulticast, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugReward_C::ExecuteUbergraph_BW_DebugReward(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugReward.BW_DebugReward_C.ExecuteUbergraph_BW_DebugReward");

	UBW_DebugReward_C_ExecuteUbergraph_BW_DebugReward_Params params;
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

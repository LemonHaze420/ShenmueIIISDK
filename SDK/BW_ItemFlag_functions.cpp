
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

// Function BW_ItemFlag.BW_ItemFlag_C.GetText_4
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_ItemFlag_C::GetText_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.GetText_4");

	UBW_ItemFlag_C_GetText_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_ItemFlag.BW_ItemFlag_C.GetText_3
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_ItemFlag_C::GetText_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.GetText_3");

	UBW_ItemFlag_C_GetText_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_ItemFlag.BW_ItemFlag_C.GetText_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_ItemFlag_C::GetText_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.GetText_2");

	UBW_ItemFlag_C_GetText_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_ItemFlag.BW_ItemFlag_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_ItemFlag_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.GetText_1");

	UBW_ItemFlag_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_ItemFlag.BW_ItemFlag_C.BetMoneyNum
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_ItemFlag_C::BetMoneyNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.BetMoneyNum");

	UBW_ItemFlag_C_BetMoneyNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_ItemFlag.BW_ItemFlag_C.HaveMoneyNum
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_ItemFlag_C::HaveMoneyNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.HaveMoneyNum");

	UBW_ItemFlag_C_HaveMoneyNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_ItemFlag.BW_ItemFlag_C.Set Item Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBW_IntegerProperty_C*   BW_Integer_Property            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UEditableTextBox*        Text_Box                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBW_ItemFlag_C::Set_Item_Data(class UBW_IntegerProperty_C* BW_Integer_Property, int Index, class UEditableTextBox* Text_Box)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.Set Item Data");

	UBW_ItemFlag_C_Set_Item_Data_Params params;
	params.BW_Integer_Property = BW_Integer_Property;
	params.Index = Index;
	params.Text_Box = Text_Box;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ItemFlag.BW_ItemFlag_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBW_ItemFlag_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.Construct");

	UBW_ItemFlag_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ItemFlag.BW_ItemFlag_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_ItemFlag_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.Tick");

	UBW_ItemFlag_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ItemFlag.BW_ItemFlag_C.Change Page
// (BlueprintCallable, BlueprintEvent)

void UBW_ItemFlag_C::Change_Page()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.Change Page");

	UBW_ItemFlag_C_Change_Page_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ItemFlag.BW_ItemFlag_C.BndEvt__Button_214_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_ItemFlag_C::BndEvt__Button_214_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.BndEvt__Button_214_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature");

	UBW_ItemFlag_C_BndEvt__Button_214_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ItemFlag.BW_ItemFlag_C.BndEvt__Button_215_K2Node_ComponentBoundEvent_124_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_ItemFlag_C::BndEvt__Button_215_K2Node_ComponentBoundEvent_124_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.BndEvt__Button_215_K2Node_ComponentBoundEvent_124_OnButtonClickedEvent__DelegateSignature");

	UBW_ItemFlag_C_BndEvt__Button_215_K2Node_ComponentBoundEvent_124_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ItemFlag.BW_ItemFlag_C.BndEvt__Button_216_K2Node_ComponentBoundEvent_154_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_ItemFlag_C::BndEvt__Button_216_K2Node_ComponentBoundEvent_154_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.BndEvt__Button_216_K2Node_ComponentBoundEvent_154_OnButtonClickedEvent__DelegateSignature");

	UBW_ItemFlag_C_BndEvt__Button_216_K2Node_ComponentBoundEvent_154_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ItemFlag.BW_ItemFlag_C.BndEvt__Button_0_kifudaadd_K2Node_ComponentBoundEvent_58_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_ItemFlag_C::BndEvt__Button_0_kifudaadd_K2Node_ComponentBoundEvent_58_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.BndEvt__Button_0_kifudaadd_K2Node_ComponentBoundEvent_58_OnButtonClickedEvent__DelegateSignature");

	UBW_ItemFlag_C_BndEvt__Button_0_kifudaadd_K2Node_ComponentBoundEvent_58_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ItemFlag.BW_ItemFlag_C.BndEvt__Money2_K2Node_ComponentBoundEvent_206_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_ItemFlag_C::BndEvt__Money2_K2Node_ComponentBoundEvent_206_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.BndEvt__Money2_K2Node_ComponentBoundEvent_206_OnButtonClickedEvent__DelegateSignature");

	UBW_ItemFlag_C_BndEvt__Money2_K2Node_ComponentBoundEvent_206_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ItemFlag.BW_ItemFlag_C.BndEvt__Kifuda2_K2Node_ComponentBoundEvent_223_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_ItemFlag_C::BndEvt__Kifuda2_K2Node_ComponentBoundEvent_223_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.BndEvt__Kifuda2_K2Node_ComponentBoundEvent_223_OnButtonClickedEvent__DelegateSignature");

	UBW_ItemFlag_C_BndEvt__Kifuda2_K2Node_ComponentBoundEvent_223_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ItemFlag.BW_ItemFlag_C.BndEvt__Item3_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_ItemFlag_C::BndEvt__Item3_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.BndEvt__Item3_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature");

	UBW_ItemFlag_C_BndEvt__Item3_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ItemFlag.BW_ItemFlag_C.BndEvt__Item4_K2Node_ComponentBoundEvent_222_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_ItemFlag_C::BndEvt__Item4_K2Node_ComponentBoundEvent_222_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.BndEvt__Item4_K2Node_ComponentBoundEvent_222_OnButtonClickedEvent__DelegateSignature");

	UBW_ItemFlag_C_BndEvt__Item4_K2Node_ComponentBoundEvent_222_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ItemFlag.BW_ItemFlag_C.OnQuantityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBW_IntegerProperty_C*   Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBW_ItemFlag_C::OnQuantityChanged(int Value, class UBW_IntegerProperty_C* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.OnQuantityChanged");

	UBW_ItemFlag_C_OnQuantityChanged_Params params;
	params.Value = Value;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ItemFlag.BW_ItemFlag_C.ChangeParam_075
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBW_IntegerProperty_C*   Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBW_ItemFlag_C::ChangeParam_075(int Value, class UBW_IntegerProperty_C* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.ChangeParam_075");

	UBW_ItemFlag_C_ChangeParam_075_Params params;
	params.Value = Value;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ItemFlag.BW_ItemFlag_C.ChangeParam_137
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBW_IntegerProperty_C*   Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBW_ItemFlag_C::ChangeParam_137(int Value, class UBW_IntegerProperty_C* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.ChangeParam_137");

	UBW_ItemFlag_C_ChangeParam_137_Params params;
	params.Value = Value;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ItemFlag.BW_ItemFlag_C.ChangeParam_SellMargification
// (BlueprintCallable, BlueprintEvent)

void UBW_ItemFlag_C::ChangeParam_SellMargification()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.ChangeParam_SellMargification");

	UBW_ItemFlag_C_ChangeParam_SellMargification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ItemFlag.BW_ItemFlag_C.BndEvt__S3Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_ItemFlag_C::BndEvt__S3Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.BndEvt__S3Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBW_ItemFlag_C_BndEvt__S3Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ItemFlag.BW_ItemFlag_C.BndEvt__Button_AllItemsMap_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_ItemFlag_C::BndEvt__Button_AllItemsMap_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.BndEvt__Button_AllItemsMap_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBW_ItemFlag_C_BndEvt__Button_AllItemsMap_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ItemFlag.BW_ItemFlag_C.BndEvt__MoneyMax_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_ItemFlag_C::BndEvt__MoneyMax_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.BndEvt__MoneyMax_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UBW_ItemFlag_C_BndEvt__MoneyMax_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ItemFlag.BW_ItemFlag_C.ChangeItemBuy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBW_IntegerProperty_C*   Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBW_ItemFlag_C::ChangeItemBuy(int Value, class UBW_IntegerProperty_C* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.ChangeItemBuy");

	UBW_ItemFlag_C_ChangeItemBuy_Params params;
	params.Value = Value;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ItemFlag.BW_ItemFlag_C.ExecuteUbergraph_BW_ItemFlag
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_ItemFlag_C::ExecuteUbergraph_BW_ItemFlag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ItemFlag.BW_ItemFlag_C.ExecuteUbergraph_BW_ItemFlag");

	UBW_ItemFlag_C_ExecuteUbergraph_BW_ItemFlag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

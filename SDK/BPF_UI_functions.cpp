
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

// Function BPF_UI.BPF_UI_C.SetHeelDrinkNum_dispWidget
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              TextWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_UI_C::STATIC_SetHeelDrinkNum_dispWidget(class UTextBlock* TextWidget, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_UI.BPF_UI_C.SetHeelDrinkNum_dispWidget");

	UBPF_UI_C_SetHeelDrinkNum_dispWidget_Params params;
	params.TextWidget = TextWidget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_UI.BPF_UI_C.FormatMoneyText_dispWidget
// (Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPF_UI_C::STATIC_FormatMoneyText_dispWidget(int Value, int Min, int Max, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_UI.BPF_UI_C.FormatMoneyText_dispWidget");

	UBPF_UI_C_FormatMoneyText_dispWidget_Params params;
	params.Value = Value;
	params.Min = Min;
	params.Max = Max;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_UI.BPF_UI_C.SetDayTime_dispWidget
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              Day                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTextBlock*              Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_UI_C::STATIC_SetDayTime_dispWidget(class UTextBlock* Day, class UTextBlock* Time, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_UI.BPF_UI_C.SetDayTime_dispWidget");

	UBPF_UI_C_SetDayTime_dispWidget_Params params;
	params.Day = Day;
	params.Time = Time;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_UI.BPF_UI_C.SetCursorVisibility_dispWidget
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  Down                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UImage*                  Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UImage*                  Left                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UImage*                  Up                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ES3ItemListMenuType            MenuType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDialog                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_UI_C::STATIC_SetCursorVisibility_dispWidget(bool Condition, class UImage* Down, class UImage* Right, class UImage* Left, class UImage* Up, ES3ItemListMenuType MenuType, bool IsDialog, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_UI.BPF_UI_C.SetCursorVisibility_dispWidget");

	UBPF_UI_C_SetCursorVisibility_dispWidget_Params params;
	params.Condition = Condition;
	params.Down = Down;
	params.Right = Right;
	params.Left = Left;
	params.Up = Up;
	params.MenuType = MenuType;
	params.IsDialog = IsDialog;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_UI.BPF_UI_C.SetMoneyStatus_dispWidget
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              BetMoney                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTextBlock*              Money                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTextBlock*              Meter                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTextBlock*              HeelDrink                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_UI_C::STATIC_SetMoneyStatus_dispWidget(class UTextBlock* BetMoney, class UTextBlock* Money, class UTextBlock* Meter, class UTextBlock* HeelDrink, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_UI.BPF_UI_C.SetMoneyStatus_dispWidget");

	UBPF_UI_C_SetMoneyStatus_dispWidget_Params params;
	params.BetMoney = BetMoney;
	params.Money = Money;
	params.Meter = Meter;
	params.HeelDrink = HeelDrink;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

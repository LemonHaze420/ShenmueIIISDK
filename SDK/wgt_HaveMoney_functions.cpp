
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

// Function wgt_HaveMoney.wgt_HaveMoney_C.SetMoneyText
// (Net, NetReliable, NetRequest, Native, MulticastDelegate, Private, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            SetValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ValueMin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ValueMax                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HaveMoney_C::SetMoneyText(int SetValue, int ValueMin, int ValueMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HaveMoney.wgt_HaveMoney_C.SetMoneyText");

	Uwgt_HaveMoney_C_SetMoneyText_Params params;
	params.SetValue = SetValue;
	params.ValueMin = ValueMin;
	params.ValueMax = ValueMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HaveMoney.wgt_HaveMoney_C.SetPos
// (Exec, Event, Static, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_HaveMoney_C::STATIC_SetPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HaveMoney.wgt_HaveMoney_C.SetPos");

	Uwgt_HaveMoney_C_SetPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HaveMoney.wgt_HaveMoney_C.SetValueType
// (Net, NetRequest, Exec, Event, Static, NetMulticast, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_ValueType>      Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HaveMoney_C::STATIC_SetValueType(TEnumAsByte<EN_ValueType> Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HaveMoney.wgt_HaveMoney_C.SetValueType");

	Uwgt_HaveMoney_C_SetValueType_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HaveMoney.wgt_HaveMoney_C.GetHaveMoney
// (Static, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            HaveMoney                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_HaveMoney_C::STATIC_GetHaveMoney(int* HaveMoney)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HaveMoney.wgt_HaveMoney_C.GetHaveMoney");

	Uwgt_HaveMoney_C_GetHaveMoney_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HaveMoney != nullptr)
		*HaveMoney = params.HaveMoney;
}


// Function wgt_HaveMoney.wgt_HaveMoney_C.SetAddMoney
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            AddMoney                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HaveMoney_C::SetAddMoney(int AddMoney)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HaveMoney.wgt_HaveMoney_C.SetAddMoney");

	Uwgt_HaveMoney_C_SetAddMoney_Params params;
	params.AddMoney = AddMoney;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HaveMoney.wgt_HaveMoney_C.SetSubtractMoney
// (NetReliable, Exec, Event, Static, MulticastDelegate, Private, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            SubMoney                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HaveMoney_C::STATIC_SetSubtractMoney(int SubMoney)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HaveMoney.wgt_HaveMoney_C.SetSubtractMoney");

	Uwgt_HaveMoney_C_SetSubtractMoney_Params params;
	params.SubMoney = SubMoney;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HaveMoney.wgt_HaveMoney_C.AddHaveMoney
// (NetReliable, NetRequest, Native, Event, MulticastDelegate, Public, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            AddMoney                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HaveMoney_C::AddHaveMoney(int AddMoney)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HaveMoney.wgt_HaveMoney_C.AddHaveMoney");

	Uwgt_HaveMoney_C_AddHaveMoney_Params params;
	params.AddMoney = AddMoney;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HaveMoney.wgt_HaveMoney_C.SubtractHaveMoney
// (NetRequest, NetResponse, Static, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SubMoney                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HaveMoney_C::STATIC_SubtractHaveMoney(int SubMoney)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HaveMoney.wgt_HaveMoney_C.SubtractHaveMoney");

	Uwgt_HaveMoney_C_SubtractHaveMoney_Params params;
	params.SubMoney = SubMoney;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HaveMoney.wgt_HaveMoney_C.SetHaveMoney
// (Net, NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            HaveMoney                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NotAnim                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HaveMoney_C::SetHaveMoney(int HaveMoney, bool NotAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HaveMoney.wgt_HaveMoney_C.SetHaveMoney");

	Uwgt_HaveMoney_C_SetHaveMoney_Params params;
	params.HaveMoney = HaveMoney;
	params.NotAnim = NotAnim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HaveMoney.wgt_HaveMoney_C.Tick
// (NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HaveMoney_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HaveMoney.wgt_HaveMoney_C.Tick");

	Uwgt_HaveMoney_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HaveMoney.wgt_HaveMoney_C.Construct
// (Net, Static, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void Uwgt_HaveMoney_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HaveMoney.wgt_HaveMoney_C.Construct");

	Uwgt_HaveMoney_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HaveMoney.wgt_HaveMoney_C.Reset
// (Net, Static, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void Uwgt_HaveMoney_C::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HaveMoney.wgt_HaveMoney_C.Reset");

	Uwgt_HaveMoney_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HaveMoney.wgt_HaveMoney_C.ExecuteUbergraph_wgt_HaveMoney
// (Net, NetReliable, NetRequest, Native, Event, Static, Public, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HaveMoney_C::STATIC_ExecuteUbergraph_wgt_HaveMoney(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HaveMoney.wgt_HaveMoney_C.ExecuteUbergraph_wgt_HaveMoney");

	Uwgt_HaveMoney_C_ExecuteUbergraph_wgt_HaveMoney_Params params;
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

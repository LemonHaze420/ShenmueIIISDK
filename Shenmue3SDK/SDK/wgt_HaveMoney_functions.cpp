
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

// Function wgt_HaveMoney.wgt_HaveMoney_C.SetPos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uwgt_HaveMoney_C::SetPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HaveMoney.wgt_HaveMoney_C.SetPos");

	Uwgt_HaveMoney_C_SetPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HaveMoney.wgt_HaveMoney_C.SetValueType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_ValueType>      Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HaveMoney_C::SetValueType(TEnumAsByte<EN_ValueType> Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HaveMoney.wgt_HaveMoney_C.SetValueType");

	Uwgt_HaveMoney_C_SetValueType_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HaveMoney.wgt_HaveMoney_C.GetHaveMoney
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            HaveMoney                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_HaveMoney_C::GetHaveMoney(int* HaveMoney)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AddMoney                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HaveMoney_C::SetAddMoney(int AddMoney)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HaveMoney.wgt_HaveMoney_C.SetAddMoney");

	Uwgt_HaveMoney_C_SetAddMoney_Params params;
	params.AddMoney = AddMoney;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HaveMoney.wgt_HaveMoney_C.SetSubtractMoney
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SubMoney                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HaveMoney_C::SetSubtractMoney(int SubMoney)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HaveMoney.wgt_HaveMoney_C.SetSubtractMoney");

	Uwgt_HaveMoney_C_SetSubtractMoney_Params params;
	params.SubMoney = SubMoney;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HaveMoney.wgt_HaveMoney_C.AddHaveMoney
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AddMoney                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HaveMoney_C::AddHaveMoney(int AddMoney)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HaveMoney.wgt_HaveMoney_C.AddHaveMoney");

	Uwgt_HaveMoney_C_AddHaveMoney_Params params;
	params.AddMoney = AddMoney;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HaveMoney.wgt_HaveMoney_C.SubtractHaveMoney
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SubMoney                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HaveMoney_C::SubtractHaveMoney(int SubMoney)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HaveMoney.wgt_HaveMoney_C.SubtractHaveMoney");

	Uwgt_HaveMoney_C_SubtractHaveMoney_Params params;
	params.SubMoney = SubMoney;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HaveMoney.wgt_HaveMoney_C.SetHaveMoney
// (Public, BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HaveMoney.wgt_HaveMoney_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HaveMoney_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
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
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_HaveMoney_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HaveMoney.wgt_HaveMoney_C.Construct");

	Uwgt_HaveMoney_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HaveMoney.wgt_HaveMoney_C.Reset
// (BlueprintCallable, BlueprintEvent)

void Uwgt_HaveMoney_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HaveMoney.wgt_HaveMoney_C.Reset");

	Uwgt_HaveMoney_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_HaveMoney.wgt_HaveMoney_C.ExecuteUbergraph_wgt_HaveMoney
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_HaveMoney_C::ExecuteUbergraph_wgt_HaveMoney(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_HaveMoney.wgt_HaveMoney_C.ExecuteUbergraph_wgt_HaveMoney");

	Uwgt_HaveMoney_C_ExecuteUbergraph_wgt_HaveMoney_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

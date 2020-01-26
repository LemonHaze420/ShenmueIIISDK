
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

// Function BW_MemoFlag.BW_MemoFlag_C.SetMemoData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBW_IntegerProperty_C*   Memo_Flag_Property             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBW_IntegerProperty_C*   MemoIdentifer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Array_Index                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBW_MemoFlag_C::SetMemoData(class UBW_IntegerProperty_C* Memo_Flag_Property, class UBW_IntegerProperty_C* MemoIdentifer, int Index, int* Array_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.SetMemoData");

	UBW_MemoFlag_C_SetMemoData_Params params;
	params.Memo_Flag_Property = Memo_Flag_Property;
	params.MemoIdentifer = MemoIdentifer;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array_Index != nullptr)
		*Array_Index = params.Array_Index;
}


// Function BW_MemoFlag.BW_MemoFlag_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBW_MemoFlag_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.Construct");

	UBW_MemoFlag_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MemoFlag.BW_MemoFlag_C.Change Page
// (BlueprintCallable, BlueprintEvent)

void UBW_MemoFlag_C::Change_Page()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.Change Page");

	UBW_MemoFlag_C_Change_Page_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MemoFlag.BW_MemoFlag_C.ChangedMemoFlag_1
// (BlueprintCallable, BlueprintEvent)

void UBW_MemoFlag_C::ChangedMemoFlag_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.ChangedMemoFlag_1");

	UBW_MemoFlag_C_ChangedMemoFlag_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MemoFlag.BW_MemoFlag_C.ChangedMemoFlag_2
// (BlueprintCallable, BlueprintEvent)

void UBW_MemoFlag_C::ChangedMemoFlag_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.ChangedMemoFlag_2");

	UBW_MemoFlag_C_ChangedMemoFlag_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MemoFlag.BW_MemoFlag_C.ChangedMemoFlag_3
// (BlueprintCallable, BlueprintEvent)

void UBW_MemoFlag_C::ChangedMemoFlag_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.ChangedMemoFlag_3");

	UBW_MemoFlag_C_ChangedMemoFlag_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MemoFlag.BW_MemoFlag_C.ChangedMemoFlag_4
// (BlueprintCallable, BlueprintEvent)

void UBW_MemoFlag_C::ChangedMemoFlag_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.ChangedMemoFlag_4");

	UBW_MemoFlag_C_ChangedMemoFlag_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MemoFlag.BW_MemoFlag_C.ChangedMemoFlag_5
// (BlueprintCallable, BlueprintEvent)

void UBW_MemoFlag_C::ChangedMemoFlag_5()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.ChangedMemoFlag_5");

	UBW_MemoFlag_C_ChangedMemoFlag_5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MemoFlag.BW_MemoFlag_C.ChangedMemoFlag_6
// (BlueprintCallable, BlueprintEvent)

void UBW_MemoFlag_C::ChangedMemoFlag_6()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.ChangedMemoFlag_6");

	UBW_MemoFlag_C_ChangedMemoFlag_6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MemoFlag.BW_MemoFlag_C.ChangedMemoFlag_7
// (BlueprintCallable, BlueprintEvent)

void UBW_MemoFlag_C::ChangedMemoFlag_7()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.ChangedMemoFlag_7");

	UBW_MemoFlag_C_ChangedMemoFlag_7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MemoFlag.BW_MemoFlag_C.ChangedMemoFlag_8
// (BlueprintCallable, BlueprintEvent)

void UBW_MemoFlag_C::ChangedMemoFlag_8()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.ChangedMemoFlag_8");

	UBW_MemoFlag_C_ChangedMemoFlag_8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MemoFlag.BW_MemoFlag_C.ChangedMemoFlag_9
// (BlueprintCallable, BlueprintEvent)

void UBW_MemoFlag_C::ChangedMemoFlag_9()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.ChangedMemoFlag_9");

	UBW_MemoFlag_C_ChangedMemoFlag_9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MemoFlag.BW_MemoFlag_C.ChangedMemoFlag_10
// (BlueprintCallable, BlueprintEvent)

void UBW_MemoFlag_C::ChangedMemoFlag_10()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.ChangedMemoFlag_10");

	UBW_MemoFlag_C_ChangedMemoFlag_10_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MemoFlag.BW_MemoFlag_C.ChangeMemoIdentifer_1
// (BlueprintCallable, BlueprintEvent)

void UBW_MemoFlag_C::ChangeMemoIdentifer_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.ChangeMemoIdentifer_1");

	UBW_MemoFlag_C_ChangeMemoIdentifer_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MemoFlag.BW_MemoFlag_C.ChangeMemoIdentifer_2
// (BlueprintCallable, BlueprintEvent)

void UBW_MemoFlag_C::ChangeMemoIdentifer_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.ChangeMemoIdentifer_2");

	UBW_MemoFlag_C_ChangeMemoIdentifer_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MemoFlag.BW_MemoFlag_C.ChangeMemoIdentifer_3
// (BlueprintCallable, BlueprintEvent)

void UBW_MemoFlag_C::ChangeMemoIdentifer_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.ChangeMemoIdentifer_3");

	UBW_MemoFlag_C_ChangeMemoIdentifer_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MemoFlag.BW_MemoFlag_C.ChangeMemoIdentifer_4
// (BlueprintCallable, BlueprintEvent)

void UBW_MemoFlag_C::ChangeMemoIdentifer_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.ChangeMemoIdentifer_4");

	UBW_MemoFlag_C_ChangeMemoIdentifer_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MemoFlag.BW_MemoFlag_C.ChangeMemoIdentifer_5
// (BlueprintCallable, BlueprintEvent)

void UBW_MemoFlag_C::ChangeMemoIdentifer_5()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.ChangeMemoIdentifer_5");

	UBW_MemoFlag_C_ChangeMemoIdentifer_5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MemoFlag.BW_MemoFlag_C.ChangeMemoIdentifer_6
// (BlueprintCallable, BlueprintEvent)

void UBW_MemoFlag_C::ChangeMemoIdentifer_6()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.ChangeMemoIdentifer_6");

	UBW_MemoFlag_C_ChangeMemoIdentifer_6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MemoFlag.BW_MemoFlag_C.ChangeMemoIdentifer_7
// (BlueprintCallable, BlueprintEvent)

void UBW_MemoFlag_C::ChangeMemoIdentifer_7()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.ChangeMemoIdentifer_7");

	UBW_MemoFlag_C_ChangeMemoIdentifer_7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MemoFlag.BW_MemoFlag_C.ChangeMemoIdentifer_8
// (BlueprintCallable, BlueprintEvent)

void UBW_MemoFlag_C::ChangeMemoIdentifer_8()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.ChangeMemoIdentifer_8");

	UBW_MemoFlag_C_ChangeMemoIdentifer_8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MemoFlag.BW_MemoFlag_C.ChangeMemoIdentifer_9
// (BlueprintCallable, BlueprintEvent)

void UBW_MemoFlag_C::ChangeMemoIdentifer_9()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.ChangeMemoIdentifer_9");

	UBW_MemoFlag_C_ChangeMemoIdentifer_9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MemoFlag.BW_MemoFlag_C.ChangeMemoIdentifer_10
// (BlueprintCallable, BlueprintEvent)

void UBW_MemoFlag_C::ChangeMemoIdentifer_10()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.ChangeMemoIdentifer_10");

	UBW_MemoFlag_C_ChangeMemoIdentifer_10_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MemoFlag.BW_MemoFlag_C.BndEvt__S3Button_1_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_MemoFlag_C::BndEvt__S3Button_1_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.BndEvt__S3Button_1_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UBW_MemoFlag_C_BndEvt__S3Button_1_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MemoFlag.BW_MemoFlag_C.ExecuteUbergraph_BW_MemoFlag
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_MemoFlag_C::ExecuteUbergraph_BW_MemoFlag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MemoFlag.BW_MemoFlag_C.ExecuteUbergraph_BW_MemoFlag");

	UBW_MemoFlag_C_ExecuteUbergraph_BW_MemoFlag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

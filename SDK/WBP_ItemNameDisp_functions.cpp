
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

// Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.SetCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ItemNameDisp_C::SetCount(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.SetCount");

	UWBP_ItemNameDisp_C_SetCount_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.InitSet
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ItemNameDisp_C::InitSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.InitSet");

	UWBP_ItemNameDisp_C_InitSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            item_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ItemNameDisp_C::SetIcon(int item_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.SetIcon");

	UWBP_ItemNameDisp_C_SetIcon_Params params;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ItemNameDisp_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.Construct");

	UWBP_ItemNameDisp_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ItemNameDisp_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.Destruct");

	UWBP_ItemNameDisp_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.Close
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemNameDisp_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.Close");

	UWBP_ItemNameDisp_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ItemNameDisp_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.Tick");

	UWBP_ItemNameDisp_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.ExecuteUbergraph_WBP_ItemNameDisp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ItemNameDisp_C::ExecuteUbergraph_WBP_ItemNameDisp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.ExecuteUbergraph_WBP_ItemNameDisp");

	UWBP_ItemNameDisp_C_ExecuteUbergraph_WBP_ItemNameDisp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.OnStartAnmEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ItemNameDisp_C::OnStartAnmEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.OnStartAnmEnd__DelegateSignature");

	UWBP_ItemNameDisp_C_OnStartAnmEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.OnClosedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ItemNameDisp_C::OnClosedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemNameDisp.WBP_ItemNameDisp_C.OnClosedDispatcher__DelegateSignature");

	UWBP_ItemNameDisp_C_OnClosedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

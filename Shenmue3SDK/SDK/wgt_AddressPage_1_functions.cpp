
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

// Function wgt_AddressPage_1.wgt_AddressPage_0_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_AddressPage_0_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_AddressPage_1.wgt_AddressPage_0_C.Construct");

	Uwgt_AddressPage_0_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_AddressPage_1.wgt_AddressPage_0_C.PushButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               positiopn                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uwgt_AddressPage_0_C::PushButton(const struct FVector2D& positiopn)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_AddressPage_1.wgt_AddressPage_0_C.PushButton");

	Uwgt_AddressPage_0_C_PushButton_Params params;
	params.positiopn = positiopn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_AddressPage_1.wgt_AddressPage_0_C.SetPageIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           PageIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_AddressPage_0_C::SetPageIndex(int* PageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_AddressPage_1.wgt_AddressPage_0_C.SetPageIndex");

	Uwgt_AddressPage_0_C_SetPageIndex_Params params;
	params.PageIndex = PageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_AddressPage_1.wgt_AddressPage_0_C.ExecuteUbergraph_wgt_AddressPage_1
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_AddressPage_0_C::ExecuteUbergraph_wgt_AddressPage_1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_AddressPage_1.wgt_AddressPage_0_C.ExecuteUbergraph_wgt_AddressPage_1");

	Uwgt_AddressPage_0_C_ExecuteUbergraph_wgt_AddressPage_1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

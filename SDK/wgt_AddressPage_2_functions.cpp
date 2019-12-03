
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

// Function wgt_AddressPage_2.wgt_AddressPage_1_C.Construct
// (Native, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void Uwgt_AddressPage_1_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_AddressPage_2.wgt_AddressPage_1_C.Construct");

	Uwgt_AddressPage_1_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_AddressPage_2.wgt_AddressPage_1_C.PushButton
// (Exec, NetResponse, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FVector2D               Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uwgt_AddressPage_1_C::PushButton(const struct FVector2D& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_AddressPage_2.wgt_AddressPage_1_C.PushButton");

	Uwgt_AddressPage_1_C_PushButton_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_AddressPage_2.wgt_AddressPage_1_C.SetPageIndex
// (Net, NetRequest, Exec, Native, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// int                            PageIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_AddressPage_1_C::SetPageIndex(int PageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_AddressPage_2.wgt_AddressPage_1_C.SetPageIndex");

	Uwgt_AddressPage_1_C_SetPageIndex_Params params;
	params.PageIndex = PageIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_AddressPage_2.wgt_AddressPage_1_C.ExecuteUbergraph_wgt_AddressPage_2
// (Net, NetReliable, Exec, Event, NetResponse, NetMulticast, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_AddressPage_1_C::ExecuteUbergraph_wgt_AddressPage_2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_AddressPage_2.wgt_AddressPage_1_C.ExecuteUbergraph_wgt_AddressPage_2");

	Uwgt_AddressPage_1_C_ExecuteUbergraph_wgt_AddressPage_2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

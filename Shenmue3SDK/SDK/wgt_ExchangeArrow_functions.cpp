
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

// Function wgt_ExchangeArrow.wgt_ExchangeArrow_C.ChangeVisible_EffItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_ExchangeArrow_C::ChangeVisible_EffItem(int Index, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_ExchangeArrow.wgt_ExchangeArrow_C.ChangeVisible_EffItem");

	Uwgt_ExchangeArrow_C_ChangeVisible_EffItem_Params params;
	params.Index = Index;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_ExchangeArrow.wgt_ExchangeArrow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_ExchangeArrow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_ExchangeArrow.wgt_ExchangeArrow_C.Construct");

	Uwgt_ExchangeArrow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_ExchangeArrow.wgt_ExchangeArrow_C.ExecuteUbergraph_wgt_ExchangeArrow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_ExchangeArrow_C::ExecuteUbergraph_wgt_ExchangeArrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_ExchangeArrow.wgt_ExchangeArrow_C.ExecuteUbergraph_wgt_ExchangeArrow");

	Uwgt_ExchangeArrow_C_ExecuteUbergraph_wgt_ExchangeArrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

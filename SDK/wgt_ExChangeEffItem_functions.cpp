
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

// Function wgt_ExChangeEffItem.wgt_ExChangeEffItem_C.PreConstruct
// (NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_ExChangeEffItem_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_ExChangeEffItem.wgt_ExChangeEffItem_C.PreConstruct");

	Uwgt_ExChangeEffItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_ExChangeEffItem.wgt_ExChangeEffItem_C.Construct
// (NetReliable, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, HasOutParms, HasDefaults, DLLImport)

void Uwgt_ExChangeEffItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_ExChangeEffItem.wgt_ExChangeEffItem_C.Construct");

	Uwgt_ExChangeEffItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_ExChangeEffItem.wgt_ExChangeEffItem_C.Tick
// (NetRequest, Native, Static, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_ExChangeEffItem_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_ExChangeEffItem.wgt_ExChangeEffItem_C.Tick");

	Uwgt_ExChangeEffItem_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_ExChangeEffItem.wgt_ExChangeEffItem_C.ExecuteUbergraph_wgt_ExChangeEffItem
// (Net, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_ExChangeEffItem_C::STATIC_ExecuteUbergraph_wgt_ExChangeEffItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_ExChangeEffItem.wgt_ExChangeEffItem_C.ExecuteUbergraph_wgt_ExChangeEffItem");

	Uwgt_ExChangeEffItem_C_ExecuteUbergraph_wgt_ExChangeEffItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

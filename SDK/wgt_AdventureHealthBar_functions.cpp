
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

// Function wgt_AdventureHealthBar.wgt_AdventureHealthBar_C.Tick
// (NetReliable, NetRequest, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_AdventureHealthBar_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_AdventureHealthBar.wgt_AdventureHealthBar_C.Tick");

	Uwgt_AdventureHealthBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_AdventureHealthBar.wgt_AdventureHealthBar_C.PreConstruct
// (Net, NetReliable, Exec, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_AdventureHealthBar_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_AdventureHealthBar.wgt_AdventureHealthBar_C.PreConstruct");

	Uwgt_AdventureHealthBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_AdventureHealthBar.wgt_AdventureHealthBar_C.ExecuteUbergraph_wgt_AdventureHealthBar
// (NetReliable, NetRequest, Event, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_AdventureHealthBar_C::ExecuteUbergraph_wgt_AdventureHealthBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_AdventureHealthBar.wgt_AdventureHealthBar_C.ExecuteUbergraph_wgt_AdventureHealthBar");

	Uwgt_AdventureHealthBar_C_ExecuteUbergraph_wgt_AdventureHealthBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function WBP_AR_SupportMeter.WBP_AR_SupportMeter_C.SetFlogNumber
// (NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Number                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWBP_AR_SupportMeter_C::STATIC_SetFlogNumber(int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AR_SupportMeter.WBP_AR_SupportMeter_C.SetFlogNumber");

	UWBP_AR_SupportMeter_C_SetFlogNumber_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AR_SupportMeter.WBP_AR_SupportMeter_C.SetTurtleColor
// (NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            SelectIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AR_SupportMeter_C::STATIC_SetTurtleColor(int SelectIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AR_SupportMeter.WBP_AR_SupportMeter_C.SetTurtleColor");

	UWBP_AR_SupportMeter_C_SetTurtleColor_Params params;
	params.SelectIndex = SelectIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AR_SupportMeter.WBP_AR_SupportMeter_C.PreConstruct
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AR_SupportMeter_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AR_SupportMeter.WBP_AR_SupportMeter_C.PreConstruct");

	UWBP_AR_SupportMeter_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AR_SupportMeter.WBP_AR_SupportMeter_C.ExecuteUbergraph_WBP_AR_SupportMeter
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AR_SupportMeter_C::STATIC_ExecuteUbergraph_WBP_AR_SupportMeter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AR_SupportMeter.WBP_AR_SupportMeter_C.ExecuteUbergraph_WBP_AR_SupportMeter");

	UWBP_AR_SupportMeter_C_ExecuteUbergraph_WBP_AR_SupportMeter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

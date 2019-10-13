
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

// Function WBP_AR_SupportMeter.WBP_AR_SupportMeter_C.SetFlogNumber
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWBP_AR_SupportMeter_C::SetFlogNumber(int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AR_SupportMeter.WBP_AR_SupportMeter_C.SetFlogNumber");

	UWBP_AR_SupportMeter_C_SetFlogNumber_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AR_SupportMeter.WBP_AR_SupportMeter_C.SetTurtleColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AR_SupportMeter_C::SetTurtleColor(int SelectIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AR_SupportMeter.WBP_AR_SupportMeter_C.SetTurtleColor");

	UWBP_AR_SupportMeter_C_SetTurtleColor_Params params;
	params.SelectIndex = SelectIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AR_SupportMeter.WBP_AR_SupportMeter_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AR_SupportMeter_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AR_SupportMeter.WBP_AR_SupportMeter_C.PreConstruct");

	UWBP_AR_SupportMeter_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AR_SupportMeter.WBP_AR_SupportMeter_C.ExecuteUbergraph_WBP_AR_SupportMeter
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AR_SupportMeter_C::ExecuteUbergraph_WBP_AR_SupportMeter(int EntryPoint)
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

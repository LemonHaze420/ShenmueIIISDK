
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

// Function WBP_DemoPlayTimer.WBP_DemoPlayTimer_C.SetTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DemoPlayTimer_C::SetTime(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DemoPlayTimer.WBP_DemoPlayTimer_C.SetTime");

	UWBP_DemoPlayTimer_C_SetTime_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DemoPlayTimer.WBP_DemoPlayTimer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_DemoPlayTimer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DemoPlayTimer.WBP_DemoPlayTimer_C.Construct");

	UWBP_DemoPlayTimer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DemoPlayTimer.WBP_DemoPlayTimer_C.ExecuteUbergraph_WBP_DemoPlayTimer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DemoPlayTimer_C::ExecuteUbergraph_WBP_DemoPlayTimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DemoPlayTimer.WBP_DemoPlayTimer_C.ExecuteUbergraph_WBP_DemoPlayTimer");

	UWBP_DemoPlayTimer_C_ExecuteUbergraph_WBP_DemoPlayTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

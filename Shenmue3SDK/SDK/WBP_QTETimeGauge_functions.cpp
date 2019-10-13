
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

// Function WBP_QTETimeGauge.WBP_QTETimeGauge_C.SetCircleRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GaugeRate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETimeGauge_C::SetCircleRate(float GaugeRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETimeGauge.WBP_QTETimeGauge_C.SetCircleRate");

	UWBP_QTETimeGauge_C_SetCircleRate_Params params;
	params.GaugeRate = GaugeRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETimeGauge.WBP_QTETimeGauge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_QTETimeGauge_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETimeGauge.WBP_QTETimeGauge_C.Construct");

	UWBP_QTETimeGauge_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETimeGauge.WBP_QTETimeGauge_C.ExecuteUbergraph_WBP_QTETimeGauge
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETimeGauge_C::ExecuteUbergraph_WBP_QTETimeGauge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETimeGauge.WBP_QTETimeGauge_C.ExecuteUbergraph_WBP_QTETimeGauge");

	UWBP_QTETimeGauge_C_ExecuteUbergraph_WBP_QTETimeGauge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

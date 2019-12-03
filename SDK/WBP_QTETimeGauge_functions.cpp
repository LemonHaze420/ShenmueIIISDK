
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

// Function WBP_QTETimeGauge.WBP_QTETimeGauge_C.SetCircleRate
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Public, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
// (Net, Exec, Event, NetResponse, Public, Delegate, NetServer)

void UWBP_QTETimeGauge_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTETimeGauge.WBP_QTETimeGauge_C.Construct");

	UWBP_QTETimeGauge_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTETimeGauge.WBP_QTETimeGauge_C.ExecuteUbergraph_WBP_QTETimeGauge
// (NetReliable, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTETimeGauge_C::STATIC_ExecuteUbergraph_WBP_QTETimeGauge(int EntryPoint)
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

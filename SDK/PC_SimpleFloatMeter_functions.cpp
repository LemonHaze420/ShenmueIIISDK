
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

// Function PC_SimpleFloatMeter.PC_SimpleFloatMeter_C.MaxOut
// (NetReliable, NetRequest, Event, NetResponse, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)

void UPC_SimpleFloatMeter_C::STATIC_MaxOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_SimpleFloatMeter.PC_SimpleFloatMeter_C.MaxOut");

	UPC_SimpleFloatMeter_C_MaxOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PC_SimpleFloatMeter.PC_SimpleFloatMeter_C.Reset
// (Net, NetRequest, Event, NetResponse, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)

void UPC_SimpleFloatMeter_C::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_SimpleFloatMeter.PC_SimpleFloatMeter_C.Reset");

	UPC_SimpleFloatMeter_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PC_SimpleFloatMeter.PC_SimpleFloatMeter_C.Tick
// (NetReliable, NetRequest, Exec, Static, MulticastDelegate, Public, Private, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Increase                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPC_SimpleFloatMeter_C::STATIC_Tick(bool Increase, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_SimpleFloatMeter.PC_SimpleFloatMeter_C.Tick");

	UPC_SimpleFloatMeter_C_Tick_Params params;
	params.Increase = Increase;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

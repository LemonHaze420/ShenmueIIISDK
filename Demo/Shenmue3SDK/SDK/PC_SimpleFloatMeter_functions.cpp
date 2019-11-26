
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

// Function PC_SimpleFloatMeter.PC_SimpleFloatMeter_C.MaxOut
// (Public, BlueprintCallable, BlueprintEvent)

void UPC_SimpleFloatMeter_C::MaxOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_SimpleFloatMeter.PC_SimpleFloatMeter_C.MaxOut");

	UPC_SimpleFloatMeter_C_MaxOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PC_SimpleFloatMeter.PC_SimpleFloatMeter_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UPC_SimpleFloatMeter_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_SimpleFloatMeter.PC_SimpleFloatMeter_C.Reset");

	UPC_SimpleFloatMeter_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PC_SimpleFloatMeter.PC_SimpleFloatMeter_C.Tick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Increase                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPC_SimpleFloatMeter_C::Tick(bool Increase, float DeltaTime)
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

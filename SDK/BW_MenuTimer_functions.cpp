
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BW_MenuTimer.BW_MenuTimer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBW_MenuTimer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MenuTimer.BW_MenuTimer_C.Construct");

	UBW_MenuTimer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MenuTimer.BW_MenuTimer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_MenuTimer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MenuTimer.BW_MenuTimer_C.Tick");

	UBW_MenuTimer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_MenuTimer.BW_MenuTimer_C.ExecuteUbergraph_BW_MenuTimer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_MenuTimer_C::ExecuteUbergraph_BW_MenuTimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_MenuTimer.BW_MenuTimer_C.ExecuteUbergraph_BW_MenuTimer");

	UBW_MenuTimer_C_ExecuteUbergraph_BW_MenuTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

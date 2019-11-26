
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

// Function PL_Hakkason.PL_Hakkason_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APL_Hakkason_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PL_Hakkason.PL_Hakkason_C.ReceiveBeginPlay");

	APL_Hakkason_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PL_Hakkason.PL_Hakkason_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APL_Hakkason_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PL_Hakkason.PL_Hakkason_C.ReceiveTick");

	APL_Hakkason_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PL_Hakkason.PL_Hakkason_C.ExecuteUbergraph_PL_Hakkason
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APL_Hakkason_C::ExecuteUbergraph_PL_Hakkason(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PL_Hakkason.PL_Hakkason_C.ExecuteUbergraph_PL_Hakkason");

	APL_Hakkason_C_ExecuteUbergraph_PL_Hakkason_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

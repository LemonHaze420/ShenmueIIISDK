
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

// Function SL_Hakkason_Sky.SL_Hakkason_Sky_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASL_Hakkason_Sky_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_Sky.SL_Hakkason_Sky_C.ReceiveBeginPlay");

	ASL_Hakkason_Sky_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_Sky.SL_Hakkason_Sky_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_Sky_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_Sky.SL_Hakkason_Sky_C.ReceiveTick");

	ASL_Hakkason_Sky_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_Sky.SL_Hakkason_Sky_C.ExecuteUbergraph_SL_Hakkason_Sky
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_Sky_C::ExecuteUbergraph_SL_Hakkason_Sky(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_Sky.SL_Hakkason_Sky_C.ExecuteUbergraph_SL_Hakkason_Sky");

	ASL_Hakkason_Sky_C_ExecuteUbergraph_SL_Hakkason_Sky_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

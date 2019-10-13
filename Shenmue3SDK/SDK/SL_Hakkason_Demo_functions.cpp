
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

// Function SL_Hakkason_Demo.SL_Hakkason_Demo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASL_Hakkason_Demo_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_Demo.SL_Hakkason_Demo_C.ReceiveBeginPlay");

	ASL_Hakkason_Demo_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_Demo.SL_Hakkason_Demo_C.ExecuteUbergraph_SL_Hakkason_Demo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_Demo_C::ExecuteUbergraph_SL_Hakkason_Demo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_Demo.SL_Hakkason_Demo_C.ExecuteUbergraph_SL_Hakkason_Demo");

	ASL_Hakkason_Demo_C_ExecuteUbergraph_SL_Hakkason_Demo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function PL_Chobu.PL_Chobu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APL_Chobu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PL_Chobu.PL_Chobu_C.ReceiveBeginPlay");

	APL_Chobu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PL_Chobu.PL_Chobu_C.ExecuteUbergraph_PL_Chobu
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APL_Chobu_C::ExecuteUbergraph_PL_Chobu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PL_Chobu.PL_Chobu_C.ExecuteUbergraph_PL_Chobu");

	APL_Chobu_C_ExecuteUbergraph_PL_Chobu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

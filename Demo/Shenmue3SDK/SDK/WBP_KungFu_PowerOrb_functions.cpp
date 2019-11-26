
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

// Function WBP_KungFu_PowerOrb.WBP_KungFu_PowerOrb_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_KungFu_PowerOrb_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_PowerOrb.WBP_KungFu_PowerOrb_C.Construct");

	UWBP_KungFu_PowerOrb_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_KungFu_PowerOrb.WBP_KungFu_PowerOrb_C.ExecuteUbergraph_WBP_KungFu_PowerOrb
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_KungFu_PowerOrb_C::ExecuteUbergraph_WBP_KungFu_PowerOrb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KungFu_PowerOrb.WBP_KungFu_PowerOrb_C.ExecuteUbergraph_WBP_KungFu_PowerOrb");

	UWBP_KungFu_PowerOrb_C_ExecuteUbergraph_WBP_KungFu_PowerOrb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function BPW_PlayPrice.BPW_PlayPrice_C.SetPlayPrice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayPrice                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PlayPrice_C::SetPlayPrice(int PlayPrice)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PlayPrice.BPW_PlayPrice_C.SetPlayPrice");

	UBPW_PlayPrice_C_SetPlayPrice_Params params;
	params.PlayPrice = PlayPrice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PlayPrice.BPW_PlayPrice_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_PlayPrice_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PlayPrice.BPW_PlayPrice_C.Construct");

	UBPW_PlayPrice_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PlayPrice.BPW_PlayPrice_C.ExecuteUbergraph_BPW_PlayPrice
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PlayPrice_C::ExecuteUbergraph_BPW_PlayPrice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PlayPrice.BPW_PlayPrice_C.ExecuteUbergraph_BPW_PlayPrice");

	UBPW_PlayPrice_C_ExecuteUbergraph_BPW_PlayPrice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

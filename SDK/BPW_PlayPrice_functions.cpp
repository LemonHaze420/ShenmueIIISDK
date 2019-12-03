
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

// Function BPW_PlayPrice.BPW_PlayPrice_C.SetPlayPrice
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PlayPrice                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PlayPrice_C::STATIC_SetPlayPrice(int PlayPrice)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PlayPrice.BPW_PlayPrice_C.SetPlayPrice");

	UBPW_PlayPrice_C_SetPlayPrice_Params params;
	params.PlayPrice = PlayPrice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PlayPrice.BPW_PlayPrice_C.Construct
// (Net, NetReliable, NetRequest, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBPW_PlayPrice_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PlayPrice.BPW_PlayPrice_C.Construct");

	UBPW_PlayPrice_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PlayPrice.BPW_PlayPrice_C.ExecuteUbergraph_BPW_PlayPrice
// (Exec, Native, Event, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PlayPrice_C::STATIC_ExecuteUbergraph_BPW_PlayPrice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PlayPrice.BPW_PlayPrice_C.ExecuteUbergraph_BPW_PlayPrice");

	UBPW_PlayPrice_C_ExecuteUbergraph_BPW_PlayPrice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

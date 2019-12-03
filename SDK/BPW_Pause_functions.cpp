
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

// Function BPW_Pause.BPW_Pause_C.DrawBuildInfo
// (NetReliable, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)

void UBPW_Pause_C::STATIC_DrawBuildInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Pause.BPW_Pause_C.DrawBuildInfo");

	UBPW_Pause_C_DrawBuildInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_Pause.BPW_Pause_C.Construct
// (NetRequest, Native, Static, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void UBPW_Pause_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Pause.BPW_Pause_C.Construct");

	UBPW_Pause_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_Pause.BPW_Pause_C.ExecuteUbergraph_BPW_Pause
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_Pause_C::STATIC_ExecuteUbergraph_BPW_Pause(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Pause.BPW_Pause_C.ExecuteUbergraph_BPW_Pause");

	UBPW_Pause_C_ExecuteUbergraph_BPW_Pause_Params params;
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

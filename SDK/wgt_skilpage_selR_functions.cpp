
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

// Function wgt_skilpage_selR.wgt_skilpage_selR_C.SetCursol
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_skilpage_selR_C::STATIC_SetCursol(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skilpage_selR.wgt_skilpage_selR_C.SetCursol");

	Uwgt_skilpage_selR_C_SetCursol_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_skilpage_selR.wgt_skilpage_selR_C.Construct
// (NetReliable, NetRequest, Exec, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void Uwgt_skilpage_selR_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skilpage_selR.wgt_skilpage_selR_C.Construct");

	Uwgt_skilpage_selR_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_skilpage_selR.wgt_skilpage_selR_C.ExecuteUbergraph_wgt_skilpage_selR
// (NetRequest, Native, Event, Static, Public, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_skilpage_selR_C::STATIC_ExecuteUbergraph_wgt_skilpage_selR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skilpage_selR.wgt_skilpage_selR_C.ExecuteUbergraph_wgt_skilpage_selR");

	Uwgt_skilpage_selR_C_ExecuteUbergraph_wgt_skilpage_selR_Params params;
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

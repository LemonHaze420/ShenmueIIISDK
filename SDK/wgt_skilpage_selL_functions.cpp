
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

// Function wgt_skilpage_selL.wgt_skilpage_selL_C.SetCursol
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_skilpage_selL_C::STATIC_SetCursol(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skilpage_selL.wgt_skilpage_selL_C.SetCursol");

	Uwgt_skilpage_selL_C_SetCursol_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_skilpage_selL.wgt_skilpage_selL_C.Construct
// (Net, Exec, Event, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void Uwgt_skilpage_selL_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skilpage_selL.wgt_skilpage_selL_C.Construct");

	Uwgt_skilpage_selL_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_skilpage_selL.wgt_skilpage_selL_C.ExecuteUbergraph_wgt_skilpage_selL
// (NetRequest, Exec, Native, Event, Static, Public, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_skilpage_selL_C::STATIC_ExecuteUbergraph_wgt_skilpage_selL(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_skilpage_selL.wgt_skilpage_selL_C.ExecuteUbergraph_wgt_skilpage_selL");

	Uwgt_skilpage_selL_C_ExecuteUbergraph_wgt_skilpage_selL_Params params;
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

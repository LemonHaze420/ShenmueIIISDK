
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

// Function UI_TestExit.UI_TestExit_C.Construct
// (Net, NetReliable, NetRequest, Event, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UUI_TestExit_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TestExit.UI_TestExit_C.Construct");

	UUI_TestExit_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TestExit.UI_TestExit_C.ExecuteUbergraph_UI_TestExit
// (NetReliable, NetRequest, Native, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TestExit_C::STATIC_ExecuteUbergraph_UI_TestExit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TestExit.UI_TestExit_C.ExecuteUbergraph_UI_TestExit");

	UUI_TestExit_C_ExecuteUbergraph_UI_TestExit_Params params;
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

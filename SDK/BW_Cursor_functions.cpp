
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

// Function BW_Cursor.BW_Cursor_C.Construct
// (NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBW_Cursor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Cursor.BW_Cursor_C.Construct");

	UBW_Cursor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_Cursor.BW_Cursor_C.ExecuteUbergraph_BW_Cursor
// (Net, Native, NetResponse, Public, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_Cursor_C::ExecuteUbergraph_BW_Cursor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Cursor.BW_Cursor_C.ExecuteUbergraph_BW_Cursor");

	UBW_Cursor_C_ExecuteUbergraph_BW_Cursor_Params params;
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

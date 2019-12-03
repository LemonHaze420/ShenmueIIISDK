
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

// Function BPW_UI_KeyConfig_NewVer.BPW_UI_KeyConfig_NewVer_C.PushRightLeftCursor
// (Net, Exec, Event, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, Const)
// Parameters:
// int                            Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_KeyConfig_NewVer_C::STATIC_PushRightLeftCursor(int Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_KeyConfig_NewVer.BPW_UI_KeyConfig_NewVer_C.PushRightLeftCursor");

	UBPW_UI_KeyConfig_NewVer_C_PushRightLeftCursor_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_KeyConfig_NewVer.BPW_UI_KeyConfig_NewVer_C.PushUpDownCursor
// (NetReliable, NetRequest, Event, Static, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_KeyConfig_NewVer_C::STATIC_PushUpDownCursor(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_KeyConfig_NewVer.BPW_UI_KeyConfig_NewVer_C.PushUpDownCursor");

	UBPW_UI_KeyConfig_NewVer_C_PushUpDownCursor_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_KeyConfig_NewVer.BPW_UI_KeyConfig_NewVer_C.MakeSettingList
// (NetReliable, Exec, NetResponse, Public, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPW_UI_KeyConfig_NewVer_C::MakeSettingList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_KeyConfig_NewVer.BPW_UI_KeyConfig_NewVer_C.MakeSettingList");

	UBPW_UI_KeyConfig_NewVer_C_MakeSettingList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_KeyConfig_NewVer.BPW_UI_KeyConfig_NewVer_C.Construct
// (NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPW_UI_KeyConfig_NewVer_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_KeyConfig_NewVer.BPW_UI_KeyConfig_NewVer_C.Construct");

	UBPW_UI_KeyConfig_NewVer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_KeyConfig_NewVer.BPW_UI_KeyConfig_NewVer_C.ExecuteUbergraph_BPW_UI_KeyConfig_NewVer
// (Net, NetReliable, Exec, NetResponse, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_KeyConfig_NewVer_C::ExecuteUbergraph_BPW_UI_KeyConfig_NewVer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_KeyConfig_NewVer.BPW_UI_KeyConfig_NewVer_C.ExecuteUbergraph_BPW_UI_KeyConfig_NewVer");

	UBPW_UI_KeyConfig_NewVer_C_ExecuteUbergraph_BPW_UI_KeyConfig_NewVer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

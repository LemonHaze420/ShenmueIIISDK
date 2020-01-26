
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

// Function BPW_UI_KeyConfig_NewVer.BPW_UI_KeyConfig_NewVer_C.PushRightLeftCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_KeyConfig_NewVer_C::PushRightLeftCursor(int Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_KeyConfig_NewVer.BPW_UI_KeyConfig_NewVer_C.PushRightLeftCursor");

	UBPW_UI_KeyConfig_NewVer_C_PushRightLeftCursor_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_KeyConfig_NewVer.BPW_UI_KeyConfig_NewVer_C.PushUpDownCursor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_KeyConfig_NewVer_C::PushUpDownCursor(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_KeyConfig_NewVer.BPW_UI_KeyConfig_NewVer_C.PushUpDownCursor");

	UBPW_UI_KeyConfig_NewVer_C_PushUpDownCursor_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_KeyConfig_NewVer.BPW_UI_KeyConfig_NewVer_C.MakeSettingList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_UI_KeyConfig_NewVer_C::MakeSettingList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_KeyConfig_NewVer.BPW_UI_KeyConfig_NewVer_C.MakeSettingList");

	UBPW_UI_KeyConfig_NewVer_C_MakeSettingList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_KeyConfig_NewVer.BPW_UI_KeyConfig_NewVer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_UI_KeyConfig_NewVer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_KeyConfig_NewVer.BPW_UI_KeyConfig_NewVer_C.Construct");

	UBPW_UI_KeyConfig_NewVer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_KeyConfig_NewVer.BPW_UI_KeyConfig_NewVer_C.ExecuteUbergraph_BPW_UI_KeyConfig_NewVer
// (HasDefaults)
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

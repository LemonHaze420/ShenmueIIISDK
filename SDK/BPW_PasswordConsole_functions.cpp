
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

// Function BPW_PasswordConsole.BPW_PasswordConsole_C.PreConstruct
// (NetReliable, Exec, Native, Event, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PasswordConsole_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsole.BPW_PasswordConsole_C.PreConstruct");

	UBPW_PasswordConsole_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PasswordConsole.BPW_PasswordConsole_C.Construct
// (Net, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPW_PasswordConsole_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsole.BPW_PasswordConsole_C.Construct");

	UBPW_PasswordConsole_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PasswordConsole.BPW_PasswordConsole_C.Tick
// (Net, Exec, Static, NetMulticast, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PasswordConsole_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsole.BPW_PasswordConsole_C.Tick");

	UBPW_PasswordConsole_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_PasswordConsole.BPW_PasswordConsole_C.ExecuteUbergraph_BPW_PasswordConsole
// (Native, NetMulticast, Private, Delegate, NetServer, NetClient)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_PasswordConsole_C::ExecuteUbergraph_BPW_PasswordConsole(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_PasswordConsole.BPW_PasswordConsole_C.ExecuteUbergraph_BPW_PasswordConsole");

	UBPW_PasswordConsole_C_ExecuteUbergraph_BPW_PasswordConsole_Params params;
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

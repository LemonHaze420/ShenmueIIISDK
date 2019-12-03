
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

// Function BPC_ChairDebug.BPC_ChairDebug_C.AppendBaseText
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, HasDefaults, BlueprintPure, NetValidate)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBPC_ChairDebug_C::STATIC_AppendBaseText(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ChairDebug.BPC_ChairDebug_C.AppendBaseText");

	UBPC_ChairDebug_C_AppendBaseText_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_ChairDebug.BPC_ChairDebug_C.DrawDebugText
// (Net, NetReliable, Exec, Native, Static, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)

void UBPC_ChairDebug_C::STATIC_DrawDebugText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ChairDebug.BPC_ChairDebug_C.DrawDebugText");

	UBPC_ChairDebug_C_DrawDebugText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ChairDebug.BPC_ChairDebug_C.ReceiveBeginPlay
// (Net, NetReliable, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)

void UBPC_ChairDebug_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ChairDebug.BPC_ChairDebug_C.ReceiveBeginPlay");

	UBPC_ChairDebug_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ChairDebug.BPC_ChairDebug_C.ReceiveTick
// (Exec, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ChairDebug_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ChairDebug.BPC_ChairDebug_C.ReceiveTick");

	UBPC_ChairDebug_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ChairDebug.BPC_ChairDebug_C.ExecuteUbergraph_BPC_ChairDebug
// (Net, NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintPure, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ChairDebug_C::STATIC_ExecuteUbergraph_BPC_ChairDebug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ChairDebug.BPC_ChairDebug_C.ExecuteUbergraph_BPC_ChairDebug");

	UBPC_ChairDebug_C_ExecuteUbergraph_BPC_ChairDebug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

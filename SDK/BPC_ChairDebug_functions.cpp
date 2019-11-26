
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBPC_ChairDebug_C::AppendBaseText(const struct FString& String)
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
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPC_ChairDebug_C::DrawDebugText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ChairDebug.BPC_ChairDebug_C.DrawDebugText");

	UBPC_ChairDebug_C_DrawDebugText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ChairDebug.BPC_ChairDebug_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_ChairDebug_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_ChairDebug.BPC_ChairDebug_C.ReceiveBeginPlay");

	UBPC_ChairDebug_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_ChairDebug.BPC_ChairDebug_C.ReceiveTick
// (Event, Public, BlueprintEvent)
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
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_ChairDebug_C::ExecuteUbergraph_BPC_ChairDebug(int EntryPoint)
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


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

// Function BPC_MiniGameBetSeet.BPC_MiniGameBetSeet_C.GetRenderTarget
// (Native, Event, NetResponse, Static, MulticastDelegate, Protected, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// class UTextureRenderTarget2D*  RefRenderTarget                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameBetSeet_C::STATIC_GetRenderTarget(class UTextureRenderTarget2D** RefRenderTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameBetSeet.BPC_MiniGameBetSeet_C.GetRenderTarget");

	UBPC_MiniGameBetSeet_C_GetRenderTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RefRenderTarget != nullptr)
		*RefRenderTarget = params.RefRenderTarget;
}


// Function BPC_MiniGameBetSeet.BPC_MiniGameBetSeet_C.InitializeRenderTarget
// (Net, NetReliable, NetResponse, MulticastDelegate, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int                            Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameBetSeet_C::InitializeRenderTarget(int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameBetSeet.BPC_MiniGameBetSeet_C.InitializeRenderTarget");

	UBPC_MiniGameBetSeet_C_InitializeRenderTarget_Params params;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameBetSeet.BPC_MiniGameBetSeet_C.ReceiveEndPlay
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameBetSeet_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameBetSeet.BPC_MiniGameBetSeet_C.ReceiveEndPlay");

	UBPC_MiniGameBetSeet_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameBetSeet.BPC_MiniGameBetSeet_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Protected, HasOutParms, HasDefaults, DLLImport)

void UBPC_MiniGameBetSeet_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameBetSeet.BPC_MiniGameBetSeet_C.ReceiveBeginPlay");

	UBPC_MiniGameBetSeet_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameBetSeet.BPC_MiniGameBetSeet_C.ExecuteUbergraph_BPC_MiniGameBetSeet
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Public, Private, HasOutParms, NetClient, DLLImport)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameBetSeet_C::STATIC_ExecuteUbergraph_BPC_MiniGameBetSeet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameBetSeet.BPC_MiniGameBetSeet_C.ExecuteUbergraph_BPC_MiniGameBetSeet");

	UBPC_MiniGameBetSeet_C_ExecuteUbergraph_BPC_MiniGameBetSeet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPC_MiniGameBetSeet.BPC_MiniGameBetSeet_C.GetRenderTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextureRenderTarget2D*  RefRenderTarget                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameBetSeet_C::GetRenderTarget(class UTextureRenderTarget2D** RefRenderTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameBetSeet.BPC_MiniGameBetSeet_C.GetRenderTarget");

	UBPC_MiniGameBetSeet_C_GetRenderTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RefRenderTarget != nullptr)
		*RefRenderTarget = params.RefRenderTarget;
}


// Function BPC_MiniGameBetSeet.BPC_MiniGameBetSeet_C.InitializeRenderTarget
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameBetSeet_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameBetSeet.BPC_MiniGameBetSeet_C.ReceiveEndPlay");

	UBPC_MiniGameBetSeet_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameBetSeet.BPC_MiniGameBetSeet_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_MiniGameBetSeet_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameBetSeet.BPC_MiniGameBetSeet_C.ReceiveBeginPlay");

	UBPC_MiniGameBetSeet_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameBetSeet.BPC_MiniGameBetSeet_C.ExecuteUbergraph_BPC_MiniGameBetSeet
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameBetSeet_C::ExecuteUbergraph_BPC_MiniGameBetSeet(int EntryPoint)
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

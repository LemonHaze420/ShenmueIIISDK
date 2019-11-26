
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

// Function BPC_AutoRefineShoulderCut.BPC_AutoRefineShoulderCut_C.NewFunction_1
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_AutoRefineShoulderCut_C::NewFunction_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AutoRefineShoulderCut.BPC_AutoRefineShoulderCut_C.NewFunction_1");

	UBPC_AutoRefineShoulderCut_C_NewFunction_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_AutoRefineShoulderCut.BPC_AutoRefineShoulderCut_C.ListenerIsTaller
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_AutoRefineShoulderCut_C::ListenerIsTaller(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AutoRefineShoulderCut.BPC_AutoRefineShoulderCut_C.ListenerIsTaller");

	UBPC_AutoRefineShoulderCut_C_ListenerIsTaller_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPC_AutoRefineShoulderCut.BPC_AutoRefineShoulderCut_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_AutoRefineShoulderCut_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AutoRefineShoulderCut.BPC_AutoRefineShoulderCut_C.ReceiveBeginPlay");

	UBPC_AutoRefineShoulderCut_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_AutoRefineShoulderCut.BPC_AutoRefineShoulderCut_C.Update
// (BlueprintCallable, BlueprintEvent)

void UBPC_AutoRefineShoulderCut_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AutoRefineShoulderCut.BPC_AutoRefineShoulderCut_C.Update");

	UBPC_AutoRefineShoulderCut_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_AutoRefineShoulderCut.BPC_AutoRefineShoulderCut_C.ExecuteUbergraph_BPC_AutoRefineShoulderCut
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_AutoRefineShoulderCut_C::ExecuteUbergraph_BPC_AutoRefineShoulderCut(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_AutoRefineShoulderCut.BPC_AutoRefineShoulderCut_C.ExecuteUbergraph_BPC_AutoRefineShoulderCut");

	UBPC_AutoRefineShoulderCut_C_ExecuteUbergraph_BPC_AutoRefineShoulderCut_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

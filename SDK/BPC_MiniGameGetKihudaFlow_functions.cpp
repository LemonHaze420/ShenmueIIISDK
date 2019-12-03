
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

// Function BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C.GetSequence
// (NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, Protected, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_MiniGameBase_C*      MiniGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence*          GetSequence                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence*          LookSequence                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameGetKihudaFlow_C::STATIC_GetSequence(class ABP_MiniGameBase_C* MiniGame, class ULevelSequence** GetSequence, class ULevelSequence** LookSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C.GetSequence");

	UBPC_MiniGameGetKihudaFlow_C_GetSequence_Params params;
	params.MiniGame = MiniGame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GetSequence != nullptr)
		*GetSequence = params.GetSequence;
	if (LookSequence != nullptr)
		*LookSequence = params.LookSequence;
}


// Function BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C.StartGetKihudaFlow
// (Net, NetReliable, Exec, Event, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              OffsetRelativeTrans            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           IsGetMoreTicket                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameGetKihudaFlow_C::StartGetKihudaFlow(const struct FTransform& OffsetRelativeTrans, bool IsGetMoreTicket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C.StartGetKihudaFlow");

	UBPC_MiniGameGetKihudaFlow_C_StartGetKihudaFlow_Params params;
	params.OffsetRelativeTrans = OffsetRelativeTrans;
	params.IsGetMoreTicket = IsGetMoreTicket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C.OnFinishedActorFlow
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void UBPC_MiniGameGetKihudaFlow_C::STATIC_OnFinishedActorFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C.OnFinishedActorFlow");

	UBPC_MiniGameGetKihudaFlow_C_OnFinishedActorFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C.ExecuteUbergraph_BPC_MiniGameGetKihudaFlow
// (Exec, Native, NetResponse, NetMulticast, Public, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameGetKihudaFlow_C::ExecuteUbergraph_BPC_MiniGameGetKihudaFlow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C.ExecuteUbergraph_BPC_MiniGameGetKihudaFlow");

	UBPC_MiniGameGetKihudaFlow_C_ExecuteUbergraph_BPC_MiniGameGetKihudaFlow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C.OnEndComponentFlow__DelegateSignature
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UBPC_MiniGameGetKihudaFlow_C::STATIC_OnEndComponentFlow__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C.OnEndComponentFlow__DelegateSignature");

	UBPC_MiniGameGetKihudaFlow_C_OnEndComponentFlow__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

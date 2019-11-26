
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameBase_C*      MiniGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence*          GetSequence                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence*          LookSequence                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameGetKihudaFlow_C::GetSequence(class ABP_MiniGameBase_C* MiniGame, class ULevelSequence** GetSequence, class ULevelSequence** LookSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C.GetSequence");

	UBPC_MiniGameGetKihudaFlow_C_GetSequence_Params params;
	params.MiniGame = MiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GetSequence != nullptr)
		*GetSequence = params.GetSequence;
	if (LookSequence != nullptr)
		*LookSequence = params.LookSequence;
}


// Function BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C.StartGetKihudaFlow
// (BlueprintCallable, BlueprintEvent)
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
// (BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameGetKihudaFlow_C::OnFinishedActorFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C.OnFinishedActorFlow");

	UBPC_MiniGameGetKihudaFlow_C_OnFinishedActorFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C.ExecuteUbergraph_BPC_MiniGameGetKihudaFlow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameGetKihudaFlow_C::ExecuteUbergraph_BPC_MiniGameGetKihudaFlow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C.ExecuteUbergraph_BPC_MiniGameGetKihudaFlow");

	UBPC_MiniGameGetKihudaFlow_C_ExecuteUbergraph_BPC_MiniGameGetKihudaFlow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C.OnEndComponentFlow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPC_MiniGameGetKihudaFlow_C::OnEndComponentFlow__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameGetKihudaFlow.BPC_MiniGameGetKihudaFlow_C.OnEndComponentFlow__DelegateSignature");

	UBPC_MiniGameGetKihudaFlow_C_OnEndComponentFlow__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

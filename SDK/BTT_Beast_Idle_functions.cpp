
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

// Function BTT_Beast_Idle.BTT_Beast_Idle_C.ReceiveAbort
// (Exec, Event, Public, Protected, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// class AActor*                  OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_Beast_Idle_C::ReceiveAbort(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_Beast_Idle.BTT_Beast_Idle_C.ReceiveAbort");

	UBTT_Beast_Idle_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_Beast_Idle.BTT_Beast_Idle_C.ReceiveTickAI
// (Native, NetResponse, Private, HasDefaults, NetValidate)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_Beast_Idle_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_Beast_Idle.BTT_Beast_Idle_C.ReceiveTickAI");

	UBTT_Beast_Idle_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_Beast_Idle.BTT_Beast_Idle_C.ExecuteUbergraph_BTT_Beast_Idle
// (NetReliable, Exec, NetResponse, MulticastDelegate, Public, Protected, NetClient, BlueprintCallable, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_Beast_Idle_C::ExecuteUbergraph_BTT_Beast_Idle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_Beast_Idle.BTT_Beast_Idle_C.ExecuteUbergraph_BTT_Beast_Idle");

	UBTT_Beast_Idle_C_ExecuteUbergraph_BTT_Beast_Idle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

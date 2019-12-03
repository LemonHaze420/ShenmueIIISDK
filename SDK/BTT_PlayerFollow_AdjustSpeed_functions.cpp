
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

// Function BTT_PlayerFollow_AdjustSpeed.BTT_PlayerFollow_AdjustSpeed_C.ReceiveTickAI
// (NetReliable, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayerFollow_AdjustSpeed_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_AdjustSpeed.BTT_PlayerFollow_AdjustSpeed_C.ReceiveTickAI");

	UBTT_PlayerFollow_AdjustSpeed_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayerFollow_AdjustSpeed.BTT_PlayerFollow_AdjustSpeed_C.ReceiveAbortAI
// (NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayerFollow_AdjustSpeed_C::STATIC_ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_AdjustSpeed.BTT_PlayerFollow_AdjustSpeed_C.ReceiveAbortAI");

	UBTT_PlayerFollow_AdjustSpeed_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PlayerFollow_AdjustSpeed.BTT_PlayerFollow_AdjustSpeed_C.ExecuteUbergraph_BTT_PlayerFollow_AdjustSpeed
// (Event, Static, Public, Protected, Delegate, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PlayerFollow_AdjustSpeed_C::STATIC_ExecuteUbergraph_BTT_PlayerFollow_AdjustSpeed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PlayerFollow_AdjustSpeed.BTT_PlayerFollow_AdjustSpeed_C.ExecuteUbergraph_BTT_PlayerFollow_AdjustSpeed");

	UBTT_PlayerFollow_AdjustSpeed_C_ExecuteUbergraph_BTT_PlayerFollow_AdjustSpeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

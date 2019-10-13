
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

// Function BTS_PlayerFollow_CheckEndFollow.BTS_PlayerFollow_CheckEndFollow_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTS_PlayerFollow_CheckEndFollow_C::ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_PlayerFollow_CheckEndFollow.BTS_PlayerFollow_CheckEndFollow_C.ReceiveTickAI");

	UBTS_PlayerFollow_CheckEndFollow_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTS_PlayerFollow_CheckEndFollow.BTS_PlayerFollow_CheckEndFollow_C.ReceiveSearchStartAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTS_PlayerFollow_CheckEndFollow_C::ReceiveSearchStartAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_PlayerFollow_CheckEndFollow.BTS_PlayerFollow_CheckEndFollow_C.ReceiveSearchStartAI");

	UBTS_PlayerFollow_CheckEndFollow_C_ReceiveSearchStartAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTS_PlayerFollow_CheckEndFollow.BTS_PlayerFollow_CheckEndFollow_C.ExecuteUbergraph_BTS_PlayerFollow_CheckEndFollow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTS_PlayerFollow_CheckEndFollow_C::ExecuteUbergraph_BTS_PlayerFollow_CheckEndFollow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_PlayerFollow_CheckEndFollow.BTS_PlayerFollow_CheckEndFollow_C.ExecuteUbergraph_BTS_PlayerFollow_CheckEndFollow");

	UBTS_PlayerFollow_CheckEndFollow_C_ExecuteUbergraph_BTS_PlayerFollow_CheckEndFollow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

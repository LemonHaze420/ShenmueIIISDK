
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_MiniGame_SmartBall_SimpleBingoA.BP_MiniGame_SmartBall_SimpleBingoA_C.CheckBingo
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BingoNum                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SmartBall_SimpleBingoA_C::CheckBingo(int* BingoNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBall_SimpleBingoA.BP_MiniGame_SmartBall_SimpleBingoA_C.CheckBingo");

	ABP_MiniGame_SmartBall_SimpleBingoA_C_CheckBingo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BingoNum != nullptr)
		*BingoNum = params.BingoNum;
}


// Function BP_MiniGame_SmartBall_SimpleBingoA.BP_MiniGame_SmartBall_SimpleBingoA_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_SmartBall_SimpleBingoA_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBall_SimpleBingoA.BP_MiniGame_SmartBall_SimpleBingoA_C.UserConstructionScript");

	ABP_MiniGame_SmartBall_SimpleBingoA_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBall_SimpleBingoA.BP_MiniGame_SmartBall_SimpleBingoA_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_SmartBall_SimpleBingoA_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBall_SimpleBingoA.BP_MiniGame_SmartBall_SimpleBingoA_C.ReceiveBeginPlay");

	ABP_MiniGame_SmartBall_SimpleBingoA_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBall_SimpleBingoA.BP_MiniGame_SmartBall_SimpleBingoA_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SmartBall_SimpleBingoA_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBall_SimpleBingoA.BP_MiniGame_SmartBall_SimpleBingoA_C.ReceiveTick");

	ABP_MiniGame_SmartBall_SimpleBingoA_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBall_SimpleBingoA.BP_MiniGame_SmartBall_SimpleBingoA_C.ExecuteUbergraph_BP_MiniGame_SmartBall_SimpleBingoA
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SmartBall_SimpleBingoA_C::ExecuteUbergraph_BP_MiniGame_SmartBall_SimpleBingoA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBall_SimpleBingoA.BP_MiniGame_SmartBall_SimpleBingoA_C.ExecuteUbergraph_BP_MiniGame_SmartBall_SimpleBingoA");

	ABP_MiniGame_SmartBall_SimpleBingoA_C_ExecuteUbergraph_BP_MiniGame_SmartBall_SimpleBingoA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

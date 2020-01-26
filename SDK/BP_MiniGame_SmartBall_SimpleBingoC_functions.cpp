
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

// Function BP_MiniGame_SmartBall_SimpleBingoC.BP_MiniGame_SmartBall_SimpleBingoC_C.CheckBingo
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BingoNum                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SmartBall_SimpleBingoC_C::CheckBingo(int* BingoNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBall_SimpleBingoC.BP_MiniGame_SmartBall_SimpleBingoC_C.CheckBingo");

	ABP_MiniGame_SmartBall_SimpleBingoC_C_CheckBingo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BingoNum != nullptr)
		*BingoNum = params.BingoNum;
}


// Function BP_MiniGame_SmartBall_SimpleBingoC.BP_MiniGame_SmartBall_SimpleBingoC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_SmartBall_SimpleBingoC_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBall_SimpleBingoC.BP_MiniGame_SmartBall_SimpleBingoC_C.UserConstructionScript");

	ABP_MiniGame_SmartBall_SimpleBingoC_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBall_SimpleBingoC.BP_MiniGame_SmartBall_SimpleBingoC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_SmartBall_SimpleBingoC_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBall_SimpleBingoC.BP_MiniGame_SmartBall_SimpleBingoC_C.ReceiveBeginPlay");

	ABP_MiniGame_SmartBall_SimpleBingoC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBall_SimpleBingoC.BP_MiniGame_SmartBall_SimpleBingoC_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SmartBall_SimpleBingoC_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBall_SimpleBingoC.BP_MiniGame_SmartBall_SimpleBingoC_C.ReceiveTick");

	ABP_MiniGame_SmartBall_SimpleBingoC_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBall_SimpleBingoC.BP_MiniGame_SmartBall_SimpleBingoC_C.ExecuteUbergraph_BP_MiniGame_SmartBall_SimpleBingoC
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SmartBall_SimpleBingoC_C::ExecuteUbergraph_BP_MiniGame_SmartBall_SimpleBingoC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBall_SimpleBingoC.BP_MiniGame_SmartBall_SimpleBingoC_C.ExecuteUbergraph_BP_MiniGame_SmartBall_SimpleBingoC");

	ABP_MiniGame_SmartBall_SimpleBingoC_C_ExecuteUbergraph_BP_MiniGame_SmartBall_SimpleBingoC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

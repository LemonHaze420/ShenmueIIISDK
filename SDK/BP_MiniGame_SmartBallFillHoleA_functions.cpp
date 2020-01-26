
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

// Function BP_MiniGame_SmartBallFillHoleA.BP_MiniGame_SmartBallFillHoleA_C.CheckBingo
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BingoNum                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SmartBallFillHoleA_C::CheckBingo(int* BingoNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleA.BP_MiniGame_SmartBallFillHoleA_C.CheckBingo");

	ABP_MiniGame_SmartBallFillHoleA_C_CheckBingo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BingoNum != nullptr)
		*BingoNum = params.BingoNum;
}


// Function BP_MiniGame_SmartBallFillHoleA.BP_MiniGame_SmartBallFillHoleA_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_SmartBallFillHoleA_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleA.BP_MiniGame_SmartBallFillHoleA_C.UserConstructionScript");

	ABP_MiniGame_SmartBallFillHoleA_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBallFillHoleA.BP_MiniGame_SmartBallFillHoleA_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_SmartBallFillHoleA_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleA.BP_MiniGame_SmartBallFillHoleA_C.ReceiveBeginPlay");

	ABP_MiniGame_SmartBallFillHoleA_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBallFillHoleA.BP_MiniGame_SmartBallFillHoleA_C.ExecuteUbergraph_BP_MiniGame_SmartBallFillHoleA
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SmartBallFillHoleA_C::ExecuteUbergraph_BP_MiniGame_SmartBallFillHoleA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleA.BP_MiniGame_SmartBallFillHoleA_C.ExecuteUbergraph_BP_MiniGame_SmartBallFillHoleA");

	ABP_MiniGame_SmartBallFillHoleA_C_ExecuteUbergraph_BP_MiniGame_SmartBallFillHoleA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

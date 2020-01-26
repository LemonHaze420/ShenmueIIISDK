
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

// Function BP_MiniGame_SmartBallFillHoleC.BP_MiniGame_SmartBallFillHoleC_C.CheckBingo
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BingoNum                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SmartBallFillHoleC_C::CheckBingo(int* BingoNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleC.BP_MiniGame_SmartBallFillHoleC_C.CheckBingo");

	ABP_MiniGame_SmartBallFillHoleC_C_CheckBingo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BingoNum != nullptr)
		*BingoNum = params.BingoNum;
}


// Function BP_MiniGame_SmartBallFillHoleC.BP_MiniGame_SmartBallFillHoleC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_SmartBallFillHoleC_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleC.BP_MiniGame_SmartBallFillHoleC_C.UserConstructionScript");

	ABP_MiniGame_SmartBallFillHoleC_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBallFillHoleC.BP_MiniGame_SmartBallFillHoleC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_SmartBallFillHoleC_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleC.BP_MiniGame_SmartBallFillHoleC_C.ReceiveBeginPlay");

	ABP_MiniGame_SmartBallFillHoleC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBallFillHoleC.BP_MiniGame_SmartBallFillHoleC_C.ExecuteUbergraph_BP_MiniGame_SmartBallFillHoleC
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SmartBallFillHoleC_C::ExecuteUbergraph_BP_MiniGame_SmartBallFillHoleC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleC.BP_MiniGame_SmartBallFillHoleC_C.ExecuteUbergraph_BP_MiniGame_SmartBallFillHoleC");

	ABP_MiniGame_SmartBallFillHoleC_C_ExecuteUbergraph_BP_MiniGame_SmartBallFillHoleC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

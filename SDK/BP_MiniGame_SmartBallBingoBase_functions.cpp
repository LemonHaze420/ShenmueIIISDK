
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

// Function BP_MiniGame_SmartBallBingoBase.BP_MiniGame_SmartBallBingoBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_SmartBallBingoBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallBingoBase.BP_MiniGame_SmartBallBingoBase_C.UserConstructionScript");

	ABP_MiniGame_SmartBallBingoBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBallBingoBase.BP_MiniGame_SmartBallBingoBase_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_SmartBallBingoBase_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallBingoBase.BP_MiniGame_SmartBallBingoBase_C.StartMiniGame");

	ABP_MiniGame_SmartBallBingoBase_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBallBingoBase.BP_MiniGame_SmartBallBingoBase_C.ExecuteUbergraph_BP_MiniGame_SmartBallBingoBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SmartBallBingoBase_C::ExecuteUbergraph_BP_MiniGame_SmartBallBingoBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallBingoBase.BP_MiniGame_SmartBallBingoBase_C.ExecuteUbergraph_BP_MiniGame_SmartBallBingoBase");

	ABP_MiniGame_SmartBallBingoBase_C_ExecuteUbergraph_BP_MiniGame_SmartBallBingoBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

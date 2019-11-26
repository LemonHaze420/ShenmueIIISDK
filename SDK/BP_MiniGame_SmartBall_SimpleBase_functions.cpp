
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

// Function BP_MiniGame_SmartBall_SimpleBase.BP_MiniGame_SmartBall_SimpleBase_C.InitializeBingoType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SmartBall_SimpleBase_C::InitializeBingoType(int InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBall_SimpleBase.BP_MiniGame_SmartBall_SimpleBase_C.InitializeBingoType");

	ABP_MiniGame_SmartBall_SimpleBase_C_InitializeBingoType_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBall_SimpleBase.BP_MiniGame_SmartBall_SimpleBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_SmartBall_SimpleBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBall_SimpleBase.BP_MiniGame_SmartBall_SimpleBase_C.UserConstructionScript");

	ABP_MiniGame_SmartBall_SimpleBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

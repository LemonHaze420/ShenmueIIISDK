
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

// Function BPC_MiniGameInGameLight.BPC_MiniGameInGameLight_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameInGameLight_C::SetEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameInGameLight.BPC_MiniGameInGameLight_C.SetEnabled");

	UBPC_MiniGameInGameLight_C_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameInGameLight.BPC_MiniGameInGameLight_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_MiniGameInGameLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameInGameLight.BPC_MiniGameInGameLight_C.ReceiveBeginPlay");

	UBPC_MiniGameInGameLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameInGameLight.BPC_MiniGameInGameLight_C.OnStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameInGameLight_C::OnStart(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameInGameLight.BPC_MiniGameInGameLight_C.OnStart");

	UBPC_MiniGameInGameLight_C_OnStart_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

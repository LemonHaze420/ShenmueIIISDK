
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

// Function BP_MiniGame_KeihoPlayer.BP_MiniGame_KeihoPlayer_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KeihoPlayer_C::SetEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoPlayer.BP_MiniGame_KeihoPlayer_C.SetEnabled");

	ABP_MiniGame_KeihoPlayer_C_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KeihoPlayer.BP_MiniGame_KeihoPlayer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_KeihoPlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoPlayer.BP_MiniGame_KeihoPlayer_C.UserConstructionScript");

	ABP_MiniGame_KeihoPlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KeihoPlayer.BP_MiniGame_KeihoPlayer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_KeihoPlayer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoPlayer.BP_MiniGame_KeihoPlayer_C.ReceiveBeginPlay");

	ABP_MiniGame_KeihoPlayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KeihoPlayer.BP_MiniGame_KeihoPlayer_C.ExecuteUbergraph_BP_MiniGame_KeihoPlayer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KeihoPlayer_C::ExecuteUbergraph_BP_MiniGame_KeihoPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoPlayer.BP_MiniGame_KeihoPlayer_C.ExecuteUbergraph_BP_MiniGame_KeihoPlayer");

	ABP_MiniGame_KeihoPlayer_C_ExecuteUbergraph_BP_MiniGame_KeihoPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

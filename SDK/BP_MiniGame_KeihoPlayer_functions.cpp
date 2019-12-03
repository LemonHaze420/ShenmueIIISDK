
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

// Function BP_MiniGame_KeihoPlayer.BP_MiniGame_KeihoPlayer_C.SetEnabled
// (NetRequest, Native, NetResponse, Static, NetMulticast, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KeihoPlayer_C::STATIC_SetEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoPlayer.BP_MiniGame_KeihoPlayer_C.SetEnabled");

	ABP_MiniGame_KeihoPlayer_C_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KeihoPlayer.BP_MiniGame_KeihoPlayer_C.UserConstructionScript
// (Net, Exec, Native, Event, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_KeihoPlayer_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoPlayer.BP_MiniGame_KeihoPlayer_C.UserConstructionScript");

	ABP_MiniGame_KeihoPlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KeihoPlayer.BP_MiniGame_KeihoPlayer_C.ReceiveBeginPlay
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_KeihoPlayer_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoPlayer.BP_MiniGame_KeihoPlayer_C.ReceiveBeginPlay");

	ABP_MiniGame_KeihoPlayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KeihoPlayer.BP_MiniGame_KeihoPlayer_C.ExecuteUbergraph_BP_MiniGame_KeihoPlayer
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KeihoPlayer_C::STATIC_ExecuteUbergraph_BP_MiniGame_KeihoPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoPlayer.BP_MiniGame_KeihoPlayer_C.ExecuteUbergraph_BP_MiniGame_KeihoPlayer");

	ABP_MiniGame_KeihoPlayer_C_ExecuteUbergraph_BP_MiniGame_KeihoPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

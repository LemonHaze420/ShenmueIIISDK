
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

// Function BP_WhackJangMoleMiniGame.BP_WhackJangMoleMiniGame_C.UserConstructionScript
// (Net, NetResponse, Private, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_WhackJangMoleMiniGame_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackJangMoleMiniGame.BP_WhackJangMoleMiniGame_C.UserConstructionScript");

	ABP_WhackJangMoleMiniGame_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackJangMoleMiniGame.BP_WhackJangMoleMiniGame_C.ReceiveBeginPlay
// (Exec, Native, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_WhackJangMoleMiniGame_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackJangMoleMiniGame.BP_WhackJangMoleMiniGame_C.ReceiveBeginPlay");

	ABP_WhackJangMoleMiniGame_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackJangMoleMiniGame.BP_WhackJangMoleMiniGame_C.ReceiveTick
// (Net, NetReliable, Exec, Native, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WhackJangMoleMiniGame_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackJangMoleMiniGame.BP_WhackJangMoleMiniGame_C.ReceiveTick");

	ABP_WhackJangMoleMiniGame_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackJangMoleMiniGame.BP_WhackJangMoleMiniGame_C.ExecuteUbergraph_BP_WhackJangMoleMiniGame
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WhackJangMoleMiniGame_C::STATIC_ExecuteUbergraph_BP_WhackJangMoleMiniGame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackJangMoleMiniGame.BP_WhackJangMoleMiniGame_C.ExecuteUbergraph_BP_WhackJangMoleMiniGame");

	ABP_WhackJangMoleMiniGame_C_ExecuteUbergraph_BP_WhackJangMoleMiniGame_Params params;
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

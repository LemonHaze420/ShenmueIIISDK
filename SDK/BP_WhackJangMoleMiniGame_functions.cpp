
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

// Function BP_WhackJangMoleMiniGame.BP_WhackJangMoleMiniGame_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WhackJangMoleMiniGame_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackJangMoleMiniGame.BP_WhackJangMoleMiniGame_C.UserConstructionScript");

	ABP_WhackJangMoleMiniGame_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackJangMoleMiniGame.BP_WhackJangMoleMiniGame_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WhackJangMoleMiniGame_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackJangMoleMiniGame.BP_WhackJangMoleMiniGame_C.ReceiveBeginPlay");

	ABP_WhackJangMoleMiniGame_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackJangMoleMiniGame.BP_WhackJangMoleMiniGame_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WhackJangMoleMiniGame_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackJangMoleMiniGame.BP_WhackJangMoleMiniGame_C.ReceiveTick");

	ABP_WhackJangMoleMiniGame_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WhackJangMoleMiniGame.BP_WhackJangMoleMiniGame_C.ExecuteUbergraph_BP_WhackJangMoleMiniGame
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WhackJangMoleMiniGame_C::ExecuteUbergraph_BP_WhackJangMoleMiniGame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhackJangMoleMiniGame.BP_WhackJangMoleMiniGame_C.ExecuteUbergraph_BP_WhackJangMoleMiniGame");

	ABP_WhackJangMoleMiniGame_C_ExecuteUbergraph_BP_WhackJangMoleMiniGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

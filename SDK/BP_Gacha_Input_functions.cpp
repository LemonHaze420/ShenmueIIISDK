
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

// Function BP_Gacha_Input.BP_Gacha_Input_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Gacha_Input_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gacha_Input.BP_Gacha_Input_C.UserConstructionScript");

	ABP_Gacha_Input_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gacha_Input.BP_Gacha_Input_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Gacha_Input_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gacha_Input.BP_Gacha_Input_C.StartMiniGame");

	ABP_Gacha_Input_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gacha_Input.BP_Gacha_Input_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Gacha_Input_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gacha_Input.BP_Gacha_Input_C.EndMiniGame");

	ABP_Gacha_Input_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gacha_Input.BP_Gacha_Input_C.ExecuteUbergraph_BP_Gacha_Input
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gacha_Input_C::ExecuteUbergraph_BP_Gacha_Input(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gacha_Input.BP_Gacha_Input_C.ExecuteUbergraph_BP_Gacha_Input");

	ABP_Gacha_Input_C_ExecuteUbergraph_BP_Gacha_Input_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

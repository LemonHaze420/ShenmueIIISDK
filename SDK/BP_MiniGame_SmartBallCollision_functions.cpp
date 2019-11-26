
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

// Function BP_MiniGame_SmartBallCollision.BP_MiniGame_SmartBallCollision_C.SetCollisionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SmartBallCollision_C::SetCollisionEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallCollision.BP_MiniGame_SmartBallCollision_C.SetCollisionEnabled");

	ABP_MiniGame_SmartBallCollision_C_SetCollisionEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBallCollision.BP_MiniGame_SmartBallCollision_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_SmartBallCollision_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallCollision.BP_MiniGame_SmartBallCollision_C.UserConstructionScript");

	ABP_MiniGame_SmartBallCollision_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

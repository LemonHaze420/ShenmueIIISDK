
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

// Function BPC_MiniGame_ST_Camera.BPC_MiniGame_ST_Camera_C.UpdateFollowArmCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGame_ST_Camera_C::UpdateFollowArmCamera(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGame_ST_Camera.BPC_MiniGame_ST_Camera_C.UpdateFollowArmCamera");

	UBPC_MiniGame_ST_Camera_C_UpdateFollowArmCamera_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

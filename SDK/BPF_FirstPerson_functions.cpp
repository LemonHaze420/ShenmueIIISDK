
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

// Function BPF_FirstPerson.BPF_FirstPerson_C.BPF_SetPlayerAndCameraYaw
// (Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_FirstPerson_C::BPF_SetPlayerAndCameraYaw(float Yaw, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_FirstPerson.BPF_FirstPerson_C.BPF_SetPlayerAndCameraYaw");

	UBPF_FirstPerson_C_BPF_SetPlayerAndCameraYaw_Params params;
	params.Yaw = Yaw;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

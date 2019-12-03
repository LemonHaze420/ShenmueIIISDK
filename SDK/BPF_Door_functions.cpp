
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

// Function BPF_Door.BPF_Door_C.GetDoorManager
// (Native, NetMulticast, MulticastDelegate, Private, Delegate, NetClient, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_DoorManager_C*       DoorManager                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Door_C::GetDoorManager(class UObject* __WorldContext, class ABP_DoorManager_C** DoorManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Door.BPF_Door_C.GetDoorManager");

	UBPF_Door_C_GetDoorManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DoorManager != nullptr)
		*DoorManager = params.DoorManager;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

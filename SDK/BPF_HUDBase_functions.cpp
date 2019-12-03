
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

// Function BPF_HUDBase.BPF_HUDBase_C.BPF_SafeRemovePersistantWidget
// (NetRequest, Exec, Native, Public, Private, Delegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_HUDBase_C::BPF_SafeRemovePersistantWidget(class UObject* __WorldContext, class UUserWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_HUDBase.BPF_HUDBase_C.BPF_SafeRemovePersistantWidget");

	UBPF_HUDBase_C_BPF_SafeRemovePersistantWidget_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BPF_HUDBase.BPF_HUDBase_C.getS3HudBase
// (Event, NetResponse, NetMulticast, MulticastDelegate, Public, BlueprintCallable)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3HUD_Base_C*        BP_S3HUD_Base                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_HUDBase_C::getS3HudBase(class UObject* __WorldContext, class ABP_S3HUD_Base_C** BP_S3HUD_Base)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_HUDBase.BPF_HUDBase_C.getS3HudBase");

	UBPF_HUDBase_C_getS3HudBase_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BP_S3HUD_Base != nullptr)
		*BP_S3HUD_Base = params.BP_S3HUD_Base;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

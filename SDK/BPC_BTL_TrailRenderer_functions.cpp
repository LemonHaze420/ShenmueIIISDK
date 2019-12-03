
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

// Function BPC_BTL_TrailRenderer.BPC_BTL_TrailRenderer_C.UpdateTimeDilation
// (NetRequest, NetResponse, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, NetValidate)

void UBPC_BTL_TrailRenderer_C::STATIC_UpdateTimeDilation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BTL_TrailRenderer.BPC_BTL_TrailRenderer_C.UpdateTimeDilation");

	UBPC_BTL_TrailRenderer_C_UpdateTimeDilation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BTL_TrailRenderer.BPC_BTL_TrailRenderer_C.UpdateRenderingState
// (NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, Public, HasOutParms, HasDefaults, NetClient, DLLImport, NetValidate)

void UBPC_BTL_TrailRenderer_C::STATIC_UpdateRenderingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BTL_TrailRenderer.BPC_BTL_TrailRenderer_C.UpdateRenderingState");

	UBPC_BTL_TrailRenderer_C_UpdateRenderingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BTL_TrailRenderer.BPC_BTL_TrailRenderer_C.ReceiveTick
// (Native, Event, NetResponse, Static, NetMulticast, Public, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_BTL_TrailRenderer_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BTL_TrailRenderer.BPC_BTL_TrailRenderer_C.ReceiveTick");

	UBPC_BTL_TrailRenderer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BTL_TrailRenderer.BPC_BTL_TrailRenderer_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)

void UBPC_BTL_TrailRenderer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BTL_TrailRenderer.BPC_BTL_TrailRenderer_C.ReceiveBeginPlay");

	UBPC_BTL_TrailRenderer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BTL_TrailRenderer.BPC_BTL_TrailRenderer_C.ExecuteUbergraph_BPC_BTL_TrailRenderer
// (NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_BTL_TrailRenderer_C::STATIC_ExecuteUbergraph_BPC_BTL_TrailRenderer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BTL_TrailRenderer.BPC_BTL_TrailRenderer_C.ExecuteUbergraph_BPC_BTL_TrailRenderer");

	UBPC_BTL_TrailRenderer_C_ExecuteUbergraph_BPC_BTL_TrailRenderer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

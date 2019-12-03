
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

// Function BP_AnisotropicFlare.BP_AnisotropicFlare_C.UserConstructionScript
// (NetRequest, Exec, Event, Static, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport)

void ABP_AnisotropicFlare_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnisotropicFlare.BP_AnisotropicFlare_C.UserConstructionScript");

	ABP_AnisotropicFlare_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnisotropicFlare.BP_AnisotropicFlare_C.ReceiveTick
// (Native, Event, NetMulticast, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnisotropicFlare_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnisotropicFlare.BP_AnisotropicFlare_C.ReceiveTick");

	ABP_AnisotropicFlare_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnisotropicFlare.BP_AnisotropicFlare_C.ExecuteUbergraph_BP_AnisotropicFlare
// (Net, NetReliable, NetRequest, NetResponse, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnisotropicFlare_C::ExecuteUbergraph_BP_AnisotropicFlare(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnisotropicFlare.BP_AnisotropicFlare_C.ExecuteUbergraph_BP_AnisotropicFlare");

	ABP_AnisotropicFlare_C_ExecuteUbergraph_BP_AnisotropicFlare_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

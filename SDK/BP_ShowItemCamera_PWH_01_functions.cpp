
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

// Function BP_ShowItemCamera_PWH_01.BP_ShowItemCamera_PWH_01_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_ShowItemCamera_PWH_01_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShowItemCamera_PWH_01.BP_ShowItemCamera_PWH_01_C.UserConstructionScript");

	ABP_ShowItemCamera_PWH_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShowItemCamera_PWH_01.BP_ShowItemCamera_PWH_01_C.ReceiveBeginPlay
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Private, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_ShowItemCamera_PWH_01_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShowItemCamera_PWH_01.BP_ShowItemCamera_PWH_01_C.ReceiveBeginPlay");

	ABP_ShowItemCamera_PWH_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShowItemCamera_PWH_01.BP_ShowItemCamera_PWH_01_C.ReceiveTick
// (NetReliable, NetRequest, Event, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShowItemCamera_PWH_01_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShowItemCamera_PWH_01.BP_ShowItemCamera_PWH_01_C.ReceiveTick");

	ABP_ShowItemCamera_PWH_01_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShowItemCamera_PWH_01.BP_ShowItemCamera_PWH_01_C.ExecuteUbergraph_BP_ShowItemCamera_PWH_01
// (Net, NetReliable, Public, Private, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShowItemCamera_PWH_01_C::ExecuteUbergraph_BP_ShowItemCamera_PWH_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShowItemCamera_PWH_01.BP_ShowItemCamera_PWH_01_C.ExecuteUbergraph_BP_ShowItemCamera_PWH_01");

	ABP_ShowItemCamera_PWH_01_C_ExecuteUbergraph_BP_ShowItemCamera_PWH_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

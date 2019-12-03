
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

// Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.GetPortalComponent
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_Gimmick_warpPortalComp_C* PortalComponent                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Gimmick_warpPortalArea_C::STATIC_GetPortalComponent(class UBP_Gimmick_warpPortalComp_C** PortalComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.GetPortalComponent");

	ABP_Gimmick_warpPortalArea_C_GetPortalComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PortalComponent != nullptr)
		*PortalComponent = params.PortalComponent;
}


// Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_Gimmick_warpPortalArea_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.UserConstructionScript");

	ABP_Gimmick_warpPortalArea_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Gimmick_warpPortalArea_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.ReceiveBeginPlay");

	ABP_Gimmick_warpPortalArea_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.onTeleport
// (Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_warpPortalArea_C::STATIC_onTeleport(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.onTeleport");

	ABP_Gimmick_warpPortalArea_C_onTeleport_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.ExecuteUbergraph_BP_Gimmick_warpPortalArea
// (NetRequest, Native, Static, MulticastDelegate, Private, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_warpPortalArea_C::STATIC_ExecuteUbergraph_BP_Gimmick_warpPortalArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.ExecuteUbergraph_BP_Gimmick_warpPortalArea");

	ABP_Gimmick_warpPortalArea_C_ExecuteUbergraph_BP_Gimmick_warpPortalArea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.teleport__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_warpPortalArea_C::teleport__DelegateSignature(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.teleport__DelegateSignature");

	ABP_Gimmick_warpPortalArea_C_teleport__DelegateSignature_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

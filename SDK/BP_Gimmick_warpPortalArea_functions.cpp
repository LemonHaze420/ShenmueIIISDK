
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

// Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.GetPortalComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UBP_Gimmick_warpPortalComp_C* PortalComponent                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Gimmick_warpPortalArea_C::GetPortalComponent(class UBP_Gimmick_warpPortalComp_C** PortalComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.GetPortalComponent");

	ABP_Gimmick_warpPortalArea_C_GetPortalComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PortalComponent != nullptr)
		*PortalComponent = params.PortalComponent;
}


// Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Gimmick_warpPortalArea_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.UserConstructionScript");

	ABP_Gimmick_warpPortalArea_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Gimmick_warpPortalArea_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.ReceiveBeginPlay");

	ABP_Gimmick_warpPortalArea_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.onTeleport
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_warpPortalArea_C::onTeleport(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.onTeleport");

	ABP_Gimmick_warpPortalArea_C_onTeleport_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.ExecuteUbergraph_BP_Gimmick_warpPortalArea
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_warpPortalArea_C::ExecuteUbergraph_BP_Gimmick_warpPortalArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.ExecuteUbergraph_BP_Gimmick_warpPortalArea");

	ABP_Gimmick_warpPortalArea_C_ExecuteUbergraph_BP_Gimmick_warpPortalArea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.teleport__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gimmick_warpPortalArea_C::teleport__DelegateSignature(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Gimmick_warpPortalArea.BP_Gimmick_warpPortalArea_C.teleport__DelegateSignature");

	ABP_Gimmick_warpPortalArea_C_teleport__DelegateSignature_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

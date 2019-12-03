
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

// Function BP_DebugCutscenePlayAreaDisp.BP_DebugCutscenePlayAreaDisp_C.UpdateWidgetText
// (Net, NetReliable, NetResponse, Static, NetMulticast, Public, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidgetComponent*        InWidget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_DebugCutscenePlayAreaDisp_C::STATIC_UpdateWidgetText(class UWidgetComponent* InWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDisp.BP_DebugCutscenePlayAreaDisp_C.UpdateWidgetText");

	ABP_DebugCutscenePlayAreaDisp_C_UpdateWidgetText_Params params;
	params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCutscenePlayAreaDisp.BP_DebugCutscenePlayAreaDisp_C.UpdateAllWidgetText
// (NetReliable, NetRequest, Exec, MulticastDelegate, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_DebugCutscenePlayAreaDisp_C::UpdateAllWidgetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDisp.BP_DebugCutscenePlayAreaDisp_C.UpdateAllWidgetText");

	ABP_DebugCutscenePlayAreaDisp_C_UpdateAllWidgetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCutscenePlayAreaDisp.BP_DebugCutscenePlayAreaDisp_C.UpdateSphereScale
// (Net, NetReliable, NetResponse, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_DebugCutscenePlayAreaDisp_C::UpdateSphereScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDisp.BP_DebugCutscenePlayAreaDisp_C.UpdateSphereScale");

	ABP_DebugCutscenePlayAreaDisp_C_UpdateSphereScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCutscenePlayAreaDisp.BP_DebugCutscenePlayAreaDisp_C.UserConstructionScript
// (NetReliable, Exec, Native, Event, Static, MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_DebugCutscenePlayAreaDisp_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDisp.BP_DebugCutscenePlayAreaDisp_C.UserConstructionScript");

	ABP_DebugCutscenePlayAreaDisp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCutscenePlayAreaDisp.BP_DebugCutscenePlayAreaDisp_C.ReceiveBeginPlay
// (Net, Exec, Native, Event, Static, MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_DebugCutscenePlayAreaDisp_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDisp.BP_DebugCutscenePlayAreaDisp_C.ReceiveBeginPlay");

	ABP_DebugCutscenePlayAreaDisp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugCutscenePlayAreaDisp.BP_DebugCutscenePlayAreaDisp_C.ExecuteUbergraph_BP_DebugCutscenePlayAreaDisp
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DebugCutscenePlayAreaDisp_C::STATIC_ExecuteUbergraph_BP_DebugCutscenePlayAreaDisp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugCutscenePlayAreaDisp.BP_DebugCutscenePlayAreaDisp_C.ExecuteUbergraph_BP_DebugCutscenePlayAreaDisp");

	ABP_DebugCutscenePlayAreaDisp_C_ExecuteUbergraph_BP_DebugCutscenePlayAreaDisp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

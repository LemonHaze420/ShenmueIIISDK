
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

// Function BP_FlareObject.BP_FlareObject_C.InitiateFlares
// (Net, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Delegate, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)

void ABP_FlareObject_C::STATIC_InitiateFlares()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlareObject.BP_FlareObject_C.InitiateFlares");

	ABP_FlareObject_C_InitiateFlares_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlareObject.BP_FlareObject_C.UpdateFlareVisibility
// (NetMulticast, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure)

void ABP_FlareObject_C::UpdateFlareVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlareObject.BP_FlareObject_C.UpdateFlareVisibility");

	ABP_FlareObject_C_UpdateFlareVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlareObject.BP_FlareObject_C.UserConstructionScript
// (Exec, Native, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_FlareObject_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlareObject.BP_FlareObject_C.UserConstructionScript");

	ABP_FlareObject_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlareObject.BP_FlareObject_C.ReceiveBeginPlay
// (Net, Exec, Native, Event, Static, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_FlareObject_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlareObject.BP_FlareObject_C.ReceiveBeginPlay");

	ABP_FlareObject_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlareObject.BP_FlareObject_C.ReceiveTick
// (NetRequest, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FlareObject_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlareObject.BP_FlareObject_C.ReceiveTick");

	ABP_FlareObject_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlareObject.BP_FlareObject_C.ExecuteUbergraph_BP_FlareObject
// (Exec, Event, NetResponse, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FlareObject_C::ExecuteUbergraph_BP_FlareObject(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlareObject.BP_FlareObject_C.ExecuteUbergraph_BP_FlareObject");

	ABP_FlareObject_C_ExecuteUbergraph_BP_FlareObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

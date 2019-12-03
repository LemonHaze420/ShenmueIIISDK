
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

// Function BP_SensorPointLight.BP_SensorPointLight_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Exec, Event, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_SensorPointLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SensorPointLight.BP_SensorPointLight_C.UserConstructionScript");

	ABP_SensorPointLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SensorPointLight.BP_SensorPointLight_C.ReceiveBeginPlay
// (Net, NetRequest, Native, Event, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)

void ABP_SensorPointLight_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SensorPointLight.BP_SensorPointLight_C.ReceiveBeginPlay");

	ABP_SensorPointLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SensorPointLight.BP_SensorPointLight_C.ExecuteUbergraph_BP_SensorPointLight
// (Net, NetReliable, Event, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SensorPointLight_C::STATIC_ExecuteUbergraph_BP_SensorPointLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SensorPointLight.BP_SensorPointLight_C.ExecuteUbergraph_BP_SensorPointLight");

	ABP_SensorPointLight_C_ExecuteUbergraph_BP_SensorPointLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

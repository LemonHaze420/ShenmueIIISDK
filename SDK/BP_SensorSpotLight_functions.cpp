
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

// Function BP_SensorSpotLight.BP_SensorSpotLight_C.UserConstructionScript
// (NetReliable, NetRequest, Exec, Static, NetMulticast, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_SensorSpotLight_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SensorSpotLight.BP_SensorSpotLight_C.UserConstructionScript");

	ABP_SensorSpotLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SensorSpotLight.BP_SensorSpotLight_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_SensorSpotLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SensorSpotLight.BP_SensorSpotLight_C.ReceiveBeginPlay");

	ABP_SensorSpotLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SensorSpotLight.BP_SensorSpotLight_C.ExecuteUbergraph_BP_SensorSpotLight
// (NetReliable, NetRequest, Native, Static, NetMulticast, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SensorSpotLight_C::STATIC_ExecuteUbergraph_BP_SensorSpotLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SensorSpotLight.BP_SensorSpotLight_C.ExecuteUbergraph_BP_SensorSpotLight");

	ABP_SensorSpotLight_C_ExecuteUbergraph_BP_SensorSpotLight_Params params;
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

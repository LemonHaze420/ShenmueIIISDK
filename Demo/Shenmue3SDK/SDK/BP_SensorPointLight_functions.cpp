
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_SensorPointLight.BP_SensorPointLight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SensorPointLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SensorPointLight.BP_SensorPointLight_C.UserConstructionScript");

	ABP_SensorPointLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SensorPointLight.BP_SensorPointLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SensorPointLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SensorPointLight.BP_SensorPointLight_C.ReceiveBeginPlay");

	ABP_SensorPointLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SensorPointLight.BP_SensorPointLight_C.ExecuteUbergraph_BP_SensorPointLight
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SensorPointLight_C::ExecuteUbergraph_BP_SensorPointLight(int EntryPoint)
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


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

// Function AIController_AnimalCommon.AIController_AnimalCommon_C.UserConstructionScript
// (Net, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, BlueprintEvent, NetValidate)

void AAIController_AnimalCommon_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIController_AnimalCommon.AIController_AnimalCommon_C.UserConstructionScript");

	AAIController_AnimalCommon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIController_AnimalCommon.AIController_AnimalCommon_C.ReceiveBeginPlay
// (NetRequest, NetResponse, Private, Protected, BlueprintEvent, NetValidate)

void AAIController_AnimalCommon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIController_AnimalCommon.AIController_AnimalCommon_C.ReceiveBeginPlay");

	AAIController_AnimalCommon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIController_AnimalCommon.AIController_AnimalCommon_C.ExecuteUbergraph_AIController_AnimalCommon
// (Net, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAIController_AnimalCommon_C::STATIC_ExecuteUbergraph_AIController_AnimalCommon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIController_AnimalCommon.AIController_AnimalCommon_C.ExecuteUbergraph_AIController_AnimalCommon");

	AAIController_AnimalCommon_C_ExecuteUbergraph_AIController_AnimalCommon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function BPC_PCGroundSensor.BPC_PCGroundSensor_C.Update
// (Net, NetRequest, Event, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPC_PCGroundSensor_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PCGroundSensor.BPC_PCGroundSensor_C.Update");

	UBPC_PCGroundSensor_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PCGroundSensor.BPC_PCGroundSensor_C.ReceiveBeginPlay
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPC_PCGroundSensor_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PCGroundSensor.BPC_PCGroundSensor_C.ReceiveBeginPlay");

	UBPC_PCGroundSensor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PCGroundSensor.BPC_PCGroundSensor_C.ExecuteUbergraph_BPC_PCGroundSensor
// (Net, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_PCGroundSensor_C::ExecuteUbergraph_BPC_PCGroundSensor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PCGroundSensor.BPC_PCGroundSensor_C.ExecuteUbergraph_BPC_PCGroundSensor");

	UBPC_PCGroundSensor_C_ExecuteUbergraph_BPC_PCGroundSensor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

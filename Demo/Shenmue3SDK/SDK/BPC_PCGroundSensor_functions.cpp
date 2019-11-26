
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

// Function BPC_PCGroundSensor.BPC_PCGroundSensor_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPC_PCGroundSensor_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PCGroundSensor.BPC_PCGroundSensor_C.Update");

	UBPC_PCGroundSensor_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PCGroundSensor.BPC_PCGroundSensor_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_PCGroundSensor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_PCGroundSensor.BPC_PCGroundSensor_C.ReceiveBeginPlay");

	UBPC_PCGroundSensor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_PCGroundSensor.BPC_PCGroundSensor_C.ExecuteUbergraph_BPC_PCGroundSensor
// ()
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

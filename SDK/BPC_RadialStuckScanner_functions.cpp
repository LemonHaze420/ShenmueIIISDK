
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

// Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.TryDisableTick
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UBPC_RadialStuckScanner_C::TryDisableTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.TryDisableTick");

	UBPC_RadialStuckScanner_C_TryDisableTick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.IgnoreCollision
// (NetRequest, Event, NetResponse, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// class AS3Character*            Char                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ignore                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_RadialStuckScanner_C::IgnoreCollision(class AS3Character* Char, bool Ignore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.IgnoreCollision");

	UBPC_RadialStuckScanner_C_IgnoreCollision_Params params;
	params.Char = Char;
	params.Ignore = Ignore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.TestBlockedByNPC
// (Net, NetRequest, Exec, Native, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AS3Character*>    AddNPCS                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPC_RadialStuckScanner_C::STATIC_TestBlockedByNPC(float Yaw, float Distance, TArray<class AS3Character*>* AddNPCS)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.TestBlockedByNPC");

	UBPC_RadialStuckScanner_C_TestBlockedByNPC_Params params;
	params.Yaw = Yaw;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AddNPCS != nullptr)
		*AddNPCS = params.AddNPCS;
}


// Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.TestAngleBlocked
// (Exec, Event, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AS3Character*>    AddNPCS                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPC_RadialStuckScanner_C::TestAngleBlocked(float Yaw, float Distance, TArray<class AS3Character*>* AddNPCS)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.TestAngleBlocked");

	UBPC_RadialStuckScanner_C_TestAngleBlocked_Params params;
	params.Yaw = Yaw;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AddNPCS != nullptr)
		*AddNPCS = params.AddNPCS;
}


// Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.TestNavmeshDistance
// (Exec, Native, Event, NetResponse, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Hit                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          DistanceSqr                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_RadialStuckScanner_C::TestNavmeshDistance(float Yaw, float Max, bool* Hit, float* DistanceSqr)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.TestNavmeshDistance");

	UBPC_RadialStuckScanner_C_TestNavmeshDistance_Params params;
	params.Yaw = Yaw;
	params.Max = Max;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
	if (DistanceSqr != nullptr)
		*DistanceSqr = params.DistanceSqr;
}


// Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.ReceiveBeginPlay
// (NetRequest, Event, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void UBPC_RadialStuckScanner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.ReceiveBeginPlay");

	UBPC_RadialStuckScanner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.ReceiveTick
// (NetRequest, Exec, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_RadialStuckScanner_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.ReceiveTick");

	UBPC_RadialStuckScanner_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.StartScan
// (Net, NetReliable, Event, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void UBPC_RadialStuckScanner_C::StartScan()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.StartScan");

	UBPC_RadialStuckScanner_C_StartScan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.StartScanning
// (Net, NetReliable, Event, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void UBPC_RadialStuckScanner_C::StartScanning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.StartScanning");

	UBPC_RadialStuckScanner_C_StartScanning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.StopScanning
// (NetReliable, Event, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void UBPC_RadialStuckScanner_C::StopScanning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.StopScanning");

	UBPC_RadialStuckScanner_C_StopScanning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.OnCompletedPositionCollectionWindow
// (NetReliable, Event, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void UBPC_RadialStuckScanner_C::OnCompletedPositionCollectionWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.OnCompletedPositionCollectionWindow");

	UBPC_RadialStuckScanner_C_OnCompletedPositionCollectionWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.ExecuteUbergraph_BPC_RadialStuckScanner
// (Net, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_RadialStuckScanner_C::STATIC_ExecuteUbergraph_BPC_RadialStuckScanner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_RadialStuckScanner.BPC_RadialStuckScanner_C.ExecuteUbergraph_BPC_RadialStuckScanner");

	UBPC_RadialStuckScanner_C_ExecuteUbergraph_BPC_RadialStuckScanner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

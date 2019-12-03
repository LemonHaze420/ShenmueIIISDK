
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

// Function BP_S3WorldTimekeeper.BP_S3WorldTimekeeper_C.InitDataTime
// (NetReliable, NetRequest, Native, Event, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3WorldTimekeeper_C::InitDataTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3WorldTimekeeper.BP_S3WorldTimekeeper_C.InitDataTime");

	ABP_S3WorldTimekeeper_C_InitDataTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3WorldTimekeeper.BP_S3WorldTimekeeper_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Native, Static, Public, Delegate, HasOutParms, BlueprintEvent)

void ABP_S3WorldTimekeeper_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3WorldTimekeeper.BP_S3WorldTimekeeper_C.UserConstructionScript");

	ABP_S3WorldTimekeeper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3WorldTimekeeper.BP_S3WorldTimekeeper_C.ReceiveBeginPlay
// (NetReliable, Static, MulticastDelegate, Private, Delegate, HasOutParms, BlueprintEvent)

void ABP_S3WorldTimekeeper_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3WorldTimekeeper.BP_S3WorldTimekeeper_C.ReceiveBeginPlay");

	ABP_S3WorldTimekeeper_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3WorldTimekeeper.BP_S3WorldTimekeeper_C.ReceiveEndPlay
// (NetReliable, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3WorldTimekeeper_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3WorldTimekeeper.BP_S3WorldTimekeeper_C.ReceiveEndPlay");

	ABP_S3WorldTimekeeper_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3WorldTimekeeper.BP_S3WorldTimekeeper_C.WaitPlay
// (Net, Static, MulticastDelegate, Private, Delegate, HasOutParms, BlueprintEvent)

void ABP_S3WorldTimekeeper_C::STATIC_WaitPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3WorldTimekeeper.BP_S3WorldTimekeeper_C.WaitPlay");

	ABP_S3WorldTimekeeper_C_WaitPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3WorldTimekeeper.BP_S3WorldTimekeeper_C.ExecuteUbergraph_BP_S3WorldTimekeeper
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, BlueprintCallable)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3WorldTimekeeper_C::ExecuteUbergraph_BP_S3WorldTimekeeper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3WorldTimekeeper.BP_S3WorldTimekeeper_C.ExecuteUbergraph_BP_S3WorldTimekeeper");

	ABP_S3WorldTimekeeper_C_ExecuteUbergraph_BP_S3WorldTimekeeper_Params params;
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

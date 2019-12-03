
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

// Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.JudgeBGM
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ES3DayTimeEvent                NewEvent                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmArea_dayTime_C::STATIC_JudgeBGM(ES3DayTimeEvent NewEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.JudgeBGM");

	ABP_S3BgmArea_dayTime_C_JudgeBGM_Params params;
	params.NewEvent = NewEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.UserConstructionScript
// (NetReliable, NetRequest, Native, Static, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_S3BgmArea_dayTime_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.UserConstructionScript");

	ABP_S3BgmArea_dayTime_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.ReceiveBeginPlay
// (NetRequest, NetResponse, Static, MulticastDelegate, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_S3BgmArea_dayTime_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.ReceiveBeginPlay");

	ABP_S3BgmArea_dayTime_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.ChangeGameTimeEvent
// (Net, NetReliable, Exec, NetResponse, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3DayTimeEvent                EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmArea_dayTime_C::ChangeGameTimeEvent(ES3DayTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.ChangeGameTimeEvent");

	ABP_S3BgmArea_dayTime_C_ChangeGameTimeEvent_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.ReceiveEndPlay
// (NetRequest, Exec, NetResponse, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmArea_dayTime_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.ReceiveEndPlay");

	ABP_S3BgmArea_dayTime_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.ExecuteUbergraph_BP_S3BgmArea_dayTime
// (NetRequest, Exec, Native, Event, NetMulticast, Public, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmArea_dayTime_C::ExecuteUbergraph_BP_S3BgmArea_dayTime(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.ExecuteUbergraph_BP_S3BgmArea_dayTime");

	ABP_S3BgmArea_dayTime_C_ExecuteUbergraph_BP_S3BgmArea_dayTime_Params params;
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

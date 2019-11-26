
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

// Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.JudgeBGM
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3DayTimeEvent                NewEvent                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmArea_dayTime_C::JudgeBGM(ES3DayTimeEvent NewEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.JudgeBGM");

	ABP_S3BgmArea_dayTime_C_JudgeBGM_Params params;
	params.NewEvent = NewEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3BgmArea_dayTime_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.UserConstructionScript");

	ABP_S3BgmArea_dayTime_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3BgmArea_dayTime_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.ReceiveBeginPlay");

	ABP_S3BgmArea_dayTime_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.ChangeGameTimeEvent
// (BlueprintCallable, BlueprintEvent)
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
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmArea_dayTime_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.ReceiveEndPlay");

	ABP_S3BgmArea_dayTime_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.ExecuteUbergraph_BP_S3BgmArea_dayTime
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BgmArea_dayTime_C::ExecuteUbergraph_BP_S3BgmArea_dayTime(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C.ExecuteUbergraph_BP_S3BgmArea_dayTime");

	ABP_S3BgmArea_dayTime_C_ExecuteUbergraph_BP_S3BgmArea_dayTime_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

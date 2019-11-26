
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

// Function BP_ChobuBrazier.BP_ChobuBrazier_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ChobuBrazier_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChobuBrazier.BP_ChobuBrazier_C.UserConstructionScript");

	ABP_ChobuBrazier_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChobuBrazier.BP_ChobuBrazier_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ChobuBrazier_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChobuBrazier.BP_ChobuBrazier_C.ReceiveBeginPlay");

	ABP_ChobuBrazier_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChobuBrazier.BP_ChobuBrazier_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ChobuBrazier_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChobuBrazier.BP_ChobuBrazier_C.ReceiveTick");

	ABP_ChobuBrazier_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChobuBrazier.BP_ChobuBrazier_C.ChangeTimeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3DayTimeEvent                EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ChobuBrazier_C::ChangeTimeEvent(ES3DayTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChobuBrazier.BP_ChobuBrazier_C.ChangeTimeEvent");

	ABP_ChobuBrazier_C_ChangeTimeEvent_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChobuBrazier.BP_ChobuBrazier_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ChobuBrazier_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChobuBrazier.BP_ChobuBrazier_C.ReceiveEndPlay");

	ABP_ChobuBrazier_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChobuBrazier.BP_ChobuBrazier_C.ExecuteUbergraph_BP_ChobuBrazier
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ChobuBrazier_C::ExecuteUbergraph_BP_ChobuBrazier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChobuBrazier.BP_ChobuBrazier_C.ExecuteUbergraph_BP_ChobuBrazier");

	ABP_ChobuBrazier_C_ExecuteUbergraph_BP_ChobuBrazier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

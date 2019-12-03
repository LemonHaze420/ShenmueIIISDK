
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

// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.UserConstructionScript
// (Native, Event, NetMulticast, Public, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_AR_BoxTurtle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.UserConstructionScript");

	ABP_AR_BoxTurtle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.ReceiveBeginPlay
// (NetReliable, Exec, Event, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_BoxTurtle_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.ReceiveBeginPlay");

	ABP_AR_BoxTurtle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.ReceiveTick
// (NetRequest, Exec, Native, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_BoxTurtle_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.ReceiveTick");

	ABP_AR_BoxTurtle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.UpdateWalkRate
// (Net, Exec, Event, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_BoxTurtle_C::STATIC_UpdateWalkRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.UpdateWalkRate");

	ABP_AR_BoxTurtle_C_UpdateWalkRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.Reset
// (Exec, Event, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_BoxTurtle_C::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.Reset");

	ABP_AR_BoxTurtle_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.SetMotion
// (Net, NetReliable, Exec, Native, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<E_AR_Motion_Type>  mot_type                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_BoxTurtle_C::STATIC_SetMotion(TEnumAsByte<E_AR_Motion_Type> mot_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.SetMotion");

	ABP_AR_BoxTurtle_C_SetMotion_Params params;
	params.mot_type = mot_type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.ChangeShape
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_BoxTurtle_C::STATIC_ChangeShape(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.ChangeShape");

	ABP_AR_BoxTurtle_C_ChangeShape_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.Event_PlaySECry
// (Net, NetRequest, Exec, Event, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_BoxTurtle_C::STATIC_Event_PlaySECry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.Event_PlaySECry");

	ABP_AR_BoxTurtle_C_Event_PlaySECry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.Event_PlaySEWalk
// (NetRequest, Exec, Event, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_AR_BoxTurtle_C::STATIC_Event_PlaySEWalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.Event_PlaySEWalk");

	ABP_AR_BoxTurtle_C_Event_PlaySEWalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.SetWalkRate
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_BoxTurtle_C::STATIC_SetWalkRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.SetWalkRate");

	ABP_AR_BoxTurtle_C_SetWalkRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.SetAnimNotRaceStartPos
// (Net, NetRequest, Exec, Native, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_BoxTurtle_C::STATIC_SetAnimNotRaceStartPos(float Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.SetAnimNotRaceStartPos");

	ABP_AR_BoxTurtle_C_SetAnimNotRaceStartPos_Params params;
	params.Start = Start;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.SetAnimInRaceFlag
// (NetRequest, Exec, Native, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           InRace                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_BoxTurtle_C::STATIC_SetAnimInRaceFlag(bool InRace)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.SetAnimInRaceFlag");

	ABP_AR_BoxTurtle_C_SetAnimInRaceFlag_Params params;
	params.InRace = InRace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.ExecuteUbergraph_BP_AR_BoxTurtle
// (Net, NetReliable, Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AR_BoxTurtle_C::ExecuteUbergraph_BP_AR_BoxTurtle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AR_BoxTurtle.BP_AR_BoxTurtle_C.ExecuteUbergraph_BP_AR_BoxTurtle");

	ABP_AR_BoxTurtle_C_ExecuteUbergraph_BP_AR_BoxTurtle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

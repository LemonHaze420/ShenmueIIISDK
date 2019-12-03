
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

// Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.InitSet
// (NetReliable, NetRequest, Native, Public, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// ES3PlayerBehavior              Check_Behavior                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Change_Playable                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           StepLock                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BehaviorCheck_C::InitSet(ES3PlayerBehavior Check_Behavior, bool Change_Playable, bool StepLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.InitSet");

	ABP_Hakkason_BehaviorCheck_C_InitSet_Params params;
	params.Check_Behavior = Check_Behavior;
	params.Change_Playable = Change_Playable;
	params.StepLock = StepLock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.UserConstructionScript
// (NetReliable, NetRequest, Exec, Static, Public, Protected, Delegate, NetClient, BlueprintCallable)

void ABP_Hakkason_BehaviorCheck_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.UserConstructionScript");

	ABP_Hakkason_BehaviorCheck_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.RenewalActorCount
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_MainFlowActorID> ActorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  RenewalCounter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BehaviorCheck_C::STATIC_RenewalActorCount(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.RenewalActorCount");

	ABP_Hakkason_BehaviorCheck_C_RenewalActorCount_Params params;
	params.ActorId = ActorId;
	params.RenewalCounter = RenewalCounter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.ReceiveTick
// (NetRequest, Native, Static, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BehaviorCheck_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.ReceiveTick");

	ABP_Hakkason_BehaviorCheck_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.TickChangeCheckKill
// (Net, NetReliable, Exec, Static, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Hakkason_BehaviorCheck_C::STATIC_TickChangeCheckKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.TickChangeCheckKill");

	ABP_Hakkason_BehaviorCheck_C_TickChangeCheckKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.ExecuteUbergraph_BP_Hakkason_BehaviorCheck
// (Net, Exec, Native, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BehaviorCheck_C::ExecuteUbergraph_BP_Hakkason_BehaviorCheck(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.ExecuteUbergraph_BP_Hakkason_BehaviorCheck");

	ABP_Hakkason_BehaviorCheck_C_ExecuteUbergraph_BP_Hakkason_BehaviorCheck_Params params;
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


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

// Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.InitSet
// (Public, BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_BehaviorCheck_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.UserConstructionScript");

	ABP_Hakkason_BehaviorCheck_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.RenewalActorCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_MainFlowActorID> ActorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  RenewalCounter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BehaviorCheck_C::RenewalActorCount(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter)
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
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BehaviorCheck_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.ReceiveTick");

	ABP_Hakkason_BehaviorCheck_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.TickChangeCheckKill
// (BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_BehaviorCheck_C::TickChangeCheckKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.TickChangeCheckKill");

	ABP_Hakkason_BehaviorCheck_C_TickChangeCheckKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.ExecuteUbergraph_BP_Hakkason_BehaviorCheck
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_BehaviorCheck_C::ExecuteUbergraph_BP_Hakkason_BehaviorCheck(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_BehaviorCheck.BP_Hakkason_BehaviorCheck_C.ExecuteUbergraph_BP_Hakkason_BehaviorCheck");

	ABP_Hakkason_BehaviorCheck_C_ExecuteUbergraph_BP_Hakkason_BehaviorCheck_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

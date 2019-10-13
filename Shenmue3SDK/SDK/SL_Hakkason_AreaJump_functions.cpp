
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

// Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.CheckNpcDistance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 CheckPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Threshold                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           in_Threshold                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_AreaJump_C::CheckNpcDistance(const struct FVector& CheckPoint, float Threshold, bool* in_Threshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.CheckNpcDistance");

	ASL_Hakkason_AreaJump_C_CheckNpcDistance_Params params;
	params.CheckPoint = CheckPoint;
	params.Threshold = Threshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (in_Threshold != nullptr)
		*in_Threshold = params.in_Threshold;
}


// Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.TalkEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           enableFlag                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_AreaJump_C::TalkEnable(bool enableFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.TalkEnable");

	ASL_Hakkason_AreaJump_C_TalkEnable_Params params;
	params.enableFlag = enableFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASL_Hakkason_AreaJump_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.ReceiveBeginPlay");

	ASL_Hakkason_AreaJump_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.RotSetNPC
// (BlueprintCallable, BlueprintEvent)

void ASL_Hakkason_AreaJump_C::RotSetNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.RotSetNPC");

	ASL_Hakkason_AreaJump_C_RotSetNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.NPCWait
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            NPCID                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ASL_Hakkason_AreaJump_C::NPCWait(const struct FGameplayTag& NPCID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.NPCWait");

	ASL_Hakkason_AreaJump_C_NPCWait_Params params;
	params.NPCID = NPCID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.Event_EndOverLap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_AreaJump_C::Event_EndOverLap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.Event_EndOverLap");

	ASL_Hakkason_AreaJump_C_Event_EndOverLap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.Event_OverLap
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASL_Hakkason_AreaJump_C::Event_OverLap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.Event_OverLap");

	ASL_Hakkason_AreaJump_C_Event_OverLap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.ExspEvent_OnFlagChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_AreaJump_C::ExspEvent_OnFlagChanged(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.ExspEvent_OnFlagChanged");

	ASL_Hakkason_AreaJump_C_ExspEvent_OnFlagChanged_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.ExecuteUbergraph_SL_Hakkason_AreaJump
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASL_Hakkason_AreaJump_C::ExecuteUbergraph_SL_Hakkason_AreaJump(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SL_Hakkason_AreaJump.SL_Hakkason_AreaJump_C.ExecuteUbergraph_SL_Hakkason_AreaJump");

	ASL_Hakkason_AreaJump_C_ExecuteUbergraph_SL_Hakkason_AreaJump_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

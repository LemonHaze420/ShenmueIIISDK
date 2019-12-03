
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

// Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.CheckHouseIn_SHE
// (NetReliable, Exec, Native, Event, NetResponse, MulticastDelegate, Private, Protected, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           in_house                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_SHEmorning_C::CheckHouseIn_SHE(bool* in_house)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.CheckHouseIn_SHE");

	ABP_Hakkason_SHEmorning_C_CheckHouseIn_SHE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (in_house != nullptr)
		*in_house = params.in_house;
}


// Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.TalkACSelect
// (Net, NetRequest, NetResponse, Static, MulticastDelegate, Public, Private, HasDefaults, NetClient, DLLImport)
// Parameters:
// class UTalkScript*             select_ac                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_SHEmorning_C::STATIC_TalkACSelect(class UTalkScript** select_ac)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.TalkACSelect");

	ABP_Hakkason_SHEmorning_C_TalkACSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (select_ac != nullptr)
		*select_ac = params.select_ac;
}


// Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.InitSet
// (NetReliable, NetRequest, Native, Event, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     AreaIn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ABP_DirectionCheck_C*    CheckVector                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_SHEmorning_C::InitSet(class UPrimitiveComponent* AreaIn, class ABP_DirectionCheck_C* CheckVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.InitSet");

	ABP_Hakkason_SHEmorning_C_InitSet_Params params;
	params.AreaIn = AreaIn;
	params.CheckVector = CheckVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.UserConstructionScript
// (Net, NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Hakkason_SHEmorning_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.UserConstructionScript");

	ABP_Hakkason_SHEmorning_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.OnBeginOverlap
// (Net, NetReliable, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Hakkason_SHEmorning_C::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.OnBeginOverlap");

	ABP_Hakkason_SHEmorning_C_OnBeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.RenewalActorCount
// (Net, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_MainFlowActorID> ActorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  RenewalCounter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_SHEmorning_C::STATIC_RenewalActorCount(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.RenewalActorCount");

	ABP_Hakkason_SHEmorning_C_RenewalActorCount_Params params;
	params.ActorId = ActorId;
	params.RenewalCounter = RenewalCounter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.OnEndOverlap
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_SHEmorning_C::STATIC_OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.OnEndOverlap");

	ABP_Hakkason_SHEmorning_C_OnEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.ReceiveTick
// (NetReliable, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_SHEmorning_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.ReceiveTick");

	ABP_Hakkason_SHEmorning_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.ChangeDirection_AreaTrg
// (NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Positive_direction             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Impact_dot_Arrow               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_SHEmorning_C::STATIC_ChangeDirection_AreaTrg(bool Positive_direction, float Impact_dot_Arrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.ChangeDirection_AreaTrg");

	ABP_Hakkason_SHEmorning_C_ChangeDirection_AreaTrg_Params params;
	params.Positive_direction = Positive_direction;
	params.Impact_dot_Arrow = Impact_dot_Arrow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.TickChangeCheckKill
// (NetReliable, NetRequest, Exec, Native, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_Hakkason_SHEmorning_C::TickChangeCheckKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.TickChangeCheckKill");

	ABP_Hakkason_SHEmorning_C_TickChangeCheckKill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.ExecuteUbergraph_BP_Hakkason_SHEmorning
// (Net, NetReliable, Static, MulticastDelegate, Private, Delegate, NetServer, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_SHEmorning_C::STATIC_ExecuteUbergraph_BP_Hakkason_SHEmorning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEmorning.BP_Hakkason_SHEmorning_C.ExecuteUbergraph_BP_Hakkason_SHEmorning");

	ABP_Hakkason_SHEmorning_C_ExecuteUbergraph_BP_Hakkason_SHEmorning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

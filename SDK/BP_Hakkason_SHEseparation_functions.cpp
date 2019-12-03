
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

// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.MakeLead_New
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, BlueprintEvent, BlueprintPure)

void ABP_Hakkason_SHEseparation_C::STATIC_MakeLead_New()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.MakeLead_New");

	ABP_Hakkason_SHEseparation_C_MakeLead_New_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.MakeFlwOrNpc_New
// (Native, NetResponse, Static, Public, Private, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Set_ExspPos                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Set_ExspPos_B                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_SHEseparation_C::STATIC_MakeFlwOrNpc_New(bool Set_ExspPos, bool Set_ExspPos_B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.MakeFlwOrNpc_New");

	ABP_Hakkason_SHEseparation_C_MakeFlwOrNpc_New_Params params;
	params.Set_ExspPos = Set_ExspPos;
	params.Set_ExspPos_B = Set_ExspPos_B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.CheckSHEhouseIn
// (Net, NetReliable, Native, NetResponse, Public, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           house_in                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_SHEseparation_C::CheckSHEhouseIn(bool* house_in)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.CheckSHEhouseIn");

	ABP_Hakkason_SHEseparation_C_CheckSHEhouseIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (house_in != nullptr)
		*house_in = params.house_in;
}


// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.CheckWaitCondtion
// (NetRequest, Exec, Event, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Wait_On                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_SHEseparation_C::STATIC_CheckWaitCondtion(bool* Wait_On)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.CheckWaitCondtion");

	ABP_Hakkason_SHEseparation_C_CheckWaitCondtion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Wait_On != nullptr)
		*Wait_On = params.Wait_On;
}


// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.MakeFlwOrNpc
// (NetReliable, NetRequest, Native, Event, NetResponse, Public, Private, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Set_ExspPos                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Set_ExspPos_B                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_SHEseparation_C::MakeFlwOrNpc(bool Set_ExspPos, bool Set_ExspPos_B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.MakeFlwOrNpc");

	ABP_Hakkason_SHEseparation_C_MakeFlwOrNpc_Params params;
	params.Set_ExspPos = Set_ExspPos;
	params.Set_ExspPos_B = Set_ExspPos_B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.InitSet
// (NetReliable, Exec, Native, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     HouseAreaIn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     JoinEnableCollision            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     Door1                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     Door2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Forced                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TypeFollow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HouseOutJoinArea               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Hakkason_SHEseparation_C::InitSet(class UPrimitiveComponent* HouseAreaIn, class UPrimitiveComponent* JoinEnableCollision, class UPrimitiveComponent* Door1, class UPrimitiveComponent* Door2, int Forced, bool TypeFollow, class UPrimitiveComponent* HouseOutJoinArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.InitSet");

	ABP_Hakkason_SHEseparation_C_InitSet_Params params;
	params.HouseAreaIn = HouseAreaIn;
	params.JoinEnableCollision = JoinEnableCollision;
	params.Door1 = Door1;
	params.Door2 = Door2;
	params.Forced = Forced;
	params.TypeFollow = TypeFollow;
	params.HouseOutJoinArea = HouseOutJoinArea;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.UserConstructionScript
// (NetReliable, Exec, MulticastDelegate, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Hakkason_SHEseparation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.UserConstructionScript");

	ABP_Hakkason_SHEseparation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.Test_MsgEvent
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_MainFlowMsgDestinationID> Current_Destination_ID         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_SHEseparation_C::STATIC_Test_MsgEvent(TEnumAsByte<EN_MainFlowMsgDestinationID> Current_Destination_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.Test_MsgEvent");

	ABP_Hakkason_SHEseparation_C_Test_MsgEvent_Params params;
	params.Current_Destination_ID = Current_Destination_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.KillSHEseparation
// (Net, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetClient, BlueprintEvent, BlueprintPure)

void ABP_Hakkason_SHEseparation_C::KillSHEseparation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.KillSHEseparation");

	ABP_Hakkason_SHEseparation_C_KillSHEseparation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.OnBeginOverlap_JoinArea
// (NetReliable, Native, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Hakkason_SHEseparation_C::OnBeginOverlap_JoinArea(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.OnBeginOverlap_JoinArea");

	ABP_Hakkason_SHEseparation_C_OnBeginOverlap_JoinArea_Params params;
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


// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.OnEndOverlap_JoinArea
// (NetReliable, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_SHEseparation_C::STATIC_OnEndOverlap_JoinArea(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.OnEndOverlap_JoinArea");

	ABP_Hakkason_SHEseparation_C_OnEndOverlap_JoinArea_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.ReceiveTick
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_SHEseparation_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.ReceiveTick");

	ABP_Hakkason_SHEseparation_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.BeginOvarLap_JionEnable
// (Native, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Hakkason_SHEseparation_C::BeginOvarLap_JionEnable(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.BeginOvarLap_JionEnable");

	ABP_Hakkason_SHEseparation_C_BeginOvarLap_JionEnable_Params params;
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


// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.OnCutsceneEnd_M03_S0089
// (Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetClient, BlueprintEvent, BlueprintPure)

void ABP_Hakkason_SHEseparation_C::OnCutsceneEnd_M03_S0089()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.OnCutsceneEnd_M03_S0089");

	ABP_Hakkason_SHEseparation_C_OnCutsceneEnd_M03_S0089_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.OnStartCutscenePlayer_M03_S0089
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetClient, BlueprintEvent, BlueprintPure)

void ABP_Hakkason_SHEseparation_C::OnStartCutscenePlayer_M03_S0089()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.OnStartCutscenePlayer_M03_S0089");

	ABP_Hakkason_SHEseparation_C_OnStartCutscenePlayer_M03_S0089_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.OnEndOverlap
// (Net, NetRequest, Private, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_SHEseparation_C::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.OnEndOverlap");

	ABP_Hakkason_SHEseparation_C_OnEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.RenewalActorCount
// (Net, Native, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_MainFlowActorID> ActorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  RenewalCounter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_SHEseparation_C::RenewalActorCount(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.RenewalActorCount");

	ABP_Hakkason_SHEseparation_C_RenewalActorCount_Params params;
	params.ActorId = ActorId;
	params.RenewalCounter = RenewalCounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.OnBeginOverlap
// (Net, NetRequest, Exec, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Hakkason_SHEseparation_C::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.OnBeginOverlap");

	ABP_Hakkason_SHEseparation_C_OnBeginOverlap_Params params;
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


// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.OnCutsceneEnd_M03_S0090
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetClient, BlueprintEvent, BlueprintPure)

void ABP_Hakkason_SHEseparation_C::OnCutsceneEnd_M03_S0090()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.OnCutsceneEnd_M03_S0090");

	ABP_Hakkason_SHEseparation_C_OnCutsceneEnd_M03_S0090_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.OnStartCutscenePlayer_M03_S0090
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetClient, BlueprintEvent, BlueprintPure)

void ABP_Hakkason_SHEseparation_C::OnStartCutscenePlayer_M03_S0090()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.OnStartCutscenePlayer_M03_S0090");

	ABP_Hakkason_SHEseparation_C_OnStartCutscenePlayer_M03_S0090_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.ExecuteUbergraph_BP_Hakkason_SHEseparation
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_SHEseparation_C::STATIC_ExecuteUbergraph_BP_Hakkason_SHEseparation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_SHEseparation.BP_Hakkason_SHEseparation_C.ExecuteUbergraph_BP_Hakkason_SHEseparation");

	ABP_Hakkason_SHEseparation_C_ExecuteUbergraph_BP_Hakkason_SHEseparation_Params params;
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

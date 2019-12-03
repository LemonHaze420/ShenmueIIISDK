
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

// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.ChangeNPCSHEposchange
// (NetReliable, NetRequest, Event, Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            SetPos                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_JumpInTalk_C::ChangeNPCSHEposchange(int* SetPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.ChangeNPCSHEposchange");

	ABP_Hakkason_JumpInTalk_C_ChangeNPCSHEposchange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SetPos != nullptr)
		*SetPos = params.SetPos;
}


// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.BeginHitCheck
// (Net, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     TrgBox                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           BeginIn                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_JumpInTalk_C::STATIC_BeginHitCheck(class UPrimitiveComponent* TrgBox, bool* BeginIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.BeginHitCheck");

	ABP_Hakkason_JumpInTalk_C_BeginHitCheck_Params params;
	params.TrgBox = TrgBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BeginIn != nullptr)
		*BeginIn = params.BeginIn;
}


// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.ForcedHouseIn
// (NetReliable, Exec, NetResponse, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           rc                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_JumpInTalk_C::ForcedHouseIn(bool* rc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.ForcedHouseIn");

	ABP_Hakkason_JumpInTalk_C_ForcedHouseIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (rc != nullptr)
		*rc = params.rc;
}


// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.CheckHouseInAndNeedTalk
// (Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           HouseInTalk                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_JumpInTalk_C::STATIC_CheckHouseInAndNeedTalk(bool* HouseInTalk)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.CheckHouseInAndNeedTalk");

	ABP_Hakkason_JumpInTalk_C_CheckHouseInAndNeedTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HouseInTalk != nullptr)
		*HouseInTalk = params.HouseInTalk;
}


// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.ForcedSet
// (Exec, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_Hakkason_JumpInTalk_C::STATIC_ForcedSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.ForcedSet");

	ABP_Hakkason_JumpInTalk_C_ForcedSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.CheckTalkEnd
// (Exec, Event, NetResponse, Static, MulticastDelegate, Public, Private, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           talk_end                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_JumpInTalk_C::STATIC_CheckTalkEnd(bool* talk_end)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.CheckTalkEnd");

	ABP_Hakkason_JumpInTalk_C_CheckTalkEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (talk_end != nullptr)
		*talk_end = params.talk_end;
}


// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.ChangePlayerCamera
// (NetResponse, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          PlayerDistance                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                AddRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_Hakkason_JumpInTalk_C::ChangePlayerCamera(float PlayerDistance, const struct FRotator& AddRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.ChangePlayerCamera");

	ABP_Hakkason_JumpInTalk_C_ChangePlayerCamera_Params params;
	params.PlayerDistance = PlayerDistance;
	params.AddRotation = AddRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.TurnSHEdirection
// (NetReliable, Event, MulticastDelegate, Private, Protected, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DefYaw                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_JumpInTalk_C::TurnSHEdirection(float DefYaw, float* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.TurnSHEdirection");

	ABP_Hakkason_JumpInTalk_C_TurnSHEdirection_Params params;
	params.DefYaw = DefYaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.CheckTalkPostion
// (NetReliable, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Private, HasDefaults, NetClient, DLLImport)
// Parameters:
// unsigned char                  Postype                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_JumpInTalk_C::STATIC_CheckTalkPostion(unsigned char* Postype)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.CheckTalkPostion");

	ABP_Hakkason_JumpInTalk_C_CheckTalkPostion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Postype != nullptr)
		*Postype = params.Postype;
}


// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.CheckTalkEnable
// (Net, NetRequest, Exec, Event, Static, MulticastDelegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           TalkEnable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_JumpInTalk_C::STATIC_CheckTalkEnable(bool* TalkEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.CheckTalkEnable");

	ABP_Hakkason_JumpInTalk_C_CheckTalkEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TalkEnable != nullptr)
		*TalkEnable = params.TalkEnable;
}


// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.CheckSHEDoor
// (Net, NetRequest, Exec, NetResponse, Static, MulticastDelegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           UsePlayer                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            DoorType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_JumpInTalk_C::STATIC_CheckSHEDoor(bool* UsePlayer, int* DoorType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.CheckSHEDoor");

	ABP_Hakkason_JumpInTalk_C_CheckSHEDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UsePlayer != nullptr)
		*UsePlayer = params.UsePlayer;
	if (DoorType != nullptr)
		*DoorType = params.DoorType;
}


// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.InitSet
// (Net, NetRequest, Exec, Native, Event, Static, MulticastDelegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     Door1                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     Door2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Hakkason_JumpInTalk_C::STATIC_InitSet(class UPrimitiveComponent* Door1, class UPrimitiveComponent* Door2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.InitSet");

	ABP_Hakkason_JumpInTalk_C_InitSet_Params params;
	params.Door1 = Door1;
	params.Door2 = Door2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.UserConstructionScript
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Hakkason_JumpInTalk_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.UserConstructionScript");

	ABP_Hakkason_JumpInTalk_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.OnBeginOverlap
// (Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Hakkason_JumpInTalk_C::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.OnBeginOverlap");

	ABP_Hakkason_JumpInTalk_C_OnBeginOverlap_Params params;
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


// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.OnEndOverlap
// (NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_JumpInTalk_C::STATIC_OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.OnEndOverlap");

	ABP_Hakkason_JumpInTalk_C_OnEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.ReceiveTick
// (Net, Exec, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_JumpInTalk_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.ReceiveTick");

	ABP_Hakkason_JumpInTalk_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.RenewalActorCount
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_MainFlowActorID> ActorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  RenewalCounter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_JumpInTalk_C::STATIC_RenewalActorCount(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.RenewalActorCount");

	ABP_Hakkason_JumpInTalk_C_RenewalActorCount_Params params;
	params.ActorId = ActorId;
	params.RenewalCounter = RenewalCounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.TickChangeCheckKill
// (NetReliable, Event, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Hakkason_JumpInTalk_C::TickChangeCheckKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.TickChangeCheckKill");

	ABP_Hakkason_JumpInTalk_C_TickChangeCheckKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.OnBeginOverlapBack
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Hakkason_JumpInTalk_C::OnBeginOverlapBack(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.OnBeginOverlapBack");

	ABP_Hakkason_JumpInTalk_C_OnBeginOverlapBack_Params params;
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


// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.OnEndOverlapBack
// (Event, Static, NetMulticast, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_JumpInTalk_C::STATIC_OnEndOverlapBack(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.OnEndOverlapBack");

	ABP_Hakkason_JumpInTalk_C_OnEndOverlapBack_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.ExspHouseIn
// (NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Hakkason_JumpInTalk_C::ExspHouseIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.ExspHouseIn");

	ABP_Hakkason_JumpInTalk_C_ExspHouseIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.LocalEvt_ClothChange
// (Net, NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class US3ClothInterface> Interface                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_JumpInTalk_C::STATIC_LocalEvt_ClothChange(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.LocalEvt_ClothChange");

	ABP_Hakkason_JumpInTalk_C_LocalEvt_ClothChange_Params params;
	params.Interface = Interface;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.ExecuteUbergraph_BP_Hakkason_JumpInTalk
// (MulticastDelegate, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hakkason_JumpInTalk_C::ExecuteUbergraph_BP_Hakkason_JumpInTalk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hakkason_JumpInTalk.BP_Hakkason_JumpInTalk_C.ExecuteUbergraph_BP_Hakkason_JumpInTalk");

	ABP_Hakkason_JumpInTalk_C_ExecuteUbergraph_BP_Hakkason_JumpInTalk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

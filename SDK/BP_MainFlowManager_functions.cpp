
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

// Function BP_MainFlowManager.BP_MainFlowManager_C.CheckInitTag
// (NetReliable, Native, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetClient, Const)
// Parameters:
// bool                           Initialized                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_CheckInitTag(bool* Initialized)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.CheckInitTag");

	ABP_MainFlowManager_C_CheckInitTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Initialized != nullptr)
		*Initialized = params.Initialized;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.SetInitTag
// (NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Private, NetServer, NetClient, Const)

void ABP_MainFlowManager_C::STATIC_SetInitTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.SetInitTag");

	ABP_MainFlowManager_C_SetInitTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.CheckAutoSave
// (NetReliable, Exec, Native, Event, NetResponse, Public, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            CurFlag                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::CheckAutoSave(int CurFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.CheckAutoSave");

	ABP_MainFlowManager_C_CheckAutoSave_Params params;
	params.CurFlag = CurFlag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.MFsub_RedLineMemoFlag_Cb
// (Net, NetReliable, Exec, Event, NetResponse, MulticastDelegate, Public, Delegate, NetServer, NetClient, Const)

void ABP_MainFlowManager_C::MFsub_RedLineMemoFlag_Cb()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.MFsub_RedLineMemoFlag_Cb");

	ABP_MainFlowManager_C_MFsub_RedLineMemoFlag_Cb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.MFsub_RedLineMemoFlag_Hk
// (NetRequest, Event, NetResponse, MulticastDelegate, Public, Delegate, NetServer, NetClient, Const)

void ABP_MainFlowManager_C::MFsub_RedLineMemoFlag_Hk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.MFsub_RedLineMemoFlag_Hk");

	ABP_MainFlowManager_C_MFsub_RedLineMemoFlag_Hk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.SetupMainFlow
// (NetRequest, Event, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_MainFlowManager_C::SetupMainFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.SetupMainFlow");

	ABP_MainFlowManager_C_SetupMainFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.CheckDelegateSafe
// (Exec, Public, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Exec_Step                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FindResult                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::CheckDelegateSafe(int Exec_Step, bool* FindResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.CheckDelegateSafe");

	ABP_MainFlowManager_C_CheckDelegateSafe_Params params;
	params.Exec_Step = Exec_Step;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FindResult != nullptr)
		*FindResult = params.FindResult;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.MakeActorControl_AfterAdd
// (NetReliable, NetRequest, Exec, Native, NetResponse, Public, Private, NetServer, NetClient, Const)
// Parameters:
// TEnumAsByte<EN_MainFlowActorID> Actor_ID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Actor_Class                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           MakeResult                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::MakeActorControl_AfterAdd(TEnumAsByte<EN_MainFlowActorID> Actor_ID, class UClass* Actor_Class, bool* MakeResult, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.MakeActorControl_AfterAdd");

	ABP_MainFlowManager_C_MakeActorControl_AfterAdd_Params params;
	params.Actor_ID = Actor_ID;
	params.Actor_Class = Actor_Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MakeResult != nullptr)
		*MakeResult = params.MakeResult;
	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.OneClearMessageControl
// (Net, Exec, Native, NetResponse, Delegate, NetServer, NetClient, Const)
// Parameters:
// TEnumAsByte<EN_MainFlowMsgDestinationID> Destination_ID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::OneClearMessageControl(TEnumAsByte<EN_MainFlowMsgDestinationID> Destination_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.OneClearMessageControl");

	ABP_MainFlowManager_C_OneClearMessageControl_Params params;
	params.Destination_ID = Destination_ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.OneClearActorControl
// (NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, NetClient, Const)
// Parameters:
// TEnumAsByte<EN_MainFlowActorID> Actor_ID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_OneClearActorControl(TEnumAsByte<EN_MainFlowActorID> Actor_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.OneClearActorControl");

	ABP_MainFlowManager_C_OneClearActorControl_Params params;
	params.Actor_ID = Actor_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.GameTimerControl
// (Net, Exec, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetClient, Const)
// Parameters:
// bool                           Run_GameTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_GameTimerControl(bool Run_GameTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.GameTimerControl");

	ABP_MainFlowManager_C_GameTimerControl_Params params;
	params.Run_GameTime = Run_GameTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.FindEventMan
// (Net, NetReliable, Native, Event, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_FindEventMan(const struct FName& EventName, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.FindEventMan");

	ABP_MainFlowManager_C_FindEventMan_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.CheckIntervalMessage
// (NetResponse, Static, NetMulticast, MulticastDelegate, Private, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaSecond                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_CheckIntervalMessage(float DeltaSecond)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.CheckIntervalMessage");

	ABP_MainFlowManager_C_CheckIntervalMessage_Params params;
	params.DeltaSecond = DeltaSecond;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.ReservationInquiryMessage
// (Net, Exec, Native, Event, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          IntervalTIme                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::ReservationInquiryMessage(float IntervalTIme)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.ReservationInquiryMessage");

	ABP_MainFlowManager_C_ReservationInquiryMessage_Params params;
	params.IntervalTIme = IntervalTIme;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.MessageControlWorkSub
// (NetRequest, NetMulticast, MulticastDelegate, Private, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Destination_ID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CountUp                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FindResult                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::MessageControlWorkSub(int Destination_ID, bool CountUp, bool* FindResult, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.MessageControlWorkSub");

	ABP_MainFlowManager_C_MessageControlWorkSub_Params params;
	params.Destination_ID = Destination_ID;
	params.CountUp = CountUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FindResult != nullptr)
		*FindResult = params.FindResult;
	if (Count != nullptr)
		*Count = params.Count;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.ReceiveMessageControl
// (NetRequest, Event, Static, NetMulticast, Delegate, NetClient, Const)
// Parameters:
// TEnumAsByte<EN_MainFlowMsgDestinationID> Destination_ID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           On_Massage                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, OutParm, ZeroConstructor)
// class AActor*                  Sender                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_ReceiveMessageControl(TEnumAsByte<EN_MainFlowMsgDestinationID> Destination_ID, bool* On_Massage, struct FString* Message, class AActor** Sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.ReceiveMessageControl");

	ABP_MainFlowManager_C_ReceiveMessageControl_Params params;
	params.Destination_ID = Destination_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (On_Massage != nullptr)
		*On_Massage = params.On_Massage;
	if (Message != nullptr)
		*Message = params.Message;
	if (Sender != nullptr)
		*Sender = params.Sender;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.InquiryMessageControl
// (Net, NetReliable, NetRequest, Native, MulticastDelegate, Private, Protected, NetServer, NetClient, Const)
// Parameters:
// TEnumAsByte<EN_MainFlowMsgDestinationID> Destination_ID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExecDispatcher                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           On_Message                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::InquiryMessageControl(TEnumAsByte<EN_MainFlowMsgDestinationID> Destination_ID, bool ExecDispatcher, bool* On_Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.InquiryMessageControl");

	ABP_MainFlowManager_C_InquiryMessageControl_Params params;
	params.Destination_ID = Destination_ID;
	params.ExecDispatcher = ExecDispatcher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (On_Message != nullptr)
		*On_Message = params.On_Message;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.SendMessageControl
// (NetReliable, Exec, Native, Event, NetMulticast, Public, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_MainFlowMsgDestinationID> Destination_ID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class AActor*                  Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::SendMessageControl(TEnumAsByte<EN_MainFlowMsgDestinationID> Destination_ID, const struct FString& Message, class AActor* Sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.SendMessageControl");

	ABP_MainFlowManager_C_SendMessageControl_Params params;
	params.Destination_ID = Destination_ID;
	params.Message = Message;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.ResetMessageControl
// (Exec, Native, Event, Static, NetMulticast, Public, Delegate, NetServer, NetClient, Const)

void ABP_MainFlowManager_C::STATIC_ResetMessageControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.ResetMessageControl");

	ABP_MainFlowManager_C_ResetMessageControl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.CheckCounterActorControl
// (Event, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// TEnumAsByte<EN_MainFlowActorID> Actor_ID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Save_Counter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Kill                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::CheckCounterActorControl(TEnumAsByte<EN_MainFlowActorID> Actor_ID, unsigned char Save_Counter, bool* Kill)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.CheckCounterActorControl");

	ABP_MainFlowManager_C_CheckCounterActorControl_Params params;
	params.Actor_ID = Actor_ID;
	params.Save_Counter = Save_Counter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Kill != nullptr)
		*Kill = params.Kill;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.CallRemote
// (Net, NetRequest, Event, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::CallRemote(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.CallRemote");

	ABP_MainFlowManager_C_CallRemote_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.GetCounterActorControl
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, Public, Delegate, NetServer, NetClient, Const)
// Parameters:
// TEnumAsByte<EN_MainFlowActorID> Actor_ID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  renewal_counter                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  entry_actor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_GetCounterActorControl(TEnumAsByte<EN_MainFlowActorID> Actor_ID, unsigned char* renewal_counter, class AActor** entry_actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.GetCounterActorControl");

	ABP_MainFlowManager_C_GetCounterActorControl_Params params;
	params.Actor_ID = Actor_ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (renewal_counter != nullptr)
		*renewal_counter = params.renewal_counter;
	if (entry_actor != nullptr)
		*entry_actor = params.entry_actor;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.RenewalActorControl
// (NetReliable, NetRequest, Static, Public, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_MainFlowActorID> Actor_ID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_RenewalActorControl(TEnumAsByte<EN_MainFlowActorID> Actor_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.RenewalActorControl");

	ABP_MainFlowManager_C_RenewalActorControl_Params params;
	params.Actor_ID = Actor_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.MakeActorControl
// (Exec, Event, NetResponse, Public, Private, NetServer, NetClient, Const)
// Parameters:
// TEnumAsByte<EN_MainFlowActorID> Actor_ID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Actor_Class                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           MakeResult                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::MakeActorControl(TEnumAsByte<EN_MainFlowActorID> Actor_ID, class UClass* Actor_Class, bool* MakeResult, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.MakeActorControl");

	ABP_MainFlowManager_C_MakeActorControl_Params params;
	params.Actor_ID = Actor_ID;
	params.Actor_Class = Actor_Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MakeResult != nullptr)
		*MakeResult = params.MakeResult;
	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.ResetActorControl
// (NetReliable, NetRequest, Exec, NetResponse, Static, Public, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MainFlowManager_C::STATIC_ResetActorControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.ResetActorControl");

	ABP_MainFlowManager_C_ResetActorControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.PushIndependenceDestructor
// (Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, Const)
// Parameters:
// int                            MapType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Independence_Step              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Add_Stock                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::PushIndependenceDestructor(int MapType, int Independence_Step, bool* Add_Stock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.PushIndependenceDestructor");

	ABP_MainFlowManager_C_PushIndependenceDestructor_Params params;
	params.MapType = MapType;
	params.Independence_Step = Independence_Step;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Add_Stock != nullptr)
		*Add_Stock = params.Add_Stock;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.PushDestructor_Sub
// (Net, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Delegate, NetServer, NetClient, Const)
// Parameters:
// int                            MapType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Step_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Add_Stock                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::PushDestructor_Sub(int MapType, int Step_Value, bool* Add_Stock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.PushDestructor_Sub");

	ABP_MainFlowManager_C_PushDestructor_Sub_Params params;
	params.MapType = MapType;
	params.Step_Value = Step_Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Add_Stock != nullptr)
		*Add_Stock = params.Add_Stock;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.SetStepControl_CurrentStep
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// int                            SetStep                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Change_Current                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::SetStepControl_CurrentStep(int SetStep, bool* Change_Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.SetStepControl_CurrentStep");

	ABP_MainFlowManager_C_SetStepControl_CurrentStep_Params params;
	params.SetStep = SetStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Change_Current != nullptr)
		*Change_Current = params.Change_Current;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.PlayerbleControl
// (NetRequest, Native, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, Const)
// Parameters:
// bool                           Playable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::PlayerbleControl(bool Playable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.PlayerbleControl");

	ABP_MainFlowManager_C_PlayerbleControl_Params params;
	params.Playable = Playable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.CulcStepControl_PlayerableSP
// (NetRequest, Event, NetResponse, Delegate, NetServer, NetClient, Const)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::CulcStepControl_PlayerableSP(int Step, unsigned char SP, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.CulcStepControl_PlayerableSP");

	ABP_MainFlowManager_C_CulcStepControl_PlayerableSP_Params params;
	params.Step = Step;
	params.SP = SP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.GetDelegateSafe
// (Native, MulticastDelegate, Public, Private, Delegate, HasOutParms, NetClient, Const)
// Parameters:
// int                            Exec_Step                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FindResult                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   EventNameRC                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            GetKey                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::GetDelegateSafe(int Exec_Step, bool* FindResult, struct FName* EventNameRC, int* GetKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.GetDelegateSafe");

	ABP_MainFlowManager_C_GetDelegateSafe_Params params;
	params.Exec_Step = Exec_Step;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FindResult != nullptr)
		*FindResult = params.FindResult;
	if (EventNameRC != nullptr)
		*EventNameRC = params.EventNameRC;
	if (GetKey != nullptr)
		*GetKey = params.GetKey;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.CheckLoadEnd
// (NetReliable, NetRequest, Event, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// bool                           LoadEnd                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::CheckLoadEnd(bool* LoadEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.CheckLoadEnd");

	ABP_MainFlowManager_C_CheckLoadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LoadEnd != nullptr)
		*LoadEnd = params.LoadEnd;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.ResetNewStepControl
// (Net, Native, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)

void ABP_MainFlowManager_C::STATIC_ResetNewStepControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.ResetNewStepControl");

	ABP_MainFlowManager_C_ResetNewStepControl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.SelectStepID
// (Exec, Event, NetMulticast, Public, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MapType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  StepID                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           FindResult                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::SelectStepID(int Step, int MapType, unsigned char* StepID, bool* FindResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.SelectStepID");

	ABP_MainFlowManager_C_SelectStepID_Params params;
	params.Step = Step;
	params.MapType = MapType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StepID != nullptr)
		*StepID = params.StepID;
	if (FindResult != nullptr)
		*FindResult = params.FindResult;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.CheckPlayableSP
// (Net, NetReliable, Event, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// int                            Exec_Step                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SP                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::CheckPlayableSP(int Exec_Step, unsigned char* SP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.CheckPlayableSP");

	ABP_MainFlowManager_C_CheckPlayableSP_Params params;
	params.Exec_Step = Exec_Step;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SP != nullptr)
		*SP = params.SP;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.ChangeStepControl_PlayerableSP
// (Net, NetRequest, Exec, Native, Event, Static, Public, Delegate, HasOutParms, HasDefaults, Const)
// Parameters:
// int                            CheckStep                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_ChangeStepControl_PlayerableSP(int CheckStep, int SP, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.ChangeStepControl_PlayerableSP");

	ABP_MainFlowManager_C_ChangeStepControl_PlayerableSP_Params params;
	params.CheckStep = CheckStep;
	params.SP = SP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.GetStepControl_ExecStep
// (Exec, Event, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// int                            Now_Exec                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::GetStepControl_ExecStep(int* Now_Exec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.GetStepControl_ExecStep");

	ABP_MainFlowManager_C_GetStepControl_ExecStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Now_Exec != nullptr)
		*Now_Exec = params.Now_Exec;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.SetStepControl_ExecStep
// (NetRequest, Native, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// int                            Exec_Step                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Now_Exec                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_SetStepControl_ExecStep(int Exec_Step, int* Now_Exec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.SetStepControl_ExecStep");

	ABP_MainFlowManager_C_SetStepControl_ExecStep_Params params;
	params.Exec_Step = Exec_Step;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Now_Exec != nullptr)
		*Now_Exec = params.Now_Exec;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.PopDestructor
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetClient, Const)
// Parameters:
// int                            Exec_Step                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Remove_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_PopDestructor(int Exec_Step, bool* Remove_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.PopDestructor");

	ABP_MainFlowManager_C_PopDestructor_Params params;
	params.Exec_Step = Exec_Step;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Remove_ != nullptr)
		*Remove_ = params.Remove_;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.GetCutScenStockTimes
// (Native, Event, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            StockTimes                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_GetCutScenStockTimes(int* StockTimes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.GetCutScenStockTimes");

	ABP_MainFlowManager_C_GetCutScenStockTimes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StockTimes != nullptr)
		*StockTimes = params.StockTimes;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.KillCutSceneEvent
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   CutsceneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           KillResult                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_KillCutSceneEvent(const struct FName& CutsceneName, bool* KillResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.KillCutSceneEvent");

	ABP_MainFlowManager_C_KillCutSceneEvent_Params params;
	params.CutsceneName = CutsceneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KillResult != nullptr)
		*KillResult = params.KillResult;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.GetCutSceneEvent
// (Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, Const)
// Parameters:
// struct FName                   CutsceneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Get_EndEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FindResult                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   EventName                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_GetCutSceneEvent(const struct FName& CutsceneName, bool Get_EndEvent, bool* FindResult, struct FName* EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.GetCutSceneEvent");

	ABP_MainFlowManager_C_GetCutSceneEvent_Params params;
	params.CutsceneName = CutsceneName;
	params.Get_EndEvent = Get_EndEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FindResult != nullptr)
		*FindResult = params.FindResult;
	if (EventName != nullptr)
		*EventName = params.EventName;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.CreateCutSceneControl
// (Static, MulticastDelegate, Public, Delegate, NetServer, NetClient, Const)
// Parameters:
// struct FName                   CutsceneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseFade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StartEventName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   EndEventName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Entry_Result                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_CreateCutSceneControl(const struct FName& CutsceneName, bool UseFade, const struct FName& StartEventName, const struct FName& EndEventName, bool* Entry_Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.CreateCutSceneControl");

	ABP_MainFlowManager_C_CreateCutSceneControl_Params params;
	params.CutsceneName = CutsceneName;
	params.UseFade = UseFade;
	params.StartEventName = StartEventName;
	params.EndEventName = EndEventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Entry_Result != nullptr)
		*Entry_Result = params.Entry_Result;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.ResetCScontrol
// (NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)

void ABP_MainFlowManager_C::STATIC_ResetCScontrol()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.ResetCScontrol");

	ABP_MainFlowManager_C_ResetCScontrol_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.GetDestructor_List
// (NetReliable, Exec, Event, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// TArray<struct FST_MainFlowStockDestructor> DestructorList                 (Parm, OutParm, ZeroConstructor)

void ABP_MainFlowManager_C::GetDestructor_List(TArray<struct FST_MainFlowStockDestructor>* DestructorList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.GetDestructor_List");

	ABP_MainFlowManager_C_GetDestructor_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DestructorList != nullptr)
		*DestructorList = params.DestructorList;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.ChangeStepControl_SubStep
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Delegate, NetServer, NetClient, Const)
// Parameters:
// int                            CheckStep                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            New_SubStep                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::ChangeStepControl_SubStep(int CheckStep, int New_SubStep, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.ChangeStepControl_SubStep");

	ABP_MainFlowManager_C_ChangeStepControl_SubStep_Params params;
	params.CheckStep = CheckStep;
	params.New_SubStep = New_SubStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.GetStepControl_CurrentStep
// (Net, Exec, Event, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// int                            Current                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::GetStepControl_CurrentStep(int* Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.GetStepControl_CurrentStep");

	ABP_MainFlowManager_C_GetStepControl_CurrentStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Current != nullptr)
		*Current = params.Current;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.ChangeStepControl_Flag
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, Delegate, NetClient, Const)
// Parameters:
// int                            CheckStep                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            New_Flag                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            FlagValue                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_ChangeStepControl_Flag(int CheckStep, int New_Flag, int mask, bool* Result, int* FlagValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.ChangeStepControl_Flag");

	ABP_MainFlowManager_C_ChangeStepControl_Flag_Params params;
	params.CheckStep = CheckStep;
	params.New_Flag = New_Flag;
	params.mask = mask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (FlagValue != nullptr)
		*FlagValue = params.FlagValue;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.GetStepControl_Info
// (Exec, Native, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, Const)
// Parameters:
// int                            CheckStep                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            control_flag                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            sub_step                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  step_id                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Playable_SP                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::GetStepControl_Info(int CheckStep, bool* Result, int* control_flag, int* sub_step, unsigned char* step_id, unsigned char* Playable_SP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.GetStepControl_Info");

	ABP_MainFlowManager_C_GetStepControl_Info_Params params;
	params.CheckStep = CheckStep;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (control_flag != nullptr)
		*control_flag = params.control_flag;
	if (sub_step != nullptr)
		*sub_step = params.sub_step;
	if (step_id != nullptr)
		*step_id = params.step_id;
	if (Playable_SP != nullptr)
		*Playable_SP = params.Playable_SP;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.PushDestructor
// (Net, NetRequest, Exec, Native, Static, Public, Private, HasOutParms, NetClient, DLLImport)
// Parameters:
// int                            MapType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Add_Stock                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_PushDestructor(int MapType, bool* Add_Stock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.PushDestructor");

	ABP_MainFlowManager_C_PushDestructor_Params params;
	params.MapType = MapType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Add_Stock != nullptr)
		*Add_Stock = params.Add_Stock;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.ChangeStepControl
// (NetRequest, Exec, Native, Static, MulticastDelegate, Public, Delegate, NetServer, NetClient, Const)
// Parameters:
// int                            new_stepid                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            map_type                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           New_Step_Control               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_ChangeStepControl(int new_stepid, int map_type, bool* New_Step_Control)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.ChangeStepControl");

	ABP_MainFlowManager_C_ChangeStepControl_Params params;
	params.new_stepid = new_stepid;
	params.map_type = map_type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (New_Step_Control != nullptr)
		*New_Step_Control = params.New_Step_Control;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.StepControlBitToBranchID
// (Net, NetReliable, Native, Static, MulticastDelegate, NetServer, NetClient, Const)
// Parameters:
// int                            CurFlag                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_MainFlowStepBranchID> BranchID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ChangeFlag                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Change                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_StepControlBitToBranchID(int CurFlag, TEnumAsByte<EN_MainFlowStepBranchID>* BranchID, int* ChangeFlag, bool* Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.StepControlBitToBranchID");

	ABP_MainFlowManager_C_StepControlBitToBranchID_Params params;
	params.CurFlag = CurFlag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BranchID != nullptr)
		*BranchID = params.BranchID;
	if (ChangeFlag != nullptr)
		*ChangeFlag = params.ChangeFlag;
	if (Change != nullptr)
		*Change = params.Change;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.AllCollisionChange
// (NetReliable, Native, Event, NetResponse, Public, Private, NetServer, NetClient, Const)
// Parameters:
// bool                           On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::AllCollisionChange(bool On, bool* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.AllCollisionChange");

	ABP_MainFlowManager_C_AllCollisionChange_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.CheckEventOccurs
// (Exec, Native, Static, Public, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_CheckEventOccurs(const struct FName& EventName, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.CheckEventOccurs");

	ABP_MainFlowManager_C_CheckEventOccurs_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.CheckFollowSHEStep
// (NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Private, Protected, NetServer, NetClient, Const)
// Parameters:
// bool                           Need_Follow_SHE                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::CheckFollowSHEStep(bool* Need_Follow_SHE)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.CheckFollowSHEStep");

	ABP_MainFlowManager_C_CheckFollowSHEStep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Need_Follow_SHE != nullptr)
		*Need_Follow_SHE = params.Need_Follow_SHE;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.CheckLevelSchedule
// (NetRequest, Native, Event, Static, NetMulticast, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_CheckLevelSchedule(int Step)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.CheckLevelSchedule");

	ABP_MainFlowManager_C_CheckLevelSchedule_Params params;
	params.Step = Step;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.LoadedStartLevel_Impl
// (Exec, Native, NetResponse, NetMulticast, Public, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MainFlowManager_C::LoadedStartLevel_Impl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.LoadedStartLevel_Impl");

	ABP_MainFlowManager_C_LoadedStartLevel_Impl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.MakeAppointControl
// (NetReliable, Exec, Native, Static, Public, Private, NetServer, NetClient, Const)
// Parameters:
// struct FVector                 JumpPoint                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FName                   EyeCatchID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Add_Day                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Hour                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Minute                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Enable_Time_Min                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Enable_Time_Max                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Change_Step                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LAbelLeft                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StartRemotoEvent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StartEndEvent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Can_not_kill                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SkipEndFade                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_MakeAppointControl(const struct FVector& JumpPoint, const struct FRotator& Rotation, const struct FName& EyeCatchID, int Add_Day, int Hour, int Minute, int Enable_Time_Min, int Enable_Time_Max, int Change_Step, const struct FName& LAbelLeft, const struct FName& StartRemotoEvent, const struct FName& StartEndEvent, bool Can_not_kill, bool SkipEndFade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.MakeAppointControl");

	ABP_MainFlowManager_C_MakeAppointControl_Params params;
	params.JumpPoint = JumpPoint;
	params.Rotation = Rotation;
	params.EyeCatchID = EyeCatchID;
	params.Add_Day = Add_Day;
	params.Hour = Hour;
	params.Minute = Minute;
	params.Enable_Time_Min = Enable_Time_Min;
	params.Enable_Time_Max = Enable_Time_Max;
	params.Change_Step = Change_Step;
	params.LAbelLeft = LAbelLeft;
	params.StartRemotoEvent = StartRemotoEvent;
	params.StartEndEvent = StartEndEvent;
	params.Can_not_kill = Can_not_kill;
	params.SkipEndFade = SkipEndFade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.KillAppointControl
// (Exec, Native, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, Const)
// Parameters:
// bool                           forced_Kill                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           kill_exec                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_KillAppointControl(bool forced_Kill, bool* kill_exec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.KillAppointControl");

	ABP_MainFlowManager_C_KillAppointControl_Params params;
	params.forced_Kill = forced_Kill;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (kill_exec != nullptr)
		*kill_exec = params.kill_exec;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.ExecTickDelegate
// (NetRequest, Exec, Native, Event, NetResponse, Public, Private, NetServer, NetClient, Const)
// Parameters:
// bool                           enable_exec                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   Event_Name                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::ExecTickDelegate(bool* enable_exec, struct FName* Event_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.ExecTickDelegate");

	ABP_MainFlowManager_C_ExecTickDelegate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (enable_exec != nullptr)
		*enable_exec = params.enable_exec;
	if (Event_Name != nullptr)
		*Event_Name = params.Event_Name;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.SetTickDelegate
// (Event, Static, NetMulticast, Public, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            set_step                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Add_result                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_SetTickDelegate(int set_step, const struct FName& EventName, bool* Add_result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.SetTickDelegate");

	ABP_MainFlowManager_C_SetTickDelegate_Params params;
	params.set_step = set_step;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Add_result != nullptr)
		*Add_result = params.Add_result;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.ResetDelegate
// (Net, Exec, Native, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)

void ABP_MainFlowManager_C::STATIC_ResetDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.ResetDelegate");

	ABP_MainFlowManager_C_ResetDelegate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.GetDelegate
// (NetReliable, NetRequest, Native, NetMulticast, Public, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FindResult                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   EventNameRC                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            GetKey                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::GetDelegate(const struct FName& EventName, bool* FindResult, struct FName* EventNameRC, int* GetKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.GetDelegate");

	ABP_MainFlowManager_C_GetDelegate_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FindResult != nullptr)
		*FindResult = params.FindResult;
	if (EventNameRC != nullptr)
		*EventNameRC = params.EventNameRC;
	if (GetKey != nullptr)
		*GetKey = params.GetKey;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.SetDelegate
// (NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ControlBit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ExecStep                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Add_result                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_SetDelegate(const struct FName& EventName, int ControlBit, int ExecStep, bool* Add_result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.SetDelegate");

	ABP_MainFlowManager_C_SetDelegate_Params params;
	params.EventName = EventName;
	params.ControlBit = ControlBit;
	params.ExecStep = ExecStep;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Add_result != nullptr)
		*Add_result = params.Add_result;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.MFsub_SetGlobalFlag
// (Net, Native, Event, NetResponse, Static, MulticastDelegate, Private, NetServer, NetClient, Const)
// Parameters:
// struct FName                   FlagID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SetResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_MFsub_SetGlobalFlag(const struct FName& FlagID, int SetValue, bool* SetResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.MFsub_SetGlobalFlag");

	ABP_MainFlowManager_C_MFsub_SetGlobalFlag_Params params;
	params.FlagID = FlagID;
	params.SetValue = SetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SetResult != nullptr)
		*SetResult = params.SetResult;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.MFsub_GetGlobalFlag
// (NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetClient, Const)
// Parameters:
// struct FName                   FlagID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FlagValue                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::MFsub_GetGlobalFlag(const struct FName& FlagID, int* FlagValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.MFsub_GetGlobalFlag");

	ABP_MainFlowManager_C_MFsub_GetGlobalFlag_Params params;
	params.FlagID = FlagID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FlagValue != nullptr)
		*FlagValue = params.FlagValue;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.StartChildFlow
// (Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, Const)
// Parameters:
// struct FName                   ChildFlowName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           StartResult                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::StartChildFlow(const struct FName& ChildFlowName, bool* StartResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.StartChildFlow");

	ABP_MainFlowManager_C_StartChildFlow_Params params;
	params.ChildFlowName = ChildFlowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StartResult != nullptr)
		*StartResult = params.StartResult;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.GetCurrentChildFlow
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FName                   CurrentFlowName                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::GetCurrentChildFlow(struct FName* CurrentFlowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.GetCurrentChildFlow");

	ABP_MainFlowManager_C_GetCurrentChildFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentFlowName != nullptr)
		*CurrentFlowName = params.CurrentFlowName;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.GetChildFlowCurrentID
// (NetRequest, Exec, Event, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// int                            ChildFlowID                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::GetChildFlowCurrentID(int* ChildFlowID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.GetChildFlowCurrentID");

	ABP_MainFlowManager_C_GetChildFlowCurrentID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChildFlowID != nullptr)
		*ChildFlowID = params.ChildFlowID;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.ChangeChildFlowCurrentID
// (NetRequest, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, Const)
// Parameters:
// int                            ChangeAfterID                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::ChangeChildFlowCurrentID(int* ChangeAfterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.ChangeChildFlowCurrentID");

	ABP_MainFlowManager_C_ChangeChildFlowCurrentID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChangeAfterID != nullptr)
		*ChangeAfterID = params.ChangeAfterID;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.CheckChildFlowCurrentID
// (NetRequest, NetResponse, Private, Protected, Delegate, Const)
// Parameters:
// int                            CheckId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Alive_to_survive               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::CheckChildFlowCurrentID(int CheckId, bool* Alive_to_survive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.CheckChildFlowCurrentID");

	ABP_MainFlowManager_C_CheckChildFlowCurrentID_Params params;
	params.CheckId = CheckId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Alive_to_survive != nullptr)
		*Alive_to_survive = params.Alive_to_survive;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.LiveCheckChildFlow
// (Event, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, Const)
// Parameters:
// struct FName                   FlowName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LiveResult                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::LiveCheckChildFlow(const struct FName& FlowName, bool* LiveResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.LiveCheckChildFlow");

	ABP_MainFlowManager_C_LiveCheckChildFlow_Params params;
	params.FlowName = FlowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveResult != nullptr)
		*LiveResult = params.LiveResult;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.ResetChildFlow
// (NetReliable, Exec, Native, Event, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)

void ABP_MainFlowManager_C::ResetChildFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.ResetChildFlow");

	ABP_MainFlowManager_C_ResetChildFlow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.ResetEventMan
// (Net, NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)

void ABP_MainFlowManager_C::STATIC_ResetEventMan()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.ResetEventMan");

	ABP_MainFlowManager_C_ResetEventMan_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.RemoveEventMan
// (NetReliable, Exec, Event, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           rc                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::RemoveEventMan(const struct FName& EventName, bool* rc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.RemoveEventMan");

	ABP_MainFlowManager_C_RemoveEventMan_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (rc != nullptr)
		*rc = params.rc;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.UnBindEventMan
// (NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, Const)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CarrigeUnbind                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::UnBindEventMan(const struct FName& EventName, bool CarrigeUnbind, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.UnBindEventMan");

	ABP_MainFlowManager_C_UnBindEventMan_Params params;
	params.EventName = EventName;
	params.CarrigeUnbind = CarrigeUnbind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.ExecEventMan
// (NetRequest, Event, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetClient, Const)

void ABP_MainFlowManager_C::STATIC_ExecEventMan()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.ExecEventMan");

	ABP_MainFlowManager_C_ExecEventMan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.CreateEventMan
// (NetReliable, Exec, Event, Static, MulticastDelegate, Public, Delegate, NetServer, NetClient, Const)
// Parameters:
// class UPrimitiveComponent*     Trg_Compo_Name                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ControlStatus                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_MainFlowEventType> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TypeUniqueParameta             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Save                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           createresult                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_CreateEventMan(class UPrimitiveComponent* Trg_Compo_Name, const struct FName& EventName, int ControlStatus, TEnumAsByte<EN_MainFlowEventType> EventType, const struct FString& TypeUniqueParameta, bool Save, bool* createresult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.CreateEventMan");

	ABP_MainFlowManager_C_CreateEventMan_Params params;
	params.Trg_Compo_Name = Trg_Compo_Name;
	params.EventName = EventName;
	params.ControlStatus = ControlStatus;
	params.EventType = EventType;
	params.TypeUniqueParameta = TypeUniqueParameta;
	params.Save = Save;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (createresult != nullptr)
		*createresult = params.createresult;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.AddTag
// (NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, NetClient, Const)
// Parameters:
// struct FString                 TagName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_MainFlowManager_C::STATIC_AddTag(const struct FString& TagName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.AddTag");

	ABP_MainFlowManager_C_AddTag_Params params;
	params.TagName = TagName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.UserConstructionScript
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, NetClient, Const)

void ABP_MainFlowManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.UserConstructionScript");

	ABP_MainFlowManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.MfEvt_EndAppoint
// (Native, Event, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_MainFlowManager_C::MfEvt_EndAppoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.MfEvt_EndAppoint");

	ABP_MainFlowManager_C_MfEvt_EndAppoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.LoadedStartLevel
// (Native, Event, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_MainFlowManager_C::LoadedStartLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.LoadedStartLevel");

	ABP_MainFlowManager_C_LoadedStartLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.MfEvt_StartAppoint
// (Net, NetReliable, NetRequest, Exec, Event, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_MainFlowManager_C::MfEvt_StartAppoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.MfEvt_StartAppoint");

	ABP_MainFlowManager_C_MfEvt_StartAppoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.ChangedStep
// (NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// int                            SetSteps                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_ChangedStep(int SetSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.ChangedStep");

	ABP_MainFlowManager_C_ChangedStep_Params params;
	params.SetSteps = SetSteps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.ReceiveTick
// (Net, NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.ReceiveTick");

	ABP_MainFlowManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.Reset
// (NetReliable, NetRequest, Exec, Event, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_MainFlowManager_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.Reset");

	ABP_MainFlowManager_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.ReceiveBeginPlay
// (Net, NetRequest, Exec, Event, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_MainFlowManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.ReceiveBeginPlay");

	ABP_MainFlowManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.ExecuteUbergraph_BP_MainFlowManager
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::ExecuteUbergraph_BP_MainFlowManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.ExecuteUbergraph_BP_MainFlowManager");

	ABP_MainFlowManager_C_ExecuteUbergraph_BP_MainFlowManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.RemoveEvent__DelegateSignature
// (Net, NetReliable, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, NetClient, Const)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::RemoveEvent__DelegateSignature(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.RemoveEvent__DelegateSignature");

	ABP_MainFlowManager_C_RemoveEvent__DelegateSignature_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.NewSendMessage__DelegateSignature
// (Net, NetReliable, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, NetClient, Const)
// Parameters:
// TEnumAsByte<EN_MainFlowMsgDestinationID> Current_Destination_ID         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::NewSendMessage__DelegateSignature(TEnumAsByte<EN_MainFlowMsgDestinationID> Current_Destination_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.NewSendMessage__DelegateSignature");

	ABP_MainFlowManager_C_NewSendMessage__DelegateSignature_Params params;
	params.Current_Destination_ID = Current_Destination_ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.RenewalActorID__DelegateSignature
// (Net, NetReliable, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, NetClient, Const)
// Parameters:
// TEnumAsByte<EN_MainFlowActorID> ActorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  RenewalCounter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::RenewalActorID__DelegateSignature(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.RenewalActorID__DelegateSignature");

	ABP_MainFlowManager_C_RenewalActorID__DelegateSignature_Params params;
	params.ActorId = ActorId;
	params.RenewalCounter = RenewalCounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.MainFlowDelegate__DelegateSignature
// (Net, NetReliable, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, NetClient, Const)

void ABP_MainFlowManager_C::MainFlowDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.MainFlowDelegate__DelegateSignature");

	ABP_MainFlowManager_C_MainFlowDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowManager.BP_MainFlowManager_C.RemoteEventCall__DelegateSignature
// (NetReliable, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, NetClient, Const)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainFlowManager_C::RemoteEventCall__DelegateSignature(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowManager.BP_MainFlowManager_C.RemoteEventCall__DelegateSignature");

	ABP_MainFlowManager_C_RemoteEventCall__DelegateSignature_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

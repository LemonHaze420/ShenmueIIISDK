
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

// Function BP_MainFlowFunction.BP_MainFlowFunction_C.ChangeCollision
// (Net, Native, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           on_off                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Change                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowFunction_C::ChangeCollision(bool on_off, bool* Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowFunction.BP_MainFlowFunction_C.ChangeCollision");

	UBP_MainFlowFunction_C_ChangeCollision_Params params;
	params.on_off = on_off;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Change != nullptr)
		*Change = params.Change;
}


// Function BP_MainFlowFunction.BP_MainFlowFunction_C.CheckOccurs
// (Net, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowFunction_C::CheckOccurs(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowFunction.BP_MainFlowFunction_C.CheckOccurs");

	UBP_MainFlowFunction_C_CheckOccurs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_MainFlowFunction.BP_MainFlowFunction_C.ExecUnbind
// (NetRequest, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBP_MainFlowFunction_C::ExecUnbind()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowFunction.BP_MainFlowFunction_C.ExecUnbind");

	UBP_MainFlowFunction_C_ExecUnbind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowFunction.BP_MainFlowFunction_C.TrgEvent_CanTrgEvent
// (NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           CAN                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowFunction_C::TrgEvent_CanTrgEvent(bool* CAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowFunction.BP_MainFlowFunction_C.TrgEvent_CanTrgEvent");

	UBP_MainFlowFunction_C_TrgEvent_CanTrgEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CAN != nullptr)
		*CAN = params.CAN;
}


// Function BP_MainFlowFunction.BP_MainFlowFunction_C.TrgEvent_UnbindOnly
// (Native, Event, NetResponse, MulticastDelegate, Public, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           CarrigeUnbind                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExecUnbind                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowFunction_C::TrgEvent_UnbindOnly(bool CarrigeUnbind, bool* ExecUnbind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowFunction.BP_MainFlowFunction_C.TrgEvent_UnbindOnly");

	UBP_MainFlowFunction_C_TrgEvent_UnbindOnly_Params params;
	params.CarrigeUnbind = CarrigeUnbind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecUnbind != nullptr)
		*ExecUnbind = params.ExecUnbind;
}


// Function BP_MainFlowFunction.BP_MainFlowFunction_C.TrgEvent_Exec
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, Public, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           rc                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowFunction_C::STATIC_TrgEvent_Exec(bool* rc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowFunction.BP_MainFlowFunction_C.TrgEvent_Exec");

	UBP_MainFlowFunction_C_TrgEvent_Exec_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (rc != nullptr)
		*rc = params.rc;
}


// Function BP_MainFlowFunction.BP_MainFlowFunction_C.TrgEvent_Enable
// (Net, NetRequest, Exec, Native, Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TriggerCompo_Name              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ControlStatus                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_MainFlowEventType> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UniqueParameta                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_MainFlowFunction_C::STATIC_TrgEvent_Enable(class UPrimitiveComponent* TriggerCompo_Name, const struct FName& EventName, int ControlStatus, TEnumAsByte<EN_MainFlowEventType> EventType, const struct FString& UniqueParameta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowFunction.BP_MainFlowFunction_C.TrgEvent_Enable");

	UBP_MainFlowFunction_C_TrgEvent_Enable_Params params;
	params.TriggerCompo_Name = TriggerCompo_Name;
	params.EventName = EventName;
	params.ControlStatus = ControlStatus;
	params.EventType = EventType;
	params.UniqueParameta = UniqueParameta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowFunction.BP_MainFlowFunction_C.TrgEvent_Manager
// (NetReliable, Native, Event, Static, NetMulticast, Public, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBP_MainFlowFunction_C::STATIC_TrgEvent_Manager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowFunction.BP_MainFlowFunction_C.TrgEvent_Manager");

	UBP_MainFlowFunction_C_TrgEvent_Manager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowFunction.BP_MainFlowFunction_C.CallTrgEvent
// (Net, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBP_MainFlowFunction_C::STATIC_CallTrgEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowFunction.BP_MainFlowFunction_C.CallTrgEvent");

	UBP_MainFlowFunction_C_CallTrgEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowFunction.BP_MainFlowFunction_C.OnEndOverlap
// (Net, NetRequest, Native, Event, Static, NetMulticast, Public, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowFunction_C::STATIC_OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowFunction.BP_MainFlowFunction_C.OnEndOverlap");

	UBP_MainFlowFunction_C_OnEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowFunction.BP_MainFlowFunction_C.DoorNotify
// (NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBP_MainFlowFunction_C::STATIC_DoorNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowFunction.BP_MainFlowFunction_C.DoorNotify");

	UBP_MainFlowFunction_C_DoorNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowFunction.BP_MainFlowFunction_C.AttentionOnAccprd
// (NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FString                 EventId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_MainFlowFunction_C::AttentionOnAccprd(const struct FString& EventId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowFunction.BP_MainFlowFunction_C.AttentionOnAccprd");

	UBP_MainFlowFunction_C_AttentionOnAccprd_Params params;
	params.EventId = EventId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowFunction.BP_MainFlowFunction_C.MemoFinish
// (Net, NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBP_MainFlowFunction_C::STATIC_MemoFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowFunction.BP_MainFlowFunction_C.MemoFinish");

	UBP_MainFlowFunction_C_MemoFinish_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowFunction.BP_MainFlowFunction_C.ElapsedTime
// (Net, NetReliable, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FName                   CutsceneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowFunction_C::ElapsedTime(const struct FName& CutsceneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowFunction.BP_MainFlowFunction_C.ElapsedTime");

	UBP_MainFlowFunction_C_ElapsedTime_Params params;
	params.CutsceneName = CutsceneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowFunction.BP_MainFlowFunction_C.NewMessage
// (Net, NetReliable, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// TEnumAsByte<EN_MainFlowMsgDestinationID> Current_Destination_ID         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowFunction_C::NewMessage(TEnumAsByte<EN_MainFlowMsgDestinationID> Current_Destination_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowFunction.BP_MainFlowFunction_C.NewMessage");

	UBP_MainFlowFunction_C_NewMessage_Params params;
	params.Current_Destination_ID = Current_Destination_ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowFunction.BP_MainFlowFunction_C.FlagChanged
// (Net, NetReliable, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowFunction_C::STATIC_FlagChanged(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowFunction.BP_MainFlowFunction_C.FlagChanged");

	UBP_MainFlowFunction_C_FlagChanged_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowFunction.BP_MainFlowFunction_C.OnBeginOverlap
// (Net, NetReliable, NetRequest, Exec, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UBP_MainFlowFunction_C::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowFunction.BP_MainFlowFunction_C.OnBeginOverlap");

	UBP_MainFlowFunction_C_OnBeginOverlap_Params params;
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


// Function BP_MainFlowFunction.BP_MainFlowFunction_C.ItemChange
// (Net, Event, NetMulticast, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FName                   ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowFunction_C::ItemChange(const struct FName& ItemId, int NewNum, int OldNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowFunction.BP_MainFlowFunction_C.ItemChange");

	UBP_MainFlowFunction_C_ItemChange_Params params;
	params.ItemId = ItemId;
	params.NewNum = NewNum;
	params.OldNum = OldNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainFlowFunction.BP_MainFlowFunction_C.ExecuteUbergraph_BP_MainFlowFunction
// (NetReliable, NetRequest, Native, Event, NetMulticast, Protected, NetServer, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainFlowFunction_C::ExecuteUbergraph_BP_MainFlowFunction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainFlowFunction.BP_MainFlowFunction_C.ExecuteUbergraph_BP_MainFlowFunction");

	UBP_MainFlowFunction_C_ExecuteUbergraph_BP_MainFlowFunction_Params params;
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

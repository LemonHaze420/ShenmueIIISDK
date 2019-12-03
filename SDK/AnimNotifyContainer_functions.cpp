
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

// Function AnimNotifyContainer.AnimNotifyContainer_C.ConsumeNotifyTrigger
// (Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, Const)
// Parameters:
// struct FName                   NotifyID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_AnimNotifyTrigger_Base_C* NotifyTrigger                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::STATIC_ConsumeNotifyTrigger(const struct FName& NotifyID, class UBP_AnimNotifyTrigger_Base_C** NotifyTrigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.ConsumeNotifyTrigger");

	UAnimNotifyContainer_C_ConsumeNotifyTrigger_Params params;
	params.NotifyID = NotifyID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NotifyTrigger != nullptr)
		*NotifyTrigger = params.NotifyTrigger;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.AddAffectActorToNotifyStateByRef
// (Net, NetReliable, Native, NetResponse, Static, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, NetValidate)
// Parameters:
// class UBP_AnimNotifyState_Base_C* NotifyState                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  AffectActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::STATIC_AddAffectActorToNotifyStateByRef(class UBP_AnimNotifyState_Base_C* NotifyState, class AActor* AffectActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.AddAffectActorToNotifyStateByRef");

	UAnimNotifyContainer_C_AddAffectActorToNotifyStateByRef_Params params;
	params.NotifyState = NotifyState;
	params.AffectActor = AffectActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.PopAllNotifyTriggerByID
// (Net, NetReliable, Native, Event, Static, NetMulticast, Public, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimNotifyContainer_C::STATIC_PopAllNotifyTriggerByID(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.PopAllNotifyTriggerByID");

	UAnimNotifyContainer_C_PopAllNotifyTriggerByID_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.SetTimeSinceNotifyToZero
// (Net, Native, NetResponse, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::SetTimeSinceNotifyToZero(const struct FName& InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.SetTimeSinceNotifyToZero");

	UAnimNotifyContainer_C_SetTimeSinceNotifyToZero_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.GetTimeSinceNotify
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, NetValidate)
// Parameters:
// struct FName                   Identifier                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimePassed                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::STATIC_GetTimeSinceNotify(const struct FName& Identifier, float* TimePassed, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.GetTimeSinceNotify");

	UAnimNotifyContainer_C_GetTimeSinceNotify_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimePassed != nullptr)
		*TimePassed = params.TimePassed;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.TrackNotifyTime
// (Net, Exec, Native, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// struct FName                   Identifier                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::STATIC_TrackNotifyTime(const struct FName& Identifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.TrackNotifyTime");

	UAnimNotifyContainer_C_TrackNotifyTime_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.CheckAffectActor
// (NetReliable, Exec, Event, NetResponse, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, NetValidate)
// Parameters:
// class UBP_AnimNotifyState_Base_C* StateInstance                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimNotifyContainer_C::CheckAffectActor(class UBP_AnimNotifyState_Base_C* StateInstance, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.CheckAffectActor");

	UAnimNotifyContainer_C_CheckAffectActor_Params params;
	params.StateInstance = StateInstance;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.GetNotifyAnimation
// (Native, Event, Static, Public, Delegate, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// class UBP_AnimNotifyState_Base_C* StateInstance                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::STATIC_GetNotifyAnimation(class UBP_AnimNotifyState_Base_C* StateInstance, class UAnimSequenceBase** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.GetNotifyAnimation");

	UAnimNotifyContainer_C_GetNotifyAnimation_Params params;
	params.StateInstance = StateInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.CheckAffectActorCount
// (Native, NetResponse, NetMulticast, MulticastDelegate, BlueprintCallable)
// Parameters:
// class UBP_AnimNotifyState_Base_C* StateInstance                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAnimNotifyContainer_C::CheckAffectActorCount(class UBP_AnimNotifyState_Base_C* StateInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.CheckAffectActorCount");

	UAnimNotifyContainer_C_CheckAffectActorCount_Params params;
	params.StateInstance = StateInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.CheckNotifyStateInstanceAnimation
// (Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Private, DLLImport, NetValidate)
// Parameters:
// class UBP_AnimNotifyState_Base_C* StateInstance                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimNotifyContainer_C::STATIC_CheckNotifyStateInstanceAnimation(class UBP_AnimNotifyState_Base_C* StateInstance, class UAnimSequenceBase* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.CheckNotifyStateInstanceAnimation");

	UAnimNotifyContainer_C_CheckNotifyStateInstanceAnimation_Params params;
	params.StateInstance = StateInstance;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.CheckNotifyStateExistWithAffectActor
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintPure, NetValidate)
// Parameters:
// struct FName                   NotifyID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  AffectActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FromLatest                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Exist                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBP_AnimNotifyState_Base_C* NotifyState                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NotifyStateIndex               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::STATIC_CheckNotifyStateExistWithAffectActor(const struct FName& NotifyID, class AActor* AffectActor, bool FromLatest, bool* Exist, class UBP_AnimNotifyState_Base_C** NotifyState, int* NotifyStateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.CheckNotifyStateExistWithAffectActor");

	UAnimNotifyContainer_C_CheckNotifyStateExistWithAffectActor_Params params;
	params.NotifyID = NotifyID;
	params.AffectActor = AffectActor;
	params.FromLatest = FromLatest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Exist != nullptr)
		*Exist = params.Exist;
	if (NotifyState != nullptr)
		*NotifyState = params.NotifyState;
	if (NotifyStateIndex != nullptr)
		*NotifyStateIndex = params.NotifyStateIndex;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.IsStateInstanceActive
// (NetReliable, Native, Event, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, NetValidate)
// Parameters:
// class UBP_AnimNotifyState_Base_C* StateInstance                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimNotifyContainer_C::IsStateInstanceActive(class UBP_AnimNotifyState_Base_C* StateInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.IsStateInstanceActive");

	UAnimNotifyContainer_C_IsStateInstanceActive_Params params;
	params.StateInstance = StateInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.RemoveOldestNotifyStateById
// (NetRequest, NetResponse, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, NetValidate)
// Parameters:
// struct FName                   NotifyID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::RemoveOldestNotifyStateById(const struct FName& NotifyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.RemoveOldestNotifyStateById");

	UAnimNotifyContainer_C_RemoveOldestNotifyStateById_Params params;
	params.NotifyID = NotifyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.RemoveOldestNotifyTriggerByID
// (NetReliable, NetRequest, NetResponse, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, NetValidate)
// Parameters:
// struct FName                   NotifyID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::RemoveOldestNotifyTriggerByID(const struct FName& NotifyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.RemoveOldestNotifyTriggerByID");

	UAnimNotifyContainer_C_RemoveOldestNotifyTriggerByID_Params params;
	params.NotifyID = NotifyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.ClearAllNotifies
// (Net, NetReliable, Exec, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UAnimNotifyContainer_C::STATIC_ClearAllNotifies()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.ClearAllNotifies");

	UAnimNotifyContainer_C_ClearAllNotifies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.RemoveAllNotifyStateById
// (NetReliable, Event, NetResponse, MulticastDelegate, Public, NetServer, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// struct FName                   NotifyID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::RemoveAllNotifyStateById(const struct FName& NotifyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.RemoveAllNotifyStateById");

	UAnimNotifyContainer_C_RemoveAllNotifyStateById_Params params;
	params.NotifyID = NotifyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.ReceiveAnimNotifyStateTick
// (NetReliable, Exec, NetMulticast, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimNotifyState*        Notify                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::ReceiveAnimNotifyStateTick(class UAnimNotifyState* Notify, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.ReceiveAnimNotifyStateTick");

	UAnimNotifyContainer_C_ReceiveAnimNotifyStateTick_Params params;
	params.Notify = Notify;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.Update
// (NetRequest, Native, Event, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSecond                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::Update(float DeltaSecond)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.Update");

	UAnimNotifyContainer_C_Update_Params params;
	params.DeltaSecond = DeltaSecond;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.RemoveNotifyTrigger
// (Exec, Event, NetResponse, Static, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::STATIC_RemoveNotifyTrigger(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.RemoveNotifyTrigger");

	UAnimNotifyContainer_C_RemoveNotifyTrigger_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.RemoveNotifyState
// (NetReliable, Event, NetResponse, Static, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::STATIC_RemoveNotifyState(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.RemoveNotifyState");

	UAnimNotifyContainer_C_RemoveNotifyState_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.RemoveAllNotifyTriggerByID
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, Private, Protected, Delegate, HasOutParms, NetValidate)
// Parameters:
// struct FName                   NotifyID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::STATIC_RemoveAllNotifyTriggerByID(const struct FName& NotifyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.RemoveAllNotifyTriggerByID");

	UAnimNotifyContainer_C_RemoveAllNotifyTriggerByID_Params params;
	params.NotifyID = NotifyID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.AddAffectActorToNotifyTrigger
// (Static, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            NotifyStateIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  AffectActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::STATIC_AddAffectActorToNotifyTrigger(int NotifyStateIndex, class AActor* AffectActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.AddAffectActorToNotifyTrigger");

	UAnimNotifyContainer_C_AddAffectActorToNotifyTrigger_Params params;
	params.NotifyStateIndex = NotifyStateIndex;
	params.AffectActor = AffectActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.CheckNotifyTriggerExist
// (NetRequest, Native, Static, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   NotifyID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Exist                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBP_AnimNotifyTrigger_Base_C* NotifyTrigger                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NotifyTriggerIndex             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::STATIC_CheckNotifyTriggerExist(const struct FName& NotifyID, bool* Exist, class UBP_AnimNotifyTrigger_Base_C** NotifyTrigger, int* NotifyTriggerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.CheckNotifyTriggerExist");

	UAnimNotifyContainer_C_CheckNotifyTriggerExist_Params params;
	params.NotifyID = NotifyID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Exist != nullptr)
		*Exist = params.Exist;
	if (NotifyTrigger != nullptr)
		*NotifyTrigger = params.NotifyTrigger;
	if (NotifyTriggerIndex != nullptr)
		*NotifyTriggerIndex = params.NotifyTriggerIndex;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.AddAffectActorToNotifyState
// (NetReliable, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, BlueprintPure, NetValidate)
// Parameters:
// int                            NotifyStateIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  AffectActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::AddAffectActorToNotifyState(int NotifyStateIndex, class AActor* AffectActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.AddAffectActorToNotifyState");

	UAnimNotifyContainer_C_AddAffectActorToNotifyState_Params params;
	params.NotifyStateIndex = NotifyStateIndex;
	params.AffectActor = AffectActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.CheckNotifyStateExist
// (NetReliable, NetRequest, Exec, Static, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   NotifyID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FromLatest                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Exist                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBP_AnimNotifyState_Base_C* NotifyState                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NotifyStateIndex               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::STATIC_CheckNotifyStateExist(const struct FName& NotifyID, bool FromLatest, bool* Exist, class UBP_AnimNotifyState_Base_C** NotifyState, int* NotifyStateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.CheckNotifyStateExist");

	UAnimNotifyContainer_C_CheckNotifyStateExist_Params params;
	params.NotifyID = NotifyID;
	params.FromLatest = FromLatest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Exist != nullptr)
		*Exist = params.Exist;
	if (NotifyState != nullptr)
		*NotifyState = params.NotifyState;
	if (NotifyStateIndex != nullptr)
		*NotifyStateIndex = params.NotifyStateIndex;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.ReceiveAnimNotifyTrigger
// (Event, NetMulticast, MulticastDelegate, Private, DLLImport, NetValidate)
// Parameters:
// class UAnimNotify*             Notify                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::ReceiveAnimNotifyTrigger(class UAnimNotify* Notify)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.ReceiveAnimNotifyTrigger");

	UAnimNotifyContainer_C_ReceiveAnimNotifyTrigger_Params params;
	params.Notify = Notify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.ReceiveAnimNotifyStateEnd
// (NetReliable, NetRequest, Exec, Native, Event, MulticastDelegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UAnimNotifyState*        Notify                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::ReceiveAnimNotifyStateEnd(class UAnimNotifyState* Notify)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.ReceiveAnimNotifyStateEnd");

	UAnimNotifyContainer_C_ReceiveAnimNotifyStateEnd_Params params;
	params.Notify = Notify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.ReceiveAnimNotifyStateBegin
// (Net, NetReliable, Exec, Event, NetResponse, MulticastDelegate, Public, NetServer, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class UAnimNotifyState*        Notify                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TotalDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::ReceiveAnimNotifyStateBegin(class UAnimNotifyState* Notify, float TotalDuration, class UAnimSequenceBase* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.ReceiveAnimNotifyStateBegin");

	UAnimNotifyContainer_C_ReceiveAnimNotifyStateBegin_Params params;
	params.Notify = Notify;
	params.TotalDuration = TotalDuration;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.Reset
// (NetReliable, NetRequest, Event, Static, Public, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)

void UAnimNotifyContainer_C::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.Reset");

	UAnimNotifyContainer_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.ExecuteUbergraph_AnimNotifyContainer
// (Net, Native, NetResponse, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::ExecuteUbergraph_AnimNotifyContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.ExecuteUbergraph_AnimNotifyContainer");

	UAnimNotifyContainer_C_ExecuteUbergraph_AnimNotifyContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.OnReceieveAnimNotifyStateEnd__DelegateSignature
// (NetReliable, Exec, Event, NetMulticast, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBP_AnimNotifyState_Base_C* State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::OnReceieveAnimNotifyStateEnd__DelegateSignature(class UBP_AnimNotifyState_Base_C* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.OnReceieveAnimNotifyStateEnd__DelegateSignature");

	UAnimNotifyContainer_C_OnReceieveAnimNotifyStateEnd__DelegateSignature_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.OnReceieveAnimNotifyTrigger__DelegateSignature
// (Net, NetReliable, NetMulticast, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBP_AnimNotifyTrigger_Base_C* newParam                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::OnReceieveAnimNotifyTrigger__DelegateSignature(class UBP_AnimNotifyTrigger_Base_C* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.OnReceieveAnimNotifyTrigger__DelegateSignature");

	UAnimNotifyContainer_C_OnReceieveAnimNotifyTrigger__DelegateSignature_Params params;
	params.newParam = newParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotifyContainer.AnimNotifyContainer_C.OnReceiveAnimNotifyStateBegin__DelegateSignature
// (NetReliable, NetRequest, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBP_AnimNotifyState_Base_C* newParam                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotifyContainer_C::OnReceiveAnimNotifyStateBegin__DelegateSignature(class UBP_AnimNotifyState_Base_C* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyContainer.AnimNotifyContainer_C.OnReceiveAnimNotifyStateBegin__DelegateSignature");

	UAnimNotifyContainer_C_OnReceiveAnimNotifyStateBegin__DelegateSignature_Params params;
	params.newParam = newParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

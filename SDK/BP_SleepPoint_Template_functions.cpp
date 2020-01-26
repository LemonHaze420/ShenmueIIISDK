
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.GetPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_SleepPoint_Template_C::GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.GetPriority");

	ABP_SleepPoint_Template_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_SleepPoint_Template_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.GetDetectAction");

	ABP_SleepPoint_Template_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.CheckRay
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SleepPoint_Template_C::CheckRay(bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.CheckRay");

	ABP_SleepPoint_Template_C_CheckRay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable != nullptr)
		*Enable = params.Enable;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.ChangeSelectText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SleepPoint_Template_C::ChangeSelectText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.ChangeSelectText");

	ABP_SleepPoint_Template_C_ChangeSelectText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.LavelIDtoText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   LavelID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GetText                        (Parm, OutParm)

void ABP_SleepPoint_Template_C::LavelIDtoText(const struct FName& LavelID, struct FText* GetText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.LavelIDtoText");

	ABP_SleepPoint_Template_C_LavelIDtoText_Params params;
	params.LavelID = LavelID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GetText != nullptr)
		*GetText = params.GetText;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.CheckBeginTriggerIn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BeginIn                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SleepPoint_Template_C::CheckBeginTriggerIn(bool* BeginIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.CheckBeginTriggerIn");

	ABP_SleepPoint_Template_C_CheckBeginTriggerIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BeginIn != nullptr)
		*BeginIn = params.BeginIn;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.ChangeBSEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BsEnable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SleepPoint_Template_C::ChangeBSEnable(bool BsEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.ChangeBSEnable");

	ABP_SleepPoint_Template_C_ChangeBSEnable_Params params;
	params.BsEnable = BsEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.CheckItemValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SleepPoint_Template_C::CheckItemValid(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.CheckItemValid");

	ABP_SleepPoint_Template_C_CheckItemValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.BSAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SleepPoint_Template_C::BSAction(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.BSAction");

	ABP_SleepPoint_Template_C_BSAction_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.SetItemEnable
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SleepPoint_Template_C::SetItemEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.SetItemEnable");

	ABP_SleepPoint_Template_C_SetItemEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.RegisterDetect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Register                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SleepPoint_Template_C::RegisterDetect(class UActorComponent* Component, bool Register)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.RegisterDetect");

	ABP_SleepPoint_Template_C_RegisterDetect_Params params;
	params.Component = Component;
	params.Register = Register;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SleepPoint_Template_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.UserConstructionScript");

	ABP_SleepPoint_Template_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.Catch_OnSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SleepPoint_Template_C::Catch_OnSelect(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.Catch_OnSelect");

	ABP_SleepPoint_Template_C_Catch_OnSelect_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.Select_Cancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDeny                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SleepPoint_Template_C::Select_Cancel(bool IsDeny)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.Select_Cancel");

	ABP_SleepPoint_Template_C_Select_Cancel_Params params;
	params.IsDeny = IsDeny;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.SaveLoadWidgetFinish
// (BlueprintCallable, BlueprintEvent)

void ABP_SleepPoint_Template_C::SaveLoadWidgetFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.SaveLoadWidgetFinish");

	ABP_SleepPoint_Template_C_SaveLoadWidgetFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.OpenSyetemMenuSelect
// (BlueprintCallable, BlueprintEvent)

void ABP_SleepPoint_Template_C::OpenSyetemMenuSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.OpenSyetemMenuSelect");

	ABP_SleepPoint_Template_C_OpenSyetemMenuSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SleepPoint_Template_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.ReceiveTick");

	ABP_SleepPoint_Template_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.DecideDetectAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SleepPoint_Template_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.DecideDetectAction");

	ABP_SleepPoint_Template_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.BeginBsIn
// (BlueprintCallable, BlueprintEvent)

void ABP_SleepPoint_Template_C::BeginBsIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.BeginBsIn");

	ABP_SleepPoint_Template_C_BeginBsIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.BndEvt__DetectArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SleepPoint_Template_C::BndEvt__DetectArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.BndEvt__DetectArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_SleepPoint_Template_C_BndEvt__DetectArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.BndEvt__DetectArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_SleepPoint_Template_C::BndEvt__DetectArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.BndEvt__DetectArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_SleepPoint_Template_C_BndEvt__DetectArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.CancelBsIn
// (BlueprintCallable, BlueprintEvent)

void ABP_SleepPoint_Template_C::CancelBsIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.CancelBsIn");

	ABP_SleepPoint_Template_C_CancelBsIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SleepPoint_Template_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.ReceiveBeginPlay");

	ABP_SleepPoint_Template_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.CheckLoadEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_SleepPoint_Template_C::CheckLoadEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.CheckLoadEnd");

	ABP_SleepPoint_Template_C_CheckLoadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.CheckFadein
// (BlueprintCallable, BlueprintEvent)

void ABP_SleepPoint_Template_C::CheckFadein()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.CheckFadein");

	ABP_SleepPoint_Template_C_CheckFadein_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.ExecuteUbergraph_BP_SleepPoint_Template
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SleepPoint_Template_C::ExecuteUbergraph_BP_SleepPoint_Template(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.ExecuteUbergraph_BP_SleepPoint_Template");

	ABP_SleepPoint_Template_C_ExecuteUbergraph_BP_SleepPoint_Template_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.ED_DoSleep__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_SleepPoint_Template_C::ED_DoSleep__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SleepPoint_Template.BP_SleepPoint_Template_C.ED_DoSleep__DelegateSignature");

	ABP_SleepPoint_Template_C_ED_DoSleep__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

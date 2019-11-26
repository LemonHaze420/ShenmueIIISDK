
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

// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.GetExspMemoPage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            OpenPage                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DLC_TriggerIn_CS_C::GetExspMemoPage(int* OpenPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.GetExspMemoPage");

	ABP_DLC_TriggerIn_CS_C_GetExspMemoPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OpenPage != nullptr)
		*OpenPage = params.OpenPage;
}


// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.CheckExspCSID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   cutscene_id                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           exsp_cs                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   exsp_type                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DLC_TriggerIn_CS_C::CheckExspCSID(const struct FName& cutscene_id, bool* exsp_cs, struct FName* exsp_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.CheckExspCSID");

	ABP_DLC_TriggerIn_CS_C_CheckExspCSID_Params params;
	params.cutscene_id = cutscene_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (exsp_cs != nullptr)
		*exsp_cs = params.exsp_cs;
	if (exsp_type != nullptr)
		*exsp_type = params.exsp_type;
}


// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.CheckNPCSpawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DLC_TriggerIn_CS_C::CheckNPCSpawn(bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.CheckNPCSpawn");

	ABP_DLC_TriggerIn_CS_C_CheckNPCSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable != nullptr)
		*Enable = params.Enable;
}


// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.CheckCsExspStart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CsStartEnable                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DLC_TriggerIn_CS_C::CheckCsExspStart(bool* CsStartEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.CheckCsExspStart");

	ABP_DLC_TriggerIn_CS_C_CheckCsExspStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CsStartEnable != nullptr)
		*CsStartEnable = params.CsStartEnable;
}


// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.SetCsEndPlayerPos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DLC_TriggerIn_CS_C::SetCsEndPlayerPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.SetCsEndPlayerPos");

	ABP_DLC_TriggerIn_CS_C_SetCsEndPlayerPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.CheckCsEndFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DLC_TriggerIn_CS_C::CheckCsEndFlag(bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.CheckCsEndFlag");

	ABP_DLC_TriggerIn_CS_C_CheckCsEndFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable != nullptr)
		*Enable = params.Enable;
}


// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.CheckStep
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_DLC_TriggerIn_CS_C::CheckStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.CheckStep");

	ABP_DLC_TriggerIn_CS_C_CheckStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.CheckTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_DLC_TriggerIn_CS_C::CheckTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.CheckTime");

	ABP_DLC_TriggerIn_CS_C_CheckTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.HasGameTimeRestriction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_DLC_TriggerIn_CS_C::HasGameTimeRestriction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.HasGameTimeRestriction");

	ABP_DLC_TriggerIn_CS_C_HasGameTimeRestriction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.IsStart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DLC_TriggerIn_CS_C::IsStart(bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.IsStart");

	ABP_DLC_TriggerIn_CS_C_IsStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable != nullptr)
		*Enable = params.Enable;
}


// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.CheckCsStartFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CsStartEnable                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DLC_TriggerIn_CS_C::CheckCsStartFlag(bool* CsStartEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.CheckCsStartFlag");

	ABP_DLC_TriggerIn_CS_C_CheckCsStartFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CsStartEnable != nullptr)
		*CsStartEnable = params.CsStartEnable;
}


// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DLC_TriggerIn_CS_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.UserConstructionScript");

	ABP_DLC_TriggerIn_CS_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.StartIn_FlagCheck
// (BlueprintCallable, BlueprintEvent)

void ABP_DLC_TriggerIn_CS_C::StartIn_FlagCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.StartIn_FlagCheck");

	ABP_DLC_TriggerIn_CS_C_StartIn_FlagCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.CsEndSet
// (BlueprintCallable, BlueprintEvent)

void ABP_DLC_TriggerIn_CS_C::CsEndSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.CsEndSet");

	ABP_DLC_TriggerIn_CS_C_CsEndSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DLC_TriggerIn_CS_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.ReceiveTick");

	ABP_DLC_TriggerIn_CS_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.StartStockEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_DLC_TriggerIn_CS_C::StartStockEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.StartStockEvent");

	ABP_DLC_TriggerIn_CS_C_StartStockEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DLC_TriggerIn_CS_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.ReceiveEndPlay");

	ABP_DLC_TriggerIn_CS_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_DLC_TriggerIn_CS_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_DLC_TriggerIn_CS_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.EvtFlagChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DLC_TriggerIn_CS_C::EvtFlagChange(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.EvtFlagChange");

	ABP_DLC_TriggerIn_CS_C_EvtFlagChange_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.OnCutsceneEndBase
// (BlueprintCallable, BlueprintEvent)

void ABP_DLC_TriggerIn_CS_C::OnCutsceneEndBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.OnCutsceneEndBase");

	ABP_DLC_TriggerIn_CS_C_OnCutsceneEndBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.OnStartCutscenePlayerBase
// (BlueprintCallable, BlueprintEvent)

void ABP_DLC_TriggerIn_CS_C::OnStartCutscenePlayerBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.OnStartCutscenePlayerBase");

	ABP_DLC_TriggerIn_CS_C_OnStartCutscenePlayerBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.EvtMemoEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_DLC_TriggerIn_CS_C::EvtMemoEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.EvtMemoEnd");

	ABP_DLC_TriggerIn_CS_C_EvtMemoEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DLC_TriggerIn_CS_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.ReceiveBeginPlay");

	ABP_DLC_TriggerIn_CS_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.ExecuteUbergraph_BP_DLC_TriggerIn_CS
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DLC_TriggerIn_CS_C::ExecuteUbergraph_BP_DLC_TriggerIn_CS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLC_TriggerIn_CS.BP_DLC_TriggerIn_CS_C.ExecuteUbergraph_BP_DLC_TriggerIn_CS");

	ABP_DLC_TriggerIn_CS_C_ExecuteUbergraph_BP_DLC_TriggerIn_CS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

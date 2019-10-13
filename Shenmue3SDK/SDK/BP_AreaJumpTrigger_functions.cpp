
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

// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.GetPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_AreaJumpTrigger_C::GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.GetPriority");

	ABP_AreaJumpTrigger_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_AreaJumpTrigger_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.GetDetectAction");

	ABP_AreaJumpTrigger_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.TeleportToTargetActor
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AreaJumpTrigger_C::TeleportToTargetActor(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.TeleportToTargetActor");

	ABP_AreaJumpTrigger_C_TeleportToTargetActor_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.TeleportPlayerWithFollower
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 DestLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                DestRotation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           AddCapsule                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AreaJumpTrigger_C::TeleportPlayerWithFollower(const struct FVector& DestLocation, const struct FRotator& DestRotation, bool AddCapsule)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.TeleportPlayerWithFollower");

	ABP_AreaJumpTrigger_C_TeleportPlayerWithFollower_Params params;
	params.DestLocation = DestLocation;
	params.DestRotation = DestRotation;
	params.AddCapsule = AddCapsule;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.PlayerCancelAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeEstimate                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AreaJumpTrigger_C::PlayerCancelAction(float* TimeEstimate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.PlayerCancelAction");

	ABP_AreaJumpTrigger_C_PlayerCancelAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimeEstimate != nullptr)
		*TimeEstimate = params.TimeEstimate;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.CheckKsExspFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           exsp_flag                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AreaJumpTrigger_C::CheckKsExspFlag(int Index, bool* exsp_flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.CheckKsExspFlag");

	ABP_AreaJumpTrigger_C_CheckKsExspFlag_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (exsp_flag != nullptr)
		*exsp_flag = params.exsp_flag;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.ExspFlagSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AreaJumpTrigger_C::ExspFlagSet(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.ExspFlagSet");

	ABP_AreaJumpTrigger_C_ExspFlagSet_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.LavelIDtoText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   LavelID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GetText                        (Parm, OutParm)

void ABP_AreaJumpTrigger_C::LavelIDtoText(const struct FName& LavelID, struct FText* GetText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.LavelIDtoText");

	ABP_AreaJumpTrigger_C_LavelIDtoText_Params params;
	params.LavelID = LavelID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GetText != nullptr)
		*GetText = params.GetText;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.AddKsSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FlagSet                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AreaJumpTrigger_C::AddKsSelect(int Index, int FlagSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.AddKsSelect");

	ABP_AreaJumpTrigger_C_AddKsSelect_Params params;
	params.Index = Index;
	params.FlagSet = FlagSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.WarpShenfa
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AreaJumpTrigger_C::WarpShenfa()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.WarpShenfa");

	ABP_AreaJumpTrigger_C_WarpShenfa_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.ClucSpawnLocationSHE
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          bask_offsetaram                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Side_Offset                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          hight_ofset                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SHE_vector                     (Parm, OutParm, IsPlainOldData)
// struct FRotator                SHE_rot                        (Parm, OutParm, IsPlainOldData)

void ABP_AreaJumpTrigger_C::ClucSpawnLocationSHE(float bask_offsetaram, float Side_Offset, float hight_ofset, struct FVector* SHE_vector, struct FRotator* SHE_rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.ClucSpawnLocationSHE");

	ABP_AreaJumpTrigger_C_ClucSpawnLocationSHE_Params params;
	params.bask_offsetaram = bask_offsetaram;
	params.Side_Offset = Side_Offset;
	params.hight_ofset = hight_ofset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SHE_vector != nullptr)
		*SHE_vector = params.SHE_vector;
	if (SHE_rot != nullptr)
		*SHE_rot = params.SHE_rot;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.CheckLoadLevel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLoad                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AreaJumpTrigger_C::CheckLoadLevel(int Selection, bool* IsLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.CheckLoadLevel");

	ABP_AreaJumpTrigger_C_CheckLoadLevel_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLoad != nullptr)
		*IsLoad = params.IsLoad;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.SetupPosAndRot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AreaJumpTrigger_C::SetupPosAndRot(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.SetupPosAndRot");

	ABP_AreaJumpTrigger_C_SetupPosAndRot_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.CheckDispYesterdayPrace
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AreaJumpTrigger_C::CheckDispYesterdayPrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.CheckDispYesterdayPrace");

	ABP_AreaJumpTrigger_C_CheckDispYesterdayPrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.PlayerRemoveInHouse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AreaJumpTrigger_C::PlayerRemoveInHouse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.PlayerRemoveInHouse");

	ABP_AreaJumpTrigger_C_PlayerRemoveInHouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.SetEyechatchData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AreaJumpTrigger_C::SetEyechatchData(int SelectID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.SetEyechatchData");

	ABP_AreaJumpTrigger_C_SetEyechatchData_Params params;
	params.SelectID = SelectID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.WarpEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AreaJumpTrigger_C::WarpEvent(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.WarpEvent");

	ABP_AreaJumpTrigger_C_WarpEvent_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AreaJumpTrigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.UserConstructionScript");

	ABP_AreaJumpTrigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.EndProcess
// (BlueprintCallable, BlueprintEvent)

void ABP_AreaJumpTrigger_C::EndProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.EndProcess");

	ABP_AreaJumpTrigger_C_EndProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.StartEndingWarp
// (BlueprintCallable, BlueprintEvent)

void ABP_AreaJumpTrigger_C::StartEndingWarp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.StartEndingWarp");

	ABP_AreaJumpTrigger_C_StartEndingWarp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AreaJumpTrigger_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	ABP_AreaJumpTrigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.FinishLoadLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AreaJumpTrigger_C::FinishLoadLevel(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.FinishLoadLevel");

	ABP_AreaJumpTrigger_C_FinishLoadLevel_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.catch_onSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AreaJumpTrigger_C::catch_onSelected(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.catch_onSelected");

	ABP_AreaJumpTrigger_C_catch_onSelected_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_AreaJumpTrigger_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_AreaJumpTrigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.catch_eyecatchFadeFinish(in)
// (BlueprintCallable, BlueprintEvent)

void ABP_AreaJumpTrigger_C::catch_eyecatchFadeFinish_in_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.catch_eyecatchFadeFinish(in)");

	ABP_AreaJumpTrigger_C_catch_eyecatchFadeFinish_in__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AreaJumpTrigger_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.ReceiveTick");

	ABP_AreaJumpTrigger_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AreaJumpTrigger_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.ReceiveBeginPlay");

	ABP_AreaJumpTrigger_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.EndJump
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AreaJumpTrigger_C::EndJump(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.EndJump");

	ABP_AreaJumpTrigger_C_EndJump_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.DecideDetectAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AreaJumpTrigger_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.DecideDetectAction");

	ABP_AreaJumpTrigger_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.catch_eyecatchFadeFinish(out)
// (BlueprintCallable, BlueprintEvent)

void ABP_AreaJumpTrigger_C::catch_eyecatchFadeFinish_out_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.catch_eyecatchFadeFinish(out)");

	ABP_AreaJumpTrigger_C_catch_eyecatchFadeFinish_out__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.EndJumpEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_AreaJumpTrigger_C::EndJumpEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.EndJumpEvent");

	ABP_AreaJumpTrigger_C_EndJumpEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.ExecuteUbergraph_BP_AreaJumpTrigger
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AreaJumpTrigger_C::ExecuteUbergraph_BP_AreaJumpTrigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.ExecuteUbergraph_BP_AreaJumpTrigger");

	ABP_AreaJumpTrigger_C_ExecuteUbergraph_BP_AreaJumpTrigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.ED_Warp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AreaJumpTrigger_C::ED_Warp__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AreaJumpTrigger.BP_AreaJumpTrigger_C.ED_Warp__DelegateSignature");

	ABP_AreaJumpTrigger_C_ED_Warp__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

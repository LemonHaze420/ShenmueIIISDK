
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

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.GetBGM
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USoundAtomCue*           BGM                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::GetBGM(class USoundAtomCue** BGM)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.GetBGM");

	ABP_S3BuildingStaticMeshActor_C_GetBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BGM != nullptr)
		*BGM = params.BGM;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.IsOverlappingCutsceneActor
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   CharacterName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsOverlap                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::IsOverlappingCutsceneActor(const struct FName& CharacterName, bool* IsOverlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.IsOverlappingCutsceneActor");

	ABP_S3BuildingStaticMeshActor_C_IsOverlappingCutsceneActor_Params params;
	params.CharacterName = CharacterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOverlap != nullptr)
		*IsOverlap = params.IsOverlap;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.OverlapPlayer_Impl
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_S3BuildingStaticMeshActor_C::OverlapPlayer_Impl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.OverlapPlayer_Impl");

	ABP_S3BuildingStaticMeshActor_C_OverlapPlayer_Impl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.GetCurrentBGM
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USoundAtomCue*           Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::GetCurrentBGM(class USoundAtomCue** Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.GetCurrentBGM");

	ABP_S3BuildingStaticMeshActor_C_GetCurrentBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sound != nullptr)
		*Sound = params.Sound;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.InitTick
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_S3BuildingStaticMeshActor_C::InitTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.InitTick");

	ABP_S3BuildingStaticMeshActor_C_InitTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.StopSE
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3BuildingStaticMeshActor_C::StopSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.StopSE");

	ABP_S3BuildingStaticMeshActor_C_StopSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.PlaySE
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3BuildingStaticMeshActor_C::PlaySE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.PlaySE");

	ABP_S3BuildingStaticMeshActor_C_PlaySE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.JudgeBgm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Play                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::JudgeBgm(bool Play)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.JudgeBgm");

	ABP_S3BuildingStaticMeshActor_C_JudgeBgm_Params params;
	params.Play = Play;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.IsNeedCheckSound
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Need                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::IsNeedCheckSound(bool* Need)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.IsNeedCheckSound");

	ABP_S3BuildingStaticMeshActor_C_IsNeedCheckSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Need != nullptr)
		*Need = params.Need;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.UpdatePostProcess
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_S3BuildingStaticMeshActor_C::UpdatePostProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.UpdatePostProcess");

	ABP_S3BuildingStaticMeshActor_C_UpdatePostProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.IsPlayerInVolume
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           In                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::IsPlayerInVolume(bool* In)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.IsPlayerInVolume");

	ABP_S3BuildingStaticMeshActor_C_IsPlayerInVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (In != nullptr)
		*In = params.In;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.CheckSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3BuildingStaticMeshActor_C::CheckSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.CheckSound");

	ABP_S3BuildingStaticMeshActor_C_CheckSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetBGM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Play                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::SetBGM(bool Play)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetBGM");

	ABP_S3BuildingStaticMeshActor_C_SetBGM_Params params;
	params.Play = Play;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetShadowGain
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3BuildingStaticMeshActor_C::SetShadowGain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetShadowGain");

	ABP_S3BuildingStaticMeshActor_C_SetShadowGain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetGain
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3BuildingStaticMeshActor_C::SetGain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetGain");

	ABP_S3BuildingStaticMeshActor_C_SetGain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetGamma
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3BuildingStaticMeshActor_C::SetGamma()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetGamma");

	ABP_S3BuildingStaticMeshActor_C_SetGamma_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetPostProcessSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Play                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::SetPostProcessSetting(bool Play)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetPostProcessSetting");

	ABP_S3BuildingStaticMeshActor_C_SetPostProcessSetting_Params params;
	params.Play = Play;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.GetLeavePoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::GetLeavePoint(struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.GetLeavePoint");

	ABP_S3BuildingStaticMeshActor_C_GetLeavePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.IsOverlappingActorByName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   CharacterName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsOverlap                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::IsOverlappingActorByName(const struct FName& CharacterName, bool* IsOverlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.IsOverlappingActorByName");

	ABP_S3BuildingStaticMeshActor_C_IsOverlappingActorByName_Params params;
	params.CharacterName = CharacterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOverlap != nullptr)
		*IsOverlap = params.IsOverlap;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3BuildingStaticMeshActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.UserConstructionScript");

	ABP_S3BuildingStaticMeshActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3BuildingStaticMeshActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.ReceiveBeginPlay");

	ABP_S3BuildingStaticMeshActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.ReceiveTick");

	ABP_S3BuildingStaticMeshActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.ReceiveEndPlay");

	ABP_S3BuildingStaticMeshActor_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.BndEvt__HouseBox1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::BndEvt__HouseBox1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.BndEvt__HouseBox1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_S3BuildingStaticMeshActor_C_BndEvt__HouseBox1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.BndEvt__HouseBox1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::BndEvt__HouseBox1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.BndEvt__HouseBox1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_S3BuildingStaticMeshActor_C_BndEvt__HouseBox1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.BndEvt__HouseBox2_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::BndEvt__HouseBox2_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.BndEvt__HouseBox2_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_S3BuildingStaticMeshActor_C_BndEvt__HouseBox2_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.BndEvt__HouseBox2_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::BndEvt__HouseBox2_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.BndEvt__HouseBox2_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	ABP_S3BuildingStaticMeshActor_C_BndEvt__HouseBox2_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.BndEvt__HouseBox3_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::BndEvt__HouseBox3_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.BndEvt__HouseBox3_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_S3BuildingStaticMeshActor_C_BndEvt__HouseBox3_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.BndEvt__HouseBox3_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::BndEvt__HouseBox3_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.BndEvt__HouseBox3_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature");

	ABP_S3BuildingStaticMeshActor_C_BndEvt__HouseBox3_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.ChangeGameTimeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3DayTimeEvent                EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::ChangeGameTimeEvent(ES3DayTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.ChangeGameTimeEvent");

	ABP_S3BuildingStaticMeshActor_C_ChangeGameTimeEvent_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.OverlapPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bin                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::OverlapPlayer(class AActor* Actor, class UPrimitiveComponent* Component, bool bin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.OverlapPlayer");

	ABP_S3BuildingStaticMeshActor_C_OverlapPlayer_Params params;
	params.Actor = Actor;
	params.Component = Component;
	params.bin = bin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.StartCutscene
// (BlueprintCallable, BlueprintEvent)

void ABP_S3BuildingStaticMeshActor_C::StartCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.StartCutscene");

	ABP_S3BuildingStaticMeshActor_C_StartCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.EndCutscene
// (BlueprintCallable, BlueprintEvent)

void ABP_S3BuildingStaticMeshActor_C::EndCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.EndCutscene");

	ABP_S3BuildingStaticMeshActor_C_EndCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.ExecuteUbergraph_BP_S3BuildingStaticMeshActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::ExecuteUbergraph_BP_S3BuildingStaticMeshActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.ExecuteUbergraph_BP_S3BuildingStaticMeshActor");

	ABP_S3BuildingStaticMeshActor_C_ExecuteUbergraph_BP_S3BuildingStaticMeshActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

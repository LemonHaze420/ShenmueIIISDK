
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

// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.GetBGM
// (Net, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// class USoundAtomCue*           BGM                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::STATIC_GetBGM(class USoundAtomCue** BGM)
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
// (Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Const)
// Parameters:
// struct FName                   CharacterName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsOverlap                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::STATIC_IsOverlappingCutsceneActor(const struct FName& CharacterName, bool* IsOverlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.IsOverlappingCutsceneActor");

	ABP_S3BuildingStaticMeshActor_C_IsOverlappingCutsceneActor_Params params;
	params.CharacterName = CharacterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOverlap != nullptr)
		*IsOverlap = params.IsOverlap;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.OverlapPlayer_Impl
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Protected, NetClient, Const)

void ABP_S3BuildingStaticMeshActor_C::STATIC_OverlapPlayer_Impl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.OverlapPlayer_Impl");

	ABP_S3BuildingStaticMeshActor_C_OverlapPlayer_Impl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.GetCurrentBGM
// (NetReliable, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// class USoundAtomCue*           Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::STATIC_GetCurrentBGM(class USoundAtomCue** Sound)
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
// (Net, NetReliable, Event, NetResponse, MulticastDelegate, Protected, Delegate, NetServer, Const)

void ABP_S3BuildingStaticMeshActor_C::InitTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.InitTick");

	ABP_S3BuildingStaticMeshActor_C_InitTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.StopSE
// (NetReliable, Exec, NetResponse, Delegate, NetClient, Const)

void ABP_S3BuildingStaticMeshActor_C::StopSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.StopSE");

	ABP_S3BuildingStaticMeshActor_C_StopSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.PlaySE
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, NetServer, NetClient, Const)

void ABP_S3BuildingStaticMeshActor_C::PlaySE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.PlaySE");

	ABP_S3BuildingStaticMeshActor_C_PlaySE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.JudgeBGM
// (Exec, Event, NetMulticast, MulticastDelegate, Protected, HasOutParms, Const)
// Parameters:
// bool                           Play                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::JudgeBGM(bool Play)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.JudgeBGM");

	ABP_S3BuildingStaticMeshActor_C_JudgeBGM_Params params;
	params.Play = Play;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.IsNeedCheckSound
// (NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Protected, NetClient, Const)
// Parameters:
// bool                           Need                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::STATIC_IsNeedCheckSound(bool* Need)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.IsNeedCheckSound");

	ABP_S3BuildingStaticMeshActor_C_IsNeedCheckSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Need != nullptr)
		*Need = params.Need;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.UpdatePostProcess
// (Net, NetReliable, NetRequest, Exec, Event, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3BuildingStaticMeshActor_C::UpdatePostProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.UpdatePostProcess");

	ABP_S3BuildingStaticMeshActor_C_UpdatePostProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.IsPlayerInVolume
// (NetReliable, Exec, Event, NetMulticast, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
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
// (Net, NetReliable, Native, Event, Public, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3BuildingStaticMeshActor_C::CheckSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.CheckSound");

	ABP_S3BuildingStaticMeshActor_C_CheckSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetBGM
// (Exec, Native, Event, NetResponse, Static, NetMulticast, Private, Delegate, NetClient, Const)
// Parameters:
// bool                           Play                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::STATIC_SetBGM(bool Play)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetBGM");

	ABP_S3BuildingStaticMeshActor_C_SetBGM_Params params;
	params.Play = Play;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetShadowGain
// (Net, Native, Event, Static, NetMulticast, MulticastDelegate, Delegate, NetClient, Const)

void ABP_S3BuildingStaticMeshActor_C::STATIC_SetShadowGain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetShadowGain");

	ABP_S3BuildingStaticMeshActor_C_SetShadowGain_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetGain
// (Net, Event, Static, NetMulticast, MulticastDelegate, Delegate, NetClient, Const)

void ABP_S3BuildingStaticMeshActor_C::STATIC_SetGain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetGain");

	ABP_S3BuildingStaticMeshActor_C_SetGain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetGamma
// (Net, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetClient, Const)

void ABP_S3BuildingStaticMeshActor_C::SetGamma()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetGamma");

	ABP_S3BuildingStaticMeshActor_C_SetGamma_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetPostProcessSetting
// (Exec, Event, Static, NetMulticast, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Play                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::STATIC_SetPostProcessSetting(bool Play)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.SetPostProcessSetting");

	ABP_S3BuildingStaticMeshActor_C_SetPostProcessSetting_Params params;
	params.Play = Play;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.GetLeavePoint
// (Net, NetRequest, Event, Public, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   CharacterName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsOverlap                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::STATIC_IsOverlappingActorByName(const struct FName& CharacterName, bool* IsOverlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.IsOverlappingActorByName");

	ABP_S3BuildingStaticMeshActor_C_IsOverlappingActorByName_Params params;
	params.CharacterName = CharacterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOverlap != nullptr)
		*IsOverlap = params.IsOverlap;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.UserConstructionScript
// (NetReliable, NetResponse, Static, NetMulticast, Public, Protected, Delegate, NetClient, Const)

void ABP_S3BuildingStaticMeshActor_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.UserConstructionScript");

	ABP_S3BuildingStaticMeshActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.ReceiveBeginPlay
// (Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_S3BuildingStaticMeshActor_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.ReceiveBeginPlay");

	ABP_S3BuildingStaticMeshActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.ReceiveTick
// (Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.ReceiveTick");

	ABP_S3BuildingStaticMeshActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.ReceiveEndPlay
// (Net, NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.ReceiveEndPlay");

	ABP_S3BuildingStaticMeshActor_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.BndEvt__HouseBox1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (Net, NetReliable, Exec, Event, NetResponse, MulticastDelegate, Protected, Delegate, NetServer, Const)
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
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Protected, NetClient, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::STATIC_BndEvt__HouseBox1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.BndEvt__HouseBox1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_S3BuildingStaticMeshActor_C_BndEvt__HouseBox1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.BndEvt__HouseBox2_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (Exec, Event, NetResponse, MulticastDelegate, Protected, Delegate, NetServer, Const)
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
// (NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::STATIC_BndEvt__HouseBox2_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.BndEvt__HouseBox2_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	ABP_S3BuildingStaticMeshActor_C_BndEvt__HouseBox2_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.BndEvt__HouseBox3_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
// (NetReliable, NetRequest, Event, NetResponse, MulticastDelegate, Protected, Delegate, NetServer, Const)
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
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::STATIC_BndEvt__HouseBox3_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.BndEvt__HouseBox3_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature");

	ABP_S3BuildingStaticMeshActor_C_BndEvt__HouseBox3_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.ChangeGameTimeEvent
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// ES3DayTimeEvent                EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::STATIC_ChangeGameTimeEvent(ES3DayTimeEvent EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.ChangeGameTimeEvent");

	ABP_S3BuildingStaticMeshActor_C_ChangeGameTimeEvent_Params params;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.OverlapPlayer
// (Net, Exec, Event, NetResponse, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
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
// (Net, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_S3BuildingStaticMeshActor_C::STATIC_StartCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.StartCutscene");

	ABP_S3BuildingStaticMeshActor_C_StartCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.EndCutscene
// (Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_S3BuildingStaticMeshActor_C::STATIC_EndCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.EndCutscene");

	ABP_S3BuildingStaticMeshActor_C_EndCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3BuildingStaticMeshActor.BP_S3BuildingStaticMeshActor_C.ExecuteUbergraph_BP_S3BuildingStaticMeshActor
// (NetReliable, NetRequest, Exec, Event, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3BuildingStaticMeshActor_C::STATIC_ExecuteUbergraph_BP_S3BuildingStaticMeshActor(int EntryPoint)
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

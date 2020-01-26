
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

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.AddStockColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_TestNewHoleMesh_C::AddStockColor(const struct FLinearColor& Color, float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.AddStockColor");

	ABP_SB_TestNewHoleMesh_C_AddStockColor_Params params;
	params.Color = Color;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.SetHoleColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_TestNewHoleMesh_C::SetHoleColor(const struct FLinearColor& Value, float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.SetHoleColor");

	ABP_SB_TestNewHoleMesh_C_SetHoleColor_Params params;
	params.Value = Value;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewHoleMesh_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.UserConstructionScript");

	ABP_SB_TestNewHoleMesh_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_SB_TestNewHoleMesh_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.Timeline_0__FinishedFunc");

	ABP_SB_TestNewHoleMesh_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_SB_TestNewHoleMesh_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.Timeline_0__UpdateFunc");

	ABP_SB_TestNewHoleMesh_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.PlayFlash__FinishedFunc
// (BlueprintEvent)

void ABP_SB_TestNewHoleMesh_C::PlayFlash__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.PlayFlash__FinishedFunc");

	ABP_SB_TestNewHoleMesh_C_PlayFlash__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.PlayFlash__UpdateFunc
// (BlueprintEvent)

void ABP_SB_TestNewHoleMesh_C::PlayFlash__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.PlayFlash__UpdateFunc");

	ABP_SB_TestNewHoleMesh_C_PlayFlash__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.EnterMiniGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          EnterTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_TestNewHoleMesh_C::EnterMiniGame(float EnterTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.EnterMiniGame");

	ABP_SB_TestNewHoleMesh_C_EnterMiniGame_Params params;
	params.EnterTime = EnterTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.BndEvt__Box_holeInCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_SB_TestNewHoleMesh_C::BndEvt__Box_holeInCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.BndEvt__Box_holeInCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_SB_TestNewHoleMesh_C_BndEvt__Box_holeInCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.BndEvt__Sphere_MissCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_TestNewHoleMesh_C::BndEvt__Sphere_MissCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.BndEvt__Sphere_MissCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_SB_TestNewHoleMesh_C_BndEvt__Sphere_MissCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.BndEvt__Box_holeInCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_TestNewHoleMesh_C::BndEvt__Box_holeInCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.BndEvt__Box_holeInCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	ABP_SB_TestNewHoleMesh_C_BndEvt__Box_holeInCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_TestNewHoleMesh_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.ReceiveTick");

	ABP_SB_TestNewHoleMesh_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.DeleteHoleInBall
// (BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewHoleMesh_C::DeleteHoleInBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.DeleteHoleInBall");

	ABP_SB_TestNewHoleMesh_C_DeleteHoleInBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.BndEvt__Box_Sound_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_SB_TestNewHoleMesh_C::BndEvt__Box_Sound_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.BndEvt__Box_Sound_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_SB_TestNewHoleMesh_C_BndEvt__Box_Sound_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.BndEvt__Sphere_PlaySoundArea_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_SB_TestNewHoleMesh_C::BndEvt__Sphere_PlaySoundArea_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.BndEvt__Sphere_PlaySoundArea_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_SB_TestNewHoleMesh_C_BndEvt__Sphere_PlaySoundArea_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.BndEvt__Box_SoundCheckArea_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_TestNewHoleMesh_C::BndEvt__Box_SoundCheckArea_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.BndEvt__Box_SoundCheckArea_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature");

	ABP_SB_TestNewHoleMesh_C_BndEvt__Box_SoundCheckArea_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.BndEvt__Sphere_PowerArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_SB_TestNewHoleMesh_C::BndEvt__Sphere_PowerArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.BndEvt__Sphere_PowerArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_SB_TestNewHoleMesh_C_BndEvt__Sphere_PowerArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.BndEvt__Sphere_PowerArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_TestNewHoleMesh_C::BndEvt__Sphere_PowerArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.BndEvt__Sphere_PowerArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_SB_TestNewHoleMesh_C_BndEvt__Sphere_PowerArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.ForceGravity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_TestNewHoleMesh_C::ForceGravity(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.ForceGravity");

	ABP_SB_TestNewHoleMesh_C_ForceGravity_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SB_TestNewHoleMesh_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.ReceiveBeginPlay");

	ABP_SB_TestNewHoleMesh_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.FlashColor
// (BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewHoleMesh_C::FlashColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.FlashColor");

	ABP_SB_TestNewHoleMesh_C_FlashColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.InitializeValue
// (BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewHoleMesh_C::InitializeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.InitializeValue");

	ABP_SB_TestNewHoleMesh_C_InitializeValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.DrawMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewHoleMesh_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.DrawMiniGame");

	ABP_SB_TestNewHoleMesh_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.RestartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewHoleMesh_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.RestartMiniGame");

	ABP_SB_TestNewHoleMesh_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.LoseMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewHoleMesh_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.LoseMiniGame");

	ABP_SB_TestNewHoleMesh_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.WinMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewHoleMesh_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.WinMiniGame");

	ABP_SB_TestNewHoleMesh_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewHoleMesh_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.EndMiniGame");

	ABP_SB_TestNewHoleMesh_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SB_TestNewHoleMesh_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.StartMiniGame");

	ABP_SB_TestNewHoleMesh_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.ExecuteUbergraph_BP_SB_TestNewHoleMesh
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SB_TestNewHoleMesh_C::ExecuteUbergraph_BP_SB_TestNewHoleMesh(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.ExecuteUbergraph_BP_SB_TestNewHoleMesh");

	ABP_SB_TestNewHoleMesh_C_ExecuteUbergraph_BP_SB_TestNewHoleMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

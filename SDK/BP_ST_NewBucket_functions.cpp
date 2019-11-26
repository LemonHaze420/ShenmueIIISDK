
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

// Function BP_ST_NewBucket.BP_ST_NewBucket_C.GetGiftName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ST_NewBucket_C::GetGiftName(struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_NewBucket.BP_ST_NewBucket_C.GetGiftName");

	ABP_ST_NewBucket_C_GetGiftName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_ST_NewBucket.BP_ST_NewBucket_C.ClearStones
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ST_NewBucket_C::ClearStones()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_NewBucket.BP_ST_NewBucket_C.ClearStones");

	ABP_ST_NewBucket_C_ClearStones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_NewBucket.BP_ST_NewBucket_C.IsInStone
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_MiniGame_ThrowObjectBase_C* Stone                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ST_NewBucket_C::IsInStone(class ABP_MiniGame_ThrowObjectBase_C* Stone, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_NewBucket.BP_ST_NewBucket_C.IsInStone");

	ABP_ST_NewBucket_C_IsInStone_Params params;
	params.Stone = Stone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BP_ST_NewBucket.BP_ST_NewBucket_C.FindStone
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_MiniGame_ThrowObjectBase_C* Stone                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ST_NewBucket_C::FindStone(class ABP_MiniGame_ThrowObjectBase_C* Stone, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_NewBucket.BP_ST_NewBucket_C.FindStone");

	ABP_ST_NewBucket_C_FindStone_Params params;
	params.Stone = Stone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BP_ST_NewBucket.BP_ST_NewBucket_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ST_NewBucket_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_NewBucket.BP_ST_NewBucket_C.UserConstructionScript");

	ABP_ST_NewBucket_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_NewBucket.BP_ST_NewBucket_C.RestartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ST_NewBucket_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_NewBucket.BP_ST_NewBucket_C.RestartMiniGame");

	ABP_ST_NewBucket_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_NewBucket.BP_ST_NewBucket_C.BndEvt__Mesh_Target_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_ST_NewBucket_C::BndEvt__Mesh_Target_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_NewBucket.BP_ST_NewBucket_C.BndEvt__Mesh_Target_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_ST_NewBucket_C_BndEvt__Mesh_Target_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_NewBucket.BP_ST_NewBucket_C.ResetImpactPoint
// (BlueprintCallable, BlueprintEvent)

void ABP_ST_NewBucket_C::ResetImpactPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_NewBucket.BP_ST_NewBucket_C.ResetImpactPoint");

	ABP_ST_NewBucket_C_ResetImpactPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_NewBucket.BP_ST_NewBucket_C.BndEvt__Capsule_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_ST_NewBucket_C::BndEvt__Capsule_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_NewBucket.BP_ST_NewBucket_C.BndEvt__Capsule_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_ST_NewBucket_C_BndEvt__Capsule_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_ST_NewBucket.BP_ST_NewBucket_C.BndEvt__Capsule_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_NewBucket_C::BndEvt__Capsule_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_NewBucket.BP_ST_NewBucket_C.BndEvt__Capsule_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_ST_NewBucket_C_BndEvt__Capsule_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_NewBucket.BP_ST_NewBucket_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ST_NewBucket_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_NewBucket.BP_ST_NewBucket_C.ReceiveBeginPlay");

	ABP_ST_NewBucket_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_NewBucket.BP_ST_NewBucket_C.DrawMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ST_NewBucket_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_NewBucket.BP_ST_NewBucket_C.DrawMiniGame");

	ABP_ST_NewBucket_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_NewBucket.BP_ST_NewBucket_C.LoseMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ST_NewBucket_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_NewBucket.BP_ST_NewBucket_C.LoseMiniGame");

	ABP_ST_NewBucket_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_NewBucket.BP_ST_NewBucket_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_NewBucket_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_NewBucket.BP_ST_NewBucket_C.ReceiveTick");

	ABP_ST_NewBucket_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_NewBucket.BP_ST_NewBucket_C.WinMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ST_NewBucket_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_NewBucket.BP_ST_NewBucket_C.WinMiniGame");

	ABP_ST_NewBucket_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_NewBucket.BP_ST_NewBucket_C.FallBottom
// (BlueprintCallable, BlueprintEvent)

void ABP_ST_NewBucket_C::FallBottom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_NewBucket.BP_ST_NewBucket_C.FallBottom");

	ABP_ST_NewBucket_C_FallBottom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_NewBucket.BP_ST_NewBucket_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ST_NewBucket_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_NewBucket.BP_ST_NewBucket_C.EndMiniGame");

	ABP_ST_NewBucket_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_NewBucket.BP_ST_NewBucket_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ST_NewBucket_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_NewBucket.BP_ST_NewBucket_C.StartMiniGame");

	ABP_ST_NewBucket_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ST_NewBucket.BP_ST_NewBucket_C.ExecuteUbergraph_BP_ST_NewBucket
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ST_NewBucket_C::ExecuteUbergraph_BP_ST_NewBucket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ST_NewBucket.BP_ST_NewBucket_C.ExecuteUbergraph_BP_ST_NewBucket");

	ABP_ST_NewBucket_C_ExecuteUbergraph_BP_ST_NewBucket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

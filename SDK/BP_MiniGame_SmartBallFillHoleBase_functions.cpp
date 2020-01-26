
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

// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.CreateDummyBalls
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDummy                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SmartBallFillHoleBase_C::CreateDummyBalls(bool* bDummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.CreateDummyBalls");

	ABP_MiniGame_SmartBallFillHoleBase_C_CreateDummyBalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDummy != nullptr)
		*bDummy = params.bDummy;
}


// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.GetMiniGameHelpName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void ABP_MiniGame_SmartBallFillHoleBase_C::GetMiniGameHelpName(struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.GetMiniGameHelpName");

	ABP_MiniGame_SmartBallFillHoleBase_C_GetMiniGameHelpName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
}


// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.SpawnBallFallArea
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_SmartBallFillHoleBase_C::SpawnBallFallArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.SpawnBallFallArea");

	ABP_MiniGame_SmartBallFillHoleBase_C_SpawnBallFallArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.ItemGetCheck
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemCount                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SmartBallFillHoleBase_C::ItemGetCheck(int* ItemCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.ItemGetCheck");

	ABP_MiniGame_SmartBallFillHoleBase_C_ItemGetCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemCount != nullptr)
		*ItemCount = params.ItemCount;
}


// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.CheckEnd
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SmartBallFillHoleBase_C::CheckEnd(bool* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.CheckEnd");

	ABP_MiniGame_SmartBallFillHoleBase_C_CheckEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (End != nullptr)
		*End = params.End;
}


// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_SmartBallFillHoleBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.UserConstructionScript");

	ABP_MiniGame_SmartBallFillHoleBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.TL_DownStopper__FinishedFunc
// (BlueprintEvent)

void ABP_MiniGame_SmartBallFillHoleBase_C::TL_DownStopper__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.TL_DownStopper__FinishedFunc");

	ABP_MiniGame_SmartBallFillHoleBase_C_TL_DownStopper__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.TL_DownStopper__UpdateFunc
// (BlueprintEvent)

void ABP_MiniGame_SmartBallFillHoleBase_C::TL_DownStopper__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.TL_DownStopper__UpdateFunc");

	ABP_MiniGame_SmartBallFillHoleBase_C_TL_DownStopper__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.BndEvt__Box_BallFallAreaStopper_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_SmartBallFillHoleBase_C::BndEvt__Box_BallFallAreaStopper_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.BndEvt__Box_BallFallAreaStopper_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGame_SmartBallFillHoleBase_C_BndEvt__Box_BallFallAreaStopper_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.BndEvt__Box_BallFallAreaStopper_K2Node_ComponentBoundEvent_43_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SmartBallFillHoleBase_C::BndEvt__Box_BallFallAreaStopper_K2Node_ComponentBoundEvent_43_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.BndEvt__Box_BallFallAreaStopper_K2Node_ComponentBoundEvent_43_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MiniGame_SmartBallFillHoleBase_C_BndEvt__Box_BallFallAreaStopper_K2Node_ComponentBoundEvent_43_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.BndEvt__Box_WallHitArea5_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_SmartBallFillHoleBase_C::BndEvt__Box_WallHitArea5_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.BndEvt__Box_WallHitArea5_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGame_SmartBallFillHoleBase_C_BndEvt__Box_WallHitArea5_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.BndEvt__Box_WallHitArea5_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SmartBallFillHoleBase_C::BndEvt__Box_WallHitArea5_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.BndEvt__Box_WallHitArea5_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MiniGame_SmartBallFillHoleBase_C_BndEvt__Box_WallHitArea5_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_SmartBallFillHoleBase_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.StartMiniGame");

	ABP_MiniGame_SmartBallFillHoleBase_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.DownStopper
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_SmartBallFillHoleBase_C::DownStopper()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.DownStopper");

	ABP_MiniGame_SmartBallFillHoleBase_C_DownStopper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_SmartBallFillHoleBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.ReceiveBeginPlay");

	ABP_MiniGame_SmartBallFillHoleBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.SpawnAllBalls
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_SmartBallFillHoleBase_C::SpawnAllBalls()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.SpawnAllBalls");

	ABP_MiniGame_SmartBallFillHoleBase_C_SpawnAllBalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.EndGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_SmartBallFillHoleBase_C::EndGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.EndGame");

	ABP_MiniGame_SmartBallFillHoleBase_C_EndGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.SetOverlapCollisionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SmartBallFillHoleBase_C::SetOverlapCollisionEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.SetOverlapCollisionEnabled");

	ABP_MiniGame_SmartBallFillHoleBase_C_SetOverlapCollisionEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.ExecuteUbergraph_BP_MiniGame_SmartBallFillHoleBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SmartBallFillHoleBase_C::ExecuteUbergraph_BP_MiniGame_SmartBallFillHoleBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C.ExecuteUbergraph_BP_MiniGame_SmartBallFillHoleBase");

	ABP_MiniGame_SmartBallFillHoleBase_C_ExecuteUbergraph_BP_MiniGame_SmartBallFillHoleBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

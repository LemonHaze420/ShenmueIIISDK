
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

// Function BP_FL_Container.BP_FL_Container_C.CheckHit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CheckHeight                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CheckIgnore                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HitCount                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FL_Container_C::CheckHit(float CheckHeight, bool CheckIgnore, int* HitCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_Container.BP_FL_Container_C.CheckHit");

	ABP_FL_Container_C_CheckHit_Params params;
	params.CheckHeight = CheckHeight;
	params.CheckIgnore = CheckIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitCount != nullptr)
		*HitCount = params.HitCount;
}


// Function BP_FL_Container.BP_FL_Container_C.IsExistUpContainer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bExistUpContainer              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FL_Container_C::IsExistUpContainer(bool* bExistUpContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_Container.BP_FL_Container_C.IsExistUpContainer");

	ABP_FL_Container_C_IsExistUpContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bExistUpContainer != nullptr)
		*bExistUpContainer = params.bExistUpContainer;
}


// Function BP_FL_Container.BP_FL_Container_C.IsCanDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_FL_Container_C::IsCanDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_Container.BP_FL_Container_C.IsCanDown");

	ABP_FL_Container_C_IsCanDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FL_Container.BP_FL_Container_C.GetJobType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGame_ForkJobResult> JobType                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FL_Container_C::GetJobType(TEnumAsByte<E_MiniGame_ForkJobResult>* JobType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_Container.BP_FL_Container_C.GetJobType");

	ABP_FL_Container_C_GetJobType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JobType != nullptr)
		*JobType = params.JobType;
}


// Function BP_FL_Container.BP_FL_Container_C.IsInsideContainerArea
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_FL_Container_C::IsInsideContainerArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_Container.BP_FL_Container_C.IsInsideContainerArea");

	ABP_FL_Container_C_IsInsideContainerArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FL_Container.BP_FL_Container_C.SetForkReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_KartPawnBase_C*      RefNewFork                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FL_Container_C::SetForkReference(class ABP_KartPawnBase_C* RefNewFork)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_Container.BP_FL_Container_C.SetForkReference");

	ABP_FL_Container_C_SetForkReference_Params params;
	params.RefNewFork = RefNewFork;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FL_Container.BP_FL_Container_C.GetTopHeight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGame_FL_LiftHeight> TopHeight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FL_Container_C::GetTopHeight(TEnumAsByte<E_MiniGame_FL_LiftHeight>* TopHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_Container.BP_FL_Container_C.GetTopHeight");

	ABP_FL_Container_C_GetTopHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TopHeight != nullptr)
		*TopHeight = params.TopHeight;
}


// Function BP_FL_Container.BP_FL_Container_C.SetPalletCollisionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FL_Container_C::SetPalletCollisionEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_Container.BP_FL_Container_C.SetPalletCollisionEnabled");

	ABP_FL_Container_C_SetPalletCollisionEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FL_Container.BP_FL_Container_C.CheckContainerExist
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Exist                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsIgnoreCheck                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FL_Container_C::CheckContainerExist(const struct FVector& Start, const struct FVector& End, bool* Exist, bool* IsIgnoreCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_Container.BP_FL_Container_C.CheckContainerExist");

	ABP_FL_Container_C_CheckContainerExist_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Exist != nullptr)
		*Exist = params.Exist;
	if (IsIgnoreCheck != nullptr)
		*IsIgnoreCheck = params.IsIgnoreCheck;
}


// Function BP_FL_Container.BP_FL_Container_C.IsMoved
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bMoved                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FL_Container_C::IsMoved(bool* bMoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_Container.BP_FL_Container_C.IsMoved");

	ABP_FL_Container_C_IsMoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bMoved != nullptr)
		*bMoved = params.bMoved;
}


// Function BP_FL_Container.BP_FL_Container_C.SetMoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bMoved                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FL_Container_C::SetMoved(bool bMoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_Container.BP_FL_Container_C.SetMoved");

	ABP_FL_Container_C_SetMoved_Params params;
	params.bMoved = bMoved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FL_Container.BP_FL_Container_C.GetCenterPos
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 pos                            (Parm, OutParm, IsPlainOldData)

void ABP_FL_Container_C::GetCenterPos(struct FVector* pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_Container.BP_FL_Container_C.GetCenterPos");

	ABP_FL_Container_C_GetCenterPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pos != nullptr)
		*pos = params.pos;
}


// Function BP_FL_Container.BP_FL_Container_C.CheckCanMove
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanMove                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FL_Container_C::CheckCanMove(bool* CanMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_Container.BP_FL_Container_C.CheckCanMove");

	ABP_FL_Container_C_CheckCanMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanMove != nullptr)
		*CanMove = params.CanMove;
}


// Function BP_FL_Container.BP_FL_Container_C.CheckUpDownContainer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FL_Container_C::CheckUpDownContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_Container.BP_FL_Container_C.CheckUpDownContainer");

	ABP_FL_Container_C_CheckUpDownContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FL_Container.BP_FL_Container_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FL_Container_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_Container.BP_FL_Container_C.UserConstructionScript");

	ABP_FL_Container_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FL_Container.BP_FL_Container_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FL_Container_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_Container.BP_FL_Container_C.ReceiveBeginPlay");

	ABP_FL_Container_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FL_Container.BP_FL_Container_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FL_Container_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_Container.BP_FL_Container_C.ReceiveTick");

	ABP_FL_Container_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FL_Container.BP_FL_Container_C.OnOverlapSensor
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_FL_Container_C::OnOverlapSensor(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_Container.BP_FL_Container_C.OnOverlapSensor");

	ABP_FL_Container_C_OnOverlapSensor_Params params;
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


// Function BP_FL_Container.BP_FL_Container_C.OnEndOverlapSensor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FL_Container_C::OnEndOverlapSensor(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_Container.BP_FL_Container_C.OnEndOverlapSensor");

	ABP_FL_Container_C_OnEndOverlapSensor_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FL_Container.BP_FL_Container_C.ExecuteUbergraph_BP_FL_Container
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FL_Container_C::ExecuteUbergraph_BP_FL_Container(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_Container.BP_FL_Container_C.ExecuteUbergraph_BP_FL_Container");

	ABP_FL_Container_C_ExecuteUbergraph_BP_FL_Container_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

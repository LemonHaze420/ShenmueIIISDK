
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

// Function BP_MiniGameBigWheelItemCollision.BP_MiniGameBigWheelItemCollision_C.SetCollisionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBigWheelItemCollision_C::SetCollisionEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheelItemCollision.BP_MiniGameBigWheelItemCollision_C.SetCollisionEnabled");

	ABP_MiniGameBigWheelItemCollision_C_SetCollisionEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheelItemCollision.BP_MiniGameBigWheelItemCollision_C.SetItemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MiniGameBigWheelItemData ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameBigWheelItemCollision_C::SetItemData(const struct FST_MiniGameBigWheelItemData& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheelItemCollision.BP_MiniGameBigWheelItemCollision_C.SetItemData");

	ABP_MiniGameBigWheelItemCollision_C_SetItemData_Params params;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheelItemCollision.BP_MiniGameBigWheelItemCollision_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameBigWheelItemCollision_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheelItemCollision.BP_MiniGameBigWheelItemCollision_C.UserConstructionScript");

	ABP_MiniGameBigWheelItemCollision_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheelItemCollision.BP_MiniGameBigWheelItemCollision_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGameBigWheelItemCollision_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheelItemCollision.BP_MiniGameBigWheelItemCollision_C.ReceiveBeginPlay");

	ABP_MiniGameBigWheelItemCollision_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheelItemCollision.BP_MiniGameBigWheelItemCollision_C.BndEvt__HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGameBigWheelItemCollision_C::BndEvt__HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheelItemCollision.BP_MiniGameBigWheelItemCollision_C.BndEvt__HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGameBigWheelItemCollision_C_BndEvt__HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_MiniGameBigWheelItemCollision.BP_MiniGameBigWheelItemCollision_C.ExecuteUbergraph_BP_MiniGameBigWheelItemCollision
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameBigWheelItemCollision_C::ExecuteUbergraph_BP_MiniGameBigWheelItemCollision(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheelItemCollision.BP_MiniGameBigWheelItemCollision_C.ExecuteUbergraph_BP_MiniGameBigWheelItemCollision");

	ABP_MiniGameBigWheelItemCollision_C_ExecuteUbergraph_BP_MiniGameBigWheelItemCollision_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameBigWheelItemCollision.BP_MiniGameBigWheelItemCollision_C.OnCollisionOverlap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MiniGameBigWheelItemData ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MiniGameBigWheelItemCollision_C::OnCollisionOverlap__DelegateSignature(const struct FST_MiniGameBigWheelItemData& ItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameBigWheelItemCollision.BP_MiniGameBigWheelItemCollision_C.OnCollisionOverlap__DelegateSignature");

	ABP_MiniGameBigWheelItemCollision_C_OnCollisionOverlap__DelegateSignature_Params params;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

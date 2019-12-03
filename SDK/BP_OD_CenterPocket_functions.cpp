
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

// Function BP_OD_CenterPocket.BP_OD_CenterPocket_C.GetHitElement
// (Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_OD_CenterPocket_C::STATIC_GetHitElement(int* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_CenterPocket.BP_OD_CenterPocket_C.GetHitElement");

	ABP_OD_CenterPocket_C_GetHitElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function BP_OD_CenterPocket.BP_OD_CenterPocket_C.SetNailCollisionHidden
// (NetReliable, Native, Event, Static, Delegate, NetServer)
// Parameters:
// bool                           NewHidden                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OD_CenterPocket_C::STATIC_SetNailCollisionHidden(bool NewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_CenterPocket.BP_OD_CenterPocket_C.SetNailCollisionHidden");

	ABP_OD_CenterPocket_C_SetNailCollisionHidden_Params params;
	params.NewHidden = NewHidden;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_CenterPocket.BP_OD_CenterPocket_C.UserConstructionScript
// (Exec, Native, Event, Static, Public, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_OD_CenterPocket_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_CenterPocket.BP_OD_CenterPocket_C.UserConstructionScript");

	ABP_OD_CenterPocket_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_CenterPocket.BP_OD_CenterPocket_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (NetReliable, NetRequest, Exec, Static, MulticastDelegate, Public, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_OD_CenterPocket_C::STATIC_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_CenterPocket.BP_OD_CenterPocket_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_OD_CenterPocket_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_OD_CenterPocket.BP_OD_CenterPocket_C.BndEvt__DestroyNail_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (Net, NetReliable, Exec, Static, MulticastDelegate, Public, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_OD_CenterPocket_C::STATIC_BndEvt__DestroyNail_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_CenterPocket.BP_OD_CenterPocket_C.BndEvt__DestroyNail_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_OD_CenterPocket_C_BndEvt__DestroyNail_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_OD_CenterPocket.BP_OD_CenterPocket_C.BndEvt__HitLeftWallSound_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature
// (Net, Exec, Static, MulticastDelegate, Public, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_OD_CenterPocket_C::STATIC_BndEvt__HitLeftWallSound_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_CenterPocket.BP_OD_CenterPocket_C.BndEvt__HitLeftWallSound_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_OD_CenterPocket_C_BndEvt__HitLeftWallSound_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_OD_CenterPocket.BP_OD_CenterPocket_C.BndEvt__HitLeftWallSound_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, Public, Private, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OD_CenterPocket_C::STATIC_BndEvt__HitLeftWallSound_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_CenterPocket.BP_OD_CenterPocket_C.BndEvt__HitLeftWallSound_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature");

	ABP_OD_CenterPocket_C_BndEvt__HitLeftWallSound_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_CenterPocket.BP_OD_CenterPocket_C.BndEvt__HitRightWallSound_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature
// (NetReliable, NetRequest, Static, MulticastDelegate, Public, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_OD_CenterPocket_C::STATIC_BndEvt__HitRightWallSound_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_CenterPocket.BP_OD_CenterPocket_C.BndEvt__HitRightWallSound_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_OD_CenterPocket_C_BndEvt__HitRightWallSound_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_OD_CenterPocket.BP_OD_CenterPocket_C.BndEvt__HitRightWallSound_K2Node_ComponentBoundEvent_10_ComponentEndOverlapSignature__DelegateSignature
// (NetReliable, Native, Event, NetResponse, Static, Public, Private, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OD_CenterPocket_C::STATIC_BndEvt__HitRightWallSound_K2Node_ComponentBoundEvent_10_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_CenterPocket.BP_OD_CenterPocket_C.BndEvt__HitRightWallSound_K2Node_ComponentBoundEvent_10_ComponentEndOverlapSignature__DelegateSignature");

	ABP_OD_CenterPocket_C_BndEvt__HitRightWallSound_K2Node_ComponentBoundEvent_10_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_CenterPocket.BP_OD_CenterPocket_C.ExecuteUbergraph_BP_OD_CenterPocket
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, NetServer)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OD_CenterPocket_C::ExecuteUbergraph_BP_OD_CenterPocket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_CenterPocket.BP_OD_CenterPocket_C.ExecuteUbergraph_BP_OD_CenterPocket");

	ABP_OD_CenterPocket_C_ExecuteUbergraph_BP_OD_CenterPocket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_CenterPocket.BP_OD_CenterPocket_C.DestroyNailEvent__DelegateSignature
// (Net, NetReliable, NetRequest, Native, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ABP_OD_Nail_C*           nail                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OD_CenterPocket_C::DestroyNailEvent__DelegateSignature(class ABP_OD_Nail_C* nail)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_CenterPocket.BP_OD_CenterPocket_C.DestroyNailEvent__DelegateSignature");

	ABP_OD_CenterPocket_C_DestroyNailEvent__DelegateSignature_Params params;
	params.nail = nail;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OD_CenterPocket.BP_OD_CenterPocket_C.BeginHitEvent__DelegateSignature
// (Net, NetReliable, NetRequest, Native, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            hit_element                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OD_CenterPocket_C::BeginHitEvent__DelegateSignature(int hit_element)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OD_CenterPocket.BP_OD_CenterPocket_C.BeginHitEvent__DelegateSignature");

	ABP_OD_CenterPocket_C_BeginHitEvent__DelegateSignature_Params params;
	params.hit_element = hit_element;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

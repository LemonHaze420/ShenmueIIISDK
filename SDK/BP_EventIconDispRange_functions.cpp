
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

// Function BP_EventIconDispRange.BP_EventIconDispRange_C.GetPriority
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_EventIconDispRange_C::STATIC_GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventIconDispRange.BP_EventIconDispRange_C.GetPriority");

	ABP_EventIconDispRange_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EventIconDispRange.BP_EventIconDispRange_C.GetDetectAction
// (Net, NetRequest, Exec, NetMulticast, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_EventIconDispRange_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventIconDispRange.BP_EventIconDispRange_C.GetDetectAction");

	ABP_EventIconDispRange_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EventIconDispRange.BP_EventIconDispRange_C.CheckBehavior
// (Net, NetRequest, Event, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EventIconDispRange_C::CheckBehavior(bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventIconDispRange.BP_EventIconDispRange_C.CheckBehavior");

	ABP_EventIconDispRange_C_CheckBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable != nullptr)
		*Enable = params.Enable;
}


// Function BP_EventIconDispRange.BP_EventIconDispRange_C.RegistDetect
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Private, NetServer, Const)
// Parameters:
// bool                           Unregister                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventIconDispRange_C::STATIC_RegistDetect(bool Unregister)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventIconDispRange.BP_EventIconDispRange_C.RegistDetect");

	ABP_EventIconDispRange_C_RegistDetect_Params params;
	params.Unregister = Unregister;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventIconDispRange.BP_EventIconDispRange_C.UserConstructionScript
// (Net, NetReliable, NetRequest, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_EventIconDispRange_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventIconDispRange.BP_EventIconDispRange_C.UserConstructionScript");

	ABP_EventIconDispRange_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventIconDispRange.BP_EventIconDispRange_C.BndEvt__Range_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_EventIconDispRange_C::STATIC_BndEvt__Range_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventIconDispRange.BP_EventIconDispRange_C.BndEvt__Range_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_EventIconDispRange_C_BndEvt__Range_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventIconDispRange.BP_EventIconDispRange_C.BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (Exec, Native, Static, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventIconDispRange_C::STATIC_BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventIconDispRange.BP_EventIconDispRange_C.BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_EventIconDispRange_C_BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventIconDispRange.BP_EventIconDispRange_C.DecideDetectAction
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventIconDispRange_C::STATIC_DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventIconDispRange.BP_EventIconDispRange_C.DecideDetectAction");

	ABP_EventIconDispRange_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EventIconDispRange.BP_EventIconDispRange_C.ExecuteUbergraph_BP_EventIconDispRange
// (Net, Public, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EventIconDispRange_C::ExecuteUbergraph_BP_EventIconDispRange(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventIconDispRange.BP_EventIconDispRange_C.ExecuteUbergraph_BP_EventIconDispRange");

	ABP_EventIconDispRange_C_ExecuteUbergraph_BP_EventIconDispRange_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

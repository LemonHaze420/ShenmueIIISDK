
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

// Function BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C.DestroyTriangle
// (Exec, Native, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameChooseSelectTriangle_C::DestroyTriangle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C.DestroyTriangle");

	ABP_MiniGameChooseSelectTriangle_C_DestroyTriangle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C.SetLocationAndRotation
// (NetReliable, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCameraComponent*        Camera                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_MiniGameChooseSelectTriangle_C::STATIC_SetLocationAndRotation(class AActor* TargetActor, class UCameraComponent* Camera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C.SetLocationAndRotation");

	ABP_MiniGameChooseSelectTriangle_C_SetLocationAndRotation_Params params;
	params.TargetActor = TargetActor;
	params.Camera = Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C.UpdateVisible
// (Net, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChooseSelectTriangle_C::UpdateVisible(int InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C.UpdateVisible");

	ABP_MiniGameChooseSelectTriangle_C_UpdateVisible_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C.SetMiniGameLastIndex
// (Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            MiniGameLastIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChooseSelectTriangle_C::SetMiniGameLastIndex(int MiniGameLastIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C.SetMiniGameLastIndex");

	ABP_MiniGameChooseSelectTriangle_C_SetMiniGameLastIndex_Params params;
	params.MiniGameLastIndex = MiniGameLastIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C.UserConstructionScript
// (Net, NetRequest, Native, Event, Static, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGameChooseSelectTriangle_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C.UserConstructionScript");

	ABP_MiniGameChooseSelectTriangle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C.ReceiveBeginPlay
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_MiniGameChooseSelectTriangle_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C.ReceiveBeginPlay");

	ABP_MiniGameChooseSelectTriangle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C.ReceiveEndPlay
// (Net, NetRequest, Event, Static, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChooseSelectTriangle_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C.ReceiveEndPlay");

	ABP_MiniGameChooseSelectTriangle_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C.ExecuteUbergraph_BP_MiniGameChooseSelectTriangle
// (Net, Event, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameChooseSelectTriangle_C::ExecuteUbergraph_BP_MiniGameChooseSelectTriangle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameChooseSelectTriangle.BP_MiniGameChooseSelectTriangle_C.ExecuteUbergraph_BP_MiniGameChooseSelectTriangle");

	ABP_MiniGameChooseSelectTriangle_C_ExecuteUbergraph_BP_MiniGameChooseSelectTriangle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

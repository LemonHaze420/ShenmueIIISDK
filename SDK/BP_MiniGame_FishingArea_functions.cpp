
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

// Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.SpawnFreeFish
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_FishingArea_C::STATIC_SpawnFreeFish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.SpawnFreeFish");

	ABP_MiniGame_FishingArea_C_SpawnFreeFish_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.GetRareScale
// (NetReliable, NetResponse, Static, Public, Delegate, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RareScale                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingArea_C::STATIC_GetRareScale(int Index, float* RareScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.GetRareScale");

	ABP_MiniGame_FishingArea_C_GetRareScale_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RareScale != nullptr)
		*RareScale = params.RareScale;
}


// Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.GetSpawnFishData
// (Net, NetReliable, Native, Static, NetMulticast, NetServer, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// TArray<struct FST_Fishing_FishSetting> SpawnFish                      (Parm, OutParm, ZeroConstructor)

void ABP_MiniGame_FishingArea_C::STATIC_GetSpawnFishData(TArray<struct FST_Fishing_FishSetting>* SpawnFish)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.GetSpawnFishData");

	ABP_MiniGame_FishingArea_C_GetSpawnFishData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnFish != nullptr)
		*SpawnFish = params.SpawnFish;
}


// Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.SetEnabledArea
// (Native, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingArea_C::STATIC_SetEnabledArea(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.SetEnabledArea");

	ABP_MiniGame_FishingArea_C_SetEnabledArea_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.CheckOverlappingActor
// (NetReliable, NetRequest, Exec, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsOverlapping                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingArea_C::STATIC_CheckOverlappingActor(class AActor* Actor, bool* IsOverlapping)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.CheckOverlappingActor");

	ABP_MiniGame_FishingArea_C_CheckOverlappingActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOverlapping != nullptr)
		*IsOverlapping = params.IsOverlapping;
}


// Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.GetFishIdName
// (Net, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<E_MiniGame_FishType> FishType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingArea_C::GetFishIdName(TEnumAsByte<E_MiniGame_FishType> FishType, struct FName* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.GetFishIdName");

	ABP_MiniGame_FishingArea_C_GetFishIdName_Params params;
	params.FishType = FishType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.UserConstructionScript
// (NetRequest, Exec, Event, MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_MiniGame_FishingArea_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.UserConstructionScript");

	ABP_MiniGame_FishingArea_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.ReceiveBeginPlay
// (Net, NetReliable, Exec, Event, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_FishingArea_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.ReceiveBeginPlay");

	ABP_MiniGame_FishingArea_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (Net, NetReliable, Exec, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGame_FishingArea_C::STATIC_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGame_FishingArea_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.ExecuteUbergraph_BP_MiniGame_FishingArea
// (Exec, Native, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_FishingArea_C::STATIC_ExecuteUbergraph_BP_MiniGame_FishingArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_FishingArea.BP_MiniGame_FishingArea_C.ExecuteUbergraph_BP_MiniGame_FishingArea");

	ABP_MiniGame_FishingArea_C_ExecuteUbergraph_BP_MiniGame_FishingArea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

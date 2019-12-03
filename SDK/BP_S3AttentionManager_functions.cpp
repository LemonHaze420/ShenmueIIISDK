
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

// Function BP_S3AttentionManager.BP_S3AttentionManager_C.IsContainActor
// (Net, NetReliable, NetRequest, Event, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, Const)
// Parameters:
// class AActor*                  CheckActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Contain                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionManager_C::IsContainActor(class AActor* CheckActor, bool* Contain)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionManager.BP_S3AttentionManager_C.IsContainActor");

	ABP_S3AttentionManager_C_IsContainActor_Params params;
	params.CheckActor = CheckActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Contain != nullptr)
		*Contain = params.Contain;
}


// Function BP_S3AttentionManager.BP_S3AttentionManager_C.CollectActors
// (Net, NetReliable, NetRequest, Native, Event, NetMulticast, Delegate, NetClient, Const)

void ABP_S3AttentionManager_C::CollectActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionManager.BP_S3AttentionManager_C.CollectActors");

	ABP_S3AttentionManager_C_CollectActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionManager.BP_S3AttentionManager_C.SetSetting
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Private, Protected, NetClient, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionManager_C::SetSetting(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionManager.BP_S3AttentionManager_C.SetSetting");

	ABP_S3AttentionManager_C_SetSetting_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionManager.BP_S3AttentionManager_C.UserConstructionScript
// (NetReliable, NetRequest, Exec, Native, NetResponse, Public, Delegate, HasOutParms, HasDefaults, Const)

void ABP_S3AttentionManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionManager.BP_S3AttentionManager_C.UserConstructionScript");

	ABP_S3AttentionManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionManager.BP_S3AttentionManager_C.ReceiveBeginPlay
// (Net, NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_S3AttentionManager_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionManager.BP_S3AttentionManager_C.ReceiveBeginPlay");

	ABP_S3AttentionManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionManager.BP_S3AttentionManager_C.PlayBGMFromCue
// (Net, NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_S3AttentionManager_C::STATIC_PlayBGMFromCue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionManager.BP_S3AttentionManager_C.PlayBGMFromCue");

	ABP_S3AttentionManager_C_PlayBGMFromCue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionManager.BP_S3AttentionManager_C.Event_OnChangePlayerCtrl
// (Net, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionManager_C::STATIC_Event_OnChangePlayerCtrl(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionManager.BP_S3AttentionManager_C.Event_OnChangePlayerCtrl");

	ABP_S3AttentionManager_C_Event_OnChangePlayerCtrl_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionManager.BP_S3AttentionManager_C.ExecuteUbergraph_BP_S3AttentionManager
// (NetReliable, NetResponse, NetMulticast, Private, Protected, Delegate, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionManager_C::ExecuteUbergraph_BP_S3AttentionManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionManager.BP_S3AttentionManager_C.ExecuteUbergraph_BP_S3AttentionManager");

	ABP_S3AttentionManager_C_ExecuteUbergraph_BP_S3AttentionManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

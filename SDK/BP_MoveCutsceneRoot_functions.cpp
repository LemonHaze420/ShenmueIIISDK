
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

// Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.AttachActor
// (NetReliable, NetRequest, Exec, Native, Public, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  AttachTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MoveCutsceneRoot_C::AttachActor(class AActor* AttachTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.AttachActor");

	ABP_MoveCutsceneRoot_C_AttachActor_Params params;
	params.AttachTarget = AttachTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.StopCutScenePlayerByTag
// (Exec, NetResponse, Static, NetMulticast, Private, Delegate, NetClient, Const)
// Parameters:
// struct FName                   Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MoveCutsceneRoot_C::STATIC_StopCutScenePlayerByTag(const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.StopCutScenePlayerByTag");

	ABP_MoveCutsceneRoot_C_StopCutScenePlayerByTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.StopCutScenePlayer
// (NetReliable, Event, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MoveCutsceneRoot_C::StopCutScenePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.StopCutScenePlayer");

	ABP_MoveCutsceneRoot_C_StopCutScenePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.FindCutScenePlayerByTag
// (NetResponse, Static, NetMulticast, Private, Delegate, NetClient, Const)
// Parameters:
// struct FName                   Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_CutscenePlayer_C*    CutscenePlayer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MoveCutsceneRoot_C::STATIC_FindCutScenePlayerByTag(const struct FName& Tag, class ABP_CutscenePlayer_C** CutscenePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.FindCutScenePlayerByTag");

	ABP_MoveCutsceneRoot_C_FindCutScenePlayerByTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CutscenePlayer != nullptr)
		*CutscenePlayer = params.CutscenePlayer;
}


// Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.UserConstructionScript
// (Exec, Native, Event, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MoveCutsceneRoot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.UserConstructionScript");

	ABP_MoveCutsceneRoot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_MoveCutsceneRoot_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.ReceiveBeginPlay");

	ABP_MoveCutsceneRoot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.ResetTransform
// (Net, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_MoveCutsceneRoot_C::STATIC_ResetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.ResetTransform");

	ABP_MoveCutsceneRoot_C_ResetTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.SetVisibleAllCutsceneActors
// (Net, NetReliable, NetRequest, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           bNewHidden                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MoveCutsceneRoot_C::STATIC_SetVisibleAllCutsceneActors(bool bNewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.SetVisibleAllCutsceneActors");

	ABP_MoveCutsceneRoot_C_SetVisibleAllCutsceneActors_Params params;
	params.bNewHidden = bNewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.SetInfiniteTransform
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_MoveCutsceneRoot_C::STATIC_SetInfiniteTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.SetInfiniteTransform");

	ABP_MoveCutsceneRoot_C_SetInfiniteTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.ExecuteUbergraph_BP_MoveCutsceneRoot
// (Net, NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MoveCutsceneRoot_C::ExecuteUbergraph_BP_MoveCutsceneRoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveCutsceneRoot.BP_MoveCutsceneRoot_C.ExecuteUbergraph_BP_MoveCutsceneRoot");

	ABP_MoveCutsceneRoot_C_ExecuteUbergraph_BP_MoveCutsceneRoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

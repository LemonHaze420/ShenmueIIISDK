
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

// Function BP_TalkMeshCollisionEnabler.BP_TalkMeshCollisionEnabler_C.EnableQueryCollisionOnActorsWithIgnore
// (NetReliable, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          Actors                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          ignoreActors                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_TalkMeshCollisionEnabler_C::STATIC_EnableQueryCollisionOnActorsWithIgnore(TArray<class AActor*>* Actors, TArray<class AActor*>* ignoreActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkMeshCollisionEnabler.BP_TalkMeshCollisionEnabler_C.EnableQueryCollisionOnActorsWithIgnore");

	UBP_TalkMeshCollisionEnabler_C_EnableQueryCollisionOnActorsWithIgnore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
	if (ignoreActors != nullptr)
		*ignoreActors = params.ignoreActors;
}


// Function BP_TalkMeshCollisionEnabler.BP_TalkMeshCollisionEnabler_C.EnableQueryCollisionForTalk
// (Exec, Event, Static, MulticastDelegate, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          Actors                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UPrimitiveComponent*> BackupComponents               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_TalkMeshCollisionEnabler_C::STATIC_EnableQueryCollisionForTalk(TArray<class AActor*>* Actors, TArray<class UPrimitiveComponent*>* BackupComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkMeshCollisionEnabler.BP_TalkMeshCollisionEnabler_C.EnableQueryCollisionForTalk");

	UBP_TalkMeshCollisionEnabler_C_EnableQueryCollisionForTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
	if (BackupComponents != nullptr)
		*BackupComponents = params.BackupComponents;
}


// Function BP_TalkMeshCollisionEnabler.BP_TalkMeshCollisionEnabler_C.EnableQueryCollisionOnActors
// (Native, Event, NetResponse, Protected, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          Actors                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_TalkMeshCollisionEnabler_C::EnableQueryCollisionOnActors(TArray<class AActor*>* Actors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkMeshCollisionEnabler.BP_TalkMeshCollisionEnabler_C.EnableQueryCollisionOnActors");

	UBP_TalkMeshCollisionEnabler_C_EnableQueryCollisionOnActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
}


// Function BP_TalkMeshCollisionEnabler.BP_TalkMeshCollisionEnabler_C.RestoreQueryCollision
// (NetReliable, NetRequest, Native, NetResponse, Public, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBP_TalkMeshCollisionEnabler_C::RestoreQueryCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkMeshCollisionEnabler.BP_TalkMeshCollisionEnabler_C.RestoreQueryCollision");

	UBP_TalkMeshCollisionEnabler_C_RestoreQueryCollision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkMeshCollisionEnabler.BP_TalkMeshCollisionEnabler_C.EnableQueryCollision
// (NetRequest, Exec, NetResponse, MulticastDelegate, Public, Protected, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     Primitives                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_TalkMeshCollisionEnabler_C::EnableQueryCollision(class UPrimitiveComponent* Primitives)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkMeshCollisionEnabler.BP_TalkMeshCollisionEnabler_C.EnableQueryCollision");

	UBP_TalkMeshCollisionEnabler_C_EnableQueryCollision_Params params;
	params.Primitives = Primitives;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

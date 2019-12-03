
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

// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.GetClothMeshComponent
// (Net, NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ABP_MiniGame_ThrowGameBase_C::STATIC_GetClothMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.GetClothMeshComponent");

	ABP_MiniGame_ThrowGameBase_C_GetClothMeshComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.SpawnThrowObject
// (NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, Private, Protected, NetClient, Const)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SpawnTransform                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// ESpawnActorCollisionHandlingMethod CollisionHandlingOverride      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_MiniGame_ThrowObjectBase_C* CurrentThrowObject             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowGameBase_C::STATIC_SpawnThrowObject(class UClass* Class, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class ABP_MiniGame_ThrowObjectBase_C** CurrentThrowObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.SpawnThrowObject");

	ABP_MiniGame_ThrowGameBase_C_SpawnThrowObject_Params params;
	params.Class = Class;
	params.SpawnTransform = SpawnTransform;
	params.CollisionHandlingOverride = CollisionHandlingOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentThrowObject != nullptr)
		*CurrentThrowObject = params.CurrentThrowObject;
}


// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.SetupAnimInstance
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Private, Protected, Delegate, Const)
// Parameters:
// class UClass*                  NewClass                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowGameBase_C::STATIC_SetupAnimInstance(class UClass* NewClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.SetupAnimInstance");

	ABP_MiniGame_ThrowGameBase_C_SetupAnimInstance_Params params;
	params.NewClass = NewClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.UserConstructionScript
// (NetRequest, Exec, Event, Static, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MiniGame_ThrowGameBase_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.UserConstructionScript");

	ABP_MiniGame_ThrowGameBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.StartMiniGame
// (Exec, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_ThrowGameBase_C::StartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.StartMiniGame");

	ABP_MiniGame_ThrowGameBase_C_StartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.EndMiniGame
// (Exec, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_ThrowGameBase_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.EndMiniGame");

	ABP_MiniGame_ThrowGameBase_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.WinMiniGame
// (Net, NetReliable, NetRequest, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_ThrowGameBase_C::WinMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.WinMiniGame");

	ABP_MiniGame_ThrowGameBase_C_WinMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.LoseMiniGame
// (NetRequest, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_ThrowGameBase_C::LoseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.LoseMiniGame");

	ABP_MiniGame_ThrowGameBase_C_LoseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.DrawMiniGame
// (NetRequest, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_ThrowGameBase_C::DrawMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.DrawMiniGame");

	ABP_MiniGame_ThrowGameBase_C_DrawMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.RestartMiniGame
// (Net, NetReliable, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_ThrowGameBase_C::RestartMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.RestartMiniGame");

	ABP_MiniGame_ThrowGameBase_C_RestartMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.OnThorwObject
// (NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_MiniGame_ThrowGameBase_C::STATIC_OnThorwObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.OnThorwObject");

	ABP_MiniGame_ThrowGameBase_C_OnThorwObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.ReceiveBeginPlay
// (NetReliable, NetRequest, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_ThrowGameBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.ReceiveBeginPlay");

	ABP_MiniGame_ThrowGameBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.ExecuteUbergraph_BP_MiniGame_ThrowGameBase
// (NetReliable, MulticastDelegate, Protected, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_ThrowGameBase_C::ExecuteUbergraph_BP_MiniGame_ThrowGameBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_ThrowGameBase.BP_MiniGame_ThrowGameBase_C.ExecuteUbergraph_BP_MiniGame_ThrowGameBase");

	ABP_MiniGame_ThrowGameBase_C_ExecuteUbergraph_BP_MiniGame_ThrowGameBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

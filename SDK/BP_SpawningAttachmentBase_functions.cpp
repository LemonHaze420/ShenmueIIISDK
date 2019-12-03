
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

// Function BP_SpawningAttachmentBase.BP_SpawningAttachmentBase_C.UserConstructionScript
// (NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_SpawningAttachmentBase_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachmentBase.BP_SpawningAttachmentBase_C.UserConstructionScript");

	ABP_SpawningAttachmentBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawningAttachmentBase.BP_SpawningAttachmentBase_C.RequestActionName
// (Net, NetReliable, Exec, Native, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ActionName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawningAttachmentBase_C::RequestActionName(const struct FName& ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachmentBase.BP_SpawningAttachmentBase_C.RequestActionName");

	ABP_SpawningAttachmentBase_C_RequestActionName_Params params;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawningAttachmentBase.BP_SpawningAttachmentBase_C.ReceiveTick
// (Net, NetReliable, Exec, Native, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawningAttachmentBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachmentBase.BP_SpawningAttachmentBase_C.ReceiveTick");

	ABP_SpawningAttachmentBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawningAttachmentBase.BP_SpawningAttachmentBase_C.ExecuteUbergraph_BP_SpawningAttachmentBase
// (Net, NetReliable, NetRequest, Exec, Event, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawningAttachmentBase_C::ExecuteUbergraph_BP_SpawningAttachmentBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachmentBase.BP_SpawningAttachmentBase_C.ExecuteUbergraph_BP_SpawningAttachmentBase");

	ABP_SpawningAttachmentBase_C_ExecuteUbergraph_BP_SpawningAttachmentBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

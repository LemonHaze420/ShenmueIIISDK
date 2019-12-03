
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

// Function BP_SpawningAttachment.BP_SpawningAttachment_C.GetStaticMeshComp
// (Net, Exec, Native, NetMulticast, NetServer, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// class UStaticMeshComponent*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UStaticMeshComponent* ABP_SpawningAttachment_C::GetStaticMeshComp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachment.BP_SpawningAttachment_C.GetStaticMeshComp");

	ABP_SpawningAttachment_C_GetStaticMeshComp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SpawningAttachment.BP_SpawningAttachment_C.IsMeshVisibility
// (NetReliable, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_SpawningAttachment_C::STATIC_IsMeshVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachment.BP_SpawningAttachment_C.IsMeshVisibility");

	ABP_SpawningAttachment_C_IsMeshVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SpawningAttachment.BP_SpawningAttachment_C.UserConstructionScript
// (NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_SpawningAttachment_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachment.BP_SpawningAttachment_C.UserConstructionScript");

	ABP_SpawningAttachment_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawningAttachment.BP_SpawningAttachment_C.SetMeshVisibility
// (Net, NetRequest, Native, Static, NetMulticast, Public, Protected, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bEnable                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawningAttachment_C::STATIC_SetMeshVisibility(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachment.BP_SpawningAttachment_C.SetMeshVisibility");

	ABP_SpawningAttachment_C_SetMeshVisibility_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawningAttachment.BP_SpawningAttachment_C.ExecuteUbergraph_BP_SpawningAttachment
// (Net, NetReliable, Exec, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawningAttachment_C::ExecuteUbergraph_BP_SpawningAttachment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawningAttachment.BP_SpawningAttachment_C.ExecuteUbergraph_BP_SpawningAttachment");

	ABP_SpawningAttachment_C_ExecuteUbergraph_BP_SpawningAttachment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

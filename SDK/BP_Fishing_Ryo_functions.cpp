
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

// Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.GetRodTopPos
// (Net, NetReliable, NetRequest, Native, Event, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_Fishing_Ryo_C::GetRodTopPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.GetRodTopPos");

	ABP_Fishing_Ryo_C_GetRodTopPos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.UpdateAnim
// (Net, NetRequest, Exec, Event, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Fishing_Ryo_C::UpdateAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.UpdateAnim");

	ABP_Fishing_Ryo_C_UpdateAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.SetResultCamera
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Public, Private, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_Fishing_Ryo_C::SetResultCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.SetResultCamera");

	ABP_Fishing_Ryo_C_SetResultCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.ResetCamera
// (Net, NetReliable, Exec, Native, Event, NetResponse, Public, Private, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_Fishing_Ryo_C::ResetCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.ResetCamera");

	ABP_Fishing_Ryo_C_ResetCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.DeleteRodMeshData
// (Net, NetRequest, Exec, Native, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_Fishing_Ryo_C::STATIC_DeleteRodMeshData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.DeleteRodMeshData");

	ABP_Fishing_Ryo_C_DeleteRodMeshData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.SetRodMeshData
// (Net, NetRequest, Exec, Event, Static, NetMulticast, Protected, NetServer, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           MeshData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstance*       Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Ryo_C::STATIC_SetRodMeshData(class USkeletalMesh* MeshData, class UMaterialInstance* Material, bool IsBacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.SetRodMeshData");

	ABP_Fishing_Ryo_C_SetRodMeshData_Params params;
	params.MeshData = MeshData;
	params.Material = Material;
	params.IsBacker = IsBacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.UserConstructionScript
// (Net, NetReliable, Native, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Fishing_Ryo_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.UserConstructionScript");

	ABP_Fishing_Ryo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.Set Active
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           is_active                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Ryo_C::STATIC_Set_Active(bool is_active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.Set Active");

	ABP_Fishing_Ryo_C_Set_Active_Params params;
	params.is_active = is_active;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.ReceiveTick
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Ryo_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.ReceiveTick");

	ABP_Fishing_Ryo_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.ReceiveBeginPlay
// (NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_Fishing_Ryo_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.ReceiveBeginPlay");

	ABP_Fishing_Ryo_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.ExecuteUbergraph_BP_Fishing_Ryo
// (Net, NetReliable, Event, NetResponse, Public, Delegate, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fishing_Ryo_C::ExecuteUbergraph_BP_Fishing_Ryo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fishing_Ryo.BP_Fishing_Ryo_C.ExecuteUbergraph_BP_Fishing_Ryo");

	ABP_Fishing_Ryo_C_ExecuteUbergraph_BP_Fishing_Ryo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

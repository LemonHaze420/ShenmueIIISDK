
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

// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.FlatteningMorph
// (Exec, Event, NetResponse, Static, NetMulticast, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_SupportNPC_C::STATIC_FlatteningMorph()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.FlatteningMorph");

	ABP_MiniGame_SupportNPC_C_FlatteningMorph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.IsPlayingLabelVoice
// (Net, NetRequest, Exec, NetResponse, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Playing                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SupportNPC_C::IsPlayingLabelVoice(bool* Playing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.IsPlayingLabelVoice");

	ABP_MiniGame_SupportNPC_C_IsPlayingLabelVoice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Playing != nullptr)
		*Playing = params.Playing;
}


// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.GetActionData
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsSuccess                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Just                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Unbeli                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_MG_SupportNPCAction Data                           (Parm, OutParm)

void ABP_MiniGame_SupportNPC_C::STATIC_GetActionData(bool IsSuccess, bool Just, bool Unbeli, struct FST_MG_SupportNPCAction* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.GetActionData");

	ABP_MiniGame_SupportNPC_C_GetActionData_Params params;
	params.IsSuccess = IsSuccess;
	params.Just = Just;
	params.Unbeli = Unbeli;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.SetLookAtLocation
// (Net, NetReliable, NetRequest, Native, Static, MulticastDelegate, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 LookAtLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_MiniGame_SupportNPC_C::STATIC_SetLookAtLocation(const struct FVector& LookAtLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.SetLookAtLocation");

	ABP_MiniGame_SupportNPC_C_SetLookAtLocation_Params params;
	params.LookAtLocation = LookAtLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.UpdateClipper
// (NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_SupportNPC_C::UpdateClipper()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.UpdateClipper");

	ABP_MiniGame_SupportNPC_C_UpdateClipper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.PlayScript
// (Net, Native, Static, MulticastDelegate, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SupportNPC_C::STATIC_PlayScript(const struct FName& Label, const struct FName& CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.PlayScript");

	ABP_MiniGame_SupportNPC_C_PlayScript_Params params;
	params.Label = Label;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.SetMesh
// (NetReliable, Exec, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMesh*           NewMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SupportNPC_C::SetMesh(class USkeletalMesh* NewMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.SetMesh");

	ABP_MiniGame_SupportNPC_C_SetMesh_Params params;
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.ChangeState
// (NetReliable, Native, Event, NetResponse, Static, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           IsSuccess                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsJust                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUnbeli                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SupportNPC_C::STATIC_ChangeState(bool IsSuccess, bool IsJust, bool IsUnbeli)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.ChangeState");

	ABP_MiniGame_SupportNPC_C_ChangeState_Params params;
	params.IsSuccess = IsSuccess;
	params.IsJust = IsJust;
	params.IsUnbeli = IsUnbeli;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.SetEnabled
// (NetResponse, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SupportNPC_C::STATIC_SetEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.SetEnabled");

	ABP_MiniGame_SupportNPC_C_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.UserConstructionScript
// (NetReliable, Static, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_SupportNPC_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.UserConstructionScript");

	ABP_MiniGame_SupportNPC_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.ReceiveBeginPlay
// (Net, Native, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_SupportNPC_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.ReceiveBeginPlay");

	ABP_MiniGame_SupportNPC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.ReceiveTick
// (NetRequest, Exec, Native, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SupportNPC_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.ReceiveTick");

	ABP_MiniGame_SupportNPC_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.Event_ChangeState
// (NetReliable, Native, NetResponse, Static, Public, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsSuccess                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsJust                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUnbeli                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SupportNPC_C::STATIC_Event_ChangeState(bool IsSuccess, bool IsJust, bool IsUnbeli)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.Event_ChangeState");

	ABP_MiniGame_SupportNPC_C_Event_ChangeState_Params params;
	params.IsSuccess = IsSuccess;
	params.IsJust = IsJust;
	params.IsUnbeli = IsUnbeli;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.ExecuteUbergraph_BP_MiniGame_SupportNPC
// (Exec, Event, NetMulticast, Public, Private, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_SupportNPC_C::ExecuteUbergraph_BP_MiniGame_SupportNPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_SupportNPC.BP_MiniGame_SupportNPC_C.ExecuteUbergraph_BP_MiniGame_SupportNPC");

	ABP_MiniGame_SupportNPC_C_ExecuteUbergraph_BP_MiniGame_SupportNPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

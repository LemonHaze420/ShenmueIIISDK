
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

// Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.IsDisable
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, Public, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Disabled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AtomSoundArea_C::STATIC_IsDisable(bool* Disabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.IsDisable");

	ABP_S3AtomSoundArea_C_IsDisable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Disabled != nullptr)
		*Disabled = params.Disabled;
}


// Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.UserConstructionScript
// (NetRequest, Exec, Native, Event, Static, NetMulticast, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport)

void ABP_S3AtomSoundArea_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.UserConstructionScript");

	ABP_S3AtomSoundArea_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.ReceiveBeginPlay
// (Net, NetRequest, Native, Event, Static, NetServer)

void ABP_S3AtomSoundArea_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.ReceiveBeginPlay");

	ABP_S3AtomSoundArea_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.SetDisableSound
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Public, Private, HasOutParms, NetClient, DLLImport)
// Parameters:
// bool                           Disable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AtomSoundArea_C::SetDisableSound(bool Disable, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.SetDisableSound");

	ABP_S3AtomSoundArea_C_SetDisableSound_Params params;
	params.Disable = Disable;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_2_S3SoundAreaCallback__DelegateSignature
// (Net, NetRequest, Native, Event, Static, NetServer)

void ABP_S3AtomSoundArea_C::STATIC_BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_2_S3SoundAreaCallback__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_2_S3SoundAreaCallback__DelegateSignature");

	ABP_S3AtomSoundArea_C_BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_2_S3SoundAreaCallback__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_3_S3SoundAreaCallback__DelegateSignature
// (NetRequest, Native, Event, Static, NetServer)

void ABP_S3AtomSoundArea_C::STATIC_BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_3_S3SoundAreaCallback__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_3_S3SoundAreaCallback__DelegateSignature");

	ABP_S3AtomSoundArea_C_BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_3_S3SoundAreaCallback__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.ExecuteUbergraph_BP_S3AtomSoundArea
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AtomSoundArea_C::STATIC_ExecuteUbergraph_BP_S3AtomSoundArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.ExecuteUbergraph_BP_S3AtomSoundArea");

	ABP_S3AtomSoundArea_C_ExecuteUbergraph_BP_S3AtomSoundArea_Params params;
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


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

// Function BP_S3AtomSoundAreaBox.BP_S3AtomSoundAreaBox_C.IsDisable
// (Net, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// bool                           Disabled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AtomSoundAreaBox_C::STATIC_IsDisable(bool* Disabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundAreaBox.BP_S3AtomSoundAreaBox_C.IsDisable");

	ABP_S3AtomSoundAreaBox_C_IsDisable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Disabled != nullptr)
		*Disabled = params.Disabled;
}


// Function BP_S3AtomSoundAreaBox.BP_S3AtomSoundAreaBox_C.UserConstructionScript
// (Exec, Native, Event, NetResponse, NetMulticast, Private, NetServer, NetClient, BlueprintEvent, NetValidate)

void ABP_S3AtomSoundAreaBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundAreaBox.BP_S3AtomSoundAreaBox_C.UserConstructionScript");

	ABP_S3AtomSoundAreaBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundAreaBox.BP_S3AtomSoundAreaBox_C.ReceiveBeginPlay
// (Net, NetReliable, Exec, Native, Static, MulticastDelegate, Private, Protected, HasOutParms, NetClient, BlueprintEvent, NetValidate)

void ABP_S3AtomSoundAreaBox_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundAreaBox.BP_S3AtomSoundAreaBox_C.ReceiveBeginPlay");

	ABP_S3AtomSoundAreaBox_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundAreaBox.BP_S3AtomSoundAreaBox_C.BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_0_S3SoundAreaCallback__DelegateSignature
// (NetReliable, Exec, Native, Static, MulticastDelegate, Private, Protected, HasOutParms, NetClient, BlueprintEvent, NetValidate)

void ABP_S3AtomSoundAreaBox_C::STATIC_BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_0_S3SoundAreaCallback__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundAreaBox.BP_S3AtomSoundAreaBox_C.BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_0_S3SoundAreaCallback__DelegateSignature");

	ABP_S3AtomSoundAreaBox_C_BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_0_S3SoundAreaCallback__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundAreaBox.BP_S3AtomSoundAreaBox_C.BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_1_S3SoundAreaCallback__DelegateSignature
// (NetReliable, Exec, Native, Static, MulticastDelegate, Private, Protected, HasOutParms, NetClient, BlueprintEvent, NetValidate)

void ABP_S3AtomSoundAreaBox_C::STATIC_BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_1_S3SoundAreaCallback__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundAreaBox.BP_S3AtomSoundAreaBox_C.BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_1_S3SoundAreaCallback__DelegateSignature");

	ABP_S3AtomSoundAreaBox_C_BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_1_S3SoundAreaCallback__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundAreaBox.BP_S3AtomSoundAreaBox_C.ExecuteUbergraph_BP_S3AtomSoundAreaBox
// (Net, NetReliable, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AtomSoundAreaBox_C::STATIC_ExecuteUbergraph_BP_S3AtomSoundAreaBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundAreaBox.BP_S3AtomSoundAreaBox_C.ExecuteUbergraph_BP_S3AtomSoundAreaBox");

	ABP_S3AtomSoundAreaBox_C_ExecuteUbergraph_BP_S3AtomSoundAreaBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

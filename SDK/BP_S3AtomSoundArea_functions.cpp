
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Disabled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AtomSoundArea_C::IsDisable(bool* Disabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.IsDisable");

	ABP_S3AtomSoundArea_C_IsDisable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Disabled != nullptr)
		*Disabled = params.Disabled;
}


// Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AtomSoundArea_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.UserConstructionScript");

	ABP_S3AtomSoundArea_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3AtomSoundArea_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.ReceiveBeginPlay");

	ABP_S3AtomSoundArea_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.SetDisableSound
// (Public, BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_2_S3SoundAreaCallback__DelegateSignature
// (BlueprintEvent)

void ABP_S3AtomSoundArea_C::BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_2_S3SoundAreaCallback__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_2_S3SoundAreaCallback__DelegateSignature");

	ABP_S3AtomSoundArea_C_BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_2_S3SoundAreaCallback__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_3_S3SoundAreaCallback__DelegateSignature
// (BlueprintEvent)

void ABP_S3AtomSoundArea_C::BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_3_S3SoundAreaCallback__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_3_S3SoundAreaCallback__DelegateSignature");

	ABP_S3AtomSoundArea_C_BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_3_S3SoundAreaCallback__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.ExecuteUbergraph_BP_S3AtomSoundArea
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AtomSoundArea_C::ExecuteUbergraph_BP_S3AtomSoundArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundArea.BP_S3AtomSoundArea_C.ExecuteUbergraph_BP_S3AtomSoundArea");

	ABP_S3AtomSoundArea_C_ExecuteUbergraph_BP_S3AtomSoundArea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

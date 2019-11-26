
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Disabled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AtomSoundAreaBox_C::IsDisable(bool* Disabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundAreaBox.BP_S3AtomSoundAreaBox_C.IsDisable");

	ABP_S3AtomSoundAreaBox_C_IsDisable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Disabled != nullptr)
		*Disabled = params.Disabled;
}


// Function BP_S3AtomSoundAreaBox.BP_S3AtomSoundAreaBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AtomSoundAreaBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundAreaBox.BP_S3AtomSoundAreaBox_C.UserConstructionScript");

	ABP_S3AtomSoundAreaBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundAreaBox.BP_S3AtomSoundAreaBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3AtomSoundAreaBox_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundAreaBox.BP_S3AtomSoundAreaBox_C.ReceiveBeginPlay");

	ABP_S3AtomSoundAreaBox_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundAreaBox.BP_S3AtomSoundAreaBox_C.BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_0_S3SoundAreaCallback__DelegateSignature
// (BlueprintEvent)

void ABP_S3AtomSoundAreaBox_C::BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_0_S3SoundAreaCallback__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundAreaBox.BP_S3AtomSoundAreaBox_C.BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_0_S3SoundAreaCallback__DelegateSignature");

	ABP_S3AtomSoundAreaBox_C_BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_0_S3SoundAreaCallback__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundAreaBox.BP_S3AtomSoundAreaBox_C.BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_1_S3SoundAreaCallback__DelegateSignature
// (BlueprintEvent)

void ABP_S3AtomSoundAreaBox_C::BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_1_S3SoundAreaCallback__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AtomSoundAreaBox.BP_S3AtomSoundAreaBox_C.BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_1_S3SoundAreaCallback__DelegateSignature");

	ABP_S3AtomSoundAreaBox_C_BndEvt__S3SoundArea_K2Node_ComponentBoundEvent_1_S3SoundAreaCallback__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AtomSoundAreaBox.BP_S3AtomSoundAreaBox_C.ExecuteUbergraph_BP_S3AtomSoundAreaBox
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AtomSoundAreaBox_C::ExecuteUbergraph_BP_S3AtomSoundAreaBox(int EntryPoint)
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

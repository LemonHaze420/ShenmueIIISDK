
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.UpdateGradation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          SafeRamge                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KeihoUI_C::UpdateGradation(float Value, float SafeRamge)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.UpdateGradation");

	ABP_MiniGame_KeihoUI_C_UpdateGradation_Params params;
	params.Value = Value;
	params.SafeRamge = SafeRamge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.UpdateSafeLineRootRotate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          New_Rotation_X__Roll_          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KeihoUI_C::UpdateSafeLineRootRotate(float New_Rotation_X__Roll_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.UpdateSafeLineRootRotate");

	ABP_MiniGame_KeihoUI_C_UpdateSafeLineRootRotate_Params params;
	params.New_Rotation_X__Roll_ = New_Rotation_X__Roll_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.InitializeSafeRange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Range                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KeihoUI_C::InitializeSafeRange(float Range, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.InitializeSafeRange");

	ABP_MiniGame_KeihoUI_C_InitializeSafeRange_Params params;
	params.Range = Range;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.UpdateStickRotate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          New_Rotation_X__Roll_          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KeihoUI_C::UpdateStickRotate(float New_Rotation_X__Roll_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.UpdateStickRotate");

	ABP_MiniGame_KeihoUI_C_UpdateStickRotate_Params params;
	params.New_Rotation_X__Roll_ = New_Rotation_X__Roll_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGame_KeihoUI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.UserConstructionScript");

	ABP_MiniGame_KeihoUI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.Timeline_LineVisiblefade__FinishedFunc
// (BlueprintEvent)

void ABP_MiniGame_KeihoUI_C::Timeline_LineVisiblefade__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.Timeline_LineVisiblefade__FinishedFunc");

	ABP_MiniGame_KeihoUI_C_Timeline_LineVisiblefade__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.Timeline_LineVisiblefade__UpdateFunc
// (BlueprintEvent)

void ABP_MiniGame_KeihoUI_C::Timeline_LineVisiblefade__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.Timeline_LineVisiblefade__UpdateFunc");

	ABP_MiniGame_KeihoUI_C_Timeline_LineVisiblefade__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniGame_KeihoUI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.ReceiveBeginPlay");

	ABP_MiniGame_KeihoUI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.SetEnabledLine
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KeihoUI_C::SetEnabledLine(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.SetEnabledLine");

	ABP_MiniGame_KeihoUI_C_SetEnabledLine_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.ExecuteUbergraph_BP_MiniGame_KeihoUI
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KeihoUI_C::ExecuteUbergraph_BP_MiniGame_KeihoUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.ExecuteUbergraph_BP_MiniGame_KeihoUI");

	ABP_MiniGame_KeihoUI_C_ExecuteUbergraph_BP_MiniGame_KeihoUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

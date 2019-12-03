
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

// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.UpdateGradation
// (NetReliable, Event, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          SafeRamge                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KeihoUI_C::STATIC_UpdateGradation(float Value, float SafeRamge)
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
// (Net, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          New_Rotation_X__Roll_          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KeihoUI_C::STATIC_UpdateSafeLineRootRotate(float New_Rotation_X__Roll_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.UpdateSafeLineRootRotate");

	ABP_MiniGame_KeihoUI_C_UpdateSafeLineRootRotate_Params params;
	params.New_Rotation_X__Roll_ = New_Rotation_X__Roll_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.InitializeSafeRange
// (NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.UpdateStickRotate
// (NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          New_Rotation_X__Roll_          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KeihoUI_C::UpdateStickRotate(float New_Rotation_X__Roll_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.UpdateStickRotate");

	ABP_MiniGame_KeihoUI_C_UpdateStickRotate_Params params;
	params.New_Rotation_X__Roll_ = New_Rotation_X__Roll_;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.UserConstructionScript
// (Net, NetRequest, Exec, Event, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport)

void ABP_MiniGame_KeihoUI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.UserConstructionScript");

	ABP_MiniGame_KeihoUI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.Timeline_LineVisiblefade__FinishedFunc
// (Net, NetReliable, Exec, Native, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_KeihoUI_C::Timeline_LineVisiblefade__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.Timeline_LineVisiblefade__FinishedFunc");

	ABP_MiniGame_KeihoUI_C_Timeline_LineVisiblefade__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.Timeline_LineVisiblefade__UpdateFunc
// (NetReliable, Exec, Native, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_KeihoUI_C::Timeline_LineVisiblefade__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.Timeline_LineVisiblefade__UpdateFunc");

	ABP_MiniGame_KeihoUI_C_Timeline_LineVisiblefade__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.ReceiveBeginPlay
// (NetReliable, Exec, Native, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MiniGame_KeihoUI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.ReceiveBeginPlay");

	ABP_MiniGame_KeihoUI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.SetEnabledLine
// (Net, NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KeihoUI_C::STATIC_SetEnabledLine(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.SetEnabledLine");

	ABP_MiniGame_KeihoUI_C_SetEnabledLine_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGame_KeihoUI.BP_MiniGame_KeihoUI_C.ExecuteUbergraph_BP_MiniGame_KeihoUI
// (Net, NetReliable, NetResponse, Static, MulticastDelegate, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGame_KeihoUI_C::STATIC_ExecuteUbergraph_BP_MiniGame_KeihoUI(int EntryPoint)
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

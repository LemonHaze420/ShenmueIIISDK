
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.SetValidMinimap
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMap2DManager_C::SetValidMinimap(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.SetValidMinimap");

	ABP_MiniMap2DManager_C_SetValidMinimap_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.Update
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForce                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMap2DManager_C::Update(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.Update");

	ABP_MiniMap2DManager_C_Update_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.SetBackAlpha
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMap2DManager_C::SetBackAlpha(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.SetBackAlpha");

	ABP_MiniMap2DManager_C_SetBackAlpha_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.SetBrushAlpha
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMap2DManager_C::SetBrushAlpha(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.SetBrushAlpha");

	ABP_MiniMap2DManager_C_SetBrushAlpha_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.IsInValidMapRegion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MiniMap2DManager_C::IsInValidMapRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.IsInValidMapRegion");

	ABP_MiniMap2DManager_C_IsInValidMapRegion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniMap2DManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.UserConstructionScript");

	ABP_MiniMap2DManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.OnLoaded_596D289D4B92DE0545173793E979D552
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMap2DManager_C::OnLoaded_596D289D4B92DE0545173793E979D552(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.OnLoaded_596D289D4B92DE0545173793E979D552");

	ABP_MiniMap2DManager_C_OnLoaded_596D289D4B92DE0545173793E979D552_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.OnLoaded_596D289D4B92DE0545173793A0671C6E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMap2DManager_C::OnLoaded_596D289D4B92DE0545173793A0671C6E(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.OnLoaded_596D289D4B92DE0545173793A0671C6E");

	ABP_MiniMap2DManager_C_OnLoaded_596D289D4B92DE0545173793A0671C6E_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiniMap2DManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.ReceiveBeginPlay");

	ABP_MiniMap2DManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMap2DManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.ReceiveTick");

	ABP_MiniMap2DManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.MessageInvalidMap
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniMap2DManager_C::MessageInvalidMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.MessageInvalidMap");

	ABP_MiniMap2DManager_C_MessageInvalidMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.ExecuteUbergraph_BP_MiniMap2DManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMap2DManager_C::ExecuteUbergraph_BP_MiniMap2DManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.ExecuteUbergraph_BP_MiniMap2DManager");

	ABP_MiniMap2DManager_C_ExecuteUbergraph_BP_MiniMap2DManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.OnDetermineValid__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsValid                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMap2DManager_C::OnDetermineValid__DelegateSignature(bool bIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMap2DManager.BP_MiniMap2DManager_C.OnDetermineValid__DelegateSignature");

	ABP_MiniMap2DManager_C_OnDetermineValid__DelegateSignature_Params params;
	params.bIsValid = bIsValid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

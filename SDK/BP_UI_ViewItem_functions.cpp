
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

// Function BP_UI_ViewItem.BP_UI_ViewItem_C.ResetRotation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ViewItem_C::ResetRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ViewItem.BP_UI_ViewItem_C.ResetRotation");

	ABP_UI_ViewItem_C_ResetRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ViewItem.BP_UI_ViewItem_C.SetLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_UI_ViewItem_C::SetLocation(const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ViewItem.BP_UI_ViewItem_C.SetLocation");

	ABP_UI_ViewItem_C_SetLocation_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ViewItem.BP_UI_ViewItem_C.SetItemData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             NewMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_UI_ViewItem_C::SetItemData(class UStaticMesh* NewMesh, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ViewItem.BP_UI_ViewItem_C.SetItemData");

	ABP_UI_ViewItem_C_SetItemData_Params params;
	params.NewMesh = NewMesh;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ViewItem.BP_UI_ViewItem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ViewItem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ViewItem.BP_UI_ViewItem_C.UserConstructionScript");

	ABP_UI_ViewItem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ViewItem.BP_UI_ViewItem_C.OnLoaded_218B594649E9FBD554432E8844E18A3C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ViewItem_C::OnLoaded_218B594649E9FBD554432E8844E18A3C(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ViewItem.BP_UI_ViewItem_C.OnLoaded_218B594649E9FBD554432E8844E18A3C");

	ABP_UI_ViewItem_C_OnLoaded_218B594649E9FBD554432E8844E18A3C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ViewItem.BP_UI_ViewItem_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ViewItem_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ViewItem.BP_UI_ViewItem_C.ReceiveTick");

	ABP_UI_ViewItem_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ViewItem.BP_UI_ViewItem_C.ExecuteUbergraph_BP_UI_ViewItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ViewItem_C::ExecuteUbergraph_BP_UI_ViewItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ViewItem.BP_UI_ViewItem_C.ExecuteUbergraph_BP_UI_ViewItem");

	ABP_UI_ViewItem_C_ExecuteUbergraph_BP_UI_ViewItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ViewItem.BP_UI_ViewItem_C.ED_FinishMeshLoad__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_UI_ViewItem_C::ED_FinishMeshLoad__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ViewItem.BP_UI_ViewItem_C.ED_FinishMeshLoad__DelegateSignature");

	ABP_UI_ViewItem_C_ED_FinishMeshLoad__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

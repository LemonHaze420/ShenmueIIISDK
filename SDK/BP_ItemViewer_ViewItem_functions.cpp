
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

// Function BP_ItemViewer_ViewItem.BP_ItemViewer_ViewItem_C.SetItemData
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UStaticMesh*             NewMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemViewer_ViewItem_C::STATIC_SetItemData(class UStaticMesh* NewMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemViewer_ViewItem.BP_ItemViewer_ViewItem_C.SetItemData");

	ABP_ItemViewer_ViewItem_C_SetItemData_Params params;
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemViewer_ViewItem.BP_ItemViewer_ViewItem_C.UserConstructionScript
// (Exec, Native, Event, NetResponse, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_ItemViewer_ViewItem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemViewer_ViewItem.BP_ItemViewer_ViewItem_C.UserConstructionScript");

	ABP_ItemViewer_ViewItem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemViewer_ViewItem.BP_ItemViewer_ViewItem_C.ReceiveTick
// (NetRequest, Event, NetMulticast, MulticastDelegate, Public, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemViewer_ViewItem_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemViewer_ViewItem.BP_ItemViewer_ViewItem_C.ReceiveTick");

	ABP_ItemViewer_ViewItem_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemViewer_ViewItem.BP_ItemViewer_ViewItem_C.ExecuteUbergraph_BP_ItemViewer_ViewItem
// (Exec, Native, Event, NetResponse, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemViewer_ViewItem_C::ExecuteUbergraph_BP_ItemViewer_ViewItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemViewer_ViewItem.BP_ItemViewer_ViewItem_C.ExecuteUbergraph_BP_ItemViewer_ViewItem");

	ABP_ItemViewer_ViewItem_C_ExecuteUbergraph_BP_ItemViewer_ViewItem_Params params;
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

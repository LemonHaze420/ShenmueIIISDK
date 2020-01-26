
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

// Function BP_ItemViewer_ViewItem.BP_ItemViewer_ViewItem_C.SetItemData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             NewMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemViewer_ViewItem_C::SetItemData(class UStaticMesh* NewMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemViewer_ViewItem.BP_ItemViewer_ViewItem_C.SetItemData");

	ABP_ItemViewer_ViewItem_C_SetItemData_Params params;
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemViewer_ViewItem.BP_ItemViewer_ViewItem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemViewer_ViewItem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemViewer_ViewItem.BP_ItemViewer_ViewItem_C.UserConstructionScript");

	ABP_ItemViewer_ViewItem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemViewer_ViewItem.BP_ItemViewer_ViewItem_C.ReceiveTick
// (Event, Public, BlueprintEvent)
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
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemViewer_ViewItem_C::ExecuteUbergraph_BP_ItemViewer_ViewItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemViewer_ViewItem.BP_ItemViewer_ViewItem_C.ExecuteUbergraph_BP_ItemViewer_ViewItem");

	ABP_ItemViewer_ViewItem_C_ExecuteUbergraph_BP_ItemViewer_ViewItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

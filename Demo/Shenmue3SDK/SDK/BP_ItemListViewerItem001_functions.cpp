
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

// Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.CalcBaseSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ItemListViewerItem001_C::CalcBaseSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.CalcBaseSize");

	ABP_ItemListViewerItem001_C_CalcBaseSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.ChangeItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           SkelMesh                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimationAsset*         NewAnimToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemListViewerItem001_C::ChangeItem(class UStaticMesh* Mesh, class USkeletalMesh* SkelMesh, class UAnimationAsset* NewAnimToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.ChangeItem");

	ABP_ItemListViewerItem001_C_ChangeItem_Params params;
	params.Mesh = Mesh;
	params.SkelMesh = SkelMesh;
	params.NewAnimToPlay = NewAnimToPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemListViewerItem001_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.UserConstructionScript");

	ABP_ItemListViewerItem001_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ItemListViewerItem001_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.ReceiveBeginPlay");

	ABP_ItemListViewerItem001_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemListViewerItem001_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.ReceiveTick");

	ABP_ItemListViewerItem001_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_ItemListViewerItem001_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.ReceiveDestroyed");

	ABP_ItemListViewerItem001_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.ExecuteUbergraph_BP_ItemListViewerItem001
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemListViewerItem001_C::ExecuteUbergraph_BP_ItemListViewerItem001(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.ExecuteUbergraph_BP_ItemListViewerItem001");

	ABP_ItemListViewerItem001_C_ExecuteUbergraph_BP_ItemListViewerItem001_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

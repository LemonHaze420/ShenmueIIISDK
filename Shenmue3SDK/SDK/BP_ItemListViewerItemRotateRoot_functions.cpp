
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

// Function BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C.UpdRotate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ItemListViewerItemRotateRoot_C::UpdRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C.UpdRotate");

	ABP_ItemListViewerItemRotateRoot_C_UpdRotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C.SetCalcSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemListViewerItemRotateRoot_C::SetCalcSize(float Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C.SetCalcSize");

	ABP_ItemListViewerItemRotateRoot_C_SetCalcSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C.ChangeMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           SkelMesh                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimationAsset*         NewAnimToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemListViewerItemRotateRoot_C::ChangeMesh(class UStaticMesh* Mesh, class USkeletalMesh* SkelMesh, class UAnimationAsset* NewAnimToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C.ChangeMesh");

	ABP_ItemListViewerItemRotateRoot_C_ChangeMesh_Params params;
	params.Mesh = Mesh;
	params.SkelMesh = SkelMesh;
	params.NewAnimToPlay = NewAnimToPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C.SetBaseSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemListViewerItemRotateRoot_C::SetBaseSize(float Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C.SetBaseSize");

	ABP_ItemListViewerItemRotateRoot_C_SetBaseSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemListViewerItemRotateRoot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C.UserConstructionScript");

	ABP_ItemListViewerItemRotateRoot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ItemListViewerItemRotateRoot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C.ReceiveBeginPlay");

	ABP_ItemListViewerItemRotateRoot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemListViewerItemRotateRoot_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C.ReceiveTick");

	ABP_ItemListViewerItemRotateRoot_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C.ExecuteUbergraph_BP_ItemListViewerItemRotateRoot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemListViewerItemRotateRoot_C::ExecuteUbergraph_BP_ItemListViewerItemRotateRoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemListViewerItemRotateRoot.BP_ItemListViewerItemRotateRoot_C.ExecuteUbergraph_BP_ItemListViewerItemRotateRoot");

	ABP_ItemListViewerItemRotateRoot_C_ExecuteUbergraph_BP_ItemListViewerItemRotateRoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

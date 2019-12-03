
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

// Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.CalcBaseSize
// (NetRequest, Native, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_ItemListViewerItem001_C::STATIC_CalcBaseSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.CalcBaseSize");

	ABP_ItemListViewerItem001_C_CalcBaseSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.ChangeItem
// (Net, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Net, NetReliable, Native, NetResponse, Static, MulticastDelegate, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_ItemListViewerItem001_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.UserConstructionScript");

	ABP_ItemListViewerItem001_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Exec, Native, Event, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_ItemListViewerItem001_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.ReceiveBeginPlay");

	ABP_ItemListViewerItem001_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.ReceiveTick
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemListViewerItem001_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.ReceiveTick");

	ABP_ItemListViewerItem001_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.ReceiveDestroyed
// (NetResponse, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_ItemListViewerItem001_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.ReceiveDestroyed");

	ABP_ItemListViewerItem001_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.ExecuteUbergraph_BP_ItemListViewerItem001
// (NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, BlueprintCallable)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemListViewerItem001_C::STATIC_ExecuteUbergraph_BP_ItemListViewerItem001(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemListViewerItem001.BP_ItemListViewerItem001_C.ExecuteUbergraph_BP_ItemListViewerItem001");

	ABP_ItemListViewerItem001_C_ExecuteUbergraph_BP_ItemListViewerItem001_Params params;
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

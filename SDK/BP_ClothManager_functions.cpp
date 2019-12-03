
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

// Function BP_ClothManager.BP_ClothManager_C.GetPartsMaterial
// (Native, Static, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class US3ClothPartsDataAsset*  DataAsset                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::STATIC_GetPartsMaterial(class US3ClothPartsDataAsset* DataAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.GetPartsMaterial");

	ABP_ClothManager_C_GetPartsMaterial_Params params;
	params.DataAsset = DataAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.InitSheParts
// (NetReliable, Exec, NetResponse, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_ClothManager_C::InitSheParts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.InitSheParts");

	ABP_ClothManager_C_InitSheParts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.GetDefaultPartsMap
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Public, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           RYO                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TMap<EClothPartsType, struct FName> Map                            (Parm, OutParm, ZeroConstructor)

void ABP_ClothManager_C::STATIC_GetDefaultPartsMap(bool RYO, TMap<EClothPartsType, struct FName>* Map)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.GetDefaultPartsMap");

	ABP_ClothManager_C_GetDefaultPartsMap_Params params;
	params.RYO = RYO;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Map != nullptr)
		*Map = params.Map;
}


// Function BP_ClothManager.BP_ClothManager_C.IsReinitPose
// (NetReliable, Event, NetResponse, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*  Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReinitPose                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::STATIC_IsReinitPose(class USkeletalMeshComponent* Component, const struct FName& CharaName, bool* ReinitPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.IsReinitPose");

	ABP_ClothManager_C_IsReinitPose_Params params;
	params.Component = Component;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReinitPose != nullptr)
		*ReinitPose = params.ReinitPose;
}


// Function BP_ClothManager.BP_ClothManager_C.GetWearMeshType
// (NetReliable, Native, Event, NetResponse, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           RYO                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3CharaMeshType               Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::GetWearMeshType(bool RYO, ES3CharaMeshType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.GetWearMeshType");

	ABP_ClothManager_C_GetWearMeshType_Params params;
	params.RYO = RYO;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_ClothManager.BP_ClothManager_C.UpdateWear
// (NetRequest, Exec, NetMulticast, MulticastDelegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<EClothPartsType, struct FName> Map                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_ClothManager_C::UpdateWear(TMap<EClothPartsType, struct FName> Map)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.UpdateWear");

	ABP_ClothManager_C_UpdateWear_Params params;
	params.Map = Map;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.GetJeansMaterial
// (NetReliable, NetRequest, Native, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasDefaults, NetClient, DLLImport)
// Parameters:
// class UMaterialInstance*       Material                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::GetJeansMaterial(class UMaterialInstance** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.GetJeansMaterial");

	ABP_ClothManager_C_GetJeansMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;
}


// Function BP_ClothManager.BP_ClothManager_C.GetTShirtsMaterial
// (Exec, Native, NetMulticast, MulticastDelegate, Protected, Delegate, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstance*       Material                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::GetTShirtsMaterial(class UMaterialInstance** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.GetTShirtsMaterial");

	ABP_ClothManager_C_GetTShirtsMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;
}


// Function BP_ClothManager.BP_ClothManager_C.ResetMaterial
// (Net, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AS3Character*            Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  InComponent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponent*  OutComponent                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ClothManager_C::STATIC_ResetMaterial(class AS3Character* Character, class USkeletalMeshComponent* InComponent, class USkeletalMeshComponent** OutComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.ResetMaterial");

	ABP_ClothManager_C_ResetMaterial_Params params;
	params.Character = Character;
	params.InComponent = InComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutComponent != nullptr)
		*OutComponent = params.OutComponent;
}


// Function BP_ClothManager.BP_ClothManager_C.GetShoesMaterialIndex
// (NetReliable, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::STATIC_GetShoesMaterialIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.GetShoesMaterialIndex");

	ABP_ClothManager_C_GetShoesMaterialIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function BP_ClothManager.BP_ClothManager_C.GetBottomsMaterialIndex
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::STATIC_GetBottomsMaterialIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.GetBottomsMaterialIndex");

	ABP_ClothManager_C_GetBottomsMaterialIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function BP_ClothManager.BP_ClothManager_C.IsCharaTagMatching
// (NetRequest, Native, Static, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Match                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::STATIC_IsCharaTagMatching(class AActor* Target, const struct FName& Tag, bool* Match)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.IsCharaTagMatching");

	ABP_ClothManager_C_IsCharaTagMatching_Params params;
	params.Target = Target;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Match != nullptr)
		*Match = params.Match;
}


// Function BP_ClothManager.BP_ClothManager_C.CheckUnlock
// (Net, NetReliable, Exec, Event, NetMulticast, MulticastDelegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RYO                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::CheckUnlock(bool RYO)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.CheckUnlock");

	ABP_ClothManager_C_CheckUnlock_Params params;
	params.RYO = RYO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.GetUnlockedClothParts
// (Net, Exec, NetResponse, Static, NetMulticast, Private, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FName>           UnlockedParts                  (Parm, OutParm, ZeroConstructor)
// bool                           bRyo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::STATIC_GetUnlockedClothParts(bool bRyo, TArray<struct FName>* UnlockedParts)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.GetUnlockedClothParts");

	ABP_ClothManager_C_GetUnlockedClothParts_Params params;
	params.bRyo = bRyo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UnlockedParts != nullptr)
		*UnlockedParts = params.UnlockedParts;
}


// Function BP_ClothManager.BP_ClothManager_C.IsStreaming
// (NetRequest, Exec, Event, NetResponse, Static, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Streaming                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::STATIC_IsStreaming(bool* Streaming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.IsStreaming");

	ABP_ClothManager_C_IsStreaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Streaming != nullptr)
		*Streaming = params.Streaming;
}


// Function BP_ClothManager.BP_ClothManager_C.CheckGetUnlockParts
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, Private, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::STATIC_CheckGetUnlockParts(const struct FName& ItemId, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.CheckGetUnlockParts");

	ABP_ClothManager_C_CheckGetUnlockParts_Params params;
	params.ItemId = ItemId;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.CheckInitUnlockParts
// (NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport)

void ABP_ClothManager_C::CheckInitUnlockParts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.CheckInitUnlockParts");

	ABP_ClothManager_C_CheckInitUnlockParts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.FinishFitting
// (Event, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Apply                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::FinishFitting(bool Apply)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.FinishFitting");

	ABP_ClothManager_C_FinishFitting_Params params;
	params.Apply = Apply;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.Fitting
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// TScriptInterface<class US3ClothInterface> Interface                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FST_ClothesFittingInfo> FittingInfo                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_ClothManager_C::STATIC_Fitting(const TScriptInterface<class US3ClothInterface>& Interface, TArray<struct FST_ClothesFittingInfo>* FittingInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.Fitting");

	ABP_ClothManager_C_Fitting_Params params;
	params.Interface = Interface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FittingInfo != nullptr)
		*FittingInfo = params.FittingInfo;
}


// Function BP_ClothManager.BP_ClothManager_C.DebugSetupRyoMesh
// (Net, NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_ClothManager_C::DebugSetupRyoMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.DebugSetupRyoMesh");

	ABP_ClothManager_C_DebugSetupRyoMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.GetPartsReference
// (Net, NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   PartsID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EClothPartsType                Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::GetPartsReference(const struct FName& PartsID, EClothPartsType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.GetPartsReference");

	ABP_ClothManager_C_GetPartsReference_Params params;
	params.PartsID = PartsID;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.GetMeshReference
// (Exec, NetResponse, MulticastDelegate, Delegate, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   MeshID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3CharaMeshType               Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::GetMeshReference(const struct FName& MeshID, ES3CharaMeshType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.GetMeshReference");

	ABP_ClothManager_C_GetMeshReference_Params params;
	params.MeshID = MeshID;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.GetDebugPlayerCharaName
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FName                   CharaName                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::STATIC_GetDebugPlayerCharaName(struct FName* CharaName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.GetDebugPlayerCharaName");

	ABP_ClothManager_C_GetDebugPlayerCharaName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CharaName != nullptr)
		*CharaName = params.CharaName;
}


// Function BP_ClothManager.BP_ClothManager_C.ChangeClothes_Impl
// (NetReliable, NetRequest, Static, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class US3ClothInterface> Interface                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3CharaMeshType               Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::STATIC_ChangeClothes_Impl(const TScriptInterface<class US3ClothInterface>& Interface, ES3CharaMeshType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.ChangeClothes_Impl");

	ABP_ClothManager_C_ChangeClothes_Impl_Params params;
	params.Interface = Interface;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.UpdateShenfaMesh
// (NetRequest, Exec, Native, Event, NetResponse, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_ClothManager_C::UpdateShenfaMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.UpdateShenfaMesh");

	ABP_ClothManager_C_UpdateShenfaMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.UpdateRyoMesh
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_ClothManager_C::STATIC_UpdateRyoMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.UpdateRyoMesh");

	ABP_ClothManager_C_UpdateRyoMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.SetupSkeletalMesh
// (Net, NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class AS3Character*            S3Character                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FS3ClothesChangeInfo    Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TScriptInterface<class US3ClothInterface> Interface                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::SetupSkeletalMesh(class AS3Character* S3Character, class USkeletalMeshComponent* Component, const TScriptInterface<class US3ClothInterface>& Interface, struct FS3ClothesChangeInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.SetupSkeletalMesh");

	ABP_ClothManager_C_SetupSkeletalMesh_Params params;
	params.S3Character = S3Character;
	params.Component = Component;
	params.Interface = Interface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
}


// Function BP_ClothManager.BP_ClothManager_C.StartAsyncLoadObject
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// ES3CharaMeshType               MeshType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class US3ClothInterface> Interface                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::STATIC_StartAsyncLoadObject(ES3CharaMeshType MeshType, const struct FName& CharaName, const TScriptInterface<class US3ClothInterface>& Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.StartAsyncLoadObject");

	ABP_ClothManager_C_StartAsyncLoadObject_Params params;
	params.MeshType = MeshType;
	params.CharaName = CharaName;
	params.Interface = Interface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.DebugSetRyoMeshId
// (Exec, Native, Static, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   MeshID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WithChange                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::STATIC_DebugSetRyoMeshId(const struct FName& MeshID, bool WithChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.DebugSetRyoMeshId");

	ABP_ClothManager_C_DebugSetRyoMeshId_Params params;
	params.MeshID = MeshID;
	params.WithChange = WithChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.UserConstructionScript
// (Net, NetReliable, NetResponse, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_ClothManager_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.UserConstructionScript");

	ABP_ClothManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.OnLoaded_68DAAF824D005673C28CC89A68FA961E
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::STATIC_OnLoaded_68DAAF824D005673C28CC89A68FA961E(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.OnLoaded_68DAAF824D005673C28CC89A68FA961E");

	ABP_ClothManager_C_OnLoaded_68DAAF824D005673C28CC89A68FA961E_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.ReceiveBeginPlay
// (Net, Event, NetResponse, Static, NetServer)

void ABP_ClothManager_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.ReceiveBeginPlay");

	ABP_ClothManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.ReceiveTick
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.ReceiveTick");

	ABP_ClothManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.ChangeClothes
// (Net, NetRequest, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// TScriptInterface<class US3ClothInterface> Interface                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// ES3CharaMeshType               Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::STATIC_ChangeClothes(const TScriptInterface<class US3ClothInterface>& Interface, ES3CharaMeshType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.ChangeClothes");

	ABP_ClothManager_C_ChangeClothes_Params params;
	params.Interface = Interface;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.SetSheMeshType
// (NetRequest, Exec, Event, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// ES3CharaMeshType               Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithChange                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::STATIC_SetSheMeshType(ES3CharaMeshType Type, bool bWithChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.SetSheMeshType");

	ABP_ClothManager_C_SetSheMeshType_Params params;
	params.Type = Type;
	params.bWithChange = bWithChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.WaitSpawnPlayer
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetServer)

void ABP_ClothManager_C::STATIC_WaitSpawnPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.WaitSpawnPlayer");

	ABP_ClothManager_C_WaitSpawnPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.ReceiveEndPlay
// (Net, NetRequest, Exec, Event, NetResponse, Static, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.ReceiveEndPlay");

	ABP_ClothManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.ChangeItemNum
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Public, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::STATIC_ChangeItemNum(const struct FName& ItemId, int NewNum, int OldNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.ChangeItemNum");

	ABP_ClothManager_C_ChangeItemNum_Params params;
	params.ItemId = ItemId;
	params.NewNum = NewNum;
	params.OldNum = OldNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.SetRyoMeshType
// (NetRequest, Native, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, NetClient, BlueprintPure)
// Parameters:
// ES3CharaMeshType               Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithChange                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::STATIC_SetRyoMeshType(ES3CharaMeshType Type, bool bWithChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.SetRyoMeshType");

	ABP_ClothManager_C_SetRyoMeshType_Params params;
	params.Type = Type;
	params.bWithChange = bWithChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.WaitReward
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetServer)

void ABP_ClothManager_C::STATIC_WaitReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.WaitReward");

	ABP_ClothManager_C_WaitReward_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.DelayCheckUnlock
// (Net, NetRequest, Exec, Native, NetResponse, Static, NetServer)

void ABP_ClothManager_C::STATIC_DelayCheckUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.DelayCheckUnlock");

	ABP_ClothManager_C_DelayCheckUnlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClothManager.BP_ClothManager_C.ExecuteUbergraph_BP_ClothManager
// (NetReliable, NetResponse, Static, NetMulticast, MulticastDelegate, NetServer)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ClothManager_C::STATIC_ExecuteUbergraph_BP_ClothManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothManager.BP_ClothManager_C.ExecuteUbergraph_BP_ClothManager");

	ABP_ClothManager_C_ExecuteUbergraph_BP_ClothManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

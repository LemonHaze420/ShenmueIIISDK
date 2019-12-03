#pragma once

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ClothManager.BP_ClothManager_C
// 0x01C0 (0x05F8 - 0x0438)
class ABP_ClothManager_C : public AS3ClothManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       DebugRyoMeshId;                                           // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FST_ClothesLoadWait>                 WaitLoadReferences;                                       // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class US3ClothInfoDataAsset*                       ClothesDataAsset;                                         // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LoadIndex;                                                // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlockLoad;                                                // 0x046C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x046D(0x0003) MISSED OFFSET
	TArray<struct FST_ClothesUnlockInfo>               CachePartsArray;                                          // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, struct FName>                   CacheMeshMap;                                             // 0x0480(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EClothPartsType, int>                         CacheMaterialIndex;                                       // 0x04D0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EClothPartsType, struct FName>                DefaultRyoClothParts;                                     // 0x0520(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                CheckUnlockHandle;                                        // 0x0570(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FName>                               StackAddItemIds;                                          // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        StackAddItemNum;                                          // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                UnlockCheckCnt;                                           // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x059C(0x0004) MISSED OFFSET
	TMap<EClothPartsType, struct FName>                DefaultSheClothParts;                                     // 0x05A0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class US3GameInstance*                             GameInstance;                                             // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ClothManager.BP_ClothManager_C");
		return ptr;
	}


	void STATIC_GetPartsMaterial(class US3ClothPartsDataAsset* DataAsset);
	void InitSheParts();
	void STATIC_GetDefaultPartsMap(bool RYO, TMap<EClothPartsType, struct FName>* Map);
	void STATIC_IsReinitPose(class USkeletalMeshComponent* Component, const struct FName& CharaName, bool* ReinitPose);
	void GetWearMeshType(bool RYO, ES3CharaMeshType* Type);
	void UpdateWear(TMap<EClothPartsType, struct FName> Map);
	void GetJeansMaterial(class UMaterialInstance** Material);
	void GetTShirtsMaterial(class UMaterialInstance** Material);
	void STATIC_ResetMaterial(class AS3Character* Character, class USkeletalMeshComponent* InComponent, class USkeletalMeshComponent** OutComponent);
	void STATIC_GetShoesMaterialIndex(int* Index);
	void STATIC_GetBottomsMaterialIndex(int* Index);
	void STATIC_IsCharaTagMatching(class AActor* Target, const struct FName& Tag, bool* Match);
	void CheckUnlock(bool RYO);
	void STATIC_GetUnlockedClothParts(bool bRyo, TArray<struct FName>* UnlockedParts);
	void STATIC_IsStreaming(bool* Streaming);
	void STATIC_CheckGetUnlockParts(const struct FName& ItemId, int Num);
	void CheckInitUnlockParts();
	void FinishFitting(bool Apply);
	void STATIC_Fitting(const TScriptInterface<class US3ClothInterface>& Interface, TArray<struct FST_ClothesFittingInfo>* FittingInfo);
	void DebugSetupRyoMesh();
	void GetPartsReference(const struct FName& PartsID, EClothPartsType Type);
	void GetMeshReference(const struct FName& MeshID, ES3CharaMeshType Type);
	void STATIC_GetDebugPlayerCharaName(struct FName* CharaName);
	void STATIC_ChangeClothes_Impl(const TScriptInterface<class US3ClothInterface>& Interface, ES3CharaMeshType Type);
	void UpdateShenfaMesh();
	void STATIC_UpdateRyoMesh();
	void SetupSkeletalMesh(class AS3Character* S3Character, class USkeletalMeshComponent* Component, const TScriptInterface<class US3ClothInterface>& Interface, struct FS3ClothesChangeInfo* Info);
	void STATIC_StartAsyncLoadObject(ES3CharaMeshType MeshType, const struct FName& CharaName, const TScriptInterface<class US3ClothInterface>& Interface);
	void STATIC_DebugSetRyoMeshId(const struct FName& MeshID, bool WithChange);
	void STATIC_UserConstructionScript();
	void STATIC_OnLoaded_68DAAF824D005673C28CC89A68FA961E(class UObject* Loaded);
	void STATIC_ReceiveBeginPlay();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_ChangeClothes(const TScriptInterface<class US3ClothInterface>& Interface, ES3CharaMeshType Type);
	void STATIC_SetSheMeshType(ES3CharaMeshType Type, bool bWithChange);
	void STATIC_WaitSpawnPlayer();
	void STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void STATIC_ChangeItemNum(const struct FName& ItemId, int NewNum, int OldNum);
	void STATIC_SetRyoMeshType(ES3CharaMeshType Type, bool bWithChange);
	void STATIC_WaitReward();
	void STATIC_DelayCheckUnlock();
	void STATIC_ExecuteUbergraph_BP_ClothManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

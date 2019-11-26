#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ClothManager.BP_ClothManager_C
// 0x0168 (0x05A0 - 0x0438)
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
	TMap<EClothPartsType, struct FName>                DefaultClothParts;                                        // 0x0520(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                CheckUnlockHandle;                                        // 0x0570(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FName>                               StackAddItemIds;                                          // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        StackAddItemNum;                                          // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                UnlockCheckCnt;                                           // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Count;                                                    // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ClothManager.BP_ClothManager_C");
		return ptr;
	}


	void IsCutsceneComponent(class USkeletalMeshComponent* Component, bool* Cutscene);
	void GetWearMeshType(bool RYO, ES3CharaMeshType* Type);
	void UpdateWear(TMap<EClothPartsType, struct FName> Map);
	void GetJeansMaterial(class UMaterialInstance** Material);
	void GetTShirtsMaterial(class UMaterialInstance** Material);
	void ResetMaterial(class AS3Character* Character, class USkeletalMeshComponent* InComponent, class USkeletalMeshComponent** OutComponent);
	void GetShoesMaterialIndex(int* Index);
	void GetBottomsMaterialIndex(int* Index);
	void IsCharaTagMatching(class AActor* Target, const struct FName& Tag, bool* Match);
	void CheckUnlock();
	void GetUnlockedClothParts(bool* bRyo, TArray<struct FName>* UnlockedParts);
	void IsStreaming(bool* Streaming);
	void CheckGetUnlockParts(const struct FName& ItemId, int Num);
	void CheckInitUnlockParts();
	void FinishFitting(bool Apply);
	void Fitting(const TScriptInterface<class US3ClothInterface>& Interface, TArray<struct FST_ClothesFittingInfo>* FittingInfo);
	void DebugSetupRyoMesh();
	void GetPartsReference(const struct FName& PartsID, EClothPartsType Type);
	void GetMeshReference(const struct FName& MeshID, ES3CharaMeshType Type);
	void GetDebugPlayerCharaName(struct FName* CharaName);
	void ChangeClothes_Impl(const TScriptInterface<class US3ClothInterface>& Interface, ES3CharaMeshType Type);
	void UpdateShenfaMesh();
	void UpdateRyoMesh();
	void SetupSkeletalMesh(class AS3Character* S3Character, class USkeletalMeshComponent* Component, const TScriptInterface<class US3ClothInterface>& Interface, struct FS3ClothesChangeInfo* Info);
	void StartAsyncLoadObject(ES3CharaMeshType MeshType, const struct FName& CharaName, const TScriptInterface<class US3ClothInterface>& Interface);
	void DebugSetRyoMeshId(const struct FName& MeshID, bool WithChange);
	void UserConstructionScript();
	void OnLoaded_68DAAF824D005673C28CC89A68FA961E(class UObject* Loaded);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ChangeClothes(TScriptInterface<class US3ClothInterface>* Interface, ES3CharaMeshType* Type);
	void SetSheMeshType(ES3CharaMeshType* Type, bool* bWithChange);
	void WaitSpawnPlayer();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ChangeItemNum(const struct FName& ItemId, int NewNum, int OldNum);
	void SetRyoMeshType(ES3CharaMeshType* Type, bool* bWithChange);
	void WaitReward();
	void DelayCheckUnlock();
	void ExecuteUbergraph_BP_ClothManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

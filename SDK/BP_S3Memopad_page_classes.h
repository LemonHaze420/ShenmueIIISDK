#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_S3Memopad_page.BP_S3Memopad_page_C
// 0x0083 (0x03AB - 0x0328)
class ABP_S3Memopad_page_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      pageMesh;                                                 // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EN_memopadPagetype>                    Type;                                                     // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	TArray<class UMaterialInterface*>                  mi_page_;                                                 // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  mi_coverFront_;                                           // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  mi_coverRear_;                                            // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      PageSide;                                                 // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_memopadTurntype>                    TurnState;                                                // 0x0379(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x037A(0x0006) MISSED OFFSET
	class ABP_S3Memopad_book_C*                        BookOwner;                                                // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_memopadTurntype>                    PrevTurnState;                                            // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCover;                                                   // 0x0389(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReady;                                                   // 0x038A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x038B(0x0001) MISSED OFFSET
	int                                                PageTextureIndexR;                                        // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PageTextureIndexF;                                        // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  PageMtR;                                                  // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               LastPage;                                                 // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReqDestroy;                                              // 0x03A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEndAnim;                                                 // 0x03AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3Memopad_page.BP_S3Memopad_page_C");
		return ptr;
	}


	void SetPhoto(int Index, const struct FName& Name, class UTexture* Texture, float IsMaterialRender);
	void SetPageTexture(int IndexR, int IndexF);
	void SetTextMesh(int Index, const struct FName& Name, class UTexture* Texture, bool Turning, int page);
	void CanReady();
	void SetTurnState(TEnumAsByte<EN_memopadTurntype> Turn, bool LastPage);
	void Initialize(bool CoverFlg, bool bRight);
	void EndAnim();
	void GetTurnState(TEnumAsByte<EN_memopadTurntype>* State);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ViewPage();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_S3Memopad_page(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_CreateMemoTexture.BP_CreateMemoTexture_C
// 0x006C (0x0394 - 0x0328)
class ABP_CreateMemoTexture_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class US3WidgetToRenderTargetComponent*            RenderMemoPageR;                                          // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3WidgetToRenderTargetComponent*            RenderMemoPageF;                                          // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                PageIndex;                                                // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RowCountF;                                                // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RowCountR;                                                // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	class UTextureRenderTarget2D*                      RenderTextureF;                                           // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTextureR;                                           // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        texturepos;                                               // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxRow;                                                   // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	TArray<struct FString>                             String;                                                   // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              LastUpdateDelayTime;                                      // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CreateMemoTexture.BP_CreateMemoTexture_C");
		return ptr;
	}


	void MakeString_EN(TArray<struct FString>* String);
	void SetRowCountAndTexturePos(bool Front, bool IsMemoFlag, int Arrayndex, class Uwgt_MemoPageBase_C* Widget);
	void PrintErrorLog(int MemoIndex, int page);
	void GetMemoLabel(int MemoIndex, struct FName* Label);
	void SetTexture(bool Right, TArray<int>* MemoNo);
	void RenderContactInfo(int RowCount, class Uwgt_S3Memopad_textContentBase_C** Widget);
	void GetMemoNo(int PageNo, TArray<int>* MemoNo);
	void DestroyActor();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Update();
	void ExecuteUbergraph_BP_CreateMemoTexture(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

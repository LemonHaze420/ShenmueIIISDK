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

// BlueprintGeneratedClass WBP_QT2_Score2.WBP_QT2_Score2_C
// 0x0050 (0x0378 - 0x0328)
class AWBP_QT2_Score2_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UWidgetComponent*                            Num;                                                      // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             NumRoot;                                                  // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       Text;                                                     // 0x0350(0x0018) (Edit, BlueprintVisible)
	bool                                               bRenderText;                                              // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	class UWidgetComponent*                            TextRender_1;                                             // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WBP_QT2_Score2.WBP_QT2_Score2_C");
		return ptr;
	}


	void SetEnabled(bool bEnabled);
	void GetTextArray(TArray<class UTextBlock*>* Array);
	void Set_Text_New(const struct FText& Text);
	void SetVisibleScore(bool Visible);
	void SetVisibleText(bool Visible);
	void SetText(const struct FText& Text, bool NotNumber);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WBP_QT2_Score2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

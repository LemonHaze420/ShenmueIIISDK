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

// BlueprintGeneratedClass BP_ShopEventManager.BP_ShopEventManager_C
// 0x0068 (0x0390 - 0x0328)
class ABP_ShopEventManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<bool>                                       itemEnables;                                              // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              pushTime;                                                 // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_ShopState>                          ShopState;                                                // 0x034C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	int                                                ShopID;                                                   // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    EndShopping;                                              // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                ShopType;                                                 // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    endNoBuy;                                                 // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    endBuy;                                                   // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShopEventManager.BP_ShopEventManager_C");
		return ptr;
	}


	void CheckBGM();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void FinishShopping();
	void DispKS();
	void ReceiveBeginPlay();
	void FinishShopNoBuy();
	void SwitchDoBuy_Shop(bool DoBuy);
	void SwitchDoBuy_Pawnsh(bool DoBuy);
	void SwitchDoBuy_Exchange(bool DoBuy);
	void buyEnd();
	void noBuyEnd();
	void SwitchDoBuy_SetEchange(bool DoBuy);
	void ExecuteUbergraph_BP_ShopEventManager(int EntryPoint);
	void endBuy__DelegateSignature();
	void endNoBuy__DelegateSignature();
	void EndShopping__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

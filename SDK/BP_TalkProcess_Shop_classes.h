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

// BlueprintGeneratedClass BP_TalkProcess_Shop.BP_TalkProcess_Shop_C
// 0x0018 (0x0050 - 0x0038)
class UBP_TalkProcess_Shop_C : public UBP_TalkProcess_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (Transient, DuplicateTransient)
	class UShopTask*                                   ShopTask;                                                 // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_ShopEventManager_C*                      ShopManager;                                              // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TalkProcess_Shop.BP_TalkProcess_Shop_C");
		return ptr;
	}


	void Activate();
	void BindShopEvents();
	void OnFinishedShop();
	void UnbindShopEvents(class ABP_ShopEventManager_C* ShopManager);
	void OnEndBuyShop();
	void OnEndNoBuyShop();
	void ExecuteUbergraph_BP_TalkProcess_Shop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

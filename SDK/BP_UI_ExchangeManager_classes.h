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

// BlueprintGeneratedClass BP_UI_ExchangeManager.BP_UI_ExchangeManager_C
// 0x0008 (0x0460 - 0x0458)
class ABP_UI_ExchangeManager_C : public ABP_UI_ShopBaseManager_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0458(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_ExchangeManager.BP_UI_ExchangeManager_C");
		return ptr;
	}


	void IsVisibleRStickCenterPos(bool* IsCenter);
	bool IsVisibleRStickOnlyViewMode();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_UI_ExchangeManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

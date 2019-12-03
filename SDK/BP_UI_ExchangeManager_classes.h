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

// BlueprintGeneratedClass BP_UI_ExchangeManager.BP_UI_ExchangeManager_C
// 0x000F (0x0408 - 0x03F9)
class ABP_UI_ExchangeManager_C : public ABP_UI_ShopBaseManager_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_ExchangeManager.BP_UI_ExchangeManager_C");
		return ptr;
	}


	void STATIC_IsVisibleRStickCenterPos(bool* IsCenter);
	bool IsVisibleRStickOnlyViewMode();
	void STATIC_UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_UI_ExchangeManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

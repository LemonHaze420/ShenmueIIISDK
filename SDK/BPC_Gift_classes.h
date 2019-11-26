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

// BlueprintGeneratedClass BPC_Gift.BPC_Gift_C
// 0x0048 (0x0138 - 0x00F0)
class UBPC_Gift_C : public UActorComponent
{
public:
	TArray<struct FS3GiftDataTable>                    GiftDataStack;                                            // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               GiftStack;                                                // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FS3GiftDataTable                            CurrentGift;                                              // 0x0110(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       CurrentGiftId;                                            // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBPC_MiniGameContainer_C*                    CacheMiniGameContainer;                                   // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Gift.BPC_Gift_C");
		return ptr;
	}


	void ClearCacheMiniGameContainer();
	void ShowPopup(bool* bSuccess);
	void IsItemGift(struct FS3GameGift* CheckGIft, bool* bItem);
	void IsBetGift(struct FS3GameGift* CheckGIft, bool* bBet);
	void GetValueType(TEnumAsByte<EN_ValueType>* ValueType);
	void IsMoneyGift(struct FS3GameGift* CheckGIft, bool* bMoney);
	void PushGiftCustomizeMoney(int Money);
	void GetGiftData(bool* bSuccess, struct FName* GiftId, struct FS3GiftDataTable* GiftData);
	void ClearGift();
	void ClearGiftStack();
	void PopGift(struct FName* GiftId, struct FS3GiftDataTable* OutGiftData);
	void PushGift(const struct FName& GiftId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

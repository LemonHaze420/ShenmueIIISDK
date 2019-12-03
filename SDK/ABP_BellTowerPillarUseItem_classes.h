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

// AnimBlueprintGeneratedClass ABP_BellTowerPillarUseItem.ABP_BellTowerPillarUseItem_C
// 0x00D0 (0x0430 - 0x0360)
class UABP_BellTowerPillarUseItem_C : public US3AnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_21C5DF254E561A0782C8B2B4270C725E;      // 0x0368(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EBE135874E8B037D24C8DE94594F4934;      // 0x03B0(0x0070)
	struct FScriptMulticastDelegate                    OnNotifyReleasedItem;                                     // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_BellTowerPillarUseItem.ABP_BellTowerPillarUseItem_C");
		return ptr;
	}


	void AnimNotify_ReleasedItem();
	void STATIC_ExecuteUbergraph_ABP_BellTowerPillarUseItem(int EntryPoint);
	void OnNotifyReleasedItem__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

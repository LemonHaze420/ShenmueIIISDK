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

// BlueprintGeneratedClass BP_TalkProcess_ChangeClothes.BP_TalkProcess_ChangeClothes_C
// 0x0088 (0x00C0 - 0x0038)
class UBP_TalkProcess_ChangeClothes_C : public UBP_TalkProcess_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (Transient, DuplicateTransient)
	class UChangeClothesTask*                          ChangeClothesTask;                                        // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class US3ClothInterface>          Interface;                                                // 0x0048(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EClothPartsType, struct FName>                ClothesMap;                                               // 0x0058(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AS3Character*>                        Targets;                                                  // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AS3Character*                                CurrentTarget;                                            // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TalkProcess_ChangeClothes.BP_TalkProcess_ChangeClothes_C");
		return ptr;
	}


	void GetTargetCharacters(const struct FName& CharaName, TArray<class AS3Character*>* Characters);
	void Activate();
	void Finish(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName);
	void ExecuteUbergraph_BP_TalkProcess_ChangeClothes(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_TalkProcess_ChangeClothes.BP_TalkProcess_ChangeClothes_C
// 0x0010 (0x0048 - 0x0038)
class UBP_TalkProcess_ChangeClothes_C : public UBP_TalkProcess_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (Transient, DuplicateTransient)
	class UChangeClothesTask*                          ChangeClothesTask;                                        // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TalkProcess_ChangeClothes.BP_TalkProcess_ChangeClothes_C");
		return ptr;
	}


	void Activate();
	void ExecuteUbergraph_BP_TalkProcess_ChangeClothes(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

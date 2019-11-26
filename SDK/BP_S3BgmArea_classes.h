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

// BlueprintGeneratedClass BP_S3BgmArea.BP_S3BgmArea_C
// 0x0021 (0x0371 - 0x0350)
class ABP_S3BgmArea_C : public AS3BgmArea
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundAtomCue*                               ActiveCue;                                                // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EBgmPriority                                       Priority;                                                 // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3BgmArea.BP_S3BgmArea_C");
		return ptr;
	}


	void GetBGM(class USoundAtomCue** BGM);
	void InitCue();
	struct FS3BgmAreaSourceInfo GetSourceInfo();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_S3BgmArea(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

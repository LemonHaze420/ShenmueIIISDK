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

// BlueprintGeneratedClass BP_S3BgmMultiArea.BP_S3BgmMultiArea_C
// 0x0037 (0x03A8 - 0x0371)
class ABP_S3BgmMultiArea_C : public ABP_S3BgmArea_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	int                                                BoxNum;                                                   // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	TArray<struct FTransform>                          BoxTransform;                                             // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UBoxComponent*>                       BoxComponents;                                            // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3BgmMultiArea.BP_S3BgmMultiArea_C");
		return ptr;
	}


	void CheckOverlap();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_S3BgmMultiArea(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_TalkCameraShowItemZoom_SCU_04.BP_TalkCameraShowItemZoom_SCU_04_C
// 0x0008 (0x04B0 - 0x04A8)
class ABP_TalkCameraShowItemZoom_SCU_04_C : public ABP_TalkCameraShowItemZoomBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TalkCameraShowItemZoom_SCU_04.BP_TalkCameraShowItemZoom_SCU_04_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_TalkCameraShowItemZoom_SCU_04(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

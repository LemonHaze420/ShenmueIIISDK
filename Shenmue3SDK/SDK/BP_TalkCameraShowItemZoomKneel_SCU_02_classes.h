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

// BlueprintGeneratedClass BP_TalkCameraShowItemZoomKneel_SCU_02.BP_TalkCameraShowItemZoomKneel_SCU_02_C
// 0x0008 (0x04B0 - 0x04A8)
class ABP_TalkCameraShowItemZoomKneel_SCU_02_C : public ABP_TalkCameraShowItemZoomBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TalkCameraShowItemZoomKneel_SCU_02.BP_TalkCameraShowItemZoomKneel_SCU_02_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_TalkCameraShowItemZoomKneel_SCU_02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

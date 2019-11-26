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

// BlueprintGeneratedClass BP_TalkCamera_SBH_F_01.BP_TalkCamera_SBH_F_01_C
// 0x000C (0x04A0 - 0x0494)
class ABP_TalkCamera_SBH_F_01_C : public ABP_DefaultTalkCamera_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TalkCamera_SBH_F_01.BP_TalkCamera_SBH_F_01_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_TalkCamera_SBH_F_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

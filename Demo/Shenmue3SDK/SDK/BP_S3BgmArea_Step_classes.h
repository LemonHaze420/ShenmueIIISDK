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

// BlueprintGeneratedClass BP_S3BgmArea_Step.BP_S3BgmArea_Step_C
// 0x001F (0x0390 - 0x0371)
class ABP_S3BgmArea_Step_C : public ABP_S3BgmArea_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	TArray<struct FST_BgmChangeStepInfo>               ChangeInfoArray;                                          // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3BgmArea_Step.BP_S3BgmArea_Step_C");
		return ptr;
	}


	void JudgeBGM(int Step);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ChangeStep(int SetSteps);
	void ExecuteUbergraph_BP_S3BgmArea_Step(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

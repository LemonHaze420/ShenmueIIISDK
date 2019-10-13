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

// BlueprintGeneratedClass BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C
// 0x001F (0x0390 - 0x0371)
class ABP_S3BgmArea_dayTime_C : public ABP_S3BgmArea_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	TArray<struct FS3BgmChangeInfo>                    ChangeInfoArray;                                          // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3BgmArea_dayTime.BP_S3BgmArea_dayTime_C");
		return ptr;
	}


	void JudgeBGM(ES3DayTimeEvent NewEvent);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ChangeGameTimeEvent(ES3DayTimeEvent EventType);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BP_S3BgmArea_dayTime(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

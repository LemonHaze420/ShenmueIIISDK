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

// BlueprintGeneratedClass BP_SubtitlePlayer_DebugTextData.BP_SubtitlePlayer_DebugTextData_C
// 0x0038 (0x03E8 - 0x03B0)
class ABP_SubtitlePlayer_DebugTextData_C : public ABP_SubtitlePlayer_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	struct FName                                       nLabel_1;                                                 // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ES3TextPathType                                    nType_1;                                                  // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET
	struct FName                                       nCharaName_1;                                             // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               nIsAutoStop_1;                                            // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	struct FString                                     TextString_1;                                             // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SubtitlePlayer_DebugTextData.BP_SubtitlePlayer_DebugTextData_C");
		return ptr;
	}


	void UserConstructionScript();
	void Play(struct FName* Label, ES3TextPathType* Type, struct FName* CharaName, bool* IsAutoStop);
	void ExecuteUbergraph_BP_SubtitlePlayer_DebugTextData(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

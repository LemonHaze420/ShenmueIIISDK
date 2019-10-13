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

// BlueprintGeneratedClass BP_HintTalkManager.BP_HintTalkManager_C
// 0x0110 (0x0490 - 0x0380)
class ABP_HintTalkManager_C : public AS3HintTalkManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<struct FName, struct FString>                 HintTalkTextData;                                         // 0x0390(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              NearBoader;                                               // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FarBoader;                                                // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TooFarBoader;                                             // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	TMap<struct FString, struct FName>                 TestDistanceText;                                         // 0x03F0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, class UHintTalkData*>           HintTalkData;                                             // 0x0440(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HintTalkManager.BP_HintTalkManager_C");
		return ptr;
	}


	void LengthToDistanceEnum(float Length, TEnumAsByte<EN_HintTalkDistance>* DistanceEnum);
	void GetPlaceMessage(struct FString* Message);
	void IsPlaceMessage(const struct FName& TextID, bool* Result);
	void GetTextDataStrings(struct FName* Label, struct FString* OutString, struct FString* ClipperString, TArray<struct FString>* TextArray, int* LinefeedCount, TArray<struct FST_RubyInfo>* RubyInfoArray);
	void UserConstructionScript();
	void InpActEvt_Ctrl_Shift_H_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_HintTalkManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_SubQuestObject.BP_SubQuestObject_C
// 0x002B (0x04D4 - 0x04A9)
class ABP_SubQuestObject_C : public ABP_ACTrigger_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_PropObject;                                            // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SubQuestFlag;                                             // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SubQuestFlag_Min;                                         // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SubQuestFlag_Max;                                         // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SubQuestObject.BP_SubQuestObject_C");
		return ptr;
	}


	void ChangeDispObject(bool DispObject);
	void CheckSubQuestFlag(bool* DispEnable);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void Event_FlagChange(int ArrayIndex, int SetFlags);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SubQuestObject(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

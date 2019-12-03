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

// BlueprintGeneratedClass BP_EventIconDispRange.BP_EventIconDispRange_C
// 0x0042 (0x036A - 0x0328)
class ABP_EventIconDispRange_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Range;                                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     BoxExtent;                                                // 0x0350(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Rotation;                                                 // 0x035C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               Invalid;                                                  // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CheckFreerun;                                             // 0x0369(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EventIconDispRange.BP_EventIconDispRange_C");
		return ptr;
	}


	int STATIC_GetPriority();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void CheckBehavior(bool* Enable);
	void STATIC_RegistDetect(bool Unregister);
	void UserConstructionScript();
	void STATIC_BndEvt__Range_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void STATIC_BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void STATIC_DecideDetectAction(ES3ActionIconType Type);
	void ExecuteUbergraph_BP_EventIconDispRange(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

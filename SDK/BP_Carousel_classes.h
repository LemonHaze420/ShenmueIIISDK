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

// BlueprintGeneratedClass BP_Carousel.BP_Carousel_C
// 0x0058 (0x0148 - 0x00F0)
class UBP_Carousel_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      Owner;                                                    // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              ActorList;                                                // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                State;                                                    // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotateAngle;                                              // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotDIr;                                                   // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	class USoundBase*                                  SoundData;                                                // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TestFlag;                                                 // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	struct FRotator                                    StartRotation;                                            // 0x012C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    EndRotation;                                              // 0x0138(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              RotTime;                                                  // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Carousel.BP_Carousel_C");
		return ptr;
	}


	void STATIC_IsBusy(bool* Result);
	TEnumAsByte<ECarouselRotate> STATIC_GetDirectionFromString(const struct FText& Text, bool Reverse);
	void RotateExec();
	void RequestRotate(TEnumAsByte<ECarouselRotate> Direction);
	void STATIC_CreateActorList();
	void STATIC_ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void STATIC_ExecuteUbergraph_BP_Carousel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

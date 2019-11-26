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

// BlueprintGeneratedClass BPC_AutoFraming.BPC_AutoFraming_C
// 0x004C (0x013C - 0x00F0)
class UBPC_AutoFraming_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	struct FVector2D                                   FramingOffset;                                            // 0x00F8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bUseFollowPan;                                            // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseProceduralComposition;                                // 0x0101(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0102(0x0002) MISSED OFFSET
	float                                              PanSpeed;                                                 // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_DefaultTalkCamera_C*                     DefaultTalkCamera;                                        // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseHeightMargin;                                         // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0111(0x0003) MISSED OFFSET
	float                                              HeightMargin;                                             // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       FocusTargetSocket;                                        // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PanTime;                                                  // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElapseTime;                                               // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    StartRotation;                                            // 0x0130(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_AutoFraming.BPC_AutoFraming_C");
		return ptr;
	}


	void SetLookRotation(const struct FRotator& StartRotation);
	void SetTargetSocket(const struct FName& Socket, float PanSpeed);
	void SetTargetActor(class AActor* Actor, float PanTime);
	void ReceiveBeginPlay();
	void Update();
	void ExecuteUbergraph_BPC_AutoFraming(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BPC_RadialStuckScanner.BPC_RadialStuckScanner_C
// 0x0050 (0x0140 - 0x00F0)
class UBPC_RadialStuckScanner_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class ABP_S3_Character_Adventure_C*                Owner;                                                    // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              TestWSYaw;                                                // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScanDuration;                                             // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AS3Character*>                        BlockingCharacters;                                       // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               Scanning;                                                 // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FoundClearDirection;                                      // 0x0119(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableAutoScanning;                                       // 0x011A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x011B(0x0005) MISSED OFFSET
	TArray<class AS3Character*>                        IgnoringCollisionChars;                                   // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UBP_CircularLocationBuffer_C*                LocationBuffer;                                           // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsStill;                                                  // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	float                                              TimeNotMoving;                                            // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_RadialStuckScanner.BPC_RadialStuckScanner_C");
		return ptr;
	}


	void TryDisableTick();
	void IgnoreCollision(class AS3Character* Char, bool Ignore);
	void TestBlockedByNPC(float Yaw, float Distance, TArray<class AS3Character*>* AddNPCS);
	void TestAngleBlocked(float Yaw, float Distance, TArray<class AS3Character*>* AddNPCS);
	void TestNavmeshDistance(float Yaw, float Max, bool* Hit, float* DistanceSqr);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void StartScan();
	void StartScanning();
	void StopScanning();
	void OnCompletedPositionCollectionWindow();
	void ExecuteUbergraph_BPC_RadialStuckScanner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BPC_PCGroundSensor.BPC_PCGroundSensor_C
// 0x00AD (0x019D - 0x00F0)
class UBPC_PCGroundSensor_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class ACharacter*                                  Owner;                                                    // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              GroundHeight;                                             // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FHitResult                                  GroundHit;                                                // 0x0108(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundHeightLandingThresh;                                // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Landing;                                                  // 0x0194(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0195(0x0003) MISSED OFFSET
	float                                              SlopeAngle;                                               // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UpdateSelf;                                               // 0x019C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_PCGroundSensor.BPC_PCGroundSensor_C");
		return ptr;
	}


	void Update();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPC_PCGroundSensor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

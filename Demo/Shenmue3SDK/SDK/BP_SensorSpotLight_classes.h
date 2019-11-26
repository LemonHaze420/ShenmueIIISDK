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

// BlueprintGeneratedClass BP_SensorSpotLight.BP_SensorSpotLight_C
// 0x0008 (0x03F0 - 0x03E8)
class ABP_SensorSpotLight_C : public ABP_TimeSwitchSpotLight_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SensorSpotLight.BP_SensorSpotLight_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SensorSpotLight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

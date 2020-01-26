#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SensorSpotLight_MeshController.BP_SensorSpotLight_MeshController_C
// 0x0079 (0x0469 - 0x03F0)
class ABP_SensorSpotLight_MeshController_C : public ABP_SensorSpotLight_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x71];                                      // 0x03F8(0x0071) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SensorSpotLight_MeshController.BP_SensorSpotLight_MeshController_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnSetLightEnable(bool bNewLightEnable);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

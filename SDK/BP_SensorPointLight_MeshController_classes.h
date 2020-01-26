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

// BlueprintGeneratedClass BP_SensorPointLight_MeshController.BP_SensorPointLight_MeshController_C
// 0x0069 (0x0491 - 0x0428)
class ABP_SensorPointLight_MeshController_C : public ABP_SensorPointLight_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x61];                                      // 0x0430(0x0061) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SensorPointLight_MeshController.BP_SensorPointLight_MeshController_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

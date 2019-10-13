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

// BlueprintGeneratedClass BP_NoAIAnimalBase.BP_NoAIAnimalBase_C
// 0x0008 (0x03B8 - 0x03B0)
class ABP_NoAIAnimalBase_C : public AS3AnimalSkeletalMeshActor
{
public:
	class UCapsuleComponent*                           CapsuleCollision;                                         // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NoAIAnimalBase.BP_NoAIAnimalBase_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

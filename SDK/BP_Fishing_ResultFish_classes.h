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

// BlueprintGeneratedClass BP_Fishing_ResultFish.BP_Fishing_ResultFish_C
// 0x0010 (0x0338 - 0x0328)
class ABP_Fishing_ResultFish_C : public AActor
{
public:
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Fishing_ResultFish.BP_Fishing_ResultFish_C");
		return ptr;
	}


	void STATIC_SetResultAnimation(class UAnimationAsset* NewAnimToPlay);
	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

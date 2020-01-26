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

// BlueprintGeneratedClass BP_DLC_AjitoSpiderBlock.BP_DLC_AjitoSpiderBlock_C
// 0x0018 (0x0340 - 0x0328)
class ABP_DLC_AjitoSpiderBlock_C : public AActor
{
public:
	class UStaticMeshComponent*                        SM_CorrugateIronFence;                                    // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_HideInFlag_TemplateDLC_C*                BP_HideInFlag_TemplateDLC;                                // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DLC_AjitoSpiderBlock.BP_DLC_AjitoSpiderBlock_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

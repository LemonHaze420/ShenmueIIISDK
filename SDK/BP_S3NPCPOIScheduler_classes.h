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

// BlueprintGeneratedClass BP_S3NPCPOIScheduler.BP_S3NPCPOIScheduler_C
// 0x0008 (0x03E0 - 0x03D8)
class ABP_S3NPCPOIScheduler_C : public AS3NPCPOIScheduler
{
public:
	class UTextRenderComponent*                        SignBoard;                                                // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3NPCPOIScheduler.BP_S3NPCPOIScheduler_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

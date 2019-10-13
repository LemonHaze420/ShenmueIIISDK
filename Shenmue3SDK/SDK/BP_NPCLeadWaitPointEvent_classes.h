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

// BlueprintGeneratedClass BP_NPCLeadWaitPointEvent.BP_NPCLeadWaitPointEvent_C
// 0x0038 (0x0360 - 0x0328)
class ABP_NPCLeadWaitPointEvent_C : public AActor
{
public:
	class UTextRenderComponent*                        TextRender;                                               // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0338(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_NPCLeadWaitPointEvent.BP_NPCLeadWaitPointEvent_C.StepTrigger

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPCLeadWaitPointEvent.BP_NPCLeadWaitPointEvent_C");
		return ptr;
	}


	bool IsStillValidToWait();
	void StartEvent(bool* Success);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

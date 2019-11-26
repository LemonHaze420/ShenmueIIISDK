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

// BlueprintGeneratedClass BP_DebugCutscenePlayAreaDisp.BP_DebugCutscenePlayAreaDisp_C
// 0x0038 (0x0360 - 0x0328)
class ABP_DebugCutscenePlayAreaDisp_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UWidgetComponent*                            AreaID_Rev;                                               // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            AreaId;                                                   // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        AreaSphere;                                               // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SphereScale;                                              // 0x0350(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	struct FName                                       CutsceneId;                                               // 0x0358(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DebugCutscenePlayAreaDisp.BP_DebugCutscenePlayAreaDisp_C");
		return ptr;
	}


	void UpdateWidgetText(class UWidgetComponent* InWidget);
	void UpdateAllWidgetText();
	void UpdateSphereScale();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_DebugCutscenePlayAreaDisp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

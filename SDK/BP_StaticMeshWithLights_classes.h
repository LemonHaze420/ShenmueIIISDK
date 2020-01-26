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

// BlueprintGeneratedClass BP_StaticMeshWithLights.BP_StaticMeshWithLights_C
// 0x0068 (0x03F0 - 0x0388)
class ABP_StaticMeshWithLights_C : public AS3StaticMeshWithLights
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	TArray<struct FGlowMatID>                          GlowMatIDs;                                               // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                         // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGlowMatLights>                      Lights;                                                   // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Visualise;                                                // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET
	class UPointLightComponent*                        Light;                                                    // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bDebugText;                                               // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTemperature;                                          // 0x03D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03D2(0x0002) MISSED OFFSET
	float                                              Temperature;                                              // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AS3GameTimeManager*                          TimeManager;                                              // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        CustomTimeIndexes;                                        // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_StaticMeshWithLights.BP_StaticMeshWithLights_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void DayTimeEventDispatcher_Event_1(ES3DayTimeEvent EventType);
	void LightSourceChange(float Intensity, int MatID, class UMaterialInstanceDynamic* DMI, bool On);
	void CustomEvent_1(int EventIndex);
	void OnSetLightEnable(bool bNewLightEnable);
	void OnSetLightCastShadow(bool bNewLightCastShadow);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_StaticMeshWithLights(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

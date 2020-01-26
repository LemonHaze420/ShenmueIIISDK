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

// BlueprintGeneratedClass BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C
// 0x00D0 (0x0408 - 0x0338)
class ABP_ChangeMaterialStaticMeshActor_C : public AStaticMeshActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	TArray<struct FST_ChangeMaterialInfo>              MaterialInfo;                                             // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsNightMaterial;                                          // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	class AS3GameTimeManager*                          TimeManager;                                              // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	ES3DayTimeEvent                                    ChangeStartTime;                                          // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ES3DayTimeEvent                                    ChangeEndTime;                                            // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0362(0x0006) MISSED OFFSET
	TMap<int, class UMaterialInterface*>               OriginalMaterialMap;                                      // 0x0368(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, class UMaterialInstanceDynamic*>         DynamicMaterialMap;                                       // 0x03B8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ChangeMaterialStaticMeshActor.BP_ChangeMaterialStaticMeshActor_C");
		return ptr;
	}


	void ChangeMaterial();
	void CheckTimeEvent();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ChangeTimeEvent(ES3DayTimeEvent EventType);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ChangeMaterialStaticMeshActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C
// 0x007C (0x04D0 - 0x0454)
class ABP_S3ChobuChanSpawner_C : public ABP_S3ItemSpawner_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0458(0x0008) (Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow4;                                                   // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow3;                                                   // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow2;                                                   // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow1;                                                   // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             DirectionArrow;                                           // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0488(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.UseMesh
	float                                              DelayItemGetTime;                                         // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAngle;                                                // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableVisibleDirectionArrow;                             // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04B9(0x0003) MISSED OFFSET
	float                                              getDistance;                                              // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               RamdonPlayScriptList;                                     // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C");
		return ptr;
	}


	struct FName GetRandomScript();
	void STATIC_IsLooking(bool* Look);
	void UserConstructionScript();
	void UniqueActionOnFind();
	void ForceFindSelf();
	void STATIC_SetEnabledHelp(bool Condition);
	void UpdateEffect(float Value, bool Current);
	void CreateEffect();
	void ReceiveBeginPlay();
	void FindEvent();
	void ExecuteUbergraph_BP_S3ChobuChanSpawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

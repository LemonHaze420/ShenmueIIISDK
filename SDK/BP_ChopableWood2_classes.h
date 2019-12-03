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

// BlueprintGeneratedClass BP_ChopableWood2.BP_ChopableWood2_C
// 0x0034 (0x035C - 0x0328)
class ABP_ChopableWood2_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Firewood_Chopped2;                                     // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Firewood_Chopped1;                                     // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Firewood01;                                            // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ForcePower;                                               // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ChopableWood2.BP_ChopableWood2_C");
		return ptr;
	}


	void STATIC_ChopActionFromRot(const struct FRotator& Rot);
	void MakeRandomVector(float x_max, float x_min, float y_max, float y_min, float Z_Max, float Z_min, struct FVector* RandomtVector);
	void STATIC_UserConstructionScript();
	void STATIC_ChopAction();
	void STATIC_ReceiveBeginPlay();
	void DelayDestroy(float DelayTime);
	void STATIC_ExecuteUbergraph_BP_ChopableWood2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

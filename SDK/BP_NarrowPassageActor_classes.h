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

// BlueprintGeneratedClass BP_NarrowPassageActor.BP_NarrowPassageActor_C
// 0x0018 (0x0378 - 0x0360)
class ABP_NarrowPassageActor_C : public AS3NarrowPassageActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NarrowPassageActor.BP_NarrowPassageActor_C");
		return ptr;
	}


	void UserConstructionScript();
	void STATIC_RequestIgnoreCollision(class AS3Character* Player, class AS3Character* Target, float MinTime);
	void ExecuteUbergraph_BP_NarrowPassageActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

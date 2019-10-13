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

// BlueprintGeneratedClass BP_Gimmick_OpenDoor_OneSide_RightLoot.BP_Gimmick_OpenDoor_OneSide_RightLoot_C
// 0x0017 (0x0590 - 0x0579)
class ABP_Gimmick_OpenDoor_OneSide_RightLoot_C : public ABP_Gimmick_OpenDoor_Template_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0579(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0580(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               CollisionForSmallAnimals;                                 // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Gimmick_OpenDoor_OneSide_RightLoot.BP_Gimmick_OpenDoor_OneSide_RightLoot_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_Gimmick_OpenDoor_OneSide_RightLoot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

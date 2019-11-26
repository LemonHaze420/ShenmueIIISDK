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

// BlueprintGeneratedClass BP_NPC_Lead_She.BP_NPC_Lead_She_C
// 0x0008 (0x09C0 - 0x09B8)
class ABP_NPC_Lead_She_C : public ABP_NPC_Lead_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09B8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC_Lead_She.BP_NPC_Lead_She_C");
		return ptr;
	}


	bool CanEnterBuilding(class ABP_S3BuildingStaticMeshActor_C* Building);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_NPC_Lead_She(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

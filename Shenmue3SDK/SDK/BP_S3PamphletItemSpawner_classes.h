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

// BlueprintGeneratedClass BP_S3PamphletItemSpawner.BP_S3PamphletItemSpawner_C
// 0x0013 (0x0460 - 0x044D)
class ABP_S3PamphletItemSpawner_C : public ABP_S3ItemSpawner_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x044D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3PamphletItemSpawner.BP_S3PamphletItemSpawner_C");
		return ptr;
	}


	void CalcUniqueCamera();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetEnabledHelp(bool* Condition);
	void ExecuteUbergraph_BP_S3PamphletItemSpawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

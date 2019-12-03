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

// BlueprintGeneratedClass BP_S3PamphletItemSpawner.BP_S3PamphletItemSpawner_C
// 0x0014 (0x0468 - 0x0454)
class ABP_S3PamphletItemSpawner_C : public ABP_S3ItemSpawner_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0458(0x0008) (Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3PamphletItemSpawner.BP_S3PamphletItemSpawner_C");
		return ptr;
	}


	void STATIC_CalcUniqueCamera();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void STATIC_SetEnabledHelp(bool Condition);
	void STATIC_ExecuteUbergraph_BP_S3PamphletItemSpawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

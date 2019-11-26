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

// BlueprintGeneratedClass BP_BG_Neon.BP_BG_Neon_C
// 0x0040 (0x0368 - 0x0328)
class ABP_BG_Neon_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                _______0___Track_1_690B4B5B444B47390542549A98465E67;      // 0x0340(0x0010) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _______0__Direction_690B4B5B444B47390542549A98465E67;     // 0x0350(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	class UTimelineComponent*                          UnknownVar01;                                           // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    NewVar_1;                                                 // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BG_Neon.BP_BG_Neon_C");
		return ptr;
	}


	void UserConstructionScript();
	void UnknownFunc01();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_BG_Neon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

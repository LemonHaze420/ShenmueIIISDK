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

// BlueprintGeneratedClass BPC_BTL_TrailRenderer.BPC_BTL_TrailRenderer_C
// 0x0035 (0x0125 - 0x00F0)
class UBPC_BTL_TrailRenderer_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	TArray<struct FBTL_TrailEffectInfo>                TrailsSettings;                                           // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UAnimNotifyContainer_C*                      NotifyContainer;                                          // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             EmitterTemplate;                                          // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LastTimeDilation;                                         // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SomeTrailActive;                                          // 0x0124(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_BTL_TrailRenderer.BPC_BTL_TrailRenderer_C");
		return ptr;
	}


	void STATIC_UpdateTimeDilation();
	void STATIC_UpdateRenderingState();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_BPC_BTL_TrailRenderer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

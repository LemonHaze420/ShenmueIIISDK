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

// BlueprintGeneratedClass BPC_DebugAreaLight.BPC_DebugAreaLight_C
// 0x0038 (0x0128 - 0x00F0)
class UBPC_DebugAreaLight_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	bool                                               bVisbledDebugLight;                                       // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	float                                              Radius;                                                   // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SpotLightColor;                                           // 0x0100(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                PointLightColor;                                          // 0x0110(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class US3AreaLightManagerComponent*                AreLightManager;                                          // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_DebugAreaLight.BPC_DebugAreaLight_C");
		return ptr;
	}


	void ReceiveTick(float DeltaSeconds);
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_BPC_DebugAreaLight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

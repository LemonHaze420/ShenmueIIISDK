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

// BlueprintGeneratedClass BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C
// 0x0014 (0x04A8 - 0x0494)
class ABP_TalkCameraShowItemZoomBase_C : public ABP_DefaultTalkCamera_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight;                                                // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TalkCameraShowItemZoomBase.BP_TalkCameraShowItemZoomBase_C");
		return ptr;
	}


	struct FVector GetLookTargetSocketLocation(const struct FName& InSocketName);
	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void STATIC_ExecuteUbergraph_BP_TalkCameraShowItemZoomBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

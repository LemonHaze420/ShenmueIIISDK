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

// BlueprintGeneratedClass BPC_AutoFocusing.BPC_AutoFocusing_C
// 0x0041 (0x0131 - 0x00F0)
class UBPC_AutoFocusing_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class ABP_DefaultTalkCamera_C*                     DefaultTalkCamera;                                        // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              FocusTargetActors;                                        // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              FocalRegionOffset;                                        // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FarBlurSize;                                              // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAutoFocus;                                            // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	float                                              NearBlurSize;                                             // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentFocalDistance;                                     // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnLerpStartFocalDistance;                                 // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lerpTime;                                                 // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _ElapseLerpTime;                                          // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isLerping;                                                // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_AutoFocusing.BPC_AutoFocusing_C");
		return ptr;
	}


	void GetDotedDistance(class AActor* Actor, class UbpS3CameraComp_C* Camera, float* Distance);
	void CullActors(class UbpS3CameraComp_C* Camera, TArray<class AActor*>* ActorList, TArray<class AActor*>* CulledActors);
	void GetNearestAndFarthestActor(class UbpS3CameraComp_C* Camera, TArray<class AActor*>* ActorList, class AActor** NearestActor, class AActor** FarthestActor);
	void ReceiveBeginPlay();
	void STATIC_ChangeTarget(TArray<class AActor*> NewTarget, float lerpTime);
	void STATIC_Update();
	void STATIC_ExecuteUbergraph_BPC_AutoFocusing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

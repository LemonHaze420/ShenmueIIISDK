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

// BlueprintGeneratedClass BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C
// 0x004C (0x092C - 0x08E0)
class ABP_MiniGame_SmartBallFillHoleBase_C : public ABP_MiniGame_TestNewSmartBallBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08E0(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Box_WallHitArea5;                                         // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box_1;                                                    // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box_BallFallAreaStopper;                                  // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MeshFallStopper;                                          // 0x0900(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SpawnBallPointFallArea;                                   // 0x0908(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_DownStopper_Value_1B94D3554C681EDE026E24AA428CDAA5;    // 0x0910(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_DownStopper__Direction_1B94D3554C681EDE026E24AA428CDAA5;// 0x0914(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0915(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_DownStopper;                                           // 0x0918(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     FallStopperBasePos;                                       // 0x0920(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_SmartBallFillHoleBase.BP_MiniGame_SmartBallFillHoleBase_C");
		return ptr;
	}


	void CreateDummyBalls(bool* bDummy);
	void GetMiniGameHelpName(struct FString* String);
	void SpawnBallFallArea();
	void ItemGetCheck(int* ItemCount);
	void CheckEnd(bool* End);
	void UserConstructionScript();
	void TL_DownStopper__FinishedFunc();
	void TL_DownStopper__UpdateFunc();
	void BndEvt__Box_BallFallAreaStopper_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_BallFallAreaStopper_K2Node_ComponentBoundEvent_43_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__Box_WallHitArea5_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_WallHitArea5_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void StartMiniGame();
	void DownStopper();
	void ReceiveBeginPlay();
	void SpawnAllBalls();
	void EndGame();
	void SetOverlapCollisionEnabled(bool Enabled);
	void ExecuteUbergraph_BP_MiniGame_SmartBallFillHoleBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

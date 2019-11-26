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

// BlueprintGeneratedClass BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C
// 0x005C (0x0384 - 0x0328)
class ABP_MiniGame_ThrowTargetBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           FreeModeBlockCollision;                                   // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh_Target;                                              // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene_Root;                                               // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     DefalutActorPosition;                                     // 0x0348(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGamePlaying;                                             // 0x0354(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	struct FRotator                                    DefalutActorRotation;                                     // 0x0358(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DefalutTargetPosition;                                    // 0x0364(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    DefalutTargetRotation;                                    // 0x0370(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsGolfHole;                                               // 0x037C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	int                                                SuccessCount;                                             // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_ThrowTargetBase.BP_MiniGame_ThrowTargetBase_C");
		return ptr;
	}


	void GetMiniGameValueType(TEnumAsByte<EN_ValueType>* Type);
	void EnabledMeshTarget();
	void AddSuccessCount();
	void IsGolfHoleType(bool* IsGolfHole);
	void IsStoped(bool* bStoped);
	void UserConstructionScript();
	void EnterMiniGame(float EnterTime);
	void FinalizeTalk();
	void StartMiniGame();
	void EndMiniGame();
	void WinMiniGame();
	void LoseMiniGame();
	void DrawMiniGame();
	void RestartMiniGame();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_MiniGame_ThrowTargetBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

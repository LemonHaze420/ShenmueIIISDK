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

// BlueprintGeneratedClass BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C
// 0x0048 (0x0370 - 0x0328)
class ABP_MiniGame_ThrowObjectBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Mesh_Throw;                                               // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bFirstTouch;                                              // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFirstTouchDispatcher;                                   // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStopedDispatcher;                                       // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bThrowingFlag;                                            // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGameCenter;                                              // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0362(0x0002) MISSED OFFSET
	struct FVector                                     AttachOffsetLocation;                                     // 0x0364(0x000C) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_ThrowObjectBase.BP_MiniGame_ThrowObjectBase_C");
		return ptr;
	}


	void GetMiniGameValueType(TEnumAsByte<EN_ValueType>* Type);
	void IsGameCenterMode(bool* bGameCenter);
	void SetGameCenterMode(bool bGolfType);
	void Throw();
	void IsStoped(bool* bStoped);
	void UserConstructionScript();
	void WinMiniGame();
	void LoseMiniGame();
	void DrawMiniGame();
	void EndMiniGame();
	void StartMiniGame();
	void FinalizeTalk();
	void RestartMiniGame();
	void ReceiveTick(float* DeltaSeconds);
	void EnterMiniGame(float EnterTime);
	void ExecuteUbergraph_BP_MiniGame_ThrowObjectBase(int EntryPoint);
	void OnStopedDispatcher__DelegateSignature(bool bResult, int Score, const struct FName& GiftName, bool IsSpecial, class USoundAtomCue* SuccessSound, bool IsGameCenter);
	void OnFirstTouchDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

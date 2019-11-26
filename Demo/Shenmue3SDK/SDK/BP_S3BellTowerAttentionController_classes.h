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

// BlueprintGeneratedClass BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C
// 0x0038 (0x05D8 - 0x05A0)
class ABP_S3BellTowerAttentionController_C : public ABP_S3AttentionController_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A0(0x0008) (Transient, DuplicateTransient)
	class UWBP_BellTowerPillarAttentionBigIcon_C*      BigIconWidget;                                            // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsCancelInvalidFlag;                                      // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsForceEventButtonScriptEnabledFlag;                      // 0x05B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x05B2(0x0006) MISSED OFFSET
	struct FString                                     ForceEventButtonScript;                                   // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnChangedTargetDispatcher_BellTower;                      // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3BellTowerAttentionController.BP_S3BellTowerAttentionController_C");
		return ptr;
	}


	bool IsDisableAttentionState();
	bool IsSubtitlePlaying();
	void SetForceEventButtonScript(const struct FString& InScript);
	void SetForceEventButtonScriptEnabled(bool Enabled);
	void SetCancelInvalid(bool Invalid);
	bool IsDetectActionEventEnabled();
	void FinishDispBigIcon();
	void StartDispBigIcon();
	void ChangeTarget();
	void InputAction(ES3ActionIconType* Type);
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void UserConstructionScript();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void SetSearchStateEnabled(bool* Enabled);
	void DecideDetectAction(ES3ActionIconType* Type);
	void ExecuteUbergraph_BP_S3BellTowerAttentionController(int EntryPoint);
	void OnChangedTargetDispatcher_BellTower__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

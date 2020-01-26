#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C
// 0x0055 (0x03B5 - 0x0360)
class ABP_S3ItemSpawnerController_C : public AS3ItemSpawnerManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ABP_S3ItemSpawner_C*>                 SpawnerList;                                              // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_S3ItemSpawner_C*                         CurrentSpawner;                                           // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3ItemSpawner_C*                         ActionSpawner;                                            // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              NEXT_TARGET_DIST;                                         // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	class ABP_SearchArea_C*                            SearchArea;                                               // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               NextTargetFlag;                                           // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	class ABP_S3ItemSpawner_C*                         NextTarget;                                               // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TARGET_CHANGE_DIST;                                       // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledTargetChange;                                     // 0x03B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3ItemSpawnerController.BP_S3ItemSpawnerController_C");
		return ptr;
	}


	int GetPriority();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void GetOwnSearchArea(class ABP_SearchArea_C** SearchArea);
	struct FVector GetActionSpawnerPos();
	void GetInputDirection(float V, float H, TEnumAsByte<ESearchAreaDirection>* Direction);
	void ForceFindSpawner(class ABP_S3ItemSpawner_C* Spawner);
	void GetActionSpawner(class ABP_S3ItemSpawner_C** ActionSpawner);
	void LockOnChange(float V, float H);
	void StartAction(bool ContinuationFlag);
	void CalcCameraTransform(class ABP_S3ItemSpawner_C* Target);
	void SetSearchStep(class US3SearchComponent* SearchComponent, bool bUseFadeEvent);
	void SetSearchComponent(class ABP_S3ItemSpawner_C* Target);
	void InitSearchArea();
	void NextTargetCheck(bool* Result, class ABP_S3ItemSpawner_C** NextTarget);
	void SwitchTarget(class ABP_S3ItemSpawner_C** NewTarget);
	void GetListSize(int* Size);
	void UserConstructionScript();
	void InpActEvt_SearchRightButton_K2Node_InputActionEvent_2(const struct FKey& Key);
	void GetItem(class US3SearchComponent* SearchComponent);
	void SearchEnd();
	void ReceiveBeginPlay();
	void DecideDetectAction(ES3ActionIconType Type);
	void Event_InputEnabled();
	void Event_DisableInputTransCamera();
	void InpAxisEvt_ZoomPanVertical_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_ZoomPanHorizontal_K2Node_InputAxisEvent_27(float AxisValue);
	void Event_FadeOnAction();
	void AddItemSpawner(class AS3ItemSpawner* ItemSpawner);
	void RemoveItemSpawner(class AS3ItemSpawner* ItemSpawner);
	void OnFinishFadeInOnUseFade();
	void ExecuteUbergraph_BP_S3ItemSpawnerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

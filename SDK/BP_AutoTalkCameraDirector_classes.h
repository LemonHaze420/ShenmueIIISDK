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

// BlueprintGeneratedClass BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C
// 0x009C (0x0424 - 0x0388)
class ABP_AutoTalkCameraDirector_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                CameraChangedCount;                                       // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurCutElapsedTime;                                        // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_TalkCameraManager_C*                     TalkCameraManager;                                        // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLookToPlayer;                                            // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	TArray<struct FST_AutoCameraSelectedResult>        SelectedCameras;                                          // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsSearching;                                              // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET
	struct FST_AutoCameraAnalizedInfo                  CurrentCameraInfo;                                        // 0x03C8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              NextCutChangeTime;                                        // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkipedTime;                                               // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FST_CutPriority>                     CameraPriorityData;                                       // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               isPrintDebug;                                             // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	float                                              LookToPlayerRate;                                         // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChangeCutInterval;                                        // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChangeCutRandomDeviation;                                 // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LookToPlayerMax;                                          // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LookToNPCMax;                                             // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_AutoTalkCameraSequence>             AutoTalkCameraSequence;                                   // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_AutoTalkCameraSequence>             prevTalkCameraSequence;                                   // 0x0419(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x041A(0x0002) MISSED OFFSET
	float                                              MultiCam_ChangeCutInterval;                               // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MultiCam_ChangeCutRandomDeviation;                        // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AutoTalkCameraDirector.BP_AutoTalkCameraDirector_C");
		return ptr;
	}


	void GetNextCutChangeTime(float* CutChangeTIme);
	void PrintCameraInfo(const struct FST_AutoCameraAnalizedInfo& CameraInfo);
	void SetCurrentCamera(const struct FST_AutoCameraAnalizedInfo& Info);
	void GetCurrentCamera(struct FST_AutoCameraAnalizedInfo* ret);
	void GetAllCamera(TArray<struct FST_AutoCameraAnalizedInfo>* AnalizedInfo, bool* Result);
	void CalcNextCameraCut();
	void IsSimilarToCurrentCamera(const struct FST_AutoCameraAnalizedInfo& CameraInfo, bool* Result);
	void WhetherToChangeCamera(const struct FName& LookTargetCharacterID, bool* Result);
	void GetSelectedCameras(bool* Result, TArray<struct FST_AutoCameraSelectedResult>* SelectedCameras);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnCameraChanged();
	void OnBeginTalkEvent();
	void OnEndTalkEvent();
	void OnSkipTalkTask(float SkipTaskDuration);
	void OnInputQuestDebugKey();
	void ExecuteUbergraph_BP_AutoTalkCameraDirector(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

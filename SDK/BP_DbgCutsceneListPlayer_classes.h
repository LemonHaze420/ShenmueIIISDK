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

// BlueprintGeneratedClass BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C
// 0x0068 (0x0390 - 0x0328)
class ABP_DbgCutsceneListPlayer_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FST_DbgCutscenePlayInfo>             PlayInfoList;                                             // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnStartCutscenePlayer;                                    // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    onCutsceneEnd;                                            // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FName                                       CurrentCutsceneID;                                        // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               TmpCurrentRequiredLoadLevelList;                          // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               TmpCurrentRequiredUnloadLevelList;                        // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DbgCutsceneListPlayer.BP_DbgCutsceneListPlayer_C");
		return ptr;
	}


	void TmpGetManualUnloadLevelList();
	void SetPlayInfoListFromDataTable(class UDataTable* InfoDataTable);
	void ExecuteCutsceneEndCommon();
	void StartCutscene(int Index);
	void GetPlayInfoNum(int* Num);
	void GetPlayInfo(int Index, bool* bFound, struct FST_DbgCutscenePlayInfo* ResultInfo);
	bool HasPlayInfo(const struct FString& CutsceneId, int* FoundIndex);
	void SetPlayInfoList(TArray<struct FST_DbgCutscenePlayInfo>* InfoList);
	void SetPlayInfo(const struct FST_DbgCutscenePlayInfo& Info);
	void UserConstructionScript();
	void TmpManualUnloadCutsceneLevel();
	void DebugOnStartCutscenePlayer();
	void DebugOnCutsceneEnd();
	void _BindDebugOnStartCutscenePlayer();
	void _BindDebugOnCutsceneEnd();
	void ExecuteUbergraph_BP_DbgCutsceneListPlayer(int EntryPoint);
	void OnCutsceneEnd__DelegateSignature(const struct FName& CutsceneId);
	void OnStartCutscenePlayer__DelegateSignature(const struct FName& CutsceneId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

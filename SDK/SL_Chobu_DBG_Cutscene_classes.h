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

// BlueprintGeneratedClass SL_Chobu_DBG_Cutscene.SL_Chobu_DBG_Cutscene_C
// 0x0020 (0x0350 - 0x0330)
class ASL_Chobu_DBG_Cutscene_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	struct FName                                       RemoteEventName;                                          // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FST_DbgCutscenePlayInfo>             DebugPlayInfoList;                                        // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SL_Chobu_DBG_Cutscene.SL_Chobu_DBG_Cutscene_C");
		return ptr;
	}


	void DebugOnStartCutscenePlayer(const struct FName& CutsceneId);
	void DebugOnCutsceneEnd(const struct FName& CutsceneId);
	void ReceiveBeginPlay();
	void InitDebugCutscene();
	void ExecuteUbergraph_SL_Chobu_DBG_Cutscene(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

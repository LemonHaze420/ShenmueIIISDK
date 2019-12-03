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

// BlueprintGeneratedClass SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C
// 0x0028 (0x0358 - 0x0330)
class ASL_Hakkason_DBG_Cutscene_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	struct FName                                       DebugPlayingCutsceneID;                                   // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RemoteEventName;                                          // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FST_DbgCutscenePlayInfo>             DebugPlayInfoList;                                        // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SL_Hakkason_DBG_Cutscene.SL_Hakkason_DBG_Cutscene_C");
		return ptr;
	}


	void DebugOnStartCutscenePlayer(const struct FName& CutsceneId);
	void DebugOnCutsceneEnd(const struct FName& CutsceneId);
	void Old_DebugPlayCutscene(const struct FName& CutsceneId);
	void Old_DebugOnStartCutscenePlayer();
	void Old_DebugOnCutsceneEnd();
	void ReceiveBeginPlay();
	void InitDebugCutscene();
	void DebugBeginM03_S0008v();
	void DebugBeginM03_S0035v();
	void DebugBeginM03_S0034v();
	void DebugBeginM03_S0019v();
	void DebugBeginM03_S0017v();
	void DebugBeginM03_S0016v();
	void DebugBeginM03_S0015v();
	void DebugBeginM03_S0013v();
	void DebugBeginM03_S0012v();
	void DebugBeginM03_S0010v();
	void DebugBeginM03_S0055();
	void DebugBeginM03_S0054();
	void DebugBeginM03_S0039();
	void DebugBegin_s0001_Mov();
	void DebugBegin_M03_S0044();
	void DebugBegin_M03_S0043();
	void DebugBeginM03_S0003();
	void DebugBeginM03_S0053();
	void DebugBeginM03_S0042();
	void DebugBeginM03_S0041_3();
	void DebugBeginM03_S0041();
	void DebugBeginCutscene_s9000();
	void DebugBeginM03_S0006();
	void STATIC_DebugBegin_M03_S0004();
	void DebugBegin_M03_S0001();
	void DebugBegin_M03_S0002();
	void DebugBegin_M03_S0040();
	void DebugBegin_M03_S0046();
	void DebugBegin_M03_S0052();
	void DebugBegin_M03_S0005();
	void STATIC_ExecuteUbergraph_SL_Hakkason_DBG_Cutscene(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

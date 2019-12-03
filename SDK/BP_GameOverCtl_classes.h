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

// BlueprintGeneratedClass BP_GameOverCtl.BP_GameOverCtl_C
// 0x0024 (0x034C - 0x0328)
class ABP_GameOverCtl_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Mode;                                                     // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SubMode;                                                  // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MD_GAMEOVER;                                              // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MD_WARNING;                                               // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FLAG_WARNING;                                             // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameOverCtl.BP_GameOverCtl_C");
		return ptr;
	}


	void CheckLimitDay(struct FName* Type);
	void STATIC_InitSet(bool* Make_Actor);
	void STATIC_UserConstructionScript();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_OnCutsceneEnd_M06_S9001();
	void STATIC_OnStartCutscenePlayer_M06_S9001();
	void STATIC_OnCutsceneEnd_M06_S9002();
	void STATIC_OnStartCutscenePlayer_M06_S9002();
	void STATIC_ExecuteUbergraph_BP_GameOverCtl(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

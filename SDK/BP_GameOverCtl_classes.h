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
	void InitSet(bool* Make_Actor);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void OnCutsceneEnd_M06_S9001();
	void OnStartCutscenePlayer_M06_S9001();
	void OnCutsceneEnd_M06_S9002();
	void OnStartCutscenePlayer_M06_S9002();
	void ExecuteUbergraph_BP_GameOverCtl(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

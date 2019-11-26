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

// BlueprintGeneratedClass BP_CCBattleProgramBase.BP_CCBattleProgramBase_C
// 0x0018 (0x0340 - 0x0328)
class ABP_CCBattleProgramBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_CCBattleEvents_C*                        EventDispatcher;                                          // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CCBattleProgramBase.BP_CCBattleProgramBase_C");
		return ptr;
	}


	void GetEventDispatcher(class UBP_CCBattleEvents_C** EventDispatcher);
	void StartRetry();
	void SetPlayerController(class APlayerController* PlayerController);
	void StartGame_SingleSet(const struct FST_CCBattle_Set& SET);
	void SetOutputTexture(class UTextureRenderTarget2D* Texture);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_CCBattleProgramBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

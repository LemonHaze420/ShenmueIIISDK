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

// BlueprintGeneratedClass BP_SB_HoleBase.BP_SB_HoleBase_C
// 0x0038 (0x0360 - 0x0328)
class ABP_SB_HoleBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bHoleIn;                                                  // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_MiniGameProcess>                     Process;                                                  // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x033A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHoleInDispatcher;                                       // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHasPassedDispatcher;                                    // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SB_HoleBase.BP_SB_HoleBase_C");
		return ptr;
	}


	void GetMiniGameValueType(TEnumAsByte<EN_ValueType>* Type);
	void UserConstructionScript();
	void StartMiniGame();
	void EndMiniGame();
	void WinMiniGame();
	void LoseMiniGame();
	void DrawMiniGame();
	void RestartMiniGame();
	void EnterMiniGame(float EnterTime);
	void FinalizeTalk();
	void DeleteHoleInBall();
	void ExecuteUbergraph_BP_SB_HoleBase(int EntryPoint);
	void OnHasPassedDispatcher__DelegateSignature();
	void OnHoleInDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

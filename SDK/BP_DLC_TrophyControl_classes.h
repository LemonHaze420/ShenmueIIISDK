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

// BlueprintGeneratedClass BP_DLC_TrophyControl.BP_DLC_TrophyControl_C
// 0x0080 (0x03A8 - 0x0328)
class ABP_DLC_TrophyControl_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<int, struct FST_DLC_CheckTrophyData>          CheckTable;                                               // 0x0340(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FST_DLC_CheckTrophyData                     CurrentTable;                                             // 0x0390(0x0014) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                CurrentFlag;                                              // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DLC_TrophyControl.BP_DLC_TrophyControl_C");
		return ptr;
	}


	void CheckCurrentFlag(bool* Enable);
	void UserConstructionScript();
	void EvtFlagChange(int ArrayIndex, int SetFlags);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_DLC_TrophyControl(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

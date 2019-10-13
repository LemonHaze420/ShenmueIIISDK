#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerMotionDatabase.PlayerMotionDatabase_C
// 0x0080 (0x03A8 - 0x0328)
class APlayerMotionDatabase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FST_PC_LabelledMontage>              MotionList_Event;                                         // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        MontageList_Turns;                                        // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_PC_DoorOpenMontages>             MontageList_DoorOpen;                                     // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        MontageList_WalkStop;                                     // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        MontageList_TalkShow;                                     // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        MontageList_OpenDoor;                                     // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        MontageList_KnockDoor;                                    // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerMotionDatabase.PlayerMotionDatabase_C");
		return ptr;
	}


	void IndexMontageByInt(TArray<class UAnimMontage*> List, int Int, class UAnimMontage** Output);
	void SearchMontage_Event(TEnumAsByte<EN_PC_EventMontage> Event, class UAnimMontage** Output);
	void SearchMontage_KnockDoor(TEnumAsByte<EN_DoorOpenType> Enum, class UAnimMontage** Output);
	void SearchMontage_OpenDoor(TEnumAsByte<EN_DoorOpenType> Enum, bool RightSide, class UAnimMontage** Output);
	void SearchMontage_TalkShow(TEnumAsByte<EN_SHOW_ID> Item, bool Crouch, class UAnimMontage** Output);
	void SearchMontage_WalkEnd(bool Right, class UAnimMontage** Output);
	void IndexMontageByEnum(TArray<class UAnimMontage*> List, unsigned char Enum, class UAnimMontage** Output);
	void SearchMontage_Turn(TEnumAsByte<EN_PC_TurnDirection10> TurnDir10, class UAnimMontage** Output);
	void Initialize();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PlayerMotionDatabase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

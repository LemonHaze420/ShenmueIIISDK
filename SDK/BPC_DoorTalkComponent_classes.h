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

// BlueprintGeneratedClass BPC_DoorTalkComponent.BPC_DoorTalkComponent_C
// 0x001B (0x02D0 - 0x02B5)
class UBPC_DoorTalkComponent_C : public UBPC_S3_TalkComponent_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x02B5(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B8(0x0008) (Transient, DuplicateTransient)
	class ABP_Gimmick_OpenDoor_Template_C*             owner_Door_;                                              // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      DebugActor;                                               // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_DoorTalkComponent.BPC_DoorTalkComponent_C");
		return ptr;
	}


	void getActionType(bool Sight, TArray<struct FS3DetectActionParam>* Params);
	void ReceiveBeginPlay();
	void RunDoorTalk();
	void FinishDoorTalk();
	void CustomEvent_2(int Index);
	void ExecuteUbergraph_BPC_DoorTalkComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

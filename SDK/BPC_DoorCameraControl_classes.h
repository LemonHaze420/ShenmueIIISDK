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

// BlueprintGeneratedClass BPC_DoorCameraControl.BPC_DoorCameraControl_C
// 0x0028 (0x0118 - 0x00F0)
class UBPC_DoorCameraControl_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class ABP_Gimmick_OpenDoor_Template_C*             InteractingDoor;                                          // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3Character_C*                           PlayerCharacter;                                          // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInteracting;                                             // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	float                                              DoorAlign;                                                // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Length_Approach;                                          // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Length_Interact;                                          // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_DoorCameraControl.BPC_DoorCameraControl_C");
		return ptr;
	}


	float STATIC_CalculateLengthOverrideAlpha();
	void SetCharacter(class ABP_S3Character_C* PlayerCharacter);
	void CalculateSpringArmLength(float* Length, float* Alpha);
	void STATIC_RegisterDoor(class AS3GimmickOpenDoor* Door);
	void STATIC_StartDoorInteract(class ABP_Gimmick_OpenDoor_Template_C* Door);
	void STATIC_OnDoorEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void STATIC_OnDoorAnimFinish();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_StartInteraction();
	void STATIC_EndInteraction();
	void STATIC_ExecuteUbergraph_BPC_DoorCameraControl(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

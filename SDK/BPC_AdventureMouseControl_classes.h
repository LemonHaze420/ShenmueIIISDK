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

// BlueprintGeneratedClass BPC_AdventureMouseControl.BPC_AdventureMouseControl_C
// 0x0019 (0x0109 - 0x00F0)
class UBPC_AdventureMouseControl_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class UBPW_AdventureCursorWindow_C*                Widget;                                                   // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AS3PlayerController*                         PlayerController;                                         // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               InputEnabled;                                             // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_AdventureMouseControl.BPC_AdventureMouseControl_C");
		return ptr;
	}


	void IsInputEnabled(bool* InputEnabled);
	void STATIC_TickSoftwareCursor(struct FVector2D* MoveAxii, bool* JoystickOn);
	void EnableVirtualJoystick(bool bEnable);
	void STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void STATIC_ReceiveBeginPlay();
	void ExecuteUbergraph_BPC_AdventureMouseControl(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

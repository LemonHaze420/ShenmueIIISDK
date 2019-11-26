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

// BlueprintGeneratedClass BP_PlayerInputBufferComponent.BP_PlayerInputBufferComponent_C
// 0x0050 (0x0180 - 0x0130)
class UBP_PlayerInputBufferComponent_C : public US3InputBufferComponent
{
public:
	struct FScriptMulticastDelegate                    OnJumpAction;                                             // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTargetSelectAction;                                     // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FName                                       JumpID;                                                   // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TargetSwitchID;                                           // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EN_PC_State>>                   JumpRecordStates;                                         // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EN_PC_State>>                   TargetSwitchRecordStates;                                 // 0x0170(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerInputBufferComponent.BP_PlayerInputBufferComponent_C");
		return ptr;
	}


	void DetermineState_TargetSwitch(TEnumAsByte<EN_PC_State> State, unsigned char SubState, TEnumAsByte<EN_PC_InputRecord>* Action);
	void DetermineState_Jump(TEnumAsByte<EN_PC_State> State, unsigned char SubState, TEnumAsByte<EN_PC_InputRecord>* Action);
	void Update(TEnumAsByte<EN_PC_State> InPCState, unsigned char INPCSubState);
	void OnTargetSelectAction__DelegateSignature();
	void OnJumpAction__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_MiniGame_UDY_Input.BP_MiniGame_UDY_Input_C
// 0x000F (0x0351 - 0x0342)
class ABP_MiniGame_UDY_Input_C : public ABP_MiniGameInputBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)
	TEnumAsByte<EMiniGameKFTypeEnum>                   InputCommand;                                             // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_UDY_Input.BP_MiniGame_UDY_Input_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_2(const struct FKey& Key);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_MiniGame_UDY_Input(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_Gacha_Input.BP_Gacha_Input_C
// 0x000F (0x0351 - 0x0342)
class ABP_Gacha_Input_C : public ABP_MiniGameInputBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)
	bool                                               bBindingActionButton;                                     // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Gacha_Input.BP_Gacha_Input_C");
		return ptr;
	}


	void UserConstructionScript();
	void StartMiniGame();
	void EndMiniGame();
	void ExecuteUbergraph_BP_Gacha_Input(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

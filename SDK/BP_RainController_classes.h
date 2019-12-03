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

// BlueprintGeneratedClass BP_RainController.BP_RainController_C
// 0x0018 (0x403D8 - 0x403C0)
class ABP_RainController_C : public AS3RainManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x403C0(0x0008) (Transient, DuplicateTransient)
	bool                                               DebugRainDisplay;                                         // 0x403C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x403C9(0x0003) MISSED OFFSET
	float                                              RainOpacityMultiplier;                                    // 0x403CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideRainOpacity;                                      // 0x403D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x403D1(0x0003) MISSED OFFSET
	float                                              OpacityInternal;                                          // 0x403D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RainController.BP_RainController_C");
		return ptr;
	}


	void STATIC_ToggleDebugDisplay();
	void GetMaterialParams(struct FS3RainParam* RainParam);
	void STATIC_ResetMaterialParams();
	void STATIC_SetMaterialParams(float Strength1, float Strength2, float Strength3, float Speed, float OpacityMultiplier);
	void STATIC_UserConstructionScript();
	void STATIC_InpActEvt_Ctrl_R_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void ReceiveBeginPlay();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void ToggleDisplay();
	void STATIC_ExecuteUbergraph_BP_RainController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

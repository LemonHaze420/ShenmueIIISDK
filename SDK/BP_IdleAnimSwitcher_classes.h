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

// BlueprintGeneratedClass BP_IdleAnimSwitcher.BP_IdleAnimSwitcher_C
// 0x001C (0x0044 - 0x0028)
class UBP_IdleAnimSwitcher_C : public UObject
{
public:
	float                                              IdleTime;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NextIdleChange;                                           // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumIdleVariations;                                        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinChangeTime;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxChangeTime;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FirstMinChangeTime;                                       // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FirstMaxChangeTime;                                       // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_IdleAnimSwitcher.BP_IdleAnimSwitcher_C");
		return ptr;
	}


	void EndIdle(int* IdleVariation);
	void UpdateIdle(float DeltaSeconds, int* IdleVariation);
	void STATIC_StartIdle(int* IdleVariation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

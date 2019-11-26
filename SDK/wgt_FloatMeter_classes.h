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

// WidgetBlueprintGeneratedClass wgt_FloatMeter.wgt_FloatMeter_C
// 0x0008 (0x0228 - 0x0220)
class Uwgt_FloatMeter_C : public US3UserWidget
{
public:
	float                                              FillRatio;                                                // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScaleRatio;                                               // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass wgt_FloatMeter.wgt_FloatMeter_C");
		return ptr;
	}


	void SetScaleRatio(float ScaleRatio, bool* Changed);
	void SetFillRatio(float FillRatio, bool* Changed);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass wgt_SimpleWrapperMeter.wgt_SimpleWrapperMeter_C
// 0x0008 (0x0230 - 0x0228)
class Uwgt_SimpleWrapperMeter_C : public Uwgt_FloatMeter_C
{
public:
	class Uwgt_FloatMeter_C*                           ChildWidget;                                              // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass wgt_SimpleWrapperMeter.wgt_SimpleWrapperMeter_C");
		return ptr;
	}


	void SetFillRatio(float FillRatio, bool* Changed);
	void SetScaleRatio(float ScaleRatio, bool* Changed);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

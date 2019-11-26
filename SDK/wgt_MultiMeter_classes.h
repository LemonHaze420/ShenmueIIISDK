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

// WidgetBlueprintGeneratedClass wgt_MultiMeter.wgt_MultiMeter_C
// 0x0040 (0x0268 - 0x0228)
class Uwgt_MultiMeter_C : public Uwgt_FloatMeter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (Transient, DuplicateTransient)
	TArray<class Uwgt_FloatMeter_C*>                   Orbs;                                                     // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      OrbCapacityThresholds;                                    // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ScaleOneMeters;                                           // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UseMeters;                                                // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NotEmptyMeters;                                           // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UseMetersFloat;                                           // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinMeters;                                                // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LastPartialIndex;                                         // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass wgt_MultiMeter.wgt_MultiMeter_C");
		return ptr;
	}


	float CalcMeterRatio(float Min, float Max);
	float GetMaxDisplayableRatio(float A);
	void GetOrbTresholds(int Index, float* Min, float* Max);
	void UpdateSubScaleRatios();
	void UpdateSubFillRatios();
	void SetFillRatio(float FillRatio, bool* Changed);
	void SetScaleRatio(float ScaleRatio, bool* Changed);
	void FindChildOrbs(class UPanelWidget* InputPin, bool Reverse);
	void Construct();
	void ExecuteUbergraph_wgt_MultiMeter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
